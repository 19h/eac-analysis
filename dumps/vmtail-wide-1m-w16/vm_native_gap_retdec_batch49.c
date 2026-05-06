/*
 * Targeted RetDec C for native executable gap queue batch 49.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x48cfa2-0x48d032 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4ad200-0x4ad290 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c1770-0x4c1800 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4ef140-0x4ef1d0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x210e7-0x21176 rank=- name=- kind=- bytes=- uncovered=-
 *   0x249e6-0x24a75 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4f9c0-0x4fa4f rank=- name=- kind=- bytes=- uncovered=-
 *   0x56510-0x5659f rank=- name=- kind=- bytes=- uncovered=-
 *   0x565a0-0x5662f rank=- name=- kind=- bytes=- uncovered=-
 *   0x56630-0x566bf rank=- name=- kind=- bytes=- uncovered=-
 *   0x566c0-0x5674f rank=- name=- kind=- bytes=- uncovered=-
 *   0x69256-0x692e5 rank=- name=- kind=- bytes=- uncovered=-
 *   0x497140-0x4971cf rank=- name=- kind=- bytes=- uncovered=-
 *   0x579960-0x5799ef rank=- name=- kind=- bytes=- uncovered=-
 *   0x504a30-0x504abe rank=- name=- kind=- bytes=- uncovered=-
 *   0x504c60-0x504cee rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_210e7(void);
int64_t function_249e6(int64_t a1, int64_t a2);
int64_t function_2508e();
int64_t function_2509a();
int64_t function_25442();
int64_t function_48cfa2(int64_t a1, int64_t a2, int64_t a3);
int64_t function_48ec68();
int64_t function_490604();
int64_t function_497140(int64_t a1, int64_t str);
int64_t function_4ad200(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4afe70();
int64_t function_4c1770(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4eeb50();
int64_t function_4ef000();
int64_t function_4ef140(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4f1760();
int64_t function_4f9c0(int64_t a1, int64_t a2);
int64_t function_502870();
int64_t function_504a30(int64_t a1);
int64_t function_504c60(int64_t a1);
int64_t function_54cf10();
int64_t function_564e2();
int64_t function_56510(int64_t a1, int64_t a2);
int64_t function_565a0(int64_t a1, int64_t a2);
int64_t function_566180();
int64_t function_56630(int64_t a1, int64_t a2);
int64_t function_566c0(int64_t a1, int64_t a2);
int64_t function_56750();
int64_t function_56788();
int64_t function_579960(int64_t a1, int64_t a2, int64_t a3);
int64_t function_69166();
int64_t function_69256(int64_t a1, int64_t a2, int64_t a3);
int64_t function_6a73c();
int64_t function_729b6();
int64_t function_729ce();

// Address range: 0x210e7 - 0x21176
int64_t function_210e7(void) {
    // 0x210e7
    g17 = (int64_t)&g18;
    __cxa_atexit((void (*)(int64_t *))0x2508e, &g17, (int64_t *)0x849800);
    g16 = (int64_t)&g18;
    __cxa_atexit((void (*)(int64_t *))0x2508e, &g16, &g13);
    g15 = (int64_t)&g18;
    __cxa_atexit((void (*)(int64_t *))0x2508e, &g15, &g13);
    g14 = (int64_t)&g18;
    return __cxa_atexit((void (*)(int64_t *))0x2508e, &g14, &g13);
}

// Address range: 0x249e6 - 0x24a75
int64_t function_249e6(int64_t a1, int64_t a2) {
    int64_t v1 = a1 + (int64_t)L"L\""; // 0x249ef
    int64_t v2 = 0x100000000 * a2 >> 32; // bp-60, 0x24a01
    int64_t v3 = __readfsqword(40); // 0x24a14
    int64_t v4; // bp-56, 0x249e6
    function_729b6((int64_t)&v4, a1 + (int64_t)&g1);
    char v5 = *(char *)function_25442(v1, (int32_t *)&v2); // 0x24a34
    int64_t v6 = 0; // 0x24a37
    if (v5 == 0) {
        // 0x24a39
        *(char *)function_25442(v1, (int32_t *)&v2) = 1;
        v6 = 1;
    }
    int64_t result = function_729ce(&v4) & -256 | v6; // 0x24a63
    if (v3 != __readfsqword(40)) {
        // 0x24a65
        __stack_chk_fail();
        result = (int64_t)&g19;
    }
    // 0x24a6a
    return result;
}

// Address range: 0x4f9c0 - 0x4fa4f
int64_t function_4f9c0(int64_t a1, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x4f9cc
    int16_t v2 = a2; // 0x4f9dc
    int64_t v3 = 0; // 0x4f9df
    int64_t v4; // bp-56, 0x4f9c0
    if (v2 == 0) {
        goto lab_0x4fa2c;
    } else {
        // 0x4f9e1
        function_729b6((int64_t)&v4, a1 + 56);
        int64_t v5 = a1 + 16; // 0x4f9f6
        v5 = *(int64_t *)v5;
        v3 = 0;
        while (v5 != 0) {
            int64_t v6 = *(int64_t *)(v5 + 16); // 0x4fa00
            if (*(int16_t *)(v6 + 24) == v2) {
                // 0x4fa0b
                v3 = 0;
                if (*(char *)(v6 + 152) != 0) {
                    goto lab_0x4fa24;
                } else {
                    int64_t * v7 = (int64_t *)(v6 + 144); // 0x4fa14
                    *v7 = *v7 + 1;
                    v3 = v6;
                    goto lab_0x4fa24;
                }
            }
            v5 = *(int64_t *)v5;
            v3 = 0;
        }
        goto lab_0x4fa24;
    }
  lab_0x4fa2c:;
    int64_t result = v3; // 0x4fa3d
    if (v1 != __readfsqword(40)) {
        // 0x4fa3f
        __stack_chk_fail();
        result = (int64_t)&g19;
    }
    // 0x4fa44
    return result;
  lab_0x4fa24:
    // 0x4fa24
    function_729ce(&v4);
    goto lab_0x4fa2c;
}

// Address range: 0x56510 - 0x5659f
int64_t function_56510(int64_t a1, int64_t a2) {
    int64_t v1 = a1 + 8; // 0x5651c
    int64_t v2 = __readfsqword(40); // 0x56528
    *(int64_t *)a1 = (int64_t)&g3;
    int64_t v3; // bp-56, 0x56510
    function_56788(&v3);
    function_48ec68(v1, &v3);
    function_56750(&v3);
    *(int64_t *)(a1 + 16) = (int64_t)&v3;
    *(int64_t *)(a1 + 24) = function_564e2(v1);
    *(char *)(a1 + 32) = 0;
    int64_t result = 0; // 0x5658d
    if (v2 != __readfsqword(40)) {
        // 0x5658f
        __stack_chk_fail();
        result = (int64_t)&g19;
    }
    // 0x56594
    return result;
}

// Address range: 0x565a0 - 0x5662f
int64_t function_565a0(int64_t a1, int64_t a2) {
    int64_t v1 = a1 + 8; // 0x565ac
    int64_t v2 = __readfsqword(40); // 0x565b8
    *(int64_t *)a1 = (int64_t)&g3;
    int64_t v3; // bp-56, 0x565a0
    function_56788(&v3);
    function_48ec68(v1, &v3);
    function_56750(&v3);
    *(int64_t *)(a1 + 16) = (int64_t)&v3;
    *(int64_t *)(a1 + 24) = function_564e2(v1);
    *(char *)(a1 + 32) = 0;
    int64_t result = 0; // 0x5661d
    if (v2 != __readfsqword(40)) {
        // 0x5661f
        __stack_chk_fail();
        result = (int64_t)&g19;
    }
    // 0x56624
    return result;
}

// Address range: 0x56630 - 0x566bf
int64_t function_56630(int64_t a1, int64_t a2) {
    int64_t v1 = a1 + 8; // 0x5663c
    int64_t v2 = __readfsqword(40); // 0x56648
    *(int64_t *)a1 = (int64_t)&g3;
    int64_t v3; // bp-56, 0x56630
    function_56788(&v3);
    function_48ec68(v1, &v3);
    function_56750(&v3);
    *(int64_t *)(a1 + 16) = (int64_t)&v3;
    *(int64_t *)(a1 + 24) = function_564e2(v1);
    *(char *)(a1 + 32) = 0;
    int64_t result = 0; // 0x566ad
    if (v2 != __readfsqword(40)) {
        // 0x566af
        __stack_chk_fail();
        result = (int64_t)&g19;
    }
    // 0x566b4
    return result;
}

// Address range: 0x566c0 - 0x5674f
int64_t function_566c0(int64_t a1, int64_t a2) {
    int64_t v1 = a1 + 8; // 0x566cc
    int64_t v2 = __readfsqword(40); // 0x566d8
    *(int64_t *)a1 = (int64_t)&g3;
    int64_t v3; // bp-56, 0x566c0
    function_56788(&v3);
    function_48ec68(v1, &v3);
    function_56750(&v3);
    *(int64_t *)(a1 + 16) = (int64_t)&v3;
    *(int64_t *)(a1 + 24) = function_564e2(v1);
    *(char *)(a1 + 32) = 0;
    int64_t result = 0; // 0x5673d
    if (v2 != __readfsqword(40)) {
        // 0x5673f
        __stack_chk_fail();
        result = (int64_t)&g19;
    }
    // 0x56744
    return result;
}

// Address range: 0x69256 - 0x692e5
int64_t function_69256(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x6926d
    int64_t v2; // bp-40, 0x69256
    function_2509a((int64_t)&v2, a3);
    function_490604(&v2);
    int64_t v3 = function_6a73c(a2 + 96, &v2); // 0x69295
    if (v3 == a2 + 104) {
        // 0x692ad
        function_69166(a1, &g2);
    } else {
        // 0x6929f
        function_2509a(a1, v3 + 40);
    }
    // 0x692bc
    function_2508e(&v2);
    int64_t result = a1; // 0x692d5
    if (v1 != __readfsqword(40)) {
        // 0x692d7
        __stack_chk_fail();
        result = (int64_t)&g19;
    }
    // 0x692dc
    return result;
}

// Address range: 0x48cfa2 - 0x48d032
int64_t function_48cfa2(int64_t a1, int64_t a2, int64_t a3) {
    // 0x48cfa2
    int128_t v1; // 0x48cfa2
    int128_t v2 = v1;
    int128_t v3 = __asm_xorps(v2, v2); // 0x48cfa2
    int64_t v4 = __readfsqword(40); // 0x48cfa9
    __asm_movups(v1, v3);
    int64_t v5 = 0; // 0x48cfc3
    if (a1 != 0) {
        int64_t v6 = 0; // 0x48cfa2
        int64_t v7 = a1; // 0x48cfa2
        while (true) {
            // 0x48cfd2
            int64_t v8; // bp-40, 0x48cfa2
            int32_t * v9 = (int32_t *)((int64_t)&v8 + 8 + 4 * v6);
            char v10 = *(char *)v7; // 0x48cfd2
            if (v10 == 0) {
                // break (via goto) -> 0x48cffb
                goto lab_0x48cffb;
            }
            int64_t v11 = v7 + 1; // 0x48cfc9
            while (v10 != 46) {
                // 0x48cfdb
                v5 = 0;
                if (v10 >= 58) {
                    goto lab_0x48d018_2;
                }
                uint32_t v12 = (int32_t)v10 - 48 + 10 * *v9; // 0x48cfea
                *v9 = v12;
                v5 = 0;
                if (v12 >= 256) {
                    goto lab_0x48d018_2;
                }
                v10 = *(char *)v11;
                if (v10 == 0) {
                    // break (via goto) -> 0x48cffb
                    goto lab_0x48cffb;
                }
                // 0x48cfc9
                v11++;
            }
            // 0x48cfd0
            v6 = v6 + 1 & 0xffffffff;
            v7 = v11;
        }
      lab_0x48cffb:;
        // 0x48cffb
        int32_t v13; // 0x48cfa2
        v5 = 0x10000 * v13 + 256 * v13 + 0x1000000 * v13 + (int32_t)v1;
    }
  lab_0x48d018_2:;
    int64_t result = v5; // 0x48d026
    if (v4 != __readfsqword(40)) {
        // 0x48d028
        __stack_chk_fail();
        result = (int64_t)&g19;
    }
    // 0x48d02d
    return result;
}

// Address range: 0x497140 - 0x4971cf
int64_t function_497140(int64_t a1, int64_t str) {
    int64_t result; // 0x497140
    if (str == 0) {
        // 0x4971ae
        return result;
    }
    int32_t len = strlen((char *)str); // 0x497161
    if (len >= 256) {
        // 0x4971ae
        return 0xffff8f00;
    }
    int64_t * mem = calloc(1, len + 1); // 0x497180
    int64_t * v1 = (int64_t *)(a1 + 368); // 0x497188
    *v1 = (int64_t)mem;
    result = 0xffff8100;
    if (mem != NULL) {
        // 0x497192
        memcpy(mem, (int64_t *)str, len);
        *(char *)(*v1 + (int64_t)len) = 0;
        result = 0;
    }
    // 0x4971ae
    return result;
}

// Address range: 0x4ad200 - 0x4ad28c
int64_t function_4ad200(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4ad200
    if (a1 == a2) {
        // 0x4ad239
        return 0;
    }
    // 0x4ad223
    *(int32_t *)a3 = (int32_t)a1 % 256;
    int64_t result = function_4afe70(); // 0x4ad230
    if ((int32_t)result != 0) {
        // 0x4ad239
        return result;
    }
    // 0x4ad250
    *(int64_t *)(a3 + 16) = a1;
    int64_t v1 = function_4afe70(); // 0x4ad26e
    int64_t result2 = v1; // 0x4ad275
    if ((int32_t)v1 == 0) {
        // 0x4ad277
        int64_t v2; // 0x4ad200
        result2 = *(int64_t *)(a3 + 8) != v2 ? 0xffffda9a : v1 & 0xffffffff;
    }
    // 0x4ad239
    return result2;
}

// Address range: 0x4c1770 - 0x4c17ff
int64_t function_4c1770(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4c1770
    if (a1 == 0 || a2 == 0) {
        // 0x4c17b5
        return 0xffffaf00;
    }
    // 0x4c1798
    int64_t v1; // 0x4c1770
    if (v1 == 0) {
        // 0x4c17b5
        return 0;
    }
    if ((int32_t)a3 != 0) {
        int64_t * mem = calloc(2, *(int32_t *)(a2 + 20)); // 0x4c17d9
        *(int64_t *)(a1 + 16) = (int64_t)mem;
        if (mem == NULL) {
            // 0x4c17b5
            return 0xffffae80;
        }
    }
    // 0x4c17af
    *(int64_t *)a1 = a2;
    // 0x4c17b5
    return 0;
}

// Address range: 0x4ef140 - 0x4ef1cf
int64_t function_4ef140(int64_t a1, int64_t a2, int64_t a3) {
    unsigned char v1 = *(char *)(a1 + 40); // 0x4ef147
    __readfsqword(40);
    int64_t result; // 0x4ef140
    if (v1 == -1) {
        // 0x4ef17b
        function_4ef000();
        __readfsqword(40);
        return result;
    }
    unsigned char result2 = v1 % 8;
    if (result2 == 2) {
        // 0x4ef17b
        function_4ef000();
        __readfsqword(40);
        return result;
    }
    if (result2 < 3 || result2 != 3) {
        // 0x4ef1c0
        return result2;
    }
    // 0x4ef17b
    function_4ef000();
    __readfsqword(40);
    return result;
}

// Address range: 0x504a30 - 0x504abe
// From class:    std::basic_ios<char, std::char_traits<char> >
// Type:          constructor
int64_t function_504a30(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 - 24) + a1; // 0x504a3f
    int64_t v2 = v1 + 256; // 0x504a4a
    int64_t * v3 = (int64_t *)v2; // 0x504a4a
    *v3 = (int64_t)&g8;
    int64_t v4 = v1 + 16; // 0x504a58
    int64_t * v5 = (int64_t *)v1; // 0x504a5c
    *v5 = (int64_t)&g7;
    int64_t * v6 = (int64_t *)v4; // 0x504a63
    *v6 = (int64_t)&g5;
    function_502870(v4);
    function_4f1760(v1 + 120);
    *v6 = (int64_t)&g12;
    function_566180(v1 + 72);
    *(int64_t *)(v1 + 8) = 0;
    *v5 = (int64_t)&g6;
    *v3 = (int64_t)&g4;
    return function_54cf10(v2);
}

// Address range: 0x504c60 - 0x504cee
// From class:    std::basic_ios<char, std::char_traits<char> >
// Type:          constructor
int64_t function_504c60(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 - 24) + a1; // 0x504c6f
    int64_t v2 = v1 + 248; // 0x504c7a
    int64_t * v3 = (int64_t *)v2; // 0x504c7a
    *v3 = (int64_t)&g11;
    int64_t v4 = v1 + 8; // 0x504c88
    int64_t * v5 = (int64_t *)v1; // 0x504c8c
    *v5 = (int64_t)&g10;
    int64_t * v6 = (int64_t *)v4; // 0x504c93
    *v6 = (int64_t)&g5;
    function_502870(v4);
    function_4f1760(v1 + 112);
    *v6 = (int64_t)&g12;
    function_566180(v1 + 64);
    *v5 = (int64_t)&g9;
    *v3 = (int64_t)&g4;
    function_54cf10(v2);
    return function_4eeb50(v1);
}

// Address range: 0x579960 - 0x5799ec
int64_t function_579960(int64_t a1, int64_t a2, int64_t a3) {
    if (a3 == 0) {
        // 0x5799f0
        int64_t result; // 0x579960
        return result;
    }
    int64_t * v1 = (int64_t *)(a1 + 256); // 0x57997d
    int64_t * v2 = (int64_t *)(a1 + 320);
    int64_t v3 = a2; // 0x579984
    int64_t v4 = *v1;
    char v5 = *(char *)v3; // 0x5799dc
    int64_t v6; // 0x579960
    int64_t v7; // 0x579960
    if (v4 == 255) {
        // 0x579990
        *(char *)(a1 + 255) = 0;
        *v2 = *v2 + 1;
        v6 = 1;
        v7 = 0;
    } else {
        // 0x5799e3
        v6 = v4 + 1;
        v7 = v4;
    }
    int64_t result2 = v6;
    v3++;
    *v1 = result2;
    *(char *)(v7 + a1) = v5;
    *(char *)(a1 + 264) = v5;
    while (v3 != a3 + a2) {
        // 0x5799d6
        v4 = result2;
        v5 = *(char *)v3;
        if (v4 == 255) {
            // 0x579990
            *(char *)(a1 + 255) = 0;
            *v2 = *v2 + 1;
            v6 = 1;
            v7 = 0;
        } else {
            // 0x5799e3
            v6 = v4 + 1;
            v7 = v4;
        }
        // 0x5799bb
        result2 = v6;
        v3++;
        *v1 = result2;
        *(char *)(v7 + a1) = v5;
        *(char *)(a1 + 264) = v5;
    }
    // 0x5799f0
    return result2;
}
