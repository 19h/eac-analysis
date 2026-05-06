/*
 * Targeted RetDec C for native executable gap queue batch 56.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x4b6270-0x4b62ef rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b6b10-0x4b6b8f rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b6bc0-0x4b6c3f rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b82e0-0x4b835f rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b90b0-0x4b912f rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c0310-0x4c038f rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c1d60-0x4c1ddf rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c6890-0x4c690f rank=- name=- kind=- bytes=- uncovered=-
 *   0x4cb410-0x4cb48f rank=- name=- kind=- bytes=- uncovered=-
 *   0x4ccc30-0x4cccaf rank=- name=- kind=- bytes=- uncovered=-
 *   0x4cdd20-0x4cdd9f rank=- name=- kind=- bytes=- uncovered=-
 *   0x4cf010-0x4cf08f rank=- name=- kind=- bytes=- uncovered=-
 *   0x4cf940-0x4cf9bf rank=- name=- kind=- bytes=- uncovered=-
 *   0x4cffb0-0x4d002f rank=- name=- kind=- bytes=- uncovered=-
 *   0x4d19d0-0x4d1a4f rank=- name=- kind=- bytes=- uncovered=-
 *   0x4d2af0-0x4d2b6f rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_4b6270(int64_t a1);
int64_t function_4b6b10(int64_t a1);
int64_t function_4b6bc0(int64_t a1);
int64_t function_4b82e0(int64_t a1);
int64_t function_4b90b0(int64_t a1);
int64_t function_4c0310(int64_t a1);
int64_t function_4c1d60(int64_t a1);
int64_t function_4c6890(int64_t a1);
int64_t function_4cb410(int64_t a1);
int64_t function_4ccc30(int64_t a1);
int64_t function_4cdd20(int64_t a1);
int64_t function_4cf010(int64_t a1);
int64_t function_4cf940(int64_t a1);
int64_t function_4cffb0(int64_t a1);
int64_t function_4d19d0(int64_t a1);
int64_t function_4d2af0(int64_t a1);

// Address range: 0x4b6270 - 0x4b62ee
int64_t function_4b6270(int64_t a1) {
    // 0x4b6270
    int64_t v1; // 0x4b6270
    int64_t v2; // 0x4b6270
    int64_t v3; // 0x4b6270
    int64_t v4; // 0x4b6270
    if (a1 % 2 != 0) {
        // 0x4b62c0
        *(char *)a1 = 0;
        int64_t v5 = a1 + 1; // 0x4b62c3
        v3 = 343;
        v1 = v5;
        v4 = 341;
        v2 = v5;
        if ((v5 & 2) == 0) {
            goto lab_0x4b6281;
        } else {
            goto lab_0x4b62d0;
        }
    } else {
        // 0x4b627b
        v3 = 344;
        v1 = a1;
        v4 = 342;
        v2 = a1;
        if ((a1 & 2) != 0) {
            goto lab_0x4b62d0;
        } else {
            goto lab_0x4b6281;
        }
    }
  lab_0x4b6281:;
    int64_t v6 = v3; // 0x4b6285
    int64_t v7 = v1; // 0x4b6285
    if ((v1 & 4) != 0) {
        // 0x4b62e8
        *(int32_t *)v1 = 0;
        int64_t result; // 0x4b6270
        return result;
    }
    goto lab_0x4b6287;
  lab_0x4b62d0:
    // 0x4b62d0
    *(int16_t *)v2 = 0;
    int64_t v13 = v2 + 2; // 0x4b62d5
    v6 = v4;
    v7 = v13;
    if ((v13 & 4) != 0) {
        // 0x4b62e8
        int64_t v14; // 0x4b6270
        int64_t v15 = v14;
        *(int32_t *)v15 = 0;
        int64_t result2; // 0x4b6270
        return result2;
    }
    goto lab_0x4b6287;
  lab_0x4b6287:;
    uint64_t v8 = v6 / 8 % 0x20000000; // 0x4b628b
    __asm_rep_stosq_memset((char *)v7, 0, v8);
    bool v9; // 0x4b6270
    int64_t v10 = v8 * (v9 ? -8 : 8) + v7; // 0x4b6291
    int64_t v11 = v10; // 0x4b6294
    if ((v6 & 4) != 0) {
        // 0x4b6296
        *(int32_t *)v10 = 0;
        v11 = v10 + 4;
    }
    int64_t v12 = v11; // 0x4b62a3
    if ((v6 & 2) != 0) {
        // 0x4b62a5
        *(int16_t *)v11 = 0;
        v12 = v11 + 2;
    }
    if (v6 % 2 != 0) {
        // 0x4b62b3
        *(char *)v12 = 0;
    }
    // 0x4b62b6
    return 0;
}

// Address range: 0x4b6b10 - 0x4b6b8e
int64_t function_4b6b10(int64_t a1) {
    // 0x4b6b10
    int64_t v1; // 0x4b6b10
    int64_t v2; // 0x4b6b10
    int64_t v3; // 0x4b6b10
    int64_t v4; // 0x4b6b10
    if (a1 % 2 != 0) {
        // 0x4b6b60
        *(char *)a1 = 0;
        int64_t v5 = a1 + 1; // 0x4b6b63
        v3 = 127;
        v1 = v5;
        v4 = 125;
        v2 = v5;
        if ((v5 & 2) == 0) {
            goto lab_0x4b6b21;
        } else {
            goto lab_0x4b6b70;
        }
    } else {
        // 0x4b6b1b
        v3 = 128;
        v1 = a1;
        v4 = 126;
        v2 = a1;
        if ((a1 & 2) != 0) {
            goto lab_0x4b6b70;
        } else {
            goto lab_0x4b6b21;
        }
    }
  lab_0x4b6b21:;
    int64_t v6 = v3; // 0x4b6b25
    int64_t v7 = v1; // 0x4b6b25
    if ((v1 & 4) != 0) {
        // 0x4b6b88
        *(int32_t *)v1 = 0;
        int64_t result; // 0x4b6b10
        return result;
    }
    goto lab_0x4b6b27;
  lab_0x4b6b70:
    // 0x4b6b70
    *(int16_t *)v2 = 0;
    int64_t v13 = v2 + 2; // 0x4b6b75
    v6 = v4;
    v7 = v13;
    if ((v13 & 4) != 0) {
        // 0x4b6b88
        int64_t v14; // 0x4b6b10
        int64_t v15 = v14;
        *(int32_t *)v15 = 0;
        int64_t result2; // 0x4b6b10
        return result2;
    }
    goto lab_0x4b6b27;
  lab_0x4b6b27:;
    uint64_t v8 = v6 / 8 % 0x20000000; // 0x4b6b2b
    __asm_rep_stosq_memset((char *)v7, 0, v8);
    bool v9; // 0x4b6b10
    int64_t v10 = v8 * (v9 ? -8 : 8) + v7; // 0x4b6b31
    int64_t v11 = v10; // 0x4b6b34
    if ((v6 & 4) != 0) {
        // 0x4b6b36
        *(int32_t *)v10 = 0;
        v11 = v10 + 4;
    }
    int64_t v12 = v11; // 0x4b6b43
    if ((v6 & 2) != 0) {
        // 0x4b6b45
        *(int16_t *)v11 = 0;
        v12 = v11 + 2;
    }
    if (v6 % 2 != 0) {
        // 0x4b6b53
        *(char *)v12 = 0;
    }
    // 0x4b6b56
    return 0;
}

// Address range: 0x4b6bc0 - 0x4b6c3e
int64_t function_4b6bc0(int64_t a1) {
    // 0x4b6bc0
    int64_t v1; // 0x4b6bc0
    int64_t v2; // 0x4b6bc0
    int64_t v3; // 0x4b6bc0
    int64_t v4; // 0x4b6bc0
    if (a1 % 2 != 0) {
        // 0x4b6c10
        *(char *)a1 = 0;
        int64_t v5 = a1 + 1; // 0x4b6c13
        v3 = 383;
        v1 = v5;
        v4 = 381;
        v2 = v5;
        if ((v5 & 2) == 0) {
            goto lab_0x4b6bd1;
        } else {
            goto lab_0x4b6c20;
        }
    } else {
        // 0x4b6bcb
        v3 = 384;
        v1 = a1;
        v4 = 382;
        v2 = a1;
        if ((a1 & 2) != 0) {
            goto lab_0x4b6c20;
        } else {
            goto lab_0x4b6bd1;
        }
    }
  lab_0x4b6bd1:;
    int64_t v6 = v3; // 0x4b6bd5
    int64_t v7 = v1; // 0x4b6bd5
    if ((v1 & 4) != 0) {
        // 0x4b6c38
        *(int32_t *)v1 = 0;
        int64_t result; // 0x4b6bc0
        return result;
    }
    goto lab_0x4b6bd7;
  lab_0x4b6c20:
    // 0x4b6c20
    *(int16_t *)v2 = 0;
    int64_t v13 = v2 + 2; // 0x4b6c25
    v6 = v4;
    v7 = v13;
    if ((v13 & 4) != 0) {
        // 0x4b6c38
        int64_t v14; // 0x4b6bc0
        int64_t v15 = v14;
        *(int32_t *)v15 = 0;
        int64_t result2; // 0x4b6bc0
        return result2;
    }
    goto lab_0x4b6bd7;
  lab_0x4b6bd7:;
    uint64_t v8 = v6 / 8 % 0x20000000; // 0x4b6bdb
    __asm_rep_stosq_memset((char *)v7, 0, v8);
    bool v9; // 0x4b6bc0
    int64_t v10 = v8 * (v9 ? -8 : 8) + v7; // 0x4b6be1
    int64_t v11 = v10; // 0x4b6be4
    if ((v6 & 4) != 0) {
        // 0x4b6be6
        *(int32_t *)v10 = 0;
        v11 = v10 + 4;
    }
    int64_t v12 = v11; // 0x4b6bf3
    if ((v6 & 2) != 0) {
        // 0x4b6bf5
        *(int16_t *)v11 = 0;
        v12 = v11 + 2;
    }
    if (v6 % 2 != 0) {
        // 0x4b6c03
        *(char *)v12 = 0;
    }
    // 0x4b6c06
    return 0;
}

// Address range: 0x4b82e0 - 0x4b835e
int64_t function_4b82e0(int64_t a1) {
    // 0x4b82e0
    int64_t v1; // 0x4b82e0
    int64_t v2; // 0x4b82e0
    int64_t v3; // 0x4b82e0
    int64_t v4; // 0x4b82e0
    if (a1 % 2 != 0) {
        // 0x4b8330
        *(char *)a1 = 0;
        int64_t v5 = a1 + 1; // 0x4b8333
        v3 = 247;
        v1 = v5;
        v4 = 245;
        v2 = v5;
        if ((v5 & 2) == 0) {
            goto lab_0x4b82f1;
        } else {
            goto lab_0x4b8340;
        }
    } else {
        // 0x4b82eb
        v3 = 248;
        v1 = a1;
        v4 = 246;
        v2 = a1;
        if ((a1 & 2) != 0) {
            goto lab_0x4b8340;
        } else {
            goto lab_0x4b82f1;
        }
    }
  lab_0x4b82f1:;
    int64_t v6 = v3; // 0x4b82f5
    int64_t v7 = v1; // 0x4b82f5
    if ((v1 & 4) != 0) {
        // 0x4b8358
        *(int32_t *)v1 = 0;
        int64_t result; // 0x4b82e0
        return result;
    }
    goto lab_0x4b82f7;
  lab_0x4b8340:
    // 0x4b8340
    *(int16_t *)v2 = 0;
    int64_t v13 = v2 + 2; // 0x4b8345
    v6 = v4;
    v7 = v13;
    if ((v13 & 4) != 0) {
        // 0x4b8358
        int64_t v14; // 0x4b82e0
        int64_t v15 = v14;
        *(int32_t *)v15 = 0;
        int64_t result2; // 0x4b82e0
        return result2;
    }
    goto lab_0x4b82f7;
  lab_0x4b82f7:;
    uint64_t v8 = v6 / 8 % 0x20000000; // 0x4b82fb
    __asm_rep_stosq_memset((char *)v7, 0, v8);
    bool v9; // 0x4b82e0
    int64_t v10 = v8 * (v9 ? -8 : 8) + v7; // 0x4b8301
    int64_t v11 = v10; // 0x4b8304
    if ((v6 & 4) != 0) {
        // 0x4b8306
        *(int32_t *)v10 = 0;
        v11 = v10 + 4;
    }
    int64_t v12 = v11; // 0x4b8313
    if ((v6 & 2) != 0) {
        // 0x4b8315
        *(int16_t *)v11 = 0;
        v12 = v11 + 2;
    }
    if (v6 % 2 != 0) {
        // 0x4b8323
        *(char *)v12 = 0;
    }
    // 0x4b8326
    return 0;
}

// Address range: 0x4b90b0 - 0x4b912e
int64_t function_4b90b0(int64_t a1) {
    // 0x4b90b0
    int64_t v1; // 0x4b90b0
    int64_t v2; // 0x4b90b0
    int64_t v3; // 0x4b90b0
    int64_t v4; // 0x4b90b0
    if (a1 % 2 != 0) {
        // 0x4b9100
        *(char *)a1 = 0;
        int64_t v5 = a1 + 1; // 0x4b9103
        v3 = (int64_t)&g2 & -256 | 103;
        v1 = v5;
        v4 = (int64_t)&g2 & -256 | 103;
        v2 = v5;
        if ((v5 & 2) == 0) {
            goto lab_0x4b90c1;
        } else {
            goto lab_0x4b9110;
        }
    } else {
        // 0x4b90bb
        v3 = (int64_t)&g2;
        v1 = a1;
        v4 = (int64_t)&g2;
        v2 = a1;
        if ((a1 & 2) != 0) {
            goto lab_0x4b9110;
        } else {
            goto lab_0x4b90c1;
        }
    }
  lab_0x4b90c1:;
    int64_t v6 = v3; // 0x4b90c5
    int64_t v7 = v1; // 0x4b90c5
    if ((v1 & 4) != 0) {
        // 0x4b9128
        *(int32_t *)v1 = 0;
        int64_t result; // 0x4b90b0
        return result;
    }
    goto lab_0x4b90c7;
  lab_0x4b9110:
    // 0x4b9110
    *(int16_t *)v2 = 0;
    int64_t v13 = v2 + 2; // 0x4b9115
    v6 = v4 + 0xfffffffe & 0xffffffff;
    v7 = v13;
    if ((v13 & 4) != 0) {
        // 0x4b9128
        int64_t v14; // 0x4b90b0
        int64_t v15 = v14;
        *(int32_t *)v15 = 0;
        int64_t result2; // 0x4b90b0
        return result2;
    }
    goto lab_0x4b90c7;
  lab_0x4b90c7:;
    uint64_t v8 = v6 / 8 % 0x20000000; // 0x4b90cb
    __asm_rep_stosq_memset((char *)v7, 0, v8);
    bool v9; // 0x4b90b0
    int64_t v10 = v8 * (v9 ? -8 : 8) + v7; // 0x4b90d1
    int64_t v11 = v10; // 0x4b90d4
    if ((v6 & 4) != 0) {
        // 0x4b90d6
        *(int32_t *)v10 = 0;
        v11 = v10 + 4;
    }
    int64_t v12 = v11; // 0x4b90e3
    if ((v6 & 2) != 0) {
        // 0x4b90e5
        *(int16_t *)v11 = 0;
        v12 = v11 + 2;
    }
    if (v6 % 2 != 0) {
        // 0x4b90f3
        *(char *)v12 = 0;
    }
    // 0x4b90f6
    return 0;
}

// Address range: 0x4c0310 - 0x4c038e
int64_t function_4c0310(int64_t a1) {
    // 0x4c0310
    int64_t v1; // 0x4c0310
    int64_t v2; // 0x4c0310
    int64_t v3; // 0x4c0310
    int64_t v4; // 0x4c0310
    if (a1 % 2 != 0) {
        // 0x4c0360
        *(char *)a1 = 0;
        int64_t v5 = a1 + 1; // 0x4c0363
        v3 = 415;
        v1 = v5;
        v4 = 413;
        v2 = v5;
        if ((v5 & 2) == 0) {
            goto lab_0x4c0321;
        } else {
            goto lab_0x4c0370;
        }
    } else {
        // 0x4c031b
        v3 = 416;
        v1 = a1;
        v4 = 414;
        v2 = a1;
        if ((a1 & 2) != 0) {
            goto lab_0x4c0370;
        } else {
            goto lab_0x4c0321;
        }
    }
  lab_0x4c0321:;
    int64_t v6 = v3; // 0x4c0325
    int64_t v7 = v1; // 0x4c0325
    if ((v1 & 4) != 0) {
        // 0x4c0388
        *(int32_t *)v1 = 0;
        int64_t result; // 0x4c0310
        return result;
    }
    goto lab_0x4c0327;
  lab_0x4c0370:
    // 0x4c0370
    *(int16_t *)v2 = 0;
    int64_t v13 = v2 + 2; // 0x4c0375
    v6 = v4;
    v7 = v13;
    if ((v13 & 4) != 0) {
        // 0x4c0388
        int64_t v14; // 0x4c0310
        int64_t v15 = v14;
        *(int32_t *)v15 = 0;
        int64_t result2; // 0x4c0310
        return result2;
    }
    goto lab_0x4c0327;
  lab_0x4c0327:;
    uint64_t v8 = v6 / 8 % 0x20000000; // 0x4c032b
    __asm_rep_stosq_memset((char *)v7, 0, v8);
    bool v9; // 0x4c0310
    int64_t v10 = v8 * (v9 ? -8 : 8) + v7; // 0x4c0331
    int64_t v11 = v10; // 0x4c0334
    if ((v6 & 4) != 0) {
        // 0x4c0336
        *(int32_t *)v10 = 0;
        v11 = v10 + 4;
    }
    int64_t v12 = v11; // 0x4c0343
    if ((v6 & 2) != 0) {
        // 0x4c0345
        *(int16_t *)v11 = 0;
        v12 = v11 + 2;
    }
    if (v6 % 2 != 0) {
        // 0x4c0353
        *(char *)v12 = 0;
    }
    // 0x4c0356
    return 0;
}

// Address range: 0x4c1d60 - 0x4c1dde
int64_t function_4c1d60(int64_t a1) {
    // 0x4c1d60
    int64_t v1; // 0x4c1d60
    int64_t v2; // 0x4c1d60
    int64_t v3; // 0x4c1d60
    int64_t v4; // 0x4c1d60
    if (a1 % 2 != 0) {
        // 0x4c1db0
        *(char *)a1 = 0;
        int64_t v5 = a1 + 1; // 0x4c1db3
        v3 = 87;
        v1 = v5;
        v4 = 85;
        v2 = v5;
        if ((v5 & 2) == 0) {
            goto lab_0x4c1d71;
        } else {
            goto lab_0x4c1dc0;
        }
    } else {
        // 0x4c1d6b
        v3 = 88;
        v1 = a1;
        v4 = 86;
        v2 = a1;
        if ((a1 & 2) != 0) {
            goto lab_0x4c1dc0;
        } else {
            goto lab_0x4c1d71;
        }
    }
  lab_0x4c1d71:;
    int64_t v6 = v3; // 0x4c1d75
    int64_t v7 = v1; // 0x4c1d75
    if ((v1 & 4) != 0) {
        // 0x4c1dd8
        *(int32_t *)v1 = 0;
        int64_t result; // 0x4c1d60
        return result;
    }
    goto lab_0x4c1d77;
  lab_0x4c1dc0:
    // 0x4c1dc0
    *(int16_t *)v2 = 0;
    int64_t v13 = v2 + 2; // 0x4c1dc5
    v6 = v4;
    v7 = v13;
    if ((v13 & 4) != 0) {
        // 0x4c1dd8
        int64_t v14; // 0x4c1d60
        int64_t v15 = v14;
        *(int32_t *)v15 = 0;
        int64_t result2; // 0x4c1d60
        return result2;
    }
    goto lab_0x4c1d77;
  lab_0x4c1d77:;
    uint64_t v8 = v6 / 8 % 0x20000000; // 0x4c1d7b
    __asm_rep_stosq_memset((char *)v7, 0, v8);
    bool v9; // 0x4c1d60
    int64_t v10 = v8 * (v9 ? -8 : 8) + v7; // 0x4c1d81
    int64_t v11 = v10; // 0x4c1d84
    if ((v6 & 4) != 0) {
        // 0x4c1d86
        *(int32_t *)v10 = 0;
        v11 = v10 + 4;
    }
    int64_t v12 = v11; // 0x4c1d93
    if ((v6 & 2) != 0) {
        // 0x4c1d95
        *(int16_t *)v11 = 0;
        v12 = v11 + 2;
    }
    if (v6 % 2 != 0) {
        // 0x4c1da3
        *(char *)v12 = 0;
    }
    // 0x4c1da6
    return 0;
}

// Address range: 0x4c6890 - 0x4c690e
int64_t function_4c6890(int64_t a1) {
    // 0x4c6890
    int64_t v1; // 0x4c6890
    int64_t v2; // 0x4c6890
    int64_t v3; // 0x4c6890
    int64_t v4; // 0x4c6890
    if (a1 % 2 != 0) {
        // 0x4c68e0
        *(char *)a1 = 0;
        int64_t v5 = a1 + 1; // 0x4c68e3
        v3 = 91;
        v1 = v5;
        v4 = 89;
        v2 = v5;
        if ((v5 & 2) == 0) {
            goto lab_0x4c68a1;
        } else {
            goto lab_0x4c68f0;
        }
    } else {
        // 0x4c689b
        v3 = 92;
        v1 = a1;
        v4 = 90;
        v2 = a1;
        if ((a1 & 2) != 0) {
            goto lab_0x4c68f0;
        } else {
            goto lab_0x4c68a1;
        }
    }
  lab_0x4c68a1:;
    int64_t v6 = v3; // 0x4c68a5
    int64_t v7 = v1; // 0x4c68a5
    if ((v1 & 4) != 0) {
        // 0x4c6908
        *(int32_t *)v1 = 0;
        int64_t result; // 0x4c6890
        return result;
    }
    goto lab_0x4c68a7;
  lab_0x4c68f0:
    // 0x4c68f0
    *(int16_t *)v2 = 0;
    int64_t v12 = v2 + 2; // 0x4c68f5
    v6 = v4;
    v7 = v12;
    if ((v12 & 4) != 0) {
        // 0x4c6908
        int64_t v13; // 0x4c6890
        int64_t v14 = v13;
        *(int32_t *)v14 = 0;
        int64_t result2; // 0x4c6890
        return result2;
    }
    goto lab_0x4c68a7;
  lab_0x4c68a7:
    // 0x4c68a7
    __asm_rep_stosq_memset((char *)v7, 0, 11);
    bool v8; // 0x4c6890
    int64_t v9 = v7 + (v8 ? -88 : 88); // 0x4c68b1
    int64_t v10 = v9; // 0x4c68b4
    if ((v6 & 4) != 0) {
        // 0x4c68b6
        *(int32_t *)v9 = 0;
        v10 = v9 + 4;
    }
    int64_t v11 = v10; // 0x4c68c3
    if ((v6 & 2) != 0) {
        // 0x4c68c5
        *(int16_t *)v10 = 0;
        v11 = v10 + 2;
    }
    if (v6 % 2 != 0) {
        // 0x4c68d3
        *(char *)v11 = 0;
    }
    // 0x4c68d6
    return 0;
}

// Address range: 0x4cb410 - 0x4cb48e
int64_t function_4cb410(int64_t a1) {
    // 0x4cb410
    int64_t v1; // 0x4cb410
    int64_t v2; // 0x4cb410
    int64_t v3; // 0x4cb410
    int64_t v4; // 0x4cb410
    if (a1 % 2 != 0) {
        // 0x4cb460
        *(char *)a1 = 0;
        int64_t v5 = a1 + 1; // 0x4cb463
        v3 = 91;
        v1 = v5;
        v4 = 89;
        v2 = v5;
        if ((v5 & 2) == 0) {
            goto lab_0x4cb421;
        } else {
            goto lab_0x4cb470;
        }
    } else {
        // 0x4cb41b
        v3 = 92;
        v1 = a1;
        v4 = 90;
        v2 = a1;
        if ((a1 & 2) != 0) {
            goto lab_0x4cb470;
        } else {
            goto lab_0x4cb421;
        }
    }
  lab_0x4cb421:;
    int64_t v6 = v3; // 0x4cb425
    int64_t v7 = v1; // 0x4cb425
    if ((v1 & 4) != 0) {
        // 0x4cb488
        *(int32_t *)v1 = 0;
        int64_t result; // 0x4cb410
        return result;
    }
    goto lab_0x4cb427;
  lab_0x4cb470:
    // 0x4cb470
    *(int16_t *)v2 = 0;
    int64_t v12 = v2 + 2; // 0x4cb475
    v6 = v4;
    v7 = v12;
    if ((v12 & 4) != 0) {
        // 0x4cb488
        int64_t v13; // 0x4cb410
        int64_t v14 = v13;
        *(int32_t *)v14 = 0;
        int64_t result2; // 0x4cb410
        return result2;
    }
    goto lab_0x4cb427;
  lab_0x4cb427:
    // 0x4cb427
    __asm_rep_stosq_memset((char *)v7, 0, 11);
    bool v8; // 0x4cb410
    int64_t v9 = v7 + (v8 ? -88 : 88); // 0x4cb431
    int64_t v10 = v9; // 0x4cb434
    if ((v6 & 4) != 0) {
        // 0x4cb436
        *(int32_t *)v9 = 0;
        v10 = v9 + 4;
    }
    int64_t v11 = v10; // 0x4cb443
    if ((v6 & 2) != 0) {
        // 0x4cb445
        *(int16_t *)v10 = 0;
        v11 = v10 + 2;
    }
    if (v6 % 2 != 0) {
        // 0x4cb453
        *(char *)v11 = 0;
    }
    // 0x4cb456
    return 0;
}

// Address range: 0x4ccc30 - 0x4cccae
int64_t function_4ccc30(int64_t a1) {
    // 0x4ccc30
    int64_t v1; // 0x4ccc30
    int64_t v2; // 0x4ccc30
    int64_t v3; // 0x4ccc30
    int64_t v4; // 0x4ccc30
    if (a1 % 2 != 0) {
        // 0x4ccc80
        *(char *)a1 = 0;
        int64_t v5 = a1 + 1; // 0x4ccc83
        v3 = 107;
        v1 = v5;
        v4 = 105;
        v2 = v5;
        if ((v5 & 2) == 0) {
            goto lab_0x4ccc41;
        } else {
            goto lab_0x4ccc90;
        }
    } else {
        // 0x4ccc3b
        v3 = 108;
        v1 = a1;
        v4 = 106;
        v2 = a1;
        if ((a1 & 2) != 0) {
            goto lab_0x4ccc90;
        } else {
            goto lab_0x4ccc41;
        }
    }
  lab_0x4ccc41:;
    int64_t v6 = v3; // 0x4ccc45
    int64_t v7 = v1; // 0x4ccc45
    if ((v1 & 4) != 0) {
        // 0x4ccca8
        *(int32_t *)v1 = 0;
        int64_t result; // 0x4ccc30
        return result;
    }
    goto lab_0x4ccc47;
  lab_0x4ccc90:
    // 0x4ccc90
    *(int16_t *)v2 = 0;
    int64_t v12 = v2 + 2; // 0x4ccc95
    v6 = v4;
    v7 = v12;
    if ((v12 & 4) != 0) {
        // 0x4ccca8
        int64_t v13; // 0x4ccc30
        int64_t v14 = v13;
        *(int32_t *)v14 = 0;
        int64_t result2; // 0x4ccc30
        return result2;
    }
    goto lab_0x4ccc47;
  lab_0x4ccc47:
    // 0x4ccc47
    __asm_rep_stosq_memset((char *)v7, 0, 13);
    bool v8; // 0x4ccc30
    int64_t v9 = v7 + (v8 ? -104 : 104); // 0x4ccc51
    int64_t v10 = v9; // 0x4ccc54
    if ((v6 & 4) != 0) {
        // 0x4ccc56
        *(int32_t *)v9 = 0;
        v10 = v9 + 4;
    }
    int64_t v11 = v10; // 0x4ccc63
    if ((v6 & 2) != 0) {
        // 0x4ccc65
        *(int16_t *)v10 = 0;
        v11 = v10 + 2;
    }
    if (v6 % 2 != 0) {
        // 0x4ccc73
        *(char *)v11 = 0;
    }
    // 0x4ccc76
    return 0;
}

// Address range: 0x4cdd20 - 0x4cdd9e
int64_t function_4cdd20(int64_t a1) {
    // 0x4cdd20
    int64_t v1; // 0x4cdd20
    int64_t v2; // 0x4cdd20
    int64_t v3; // 0x4cdd20
    int64_t v4; // 0x4cdd20
    if (a1 % 2 != 0) {
        // 0x4cdd70
        *(char *)a1 = 0;
        int64_t v5 = a1 + 1; // 0x4cdd73
        v3 = 215;
        v1 = v5;
        v4 = 213;
        v2 = v5;
        if ((v5 & 2) == 0) {
            goto lab_0x4cdd31;
        } else {
            goto lab_0x4cdd80;
        }
    } else {
        // 0x4cdd2b
        v3 = 216;
        v1 = a1;
        v4 = 214;
        v2 = a1;
        if ((a1 & 2) != 0) {
            goto lab_0x4cdd80;
        } else {
            goto lab_0x4cdd31;
        }
    }
  lab_0x4cdd31:;
    int64_t v6 = v3; // 0x4cdd35
    int64_t v7 = v1; // 0x4cdd35
    if ((v1 & 4) != 0) {
        // 0x4cdd98
        *(int32_t *)v1 = 0;
        int64_t result; // 0x4cdd20
        return result;
    }
    goto lab_0x4cdd37;
  lab_0x4cdd80:
    // 0x4cdd80
    *(int16_t *)v2 = 0;
    int64_t v13 = v2 + 2; // 0x4cdd85
    v6 = v4;
    v7 = v13;
    if ((v13 & 4) != 0) {
        // 0x4cdd98
        int64_t v14; // 0x4cdd20
        int64_t v15 = v14;
        *(int32_t *)v15 = 0;
        int64_t result2; // 0x4cdd20
        return result2;
    }
    goto lab_0x4cdd37;
  lab_0x4cdd37:;
    uint64_t v8 = v6 / 8 % 0x20000000; // 0x4cdd3b
    __asm_rep_stosq_memset((char *)v7, 0, v8);
    bool v9; // 0x4cdd20
    int64_t v10 = v8 * (v9 ? -8 : 8) + v7; // 0x4cdd41
    int64_t v11 = v10; // 0x4cdd44
    if ((v6 & 4) != 0) {
        // 0x4cdd46
        *(int32_t *)v10 = 0;
        v11 = v10 + 4;
    }
    int64_t v12 = v11; // 0x4cdd53
    if ((v6 & 2) != 0) {
        // 0x4cdd55
        *(int16_t *)v11 = 0;
        v12 = v11 + 2;
    }
    if (v6 % 2 != 0) {
        // 0x4cdd63
        *(char *)v12 = 0;
    }
    // 0x4cdd66
    return 0;
}

// Address range: 0x4cf010 - 0x4cf08e
int64_t function_4cf010(int64_t a1) {
    // 0x4cf010
    int64_t v1; // 0x4cf010
    int64_t v2; // 0x4cf010
    int64_t v3; // 0x4cf010
    int64_t v4; // 0x4cf010
    if (a1 % 2 != 0) {
        // 0x4cf060
        *(char *)a1 = 0;
        int64_t v5 = a1 + 1; // 0x4cf063
        v3 = 263;
        v1 = v5;
        v4 = 261;
        v2 = v5;
        if ((v5 & 2) == 0) {
            goto lab_0x4cf021;
        } else {
            goto lab_0x4cf070;
        }
    } else {
        // 0x4cf01b
        v3 = 264;
        v1 = a1;
        v4 = 262;
        v2 = a1;
        if ((a1 & 2) != 0) {
            goto lab_0x4cf070;
        } else {
            goto lab_0x4cf021;
        }
    }
  lab_0x4cf021:;
    int64_t v6 = v3; // 0x4cf025
    int64_t v7 = v1; // 0x4cf025
    if ((v1 & 4) != 0) {
        // 0x4cf088
        *(int32_t *)v1 = 0;
        int64_t result; // 0x4cf010
        return result;
    }
    goto lab_0x4cf027;
  lab_0x4cf070:
    // 0x4cf070
    *(int16_t *)v2 = 0;
    int64_t v13 = v2 + 2; // 0x4cf075
    v6 = v4;
    v7 = v13;
    if ((v13 & 4) != 0) {
        // 0x4cf088
        int64_t v14; // 0x4cf010
        int64_t v15 = v14;
        *(int32_t *)v15 = 0;
        int64_t result2; // 0x4cf010
        return result2;
    }
    goto lab_0x4cf027;
  lab_0x4cf027:;
    uint64_t v8 = v6 / 8 % 0x20000000; // 0x4cf02b
    __asm_rep_stosq_memset((char *)v7, 0, v8);
    bool v9; // 0x4cf010
    int64_t v10 = v8 * (v9 ? -8 : 8) + v7; // 0x4cf031
    int64_t v11 = v10; // 0x4cf034
    if ((v6 & 4) != 0) {
        // 0x4cf036
        *(int32_t *)v10 = 0;
        v11 = v10 + 4;
    }
    int64_t v12 = v11; // 0x4cf043
    if ((v6 & 2) != 0) {
        // 0x4cf045
        *(int16_t *)v11 = 0;
        v12 = v11 + 2;
    }
    if (v6 % 2 != 0) {
        // 0x4cf053
        *(char *)v12 = 0;
    }
    // 0x4cf056
    return 0;
}

// Address range: 0x4cf940 - 0x4cf9be
int64_t function_4cf940(int64_t a1) {
    // 0x4cf940
    int64_t v1; // 0x4cf940
    int64_t v2; // 0x4cf940
    int64_t v3; // 0x4cf940
    int64_t v4; // 0x4cf940
    if (a1 % 2 != 0) {
        // 0x4cf990
        *(char *)a1 = 0;
        int64_t v5 = a1 + 1; // 0x4cf993
        v3 = (int64_t)&g1 & -256 | 71;
        v1 = v5;
        v4 = (int64_t)&g1 & -256 | 71;
        v2 = v5;
        if ((v5 & 2) == 0) {
            goto lab_0x4cf951;
        } else {
            goto lab_0x4cf9a0;
        }
    } else {
        // 0x4cf94b
        v3 = (int64_t)&g1;
        v1 = a1;
        v4 = (int64_t)&g1;
        v2 = a1;
        if ((a1 & 2) != 0) {
            goto lab_0x4cf9a0;
        } else {
            goto lab_0x4cf951;
        }
    }
  lab_0x4cf951:;
    int64_t v6 = v3; // 0x4cf955
    int64_t v7 = v1; // 0x4cf955
    if ((v1 & 4) != 0) {
        // 0x4cf9b8
        *(int32_t *)v1 = 0;
        int64_t result; // 0x4cf940
        return result;
    }
    goto lab_0x4cf957;
  lab_0x4cf9a0:
    // 0x4cf9a0
    *(int16_t *)v2 = 0;
    int64_t v13 = v2 + 2; // 0x4cf9a5
    v6 = v4 + 0xfffffffe & 0xffffffff;
    v7 = v13;
    if ((v13 & 4) != 0) {
        // 0x4cf9b8
        int64_t v14; // 0x4cf940
        int64_t v15 = v14;
        *(int32_t *)v15 = 0;
        int64_t result2; // 0x4cf940
        return result2;
    }
    goto lab_0x4cf957;
  lab_0x4cf957:;
    uint64_t v8 = v6 / 8 % 0x20000000; // 0x4cf95b
    __asm_rep_stosq_memset((char *)v7, 0, v8);
    bool v9; // 0x4cf940
    int64_t v10 = v8 * (v9 ? -8 : 8) + v7; // 0x4cf961
    int64_t v11 = v10; // 0x4cf964
    if ((v6 & 4) != 0) {
        // 0x4cf966
        *(int32_t *)v10 = 0;
        v11 = v10 + 4;
    }
    int64_t v12 = v11; // 0x4cf973
    if ((v6 & 2) != 0) {
        // 0x4cf975
        *(int16_t *)v11 = 0;
        v12 = v11 + 2;
    }
    if (v6 % 2 != 0) {
        // 0x4cf983
        *(char *)v12 = 0;
    }
    // 0x4cf986
    return 0;
}

// Address range: 0x4cffb0 - 0x4d002e
int64_t function_4cffb0(int64_t a1) {
    // 0x4cffb0
    int64_t v1; // 0x4cffb0
    int64_t v2; // 0x4cffb0
    int64_t v3; // 0x4cffb0
    int64_t v4; // 0x4cffb0
    if (a1 % 2 != 0) {
        // 0x4d0000
        *(char *)a1 = 0;
        int64_t v5 = a1 + 1; // 0x4d0003
        v3 = 275;
        v1 = v5;
        v4 = 273;
        v2 = v5;
        if ((v5 & 2) == 0) {
            goto lab_0x4cffc1;
        } else {
            goto lab_0x4d0010;
        }
    } else {
        // 0x4cffbb
        v3 = 276;
        v1 = a1;
        v4 = 274;
        v2 = a1;
        if ((a1 & 2) != 0) {
            goto lab_0x4d0010;
        } else {
            goto lab_0x4cffc1;
        }
    }
  lab_0x4cffc1:;
    int64_t v6 = v3; // 0x4cffc5
    int64_t v7 = v1; // 0x4cffc5
    if ((v1 & 4) != 0) {
        // 0x4d0028
        *(int32_t *)v1 = 0;
        int64_t result; // 0x4cffb0
        return result;
    }
    goto lab_0x4cffc7;
  lab_0x4d0010:
    // 0x4d0010
    *(int16_t *)v2 = 0;
    int64_t v12 = v2 + 2; // 0x4d0015
    v6 = v4;
    v7 = v12;
    if ((v12 & 4) != 0) {
        // 0x4d0028
        int64_t v13; // 0x4cffb0
        int64_t v14 = v13;
        *(int32_t *)v14 = 0;
        int64_t result2; // 0x4cffb0
        return result2;
    }
    goto lab_0x4cffc7;
  lab_0x4cffc7:
    // 0x4cffc7
    __asm_rep_stosq_memset((char *)v7, 0, 34);
    bool v8; // 0x4cffb0
    int64_t v9 = v7 + (v8 ? -272 : 272); // 0x4cffd1
    int64_t v10 = v9; // 0x4cffd4
    if ((v6 & 4) != 0) {
        // 0x4cffd6
        *(int32_t *)v9 = 0;
        v10 = v9 + 4;
    }
    int64_t v11 = v10; // 0x4cffe3
    if ((v6 & 2) != 0) {
        // 0x4cffe5
        *(int16_t *)v10 = 0;
        v11 = v10 + 2;
    }
    if (v6 % 2 != 0) {
        // 0x4cfff3
        *(char *)v11 = 0;
    }
    // 0x4cfff6
    return 0;
}

// Address range: 0x4d19d0 - 0x4d1a4e
int64_t function_4d19d0(int64_t a1) {
    // 0x4d19d0
    int64_t v1; // 0x4d19d0
    int64_t v2; // 0x4d19d0
    int64_t v3; // 0x4d19d0
    int64_t v4; // 0x4d19d0
    if (a1 % 2 != 0) {
        // 0x4d1a20
        *(char *)a1 = 0;
        int64_t v5 = a1 + 1; // 0x4d1a23
        v3 = 87;
        v1 = v5;
        v4 = 85;
        v2 = v5;
        if ((v5 & 2) == 0) {
            goto lab_0x4d19e1;
        } else {
            goto lab_0x4d1a30;
        }
    } else {
        // 0x4d19db
        v3 = 88;
        v1 = a1;
        v4 = 86;
        v2 = a1;
        if ((a1 & 2) != 0) {
            goto lab_0x4d1a30;
        } else {
            goto lab_0x4d19e1;
        }
    }
  lab_0x4d19e1:;
    int64_t v6 = v3; // 0x4d19e5
    int64_t v7 = v1; // 0x4d19e5
    if ((v1 & 4) != 0) {
        // 0x4d1a48
        *(int32_t *)v1 = 0;
        int64_t result; // 0x4d19d0
        return result;
    }
    goto lab_0x4d19e7;
  lab_0x4d1a30:
    // 0x4d1a30
    *(int16_t *)v2 = 0;
    int64_t v13 = v2 + 2; // 0x4d1a35
    v6 = v4;
    v7 = v13;
    if ((v13 & 4) != 0) {
        // 0x4d1a48
        int64_t v14; // 0x4d19d0
        int64_t v15 = v14;
        *(int32_t *)v15 = 0;
        int64_t result2; // 0x4d19d0
        return result2;
    }
    goto lab_0x4d19e7;
  lab_0x4d19e7:;
    uint64_t v8 = v6 / 8 % 0x20000000; // 0x4d19eb
    __asm_rep_stosq_memset((char *)v7, 0, v8);
    bool v9; // 0x4d19d0
    int64_t v10 = v8 * (v9 ? -8 : 8) + v7; // 0x4d19f1
    int64_t v11 = v10; // 0x4d19f4
    if ((v6 & 4) != 0) {
        // 0x4d19f6
        *(int32_t *)v10 = 0;
        v11 = v10 + 4;
    }
    int64_t v12 = v11; // 0x4d1a03
    if ((v6 & 2) != 0) {
        // 0x4d1a05
        *(int16_t *)v11 = 0;
        v12 = v11 + 2;
    }
    if (v6 % 2 != 0) {
        // 0x4d1a13
        *(char *)v12 = 0;
    }
    // 0x4d1a16
    return 0;
}

// Address range: 0x4d2af0 - 0x4d2b6e
int64_t function_4d2af0(int64_t a1) {
    // 0x4d2af0
    int64_t v1; // 0x4d2af0
    int64_t v2; // 0x4d2af0
    int64_t v3; // 0x4d2af0
    int64_t v4; // 0x4d2af0
    if (a1 % 2 != 0) {
        // 0x4d2b40
        *(char *)a1 = 0;
        int64_t v5 = a1 + 1; // 0x4d2b43
        v3 = 127;
        v1 = v5;
        v4 = 125;
        v2 = v5;
        if ((v5 & 2) == 0) {
            goto lab_0x4d2b01;
        } else {
            goto lab_0x4d2b50;
        }
    } else {
        // 0x4d2afb
        v3 = 128;
        v1 = a1;
        v4 = 126;
        v2 = a1;
        if ((a1 & 2) != 0) {
            goto lab_0x4d2b50;
        } else {
            goto lab_0x4d2b01;
        }
    }
  lab_0x4d2b01:;
    int64_t v6 = v3; // 0x4d2b05
    int64_t v7 = v1; // 0x4d2b05
    if ((v1 & 4) != 0) {
        // 0x4d2b68
        *(int32_t *)v1 = 0;
        int64_t result; // 0x4d2af0
        return result;
    }
    goto lab_0x4d2b07;
  lab_0x4d2b50:
    // 0x4d2b50
    *(int16_t *)v2 = 0;
    int64_t v13 = v2 + 2; // 0x4d2b55
    v6 = v4;
    v7 = v13;
    if ((v13 & 4) != 0) {
        // 0x4d2b68
        int64_t v14; // 0x4d2af0
        int64_t v15 = v14;
        *(int32_t *)v15 = 0;
        int64_t result2; // 0x4d2af0
        return result2;
    }
    goto lab_0x4d2b07;
  lab_0x4d2b07:;
    uint64_t v8 = v6 / 8 % 0x20000000; // 0x4d2b0b
    __asm_rep_stosq_memset((char *)v7, 0, v8);
    bool v9; // 0x4d2af0
    int64_t v10 = v8 * (v9 ? -8 : 8) + v7; // 0x4d2b11
    int64_t v11 = v10; // 0x4d2b14
    if ((v6 & 4) != 0) {
        // 0x4d2b16
        *(int32_t *)v10 = 0;
        v11 = v10 + 4;
    }
    int64_t v12 = v11; // 0x4d2b23
    if ((v6 & 2) != 0) {
        // 0x4d2b25
        *(int16_t *)v11 = 0;
        v12 = v11 + 2;
    }
    if (v6 % 2 != 0) {
        // 0x4d2b33
        *(char *)v12 = 0;
    }
    // 0x4d2b36
    return 0;
}
