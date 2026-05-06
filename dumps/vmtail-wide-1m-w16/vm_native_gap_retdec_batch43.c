/*
 * Targeted RetDec C for native executable gap queue batch 43.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x5677a0-0x567842 rank=- name=- kind=- bytes=- uncovered=-
 *   0x36990-0x36a31 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5f0f4-0x5f195 rank=- name=- kind=- bytes=- uncovered=-
 *   0x567d40-0x567de1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5724e0-0x572581 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3de87-0x3df27 rank=- name=- kind=- bytes=- uncovered=-
 *   0x46d75-0x46e15 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4aec20-0x4aed0d rank=- name=- kind=- bytes=- uncovered=-
 *   0x4bbf40-0x4bbfe0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x50b730-0x50b7d0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x54c500-0x54c5a0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x54c5e0-0x54c680 rank=- name=- kind=- bytes=- uncovered=-
 *   0x54e800-0x54e8a0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x54faa0-0x54fb40 rank=- name=- kind=- bytes=- uncovered=-
 *   0x555410-0x5554b0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2a5d3-0x2a672 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_1ff50();
int64_t function_20110();
int64_t function_20550();
int64_t function_20730();
int64_t function_2508e();
int64_t function_25194();
int64_t function_2a56d();
int64_t function_2a5d3(int64_t a1, int64_t a2, int64_t a3);
int64_t function_36990(int64_t a1, int64_t str2, uint64_t result, uint64_t n2);
int64_t function_3de87(int64_t a1);
int64_t function_46521();
int64_t function_46d75(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_4ae220();
int64_t function_4ae720();
int64_t function_4aec20(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4aeccf(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4aecea(int64_t a1);
int64_t function_4af830();
int64_t function_4af870();
int64_t function_4b0df0();
int64_t function_4b0f10();
int64_t function_4b1590();
int64_t function_4b1680();
int64_t function_4bbf40(int64_t a1, int64_t a2);
int64_t function_4eeb50();
int64_t function_50b730(int64_t a1);
int64_t function_5423f0();
int64_t function_549a50();
int64_t function_54c500(int64_t result2, int64_t a2, int64_t a3);
int64_t function_54c5e0(int64_t result2, int64_t a2, int64_t a3);
int64_t function_54c6d0();
int64_t function_54dd60();
int64_t function_54e5f0();
int64_t function_54e800(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_54faa0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_555410(int64_t a1);
int64_t function_566390();
int64_t function_5677a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_567d40(void);
int64_t function_5724e0(int64_t a1, int64_t a2);
int64_t function_5c710();
int64_t function_5efd2();
int64_t function_5f0f4(int64_t a1);
int64_t function_5f202();
int64_t function_5f302();
int64_t function_61792();

// Address range: 0x2a5d3 - 0x2a672
int64_t function_2a5d3(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2a5d3
    if (a1 == 0) {
        // 0x2a66e
        return 10;
    }
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x2a5e2
    if (*v1 == 0) {
        // 0x2a66e
        return 10;
    }
    int32_t * v2 = (int32_t *)(a1 + 4); // 0x2a5ed
    if (*v2 == 0) {
        // 0x2a66e
        return 10;
    }
    int32_t v3 = *(int32_t *)(a1 + 16); // 0x2a5f3
    if (v3 == 0 || a2 == 0 || a3 == 0) {
        // 0x2a66e
        return 10;
    }
    // 0x2a604
    if (g5 != 1) {
        // 0x2a66e
        return (int64_t)&g1 & 0xffffffff;
    }
    // 0x2a613
    *(int32_t *)a3 = v3;
    int64_t v4 = function_61792(function_2a56d(), *v1, *v2, a2, a3); // 0x2a63d
    int64_t result = 0x7fffffff; // 0x2a64b
    if ((int32_t)v4 < 7) {
        uint32_t v5 = *(int32_t *)((4 * v4 & 0x3fffffffc) + (int64_t)&g3); // 0x2a656
        result = v5;
    }
    // 0x2a664
    return result;
}

// Address range: 0x36990 - 0x36a31
int64_t function_36990(int64_t a1, int64_t str2, uint64_t result, uint64_t n2) {
    uint64_t v1 = *(int64_t *)(a1 - 24); // 0x369a7
    if (n2 == 0) {
        // 0x369ad
        if (v1 >= result) {
            // 0x36a22
            return result;
        }
        // 0x36a22
        return -1;
    }
    if (v1 <= result) {
        // 0x36a22
        return -1;
    }
    int64_t v2 = v1 - result; // 0x369d6
    if (v2 < n2) {
        // 0x36a22
        return -1;
    }
    int32_t c = 0x1000000 * (int32_t)str2 >> 24;
    int64_t str = result + a1; // 0x36990
    int64_t n = v2 + 1 - n2; // 0x369e1
    int64_t result2; // 0x36990
    while (n != 0) {
        int64_t * found_byte_pos = memchr((int64_t *)str, c, (int32_t)n); // 0x369e9
        if (found_byte_pos == NULL) {
            // break -> 0x36a1e
            break;
        }
        int64_t v3 = (int64_t)found_byte_pos;
        if (memcmp(found_byte_pos, (int64_t *)str2, (int32_t)n2) == 0) {
            // 0x36a08
            result2 = v3 - a1;
            return result2;
        }
        int64_t v4 = v1 + a1 + -1 - v3; // 0x36a19
        str = v3 + 1;
        if (v4 < n2) {
            // break -> 0x36a1e
            break;
        }
        n = v4 + 1 - n2;
    }
    // 0x36a1e
    result2 = -1;
  lab_0x36a22:
    // 0x36a22
    return result2;
}

// Address range: 0x3de87 - 0x3df27
int64_t function_3de87(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 32); // 0x3de88
    int64_t v2; // 0x3de87
    if (*v1 == 0) {
        // 0x3de92
        *v1 = 0x3ce6a;
        v2 = 0x3ce6a;
    }
    int64_t * v3 = (int64_t *)(a1 + 40); // 0x3de9d
    int64_t v4 = v2; // 0x3dea2
    if (*v3 == 0) {
        // 0x3dea4
        *v3 = 0x3ce62;
        v4 = 0x3ce62;
    }
    int64_t * v5 = (int64_t *)(a1 + 48); // 0x3deaf
    int64_t v6 = v4; // 0x3deb4
    if (*v5 == 0) {
        // 0x3deb6
        *v5 = 0x3de78;
        v6 = 0x3de78;
    }
    // 0x3dec1
    *(int32_t *)(a1 + 20) = 1;
    *(int64_t *)a1 = 0;
    *(int64_t *)(a1 + 8) = 0;
    *(int32_t *)(a1 + 16) = 0;
    int64_t * v7 = (int64_t *)(a1 + 88); // 0x3def2
    *v7 = v6;
    int64_t result = 0; // 0x3defb
    if (v6 != 0) {
        // 0x3defd
        __asm_rep_stosd_memset((char *)v6, 0, 32);
        int64_t v8 = *v7; // 0x3df07
        *(int32_t *)(v8 + 24) = 1;
        *(int32_t *)(v8 + 56) = 4;
        *(int32_t *)(v8 + 88) = 4;
        result = 1;
    }
    // 0x3df25
    return result;
}

// Address range: 0x46d75 - 0x46e15
int64_t function_46d75(int64_t a1, int64_t a2, uint64_t a3) {
    uint32_t v1 = (int32_t)a1;
    uint32_t v2 = ((int32_t)a3 + v1) % 0x20000000; // 0x46d86
    *(int32_t *)a1 = v2;
    int32_t * v3 = (int32_t *)(a1 + 4);
    if (v2 < v1) {
        // 0x46d92
        *v3 = *v3 + 1;
    }
    // 0x46d95
    *v3 = *v3 + (int32_t)(a3 / 0x20000000);
    uint32_t v4 = v1 % 64; // 0x46d9f
    int64_t v5 = 0; // 0x46da2
    int64_t v6 = a3; // 0x46da2
    int64_t v7 = a2; // 0x46da2
    int64_t result; // 0x46d75
    int64_t v8; // 0x46d75
    int64_t v9; // 0x46d75
    int64_t v10; // 0x46d75
    int64_t v11; // 0x46d75
    if (v4 == 0) {
        goto lab_0x46de4;
    } else {
        int64_t v12 = v4; // 0x46d9f
        uint64_t v13 = 64 - v12; // 0x46dab
        int64_t v14 = a1 + 24; // 0x46dae
        int64_t v15 = v14 + v12; // 0x46dae
        v11 = v15;
        result = v15;
        v9 = a3;
        v10 = a2;
        if (v13 <= a3) {
            // 0x46dc3
            __asm_rep_movsb_memcpy((char *)v15, (char *)a2, v13);
            v5 = function_46521(a1, v14, 64, 0);
            v8 = 0;
            v6 = a3 - v13;
            v7 = v13 + a2;
            goto lab_0x46de4;
        } else {
            goto lab_0x46e0e;
        }
    }
  lab_0x46de4:;
    int64_t v16 = v5; // 0x46de8
    int64_t v17 = v6; // 0x46de8
    int64_t v18 = v7; // 0x46de8
    if (v6 >= 64) {
        int64_t v19 = function_46521(a1, v7, v6 & -64, v8); // 0x46dfa
        v16 = v19;
        v17 = v6 % 64;
        v18 = v19;
    }
    // 0x46e02
    v11 = a1 + 24;
    result = v16;
    v9 = v17 & 0xffffffff;
    v10 = v18;
    goto lab_0x46e0e;
  lab_0x46e0e:
    // 0x46e0e
    __asm_rep_movsb_memcpy((char *)v11, (char *)v10, v9);
    return result;
}

// Address range: 0x5f0f4 - 0x5f195
int64_t function_5f0f4(int64_t a1) {
    int64_t v1 = __readfsqword(40); // bp-32, 0x5f112
    int64_t v2; // bp-64, 0x5f0f4
    function_5f302(&v2);
    int64_t v3 = 0; // bp-88, 0x5f12b
    function_5c710(&v3, &v2, &v1);
    uint64_t v4 = function_5efd2(a1 & 0xffffffff, &v3); // 0x5f151
    function_5f202(&v3);
    int64_t v5; // bp-56, 0x5f0f4
    function_25194(&v5);
    int64_t result = function_2508e(&v2) & -256 | v4 % 256; // 0x5f185
    if (v1 != __readfsqword(40)) {
        // 0x5f187
        __stack_chk_fail();
        result = (int64_t)&g18;
    }
    // 0x5f18c
    return result;
}

// Address range: 0x4aec20 - 0x4aecbf
int64_t function_4aec20(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4aec20
    if ((int32_t)function_4af830(0x2000000) != 0) {
        // 0x4aec88
        return function_4af870(a1, a2 & 0xffffffff, a3, a4);
    }
    if ((int32_t)a2 == 1) {
        // 0x4aecb8
        function_4ae220(a1, a3, a4);
    } else {
        // 0x4aec61
        function_4ae720(a1, a3, a4);
    }
    // 0x4aec66
    return 0;
}

// Address range: 0x4aeccf - 0x4aecd5
int64_t function_4aeccf(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4aeccf
    int64_t v1; // 0x4aeccf
    return v1 & -256 | (int64_t)__asm_in((int16_t)a3);
}

// Address range: 0x4aecea - 0x4aeceb
int64_t function_4aecea(int64_t a1) {
    // 0x4aecea
    int64_t result; // 0x4aecea
    return result;
}

// Address range: 0x4bbf40 - 0x4bbfdc
int64_t function_4bbf40(int64_t a1, int64_t a2) {
    // 0x4bbf40
    if (*(int64_t *)(a1 + 96) == 0) {
        // 0x4bbf85
        return 0xffffb080;
    }
    // 0x4bbf55
    if (*(int64_t *)(a1 + 120) != 0) {
        int64_t result = function_4b1680(a2, 1); // 0x4bbf67
        if ((int32_t)result < 0) {
            // 0x4bbf85
            return result;
        }
        int64_t result2 = function_4b1590(a2, a1 + 152); // 0x4bbf7a
        if ((int32_t)result2 >= 0) {
            // 0x4bbf85
            return result2;
        }
        // 0x4bbf85
        return 0;
    }
    int64_t result3 = function_4b0df0(a2, 0); // 0x4bbf95
    if ((int32_t)result3 != 0) {
        // 0x4bbf85
        return result3;
    }
    int64_t result4 = function_4b0df0(a2, 1); // 0x4bbfa6
    if ((int32_t)result4 != 0) {
        // 0x4bbf85
        return result4;
    }
    int64_t result5 = function_4b0df0(a2, 2); // 0x4bbfb7
    if ((int32_t)result5 != 0) {
        // 0x4bbf85
        return result5;
    }
    int64_t result6 = function_4b0f10(a2) - 1; // 0x4bbfc8
    if (result6 == *(int64_t *)(a1 + 184)) {
        // 0x4bbf85
        return 0;
    }
    // 0x4bbf85
    return result6;
}

// Address range: 0x50b730 - 0x50b7d0
int64_t function_50b730(int64_t a1) {
    uint64_t v1 = function_566390(&g7); // 0x50b73b
    int64_t v2 = (int64_t)&g7; // 0x50b74b
    int64_t v3; // 0x50b730
    if (*(int64_t *)((int64_t)&g7 + 16) > v1) {
        int64_t v4 = *(int64_t *)((int64_t)&g7 + 8); // 0x50b747
        int64_t v5 = *(int64_t *)(v4 + 8 * v1); // 0x50b74d
        v2 = 0;
        if (v5 == 0) {
            goto lab_0x50b772;
        } else {
            int64_t result = function_20730(v5, &g4, 0x844240, 0); // 0x50b766
            v3 = v5;
            if (result != 0) {
                // 0x50b770
                return result;
            }
            goto lab_0x50b777;
        }
    } else {
        goto lab_0x50b772;
    }
  lab_0x50b772:
    // 0x50b772
    function_5423f0();
    v3 = v2;
    goto lab_0x50b777;
  lab_0x50b777:
    // 0x50b777
    function_20110();
    uint64_t v6 = function_566390(&g8); // 0x50b78b
    int64_t v7 = *(int64_t *)v3; // 0x50b790
    if (*(int64_t *)(v7 + 16) <= v6) {
        // 0x50b7c2
        function_5423f0();
        // 0x50b7c7
        return function_20110();
    }
    int64_t v8 = *(int64_t *)(*(int64_t *)(v7 + 8) + 8 * v6); // 0x50b79d
    if (v8 == 0) {
        // 0x50b7c2
        function_5423f0();
        // 0x50b7c7
        return function_20110();
    }
    int64_t result2 = function_20730(v8, &g4, 0x8442a0, 0); // 0x50b7b6
    if (result2 == 0) {
        // 0x50b7c7
        return function_20110();
    }
    // 0x50b770
    return result2;
}

// Address range: 0x54c500 - 0x54c59f
int64_t function_54c500(int64_t result2, int64_t a2, int64_t a3) {
    int64_t v1 = a3 - a2; // 0x54c50d
    uint64_t v2 = v1 >> 2; // 0x54c514
    int64_t v3 = __readfsqword(40); // 0x54c518
    if (v2 >= 4) {
        int64_t result = function_549a50(); // 0x54c585
        *(int64_t *)result2 = result;
        *(int64_t *)(result2 + 16) = v2;
        // 0x54c596
        return result;
    }
    if (v2 == 1) {
        // 0x54c570
        int64_t v4; // 0x54c500
        *(int32_t *)result2 = (int32_t)v4;
        // 0x54c543
        *(int64_t *)(result2 + 8) = v2;
        *(int32_t *)((v1 & -4) + result2) = 0;
        return __readfsqword(40) ^ v3;
    }
    // 0x54c53e
    if (v2 != 0) {
        // 0x54c596
        return result2;
    }
    // 0x54c543
    *(int64_t *)(result2 + 8) = v2;
    *(int32_t *)((v1 & -4) + result2) = 0;
    return __readfsqword(40) ^ v3;
}

// Address range: 0x54c5e0 - 0x54c67f
int64_t function_54c5e0(int64_t result2, int64_t a2, int64_t a3) {
    int64_t v1 = a3 - a2; // 0x54c5ed
    uint64_t v2 = v1 >> 2; // 0x54c5f4
    int64_t v3 = __readfsqword(40); // 0x54c5f8
    if (v2 >= 4) {
        int64_t result = function_549a50(); // 0x54c665
        *(int64_t *)result2 = result;
        *(int64_t *)(result2 + 16) = v2;
        // 0x54c676
        return result;
    }
    if (v2 == 1) {
        // 0x54c650
        int64_t v4; // 0x54c5e0
        *(int32_t *)result2 = (int32_t)v4;
        // 0x54c623
        *(int64_t *)(result2 + 8) = v2;
        *(int32_t *)((v1 & -4) + result2) = 0;
        return __readfsqword(40) ^ v3;
    }
    // 0x54c61e
    if (v2 != 0) {
        // 0x54c676
        return result2;
    }
    // 0x54c623
    *(int64_t *)(result2 + 8) = v2;
    *(int32_t *)((v1 & -4) + result2) = 0;
    return __readfsqword(40) ^ v3;
}

// Address range: 0x54e800 - 0x54e8a0
// From class:    std::__codecvt_utf16_base<wchar_t>
// Type:          virtual member function
int64_t function_54e800(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = *(int64_t *)(a1 + 24); // 0x54e80e
    int64_t v2 = __readfsqword(40); // 0x54e812
    int64_t v3 = a3; // bp-56, 0x54e82f
    int32_t v4 = *(int32_t *)(a1 + 32); // bp-60, 0x54e83c
    function_54e5f0(&v3, (int64_t *)&v4);
    if (a5 != 0) {
        int64_t v5 = a5; // 0x54e854
        while (!((v5 == 1 | (int32_t)v1 < (int32_t)function_54dd60(&v3, v1 & 0xffffffff, (int64_t)v4)))) {
            // 0x54e858
            v5--;
        }
    }
    // 0x54e87a
    if (v2 == __readfsqword(40)) {
        // 0x54e892
        return v3 - a3;
    }
    // 0x54e89b
    __stack_chk_fail();
    return (int64_t)&g18;
}

// Address range: 0x54faa0 - 0x54fb40
// From class:    std::__codecvt_utf16_base<char32_t>
// Type:          virtual member function
int64_t function_54faa0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = *(int64_t *)(a1 + 16); // 0x54faae
    int64_t v2 = __readfsqword(40); // 0x54fab2
    int64_t v3 = a3; // bp-56, 0x54facf
    int32_t v4 = *(int32_t *)(a1 + 24); // bp-60, 0x54fadc
    function_54e5f0(&v3, (int64_t *)&v4);
    if (a5 != 0) {
        int64_t v5 = a5; // 0x54faf4
        while (!((v5 == 1 | (int32_t)v1 < (int32_t)function_54dd60(&v3, v1 & 0xffffffff, (int64_t)v4)))) {
            // 0x54faf8
            v5--;
        }
    }
    // 0x54fb1a
    if (v2 == __readfsqword(40)) {
        // 0x54fb32
        return v3 - a3;
    }
    // 0x54fb3b
    __stack_chk_fail();
    return (int64_t)&g18;
}

// Address range: 0x555410 - 0x5554b0
int64_t function_555410(int64_t a1) {
    uint64_t v1 = function_566390(&g6); // 0x55541b
    int64_t v2 = (int64_t)&g6; // 0x55542b
    int64_t v3; // 0x555410
    if (*(int64_t *)((int64_t)&g6 + 16) > v1) {
        int64_t v4 = *(int64_t *)((int64_t)&g6 + 8); // 0x555427
        int64_t v5 = *(int64_t *)(v4 + 8 * v1); // 0x55542d
        v2 = 0;
        if (v5 == 0) {
            goto lab_0x555452;
        } else {
            int64_t result = function_20730(v5, &g4, 0x843678, 0); // 0x555446
            v3 = v5;
            if (result != 0) {
                // 0x555450
                return result;
            }
            goto lab_0x555457;
        }
    } else {
        goto lab_0x555452;
    }
  lab_0x555452:
    // 0x555452
    function_5423f0();
    v3 = v2;
    goto lab_0x555457;
  lab_0x555457:
    // 0x555457
    function_20110();
    uint64_t v6 = function_566390(&g9); // 0x55546b
    int64_t v7 = *(int64_t *)v3; // 0x555470
    if (*(int64_t *)(v7 + 16) <= v6) {
        // 0x5554a2
        function_5423f0();
        // 0x5554a7
        return function_20110();
    }
    int64_t v8 = *(int64_t *)(*(int64_t *)(v7 + 8) + 8 * v6); // 0x55547d
    if (v8 == 0) {
        // 0x5554a2
        function_5423f0();
        // 0x5554a7
        return function_20110();
    }
    int64_t result2 = function_20730(v8, &g4, 0x846790, 0); // 0x555496
    if (result2 == 0) {
        // 0x5554a7
        return function_20110();
    }
    // 0x555450
    return result2;
}

// Address range: 0x5677a0 - 0x567841
int64_t function_5677a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = __readfsqword(40); // 0x5677b7
    char * v2; // bp-40, 0x5677a0
    float32_t v3 = __strtof_l((char *)a1, &v2, (struct __locale_struct *)a4); // 0x5677c7
    int128_t v4 = v3; // 0x5677c7
    int64_t v5 = __asm_movss(v4); // 0x5677d0
    int32_t * v6 = (int32_t *)a2; // 0x5677d0
    *v6 = (int32_t)v5;
    if ((int64_t)v2 == a1 || *v2 != 0) {
        // 0x567808
        *v6 = 0;
        *(int32_t *)a3 = 4;
        // 0x567817
        return __readfsqword(40) ^ v1;
    }
    // 0x5677e8
    __asm_ucomiss(v4, 0x7f7fffff);
    __asm_ucomiss_134(__asm_movss_133(-0x800001), v4);
    // 0x567817
    return __readfsqword(40) ^ v1;
}

// Address range: 0x567d40 - 0x567de1
int64_t function_567d40(void) {
    // 0x567d40
    int128_t v1; // 0x567d40
    int128_t v2 = v1;
    if (*(char *)&g10 != 0) {
        // 0x567d4b
        return (int64_t)&g11;
    }
    // 0x567d58
    if ((int32_t)function_20550(&g10) != 0) {
        int128_t v3 = __asm_pxor(v2, v2); // 0x567d6c
        g13 = 0;
        *(int32_t *)&g14 = 0;
        g15 = 0;
        g16 = 0;
        g17 = 0;
        *(int128_t *)&g11 = (int128_t)__asm_movaps(v3);
        *(int128_t *)&g12 = (int128_t)__asm_movaps(v3);
        function_1ff50();
        __cxa_atexit((void (*)(int64_t *))&g2, &g11, (int64_t *)0x849800);
    }
    // 0x567d4b
    return (int64_t)&g11;
}

// Address range: 0x5724e0 - 0x572581
int64_t function_5724e0(int64_t a1, int64_t a2) {
    // 0x5724e0
    int64_t v1; // 0x5724e0
    int64_t v2 = v1;
    int64_t v3 = __readfsqword(40); // 0x5724f1
    *(int64_t *)a2 = a2 + 16;
    function_54c6d0(a2, v2, v2 + 4 * v1);
    *(int64_t *)(a2 + 32) = 0x570470;
    int64_t v4; // bp-56, 0x5724e0
    if (v2 != (int64_t)&v4) {
        // 0x57255f
        function_4eeb50(v2);
    }
    int64_t result = __readfsqword(40) ^ v3; // 0x572568
    if (result == 0) {
        // 0x572573
        return result;
    }
    // 0x57257c
    __stack_chk_fail();
    return (int64_t)&g18;
}
