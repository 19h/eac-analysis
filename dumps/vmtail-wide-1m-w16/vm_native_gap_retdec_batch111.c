/*
 * Targeted RetDec C for native executable gap queue batch 111.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x48d35d-0x48d385 rank=137 name=fcn.0048d35d kind=r2_discovered bytes=40 uncovered=40
 *   0x48dbb8-0x48dbe0 rank=138 name=fcn.0048dbb8 kind=r2_discovered bytes=40 uncovered=40
 *   0x498d10-0x498d38 rank=139 name=fcn.00498d10 kind=r2_discovered bytes=40 uncovered=40
 *   0x4ba4e0-0x4ba508 rank=140 name=fcn.004ba4e0 kind=r2_discovered bytes=40 uncovered=40
 *   0x4c4620-0x4c4648 rank=141 name=fcn.004c4620 kind=r2_discovered bytes=40 uncovered=40
 *   0x4c4660-0x4c4688 rank=142 name=fcn.004c4660 kind=r2_discovered bytes=40 uncovered=40
 *   0x4dadd1-0x4dadf9 rank=143 name=fcn.004dadd1 kind=r2_discovered bytes=40 uncovered=40
 *   0x4ee870-0x4ee898 rank=144 name=sym.ZydisRegisterClassGetWidth kind=symbol_named bytes=40 uncovered=40
 *   0x518d20-0x518d48 rank=145 name=method.std::__cxx11::collate_char_.virtual_32 kind=native_discovered bytes=40 uncovered=40
 *   0x5472f0-0x547318 rank=146 name=fcn.005472f0 kind=r2_discovered bytes=40 uncovered=40
 *   0x5473b0-0x5473d8 rank=147 name=fcn.005473b0 kind=r2_discovered bytes=40 uncovered=40
 *   0x54dd30-0x54dd58 rank=148 name=fcn.0054dd30 kind=r2_discovered bytes=40 uncovered=40
 *   0x551c60-0x551c88 rank=149 name=method.std::collate_char_.virtual_32 kind=native_discovered bytes=40 uncovered=40
 *   0x566e20-0x566e48 rank=150 name=fcn.00566e20 kind=r2_discovered bytes=40 uncovered=40
 *   0x566ee0-0x566f08 rank=151 name=fcn.00566ee0 kind=r2_discovered bytes=40 uncovered=40
 *   0x20d68-0x20d8f rank=152 name=case.default.0x4ec543 kind=native_discovered bytes=39 uncovered=39
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

int64_t function_20d68(int64_t a1);
int64_t function_2509a();
int64_t function_48d35d(int64_t str, int64_t n);
int64_t function_48d385();
int64_t function_48db9a();
int64_t function_48dbb8(void);
int64_t function_48dbc2(int64_t a1, int64_t result);
int64_t function_498d10(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4ba440();
int64_t function_4ba4e0(int64_t a1);
int64_t function_4c4620(int64_t a1);
int64_t function_4c4660(int64_t a1);
int64_t function_4dadd1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_518d20(int64_t a1, uint64_t a2, uint64_t a3);
int64_t function_5472e0();
int64_t function_5472f0(int64_t a1);
int64_t function_5473b0(int64_t a1);
int64_t function_54dd30(int64_t a1);
int64_t function_5509d0();
int64_t function_551c60(int64_t a1, uint64_t a2, uint64_t a3);
int64_t function_566e20(int64_t a1);
int64_t function_566ee0(int64_t a1);

// Address range: 0x20d68 - 0x20d8f
int64_t function_20d68(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 + 16);
    uint32_t result = *v1;
    *v1 = result - 1;
    if (result >= 0 == (result != 0)) {
        // 0x20d8e
        return result;
    }
    // 0x20d89
    return function_5509d0();
}

// Address range: 0x48d35d - 0x48d385
int64_t function_48d35d(int64_t str, int64_t n) {
    int64_t * found_byte_pos = memchr((int64_t *)str, 0, (int32_t)n); // 0x48d36e
    return found_byte_pos == NULL ? n : (int64_t)found_byte_pos - str;
}

// Address range: 0x48dbb8 - 0x48dbc2
int64_t function_48dbb8(void) {
    // 0x48dbb8
    function_48d385();
    return function_48db9a();
}

// Address range: 0x48dbc2 - 0x48dbe0
int64_t function_48dbc2(int64_t a1, int64_t result) {
    // 0x48dbc2
    if (result == 0) {
        // 0x48dbdf
        return result;
    }
    int64_t v1 = 0; // 0x48dbc7
    int32_t * v2 = (int32_t *)(4 * v1 + a1); // 0x48dbc9
    int32_t v3 = *v2; // 0x48dbc9
    if (v3 < 123) {
        // 0x48dbd4
        *v2 = v3 - 32;
    }
    // 0x48dbda
    v1++;
    while (v1 != result) {
        // 0x48dbc9
        v2 = (int32_t *)(4 * v1 + a1);
        v3 = *v2;
        if (v3 < 123) {
            // 0x48dbd4
            *v2 = v3 - 32;
        }
        // 0x48dbda
        v1++;
    }
    // 0x48dbdf
    return result;
}

// Address range: 0x498d10 - 0x498d37
int64_t function_498d10(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x498d10
    if ((int32_t)a3 == 1) {
        int64_t result = (int32_t)a2 != 2 ? -a2 & 0xffffffff : 0xffffffff; // 0x498d2c
        *(char *)(a4 + 1) = (char)result;
        return result;
    }
    // 0x498d15
    *(char *)a4 = (char)a1;
    *(char *)(a4 + 1) = (char)a2;
    int64_t result2; // 0x498d10
    return result2;
}

// Address range: 0x4ba4e0 - 0x4ba508
int64_t function_4ba4e0(int64_t a1) {
    int64_t result = function_4ba440(); // 0x4ba4e3
    if (*(int32_t *)result == 0) {
        // 0x4ba508
        return result;
    }
    int64_t result2 = result; // 0x4ba4f8
    while (*(int16_t *)(result2 + 4) != (int16_t)a1) {
        // 0x4ba4f8
        result2 += 16;
        if (*(int32_t *)result2 == 0) {
            // break -> 0x4ba508
            break;
        }
    }
    // 0x4ba508
    return result2;
}

// Address range: 0x4c4620 - 0x4c4646
int64_t function_4c4620(int64_t a1) {
    int64_t result; // 0x4c4620
    if (a1 != 0) {
        int64_t v1 = *(int64_t *)(a1 + 48); // 0x4c462d
        result = v1 == 0 ? 0xffffc100 : v1;
    }
    // 0x4c4636
    return result;
}

// Address range: 0x4c4660 - 0x4c4686
int64_t function_4c4660(int64_t a1) {
    int64_t result; // 0x4c4660
    if (a1 != 0) {
        int64_t v1 = *(int64_t *)(a1 + 56); // 0x4c466d
        result = v1 == 0 ? 0xffffc100 : v1;
    }
    // 0x4c4676
    return result;
}

// Address range: 0x4dadd1 - 0x4dadf9
int64_t function_4dadd1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4dadd1
    int64_t v1; // 0x4dadd1
    int32_t * v2 = (int32_t *)(v1 - 117); // 0x4dadd1
    *v2 = *v2 - 1;
    int64_t result = (v1 & -136) - __readfsqword(40); // 0x4dadd7
    if (result == 0) {
        // 0x4dade2
        return result;
    }
    // 0x4dadf4
    __stack_chk_fail();
    return (int64_t)&g4;
}

// Address range: 0x4ee870 - 0x4ee892
int64_t ZydisRegisterClassGetWidth(int64_t a1, int64_t a2) {
    // 0x4ee870
    if ((int32_t)a2 >= 20) {
        // 0x4ee898
        return 0;
    }
    // 0x4ee87b
    if ((int32_t)a1 != 0) {
        // 0x4ee898
        return (int64_t)&g1;
    }
    uint16_t result = *(int16_t *)(12 * (a2 & 0xffffffff) + (int64_t)&g1 + 10); // 0x4ee88c
    return result;
}

// Address range: 0x518d20 - 0x518d46
// From class:    *NSt13__facet_shims12_GLOBAL__N_112collate_shimIcEE
// Type:          virtual member function
int64_t function_518d20(int64_t a1, uint64_t a2, uint64_t a3) {
    // 0x518d20
    if (a2 >= a3) {
        // 0x518d44
        return 0;
    }
    int64_t v1 = a2; // 0x518d25
    uint64_t v2 = 0;
    char v3 = *(char *)v1; // 0x518d30
    v1++;
    int64_t result = (v2 / 0x200000000000000 | 128 * v2) + (int64_t)v3; // 0x518d3c
    while (v1 != a3) {
        // 0x518d30
        v2 = result;
        v3 = *(char *)v1;
        v1++;
        result = (v2 / 0x200000000000000 | 128 * v2) + (int64_t)v3;
    }
    // 0x518d44
    return result;
}

// Address range: 0x5472f0 - 0x547318
// From class:    std::logic_error
// Type:          constructor
int64_t function_5472f0(int64_t a1) {
    // 0x5472f0
    *(int64_t *)a1 = (int64_t)&g2;
    return function_5472e0(a1 + 8);
}

// Address range: 0x5473b0 - 0x5473d8
// From class:    std::runtime_error
// Type:          constructor
int64_t function_5473b0(int64_t a1) {
    // 0x5473b0
    *(int64_t *)a1 = (int64_t)&g3;
    return function_5472e0(a1 + 8);
}

// Address range: 0x54dd30 - 0x54dd58
int64_t function_54dd30(int64_t a1) {
    // 0x54dd30
    if (*(int64_t *)(a1 + 8) - a1 < 2) {
        // 0x54dd56
        return 0;
    }
    int64_t result = 0; // 0x54dd48
    int64_t v1; // 0x54dd30
    if ((int16_t)v1 == (int16_t)a1) {
        // 0x54dd4a
        *(int64_t *)a1 = a1 + 2;
        result = 1;
    }
    // 0x54dd56
    return result;
}

// Address range: 0x551c60 - 0x551c86
// From class:    std::collate_byname<char>
// Type:          virtual member function
int64_t function_551c60(int64_t a1, uint64_t a2, uint64_t a3) {
    // 0x551c60
    if (a2 >= a3) {
        // 0x551c84
        return 0;
    }
    int64_t v1 = a2; // 0x551c65
    uint64_t v2 = 0;
    char v3 = *(char *)v1; // 0x551c70
    v1++;
    int64_t result = (v2 / 0x200000000000000 | 128 * v2) + (int64_t)v3; // 0x551c7c
    while (v1 != a3) {
        // 0x551c70
        v2 = result;
        v3 = *(char *)v1;
        v1++;
        result = (v2 / 0x200000000000000 | 128 * v2) + (int64_t)v3;
    }
    // 0x551c84
    return result;
}

// Address range: 0x566e20 - 0x566e48
// From class:    std::logic_error
// Type:          constructor
int64_t function_566e20(int64_t a1) {
    // 0x566e20
    *(int64_t *)a1 = (int64_t)&g2;
    return function_2509a(a1 + 8);
}

// Address range: 0x566ee0 - 0x566f08
// From class:    std::runtime_error
// Type:          constructor
int64_t function_566ee0(int64_t a1) {
    // 0x566ee0
    *(int64_t *)a1 = (int64_t)&g3;
    return function_2509a(a1 + 8);
}
