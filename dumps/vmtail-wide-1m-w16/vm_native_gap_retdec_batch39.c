/*
 * Targeted RetDec C for native executable gap queue batch 39.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x6bf2a-0x6bfdb rank=- name=- kind=- bytes=- uncovered=-
 *   0x4a0650-0x4a0701 rank=- name=- kind=- bytes=- uncovered=-
 *   0x54e9d0-0x54ea81 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1cbf51-0x1cc001 rank=- name=- kind=- bytes=- uncovered=-
 *   0x49a2d0-0x49a380 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4221c-0x422cb rank=- name=- kind=- bytes=- uncovered=-
 *   0x4bee5-0x4bf94 rank=- name=- kind=- bytes=- uncovered=-
 *   0x6b28c-0x6b33b rank=- name=- kind=- bytes=- uncovered=-
 *   0x6b33c-0x6b3eb rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b0be0-0x4b0c8f rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b0fc0-0x4b106f rank=- name=- kind=- bytes=- uncovered=-
 *   0x5289c-0x5294a rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b8370-0x4b841e rank=- name=- kind=- bytes=- uncovered=-
 *   0x4ba380-0x4ba42e rank=- name=- kind=- bytes=- uncovered=-
 *   0x548e60-0x548f0e rank=- name=- kind=- bytes=- uncovered=-
 *   0x4482e-0x448db rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_1cbf51(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10);
int64_t function_25856();
int64_t function_2601b();
int64_t function_29cea();
int64_t function_29cf4();
int64_t function_29ef7();
int64_t function_4221c(int64_t a1);
int64_t function_4482e(int64_t a1, int64_t a2);
int64_t function_498bd0();
int64_t function_498d40();
int64_t function_49a2d0(int64_t a1);
int64_t function_49e770();
int64_t function_49e8b0();
int64_t function_49ebd0();
int64_t function_4a0650(int64_t a1);
int64_t function_4b08f0();
int64_t function_4b0be0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4b0d80();
int64_t function_4b0fa0();
int64_t function_4b0fc0(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_4b81c0();
int64_t function_4b8270();
int64_t function_4b8370(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4ba380(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5);
int64_t function_4ba4b0();
int64_t function_4bee5(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4eeb50();
int64_t function_4efd30();
int64_t function_527a4();
int64_t function_52876();
int64_t function_5289c(int64_t result, uint64_t a2, int64_t a3);
int64_t function_548dd0();
int64_t function_548e60(int64_t a1, int64_t a2, int64_t a3);
int64_t function_548ea0(int64_t a1);
int64_t function_548ed0(int64_t a1);
int64_t function_548f00(int64_t a1, int64_t a2, int64_t a3);
int64_t function_54dd60();
int64_t function_54e5f0();
int64_t function_54e9d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_564c50();
int64_t function_568980();
int64_t function_568990();
int64_t function_6b28c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_6b33c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_6bf2a(int64_t a1);
int64_t function_729b6();
int64_t function_729ce();
int64_t function_cc59c();

// Address range: 0x4221c - 0x422cb
int64_t function_4221c(int64_t a1) {
    // 0x4221c
    if (a1 == 0) {
        // 0x422c5
        return 0;
    }
    int64_t * v1 = (int64_t *)(a1 + 88); // 0x4222b
    int64_t v2 = *v1; // 0x4222b
    if (v2 == 0 || *(int64_t *)(a1 + 32) == 0 || *(int64_t *)(a1 + 40) == 0) {
        // 0x422c5
        return 0;
    }
    int32_t * v3 = (int32_t *)(a1 + 20); // 0x4224c
    int64_t result = 0; // 0x42250
    if (*v3 == 1) {
        // 0x42252
        *v1 = 0;
        __asm_rep_stosd_memset((char *)v2, 0, 8);
        __asm_rep_stosd_memset((char *)(v2 + 32), 0, 8);
        __asm_rep_stosd_memset((char *)(v2 + 64), 0, 8);
        *v3 = 0;
        result = 1;
    }
    // 0x422c5
    return result;
}

// Address range: 0x4482e - 0x448db
int64_t function_4482e(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x44842
    int64_t v2 = *v1; // 0x44842
    int64_t * v3 = (int64_t *)(a1 + 16); // 0x44846
    int64_t v4; // 0x4482e
    char v5 = v4;
    if (v2 != *v3) {
        // 0x4484c
        *(char *)v2 = v5;
        int64_t v6 = *v1 + 1; // 0x44852
        *v1 = v6;
        // 0x448c8
        return v6 - 1;
    }
    // 0x44858
    function_25856();
    int64_t v7 = 0; // 0x44877
    if (a1 != 0) {
        // 0x44879
        v7 = function_4efd30(a1);
    }
    // 0x44884
    *(char *)(v2 - a1 + v7) = v5;
    int64_t v8 = function_2601b(v2, *v1, function_2601b(a1, v2, v7) + 1); // 0x448a5
    if (v2 != 0) {
        // 0x448b5
        function_4eeb50(v2);
    }
    // 0x448ba
    *(int64_t *)a1 = v7;
    *v1 = v8;
    *v3 = v7 + a1;
    // 0x448c8
    return *v1 - 1;
}

// Address range: 0x4bee5 - 0x4bf94
int64_t function_4bee5(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4bee5
    if (a2 == a1) {
        // 0x4bf67
        return 48 * (0xaaaaaaaaaaaaaab * (a2 - a1) / 16 & 0xfffffffffffffff) + a3;
    }
    int64_t v1 = a3; // 0x4beee
    int64_t v2 = a1 + 48; // 0x4bef7
    *(int32_t *)v1 = *(int32_t *)a1;
    int64_t * v3 = (int64_t *)(a1 + 8); // 0x4befe
    *(int64_t *)(v1 + 8) = *v3;
    *v3 = (int64_t)&g11;
    int64_t * v4 = (int64_t *)(v1 + 24); // 0x4bf15
    *v4 = 0;
    int64_t * v5 = (int64_t *)(v1 + 32); // 0x4bf1d
    *v5 = 0;
    int64_t * v6 = (int64_t *)(v1 + 16); // 0x4bf25
    *v6 = 0;
    int64_t * v7 = (int64_t *)(a1 + 16); // 0x4bf2d
    *v6 = *v7;
    *v7 = 0;
    int64_t * v8 = (int64_t *)(a1 + 24); // 0x4bf3d
    *v4 = *v8;
    *v8 = *v4;
    int64_t * v9 = (int64_t *)(a1 + 32); // 0x4bf4d
    *v5 = *v9;
    *v9 = *v5;
    *(int64_t *)(v1 + 40) = *(int64_t *)(a1 + 40);
    v1 += 48;
    while (v2 != a2) {
        int64_t v10 = v2;
        v2 = v10 + 48;
        *(int32_t *)v1 = *(int32_t *)v10;
        v3 = (int64_t *)(v10 + 8);
        *(int64_t *)(v1 + 8) = *v3;
        *v3 = (int64_t)&g11;
        v4 = (int64_t *)(v1 + 24);
        *v4 = 0;
        v5 = (int64_t *)(v1 + 32);
        *v5 = 0;
        v6 = (int64_t *)(v1 + 16);
        *v6 = 0;
        v7 = (int64_t *)(v10 + 16);
        *v6 = *v7;
        *v7 = 0;
        v8 = (int64_t *)(v10 + 24);
        *v4 = *v8;
        *v8 = *v4;
        v9 = (int64_t *)(v10 + 32);
        *v5 = *v9;
        *v9 = *v5;
        *(int64_t *)(v1 + 40) = *(int64_t *)(v10 + 40);
        v1 += 48;
    }
    // 0x4bf67
    return 48 * (0xaaaaaaaaaaaaaab * (a2 - a1) / 16 & 0xfffffffffffffff) + a3;
}

// Address range: 0x5289c - 0x5294a
int64_t function_5289c(int64_t result, uint64_t a2, int64_t a3) {
    if (a3 == 0) {
        // 0x5293f
        return result;
    }
    // 0x528b2
    function_52876();
    int64_t * v1 = (int64_t *)(result - 24);
    uint64_t v2 = *v1 + a3; // 0x528cd
    int64_t * v3; // 0x5289c
    int64_t v4; // 0x5289c
    if (v2 > *(int64_t *)(result - 16)) {
        goto lab_0x528d6;
    } else {
        // 0x528e0
        if ((char)function_29cea(result) != 0) {
            goto lab_0x528d6;
        } else {
            // 0x528e0
            v3 = (int64_t *)(result - 48);
            v4 = a2;
            goto lab_0x5291a;
        }
    }
  lab_0x528d6:;
    uint64_t v5 = result;
    int64_t v6 = a3; // 0x528dc
    if (v5 <= a2) {
        int64_t v7 = 4 * *(int64_t *)(v5 - 24) + v5; // 0x528f3
        v6 = v7;
        if (v7 < a2) {
            goto lab_0x5290f;
        } else {
            // 0x528fc
            function_527a4(result, v2, v7);
            v3 = v1;
            v4 = a2 + result - v5;
            goto lab_0x5291a;
        }
    } else {
        goto lab_0x5290f;
    }
  lab_0x5290f:
    // 0x5290f
    function_527a4(result, v2, v6);
    v3 = v1;
    v4 = a2;
    goto lab_0x5291a;
  lab_0x5291a:;
    int64_t v8 = 4 * *v3 + result; // 0x52924
    function_29ef7(v8, v4, a3);
    function_29cf4(v8 - 24, v2);
    // 0x5293f
    return result;
}

// Address range: 0x6b28c - 0x6b33b
int64_t function_6b28c(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x6b2a6
    function_729b6();
    int32_t sock = *(int32_t *)(a1 + 160); // 0x6b2bb
    uint16_t v2 = (int16_t)a2; // 0x6b2c3
    *(int16_t *)(a1 + 250) = v2;
    if (sock != 0) {
        int64_t option_value = v2 / (int16_t)&g6; // bp-64, 0x6b2fd
        setsockopt(sock, SO_DEBUG, 20, &option_value, 16);
    }
    // 0x6b313
    int64_t v3; // bp-72, 0x6b28c
    function_729ce(&v3);
    int64_t result = 0; // 0x6b329
    if (v1 != __readfsqword(40)) {
        // 0x6b32b
        __stack_chk_fail();
        result = (int64_t)&g13;
    }
    // 0x6b330
    return result;
}

// Address range: 0x6b33c - 0x6b3eb
int64_t function_6b33c(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x6b356
    function_729b6();
    int32_t sock = *(int32_t *)(a1 + 160); // 0x6b36b
    uint16_t v2 = (int16_t)a2; // 0x6b373
    *(int16_t *)(a1 + 252) = v2;
    if (sock != 0) {
        int64_t option_value = v2 / (int16_t)&g6; // bp-64, 0x6b3ad
        setsockopt(sock, SO_DEBUG, 21, &option_value, 16);
    }
    // 0x6b3c3
    int64_t v3; // bp-72, 0x6b33c
    function_729ce(&v3);
    int64_t result = 0; // 0x6b3d9
    if (v1 != __readfsqword(40)) {
        // 0x6b3db
        __stack_chk_fail();
        result = (int64_t)&g13;
    }
    // 0x6b3e0
    return result;
}

// Address range: 0x6bf2a - 0x6bfdb
int64_t function_6bf2a(int64_t a1) {
    int64_t * v1 = (int64_t *)a1; // 0x6bf33
    *v1 = 0;
    int64_t * v2 = (int64_t *)(a1 + 16); // 0x6bf3a
    *v2 = 0;
    int64_t * v3 = (int64_t *)(a1 + 24); // 0x6bf42
    *v3 = 0;
    int64_t * v4 = (int64_t *)(a1 + 32); // 0x6bf4a
    *v4 = 0;
    int64_t * v5 = (int64_t *)(a1 + 40); // 0x6bf52
    *v5 = 0;
    int64_t * v6 = (int64_t *)(a1 + 48); // 0x6bf5a
    *v6 = 0;
    int64_t * v7 = (int64_t *)(a1 + 56); // 0x6bf62
    *v7 = 0;
    int64_t * v8 = (int64_t *)(a1 + 64); // 0x6bf6a
    *v8 = 0;
    int64_t * v9 = (int64_t *)(a1 + 72); // 0x6bf72
    *v9 = 0;
    int64_t * v10 = (int64_t *)(a1 + 8); // 0x6bf7a
    *v10 = 8;
    int64_t v11 = function_4efd30(64); // 0x6bf87
    *v1 = v11;
    int64_t v12 = (4 * *v10 - 4 & -8) + v11; // 0x6bfa4
    int64_t v13 = function_4efd30((int64_t)&g4); // 0x6bfa7
    int64_t v14 = v13 + (int64_t)&g4; // 0x6bfac
    *(int64_t *)v12 = v13;
    *v5 = v12;
    *v9 = v12;
    *v3 = v13;
    *v4 = v14;
    *v7 = v13;
    *v8 = v14;
    *v2 = v13;
    *v6 = v13;
    int64_t result; // 0x6bf2a
    return result;
}

// Address range: 0x1cbf51 - 0x1cbffc
int64_t function_1cbf51(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10) {
    // 0x1cbf51
    return function_cc59c();
}

// Address range: 0x49a2d0 - 0x49a37f
int64_t function_49a2d0(int64_t a1) {
    // 0x49a2d0
    int64_t v1; // 0x49a2d0
    function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g1, "=> write change cipher spec", v1);
    *(int32_t *)(a1 + 336) = 20;
    *(int64_t *)(a1 + 344) = 1;
    *(char *)*(int64_t *)(a1 + 328) = 1;
    int32_t * v2 = (int32_t *)(a1 + 8); // 0x49a31a
    *v2 = *v2 + 1;
    int64_t v3 = function_498d40(a1); // 0x49a31e
    int64_t result2 = v3 & 0xffffffff;
    if ((int32_t)v3 != 0) {
        int64_t result = function_49e8b0(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g2, "mbedtls_ssl_write_record", result2); // 0x49a376
        return result;
    }
    // 0x49a329
    function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g3, "<= write change cipher spec", v1);
    return result2;
}

// Address range: 0x4a0650 - 0x4a0701
int64_t function_4a0650(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 96); // 0x4a0651
    int64_t v2 = function_4ba4b0(*(int32_t *)(*v1 + 256)); // 0x4a065e
    if (v2 == 0) {
        // 0x4a06da
        int64_t v3; // 0x4a0650
        function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_cli.c", &g7, "should never happen", v3);
        // 0x4a06d6
        return 0xffff9400;
    }
    int64_t v4 = *(int64_t *)(v2 + 8); // 0x4a0668
    function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_cli.c", &g8, "ECDH curve: %s", v4);
    int64_t result = 0xffffffff; // 0x4a06a7
    if ((int32_t)function_498bd0(a1, *(int32_t *)(*v1 + 256)) == 0) {
        int64_t v5 = *v1; // 0x4a06a9
        function_49ebd0(a1, 3, "/home/richard/code/mbedtls/library/ssl_cli.c", &g9, "ECDH: Qp", v5 + (int64_t)&g5);
        result = (int32_t)"/home/richard/code/mbedtls/library/ssl_cli.c" ^ (int32_t)"/home/richard/code/mbedtls/library/ssl_cli.c";
    }
    // 0x4a06d6
    return result;
}

// Address range: 0x4b0be0 - 0x4b0c8f
int64_t function_4b0be0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t * v1 = (int64_t *)(a2 + 8); // 0x4b0bea
    int64_t result = function_4b08f0(a1, *v1); // 0x4b0bf1
    if ((int32_t)result != 0) {
        // 0x4b0c86
        return result;
    }
    int64_t v2 = a3 & 0xffffffff; // 0x4b0be2
    uint64_t v3 = v2 | -v2; // 0x4b0c0c
    uint64_t v4 = v3 / 128 % 2; // 0x4b0c0f
    int64_t v5 = v4 ^ 1; // 0x4b0c17
    int64_t v6; // 0x4b0be0
    *(int32_t *)a1 = (int32_t)v6 * (int32_t)v5 + (int32_t)(v4 | v3 & 0xffffff00) * (int32_t)v4;
    int64_t v7 = 0; // 0x4b0c29
    if (*v1 != 0) {
        int64_t v8 = 0; // 0x4b0c3c
        int64_t v9 = 8 * v8; // 0x4b0c46
        int64_t * v10 = (int64_t *)(v9 + *(int64_t *)(a1 + 16)); // 0x4b0c4b
        *v10 = *v10 * v5 + *(int64_t *)(v9 + *(int64_t *)(a2 + 16)) * v4;
        v8++;
        v7 = v8;
        while (*v1 > v8) {
            // 0x4b0c40
            v9 = 8 * v8;
            v10 = (int64_t *)(v9 + *(int64_t *)(a1 + 16));
            *v10 = *v10 * v5 + *(int64_t *)(v9 + *(int64_t *)(a2 + 16)) * v4;
            v8++;
            v7 = v8;
        }
    }
    int64_t * v11 = (int64_t *)(a1 + 8); // 0x4b0c61
    if (v7 >= *v11) {
        // 0x4b0c86
        return result;
    }
    for (int64_t i = v7; i < *v11; i++) {
        int64_t * v12 = (int64_t *)(8 * i + *(int64_t *)(a1 + 16)); // 0x4b0c70
        *v12 = *v12 * v5;
    }
    // 0x4b0c86
    return result;
}

// Address range: 0x4b0fc0 - 0x4b106e
int64_t function_4b0fc0(int64_t a1, int64_t a2, uint64_t a3) {
    int64_t v1 = 0; // 0x4b0fd6
    int64_t v2 = 0; // 0x4b0fd6
    if (a3 != 0 == (char)a2 == 0) {
        v1++;
        v2 = v1;
        while (v1 != a3) {
            // 0x4b0fe0
            v2 = v1;
            if (*(char *)(v1 + a2) != 0) {
                // break -> 0x4b0ff0
                break;
            }
            v1++;
            v2 = v1;
        }
    }
    uint64_t v3 = a3 - v2; // 0x4b0ff8
    int64_t result = function_4b08f0(a1, v3 / 8 + (int64_t)(v3 % 8 != 0)); // 0x4b100d
    if ((int32_t)result != 0) {
        // 0x4b1016
        return result;
    }
    int64_t result2 = function_4b0d80(a1, 0); // 0x4b1025
    if (v2 < a3 != ((int32_t)result2 == 0)) {
        // 0x4b1016
        return result2;
    }
    int64_t v4 = a3 + a2; // 0x4b103c
    int64_t v5 = 0;
    v4--;
    int64_t v6 = v5 + 1; // 0x4b1051
    int64_t * v7 = (int64_t *)((v5 & -8) + *(int64_t *)(a1 + 16)); // 0x4b105f
    *v7 = (int64_t)*(char *)v4 << (8 * v5 & 56) | *v7;
    while (v3 != v6) {
        // 0x4b1040
        v5 = v6;
        v4--;
        v6 = v5 + 1;
        v7 = (int64_t *)((v5 & -8) + *(int64_t *)(a1 + 16));
        *v7 = (int64_t)*(char *)v4 << (8 * v5 & 56) | *v7;
    }
    // 0x4b1016
    return result2;
}

// Address range: 0x4b8370 - 0x4b841e
int64_t function_4b8370(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 + 8; // 0x4b8375
    int64_t v2 = function_4b8270(v1, a2, a3); // 0x4b83a2
    if ((int32_t)v2 != 0) {
        // 0x4b83ad
        return v2 & 0xffffffff;
    }
    int64_t v3 = function_4b8270(a1 + 32, a2, a3); // 0x4b83e2
    if ((int32_t)v3 != 0) {
        // 0x4b83ad
        return v3 & 0xffffffff;
    }
    int64_t v4 = a1 + 104; // 0x4b83ed
    int64_t v5 = function_4b8270(v4, a2, a3); // 0x4b83fa
    if ((int32_t)v5 != 0) {
        // 0x4b83ad
        return v5 & 0xffffffff;
    }
    int64_t v6 = function_4b81c0(v4, v1); // 0x4b840b
    if ((int32_t)v6 != 0) {
        // 0x4b83ad
        return v6 & 0xffffffff;
    }
    // 0x4b8416
    return function_4b0fa0(v1);
}

// Address range: 0x4ba380 - 0x4ba42d
int64_t function_4ba380(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5) {
    int64_t result = a2 + 24; // 0x4ba38d
    char v1 = a4; // 0x4ba3a9
    if (v1 == 0) {
        // 0x4ba3fd
        return result;
    }
    int64_t v2 = a3; // 0x4ba380
    int64_t v3 = 0; // 0x4ba380
    int64_t v4 = (char)(a5 / 2) % 64 == (char)v3; // 0x4ba3ea
    int64_t v5 = function_4b0be0(a2, v2, v4); // 0x4ba3f4
    int64_t result2 = v5; // 0x4ba3fb
    while ((int32_t)v5 == 0) {
        int64_t v6 = function_4b0be0(result, v2 + 24, v4); // 0x4ba3cc
        result2 = v6;
        if ((int32_t)v6 != 0) {
            // break -> 0x4ba3fd
            break;
        }
        int64_t v7 = v3 + 1; // 0x4ba3d5
        v2 += 72;
        v3 = v7 & 0xffffffff;
        result2 = v6;
        if ((char)v7 == v1) {
            // break -> 0x4ba3fd
            break;
        }
        v4 = (char)(a5 / 2) % 64 == (char)v3;
        v5 = function_4b0be0(a2, v2, v4);
        result2 = v5;
    }
    // 0x4ba3fd
    return result2;
}

// Address range: 0x548e60 - 0x548e9a
int64_t function_548e60(int64_t a1, int64_t a2, int64_t a3) {
    int64_t result = function_568990(a2); // 0x548e70
    if ((char)result == 0) {
        // 0x548e88
        return function_564c50(a1, a2, a3);
    }
    // 0x548e79
    *(int64_t *)a3 = a3 + 32;
    return result;
}

// Address range: 0x548ea0 - 0x548ec5
// From class:    std::__ios_failure
// Type:          constructor
int64_t function_548ea0(int64_t a1) {
    // 0x548ea0
    *(int64_t *)a1 = (int64_t)&g10;
    function_568980(a1 + 32);
    return function_548dd0(a1);
}

// Address range: 0x548ed0 - 0x548efd
// From class:    std::__ios_failure
// Type:          constructor
int64_t function_548ed0(int64_t a1) {
    // 0x548ed0
    *(int64_t *)a1 = (int64_t)&g10;
    function_568980(a1 + 32);
    function_548dd0(a1);
    return function_4eeb50(a1);
}

// Address range: 0x548f00 - 0x548f0e
// From class:    *N12_GLOBAL__N_117io_error_categoryE
// Type:          virtual member function
int64_t function_548f00(int64_t a1, int64_t a2, int64_t a3) {
    // 0x548f00
    int64_t result; // 0x548f00
    return result;
}

// Address range: 0x54e9d0 - 0x54ea81
// From class:    std::__codecvt_utf16_base<char16_t>
// Type:          virtual member function
int64_t function_54e9d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = *(int64_t *)(a1 + 16); // 0x54e9de
    int64_t v2 = __readfsqword(40); // 0x54e9e2
    int64_t v3 = a3; // bp-56, 0x54ea02
    int32_t v4 = *(int32_t *)(a1 + 24); // bp-60, 0x54ea0f
    function_54e5f0(&v3, (int64_t *)&v4);
    if (a5 != 0) {
        int64_t v5 = (int32_t)v1 >= (int32_t)&g12 ? (int64_t)(int32_t)&g12 : v1 & 0xffffffff; // 0x54ea24
        int64_t v6 = a5;
        while (!((v6 == 1 | (int32_t)v5 < (int32_t)function_54dd60(&v3, v5, (int64_t)v4)))) {
            // 0x54ea38
            v6--;
        }
    }
    // 0x54ea5b
    if (v2 == __readfsqword(40)) {
        // 0x54ea73
        return v3 - a3;
    }
    // 0x54ea7c
    __stack_chk_fail();
    return (int64_t)&g13;
}
