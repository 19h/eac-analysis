/*
 * Targeted RetDec C for native executable gap queue batch 63.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x3602c-0x3609f rank=- name=- kind=- bytes=- uncovered=-
 *   0x4a8c6-0x4a939 rank=- name=- kind=- bytes=- uncovered=-
 *   0x6aba4-0x6ac17 rank=- name=- kind=- bytes=- uncovered=-
 *   0x491024-0x491097 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4945c0-0x494633 rank=- name=- kind=- bytes=- uncovered=-
 *   0x496760-0x4967d3 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4ac570-0x4ac5e3 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c35e0-0x4c3653 rank=- name=- kind=- bytes=- uncovered=-
 *   0x54e140-0x54e1b3 rank=- name=- kind=- bytes=- uncovered=-
 *   0x54e1c0-0x54e233 rank=- name=- kind=- bytes=- uncovered=-
 *   0x250b0-0x25122 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4425d-0x442cf rank=- name=- kind=- bytes=- uncovered=-
 *   0x477fa-0x4786c rank=- name=- kind=- bytes=- uncovered=-
 *   0x4ed34-0x4eda6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5cab4-0x5cb26 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5f290-0x5f302 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_24cfa();
int64_t function_24ded();
int64_t function_2508e();
int64_t function_250b0(int64_t a1, int64_t a2);
int64_t function_25622();
int64_t function_2562c();
int64_t function_259ce();
int64_t function_25a28();
int64_t function_3602c(int64_t result, int64_t a2);
int64_t function_4425d(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, uint64_t a5, int64_t a6, int64_t a7);
int64_t function_470e0();
int64_t function_477fa(int64_t a1, int64_t a2);
int64_t function_491024(int64_t a1);
int64_t function_4945c0(int64_t a1, int32_t a2);
int64_t function_494d90();
int64_t function_496760(int64_t a1, int64_t a2);
int64_t function_49e770();
int64_t function_4a8c6(int64_t result, int64_t a2);
int64_t function_4ac570(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4afd30();
int64_t function_4c35e0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4eb52();
int64_t function_4eb84();
int64_t function_4ed34(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4efd30();
int64_t function_542470();
int64_t function_54e0c0();
int64_t function_54e140(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_54e1c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_5c5ec();
int64_t function_5cab4(int64_t a1, int64_t a2);
int64_t function_5f290(int64_t a1, int64_t a2, int64_t a3);
int64_t function_68ee4();
int64_t function_6aba4(int64_t a1);

// Address range: 0x250b0 - 0x25122
int64_t function_250b0(int64_t a1, int64_t a2) {
    if (a2 == 0) {
        // 0x250ff
        function_542470("basic_string::_S_construct null not valid");
        // 0x25116
        int64_t v1; // 0x250b0
        *(int64_t *)v1 = (int64_t)&g14;
        return (int64_t)&g13;
    }
    int64_t v2 = function_24ded(a2); // 0x250c6
    int64_t result = (int64_t)&g13; // 0x250d1
    int64_t v3 = (int64_t)&g14; // 0x250d1
    if (v2 != 0) {
        int64_t v4 = function_24cfa(v2, 0); // 0x250d8
        v3 = v4 + 24;
        function_25a28(v3, a2, v2);
        result = function_2562c(v4, v2);
    }
    // 0x25116
    *(int64_t *)a1 = v3;
    return result;
}

// Address range: 0x3602c - 0x3609f
int64_t function_3602c(int64_t result, int64_t a2) {
    int64_t v1 = *(int64_t *)(a2 - 24); // 0x3603c
    if (v1 == 0) {
        // 0x36094
        return result;
    }
    int64_t v2 = result - 24;
    int64_t * v3 = (int64_t *)v2;
    int64_t v4 = *v3 + v1; // 0x3604f
    int64_t * v5; // 0x3602c
    int64_t v6; // 0x3602c
    int64_t v7; // 0x3602c
    if (v4 > *(int64_t *)(result - 16)) {
        goto lab_0x36058;
    } else {
        // 0x36065
        if ((char)function_25622(v2) != 0) {
            goto lab_0x36058;
        } else {
            // 0x36065
            v5 = (int64_t *)(result - 48);
            v7 = a2;
            v6 = v2;
            goto lab_0x36072;
        }
    }
  lab_0x36058:
    // 0x36058
    function_259ce(result, v4);
    v5 = v3;
    v7 = v4;
    v6 = result;
    goto lab_0x36072;
  lab_0x36072:;
    int64_t v8 = *v5 + v6; // 0x3607c
    function_25a28(v8, v7, v1);
    function_2562c(v8 - 24, v4);
    // 0x36094
    return result;
}

// Address range: 0x4425d - 0x442cf
int64_t function_4425d(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, uint64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a6;
    int64_t v2 = a1;
    int64_t v3; // 0x4425d
    int64_t v4 = v3 & 0xffffffff; // 0x44266
    int64_t v5 = v4; // 0x44266
    if (v4 < a3) {
        // 0x4426d
        if (a1 == a2) {
            // 0x442cd
            return (int64_t)&g17;
        }
        int64_t v6 = a1;
        *(int64_t *)v6 = v6 + 1;
        unsigned char v7 = *(char *)&v2; // 0x4427c
        uint32_t v8 = (int32_t)v5;
        uint32_t v9 = v8 % 32; // 0x4427f
        int64_t v10 = v7; // 0x4427f
        if (v9 != 0) {
            v10 = (int32_t)v7 << v9;
        }
        // 0x44266
        *(int64_t *)a5 = 0x100000000 * v10 >> 32 | a5;
        *(int32_t *)a4 = v8 + 8;
        int64_t v11 = (int64_t)*(int32_t *)&v5; // 0x44266
        v5 = v11;
        while (v11 < a3) {
            // 0x44266
            if (v2 == a2) {
                // 0x442cd
                return (int64_t)&g17;
            }
            v6 = v2;
            *(int64_t *)v6 = v6 + 1;
            v7 = *(char *)&v2;
            v8 = (int32_t)v5;
            v9 = v8 % 32;
            v10 = v7;
            if (v9 != 0) {
                v10 = (int32_t)v7 << v9;
            }
            // 0x44266
            *(int64_t *)a5 = 0x100000000 * v10 >> 32 | a5;
            *(int32_t *)a4 = v8 + 8;
            v11 = (int64_t)*(int32_t *)&v5;
            v5 = v11;
        }
    }
    int32_t v12 = a3; // 0x4428e
    int32_t * v13 = (int32_t *)a7; // 0x4428e
    int32_t v14; // 0x4425d
    if (*v13 != v12) {
        // 0x4429b
        *v13 = v12;
        v5 = 0;
        *(int32_t *)v1 = 0;
        int32_t v15 = *(int32_t *)&v1; // 0x442a9
        v14 = v15;
        if (v12 != (int32_t)v5) {
            v5 = v5 + 1 & 0xffffffff;
            *(int32_t *)v1 = 2 * v15 | 1;
            int32_t v16 = *(int32_t *)&v1; // 0x442a9
            int64_t v17 = v5; // 0x442ac
            v14 = v16;
            while (v12 != (int32_t)v5) {
                // 0x442ae
                v5 = v17 + 1 & 0xffffffff;
                *(int32_t *)v1 = 2 * v16 | 1;
                v16 = *(int32_t *)&v1;
                v17 = v5;
                v14 = v16;
            }
        }
    } else {
        // 0x44296
        v14 = *(int32_t *)&v1;
    }
    // 0x442b9
    *(int64_t *)a5 = a5 >> a3 % 64;
    *(int32_t *)a4 = *(int32_t *)&v5 - v12;
    // 0x442cd
    return (int64_t)v14 & a5;
}

// Address range: 0x477fa - 0x4786c
int64_t function_477fa(int64_t a1, int64_t a2) {
    if (a2 == 0) {
        // 0x47849
        function_542470("basic_string::_S_construct null not valid");
        // 0x47860
        int64_t v1; // 0x477fa
        *(int64_t *)v1 = (int64_t)&g14;
        return (int64_t)&g13;
    }
    int64_t v2 = function_24ded(a2); // 0x47810
    int64_t result = (int64_t)&g13; // 0x4781b
    int64_t v3 = (int64_t)&g14; // 0x4781b
    if (v2 != 0) {
        int64_t v4 = function_470e0(v2, 0); // 0x47822
        v3 = v4 + 24;
        function_25a28(v3, a2, v2);
        result = function_2562c(v4, v2);
    }
    // 0x47860
    *(int64_t *)a1 = v3;
    return result;
}

// Address range: 0x4a8c6 - 0x4a939
int64_t function_4a8c6(int64_t result, int64_t a2) {
    int64_t v1 = *(int64_t *)(a2 - 24); // 0x4a8d6
    if (v1 == 0) {
        // 0x4a92e
        return result;
    }
    int64_t v2 = result - 24;
    int64_t * v3 = (int64_t *)v2;
    int64_t v4 = *v3 + v1; // 0x4a8e9
    int64_t * v5; // 0x4a8c6
    int64_t v6; // 0x4a8c6
    int64_t v7; // 0x4a8c6
    if (v4 > *(int64_t *)(result - 16)) {
        goto lab_0x4a8f2;
    } else {
        // 0x4a8ff
        if ((char)function_25622(v2) != 0) {
            goto lab_0x4a8f2;
        } else {
            // 0x4a8ff
            v5 = (int64_t *)(result - 48);
            v7 = a2;
            v6 = v2;
            goto lab_0x4a90c;
        }
    }
  lab_0x4a8f2:
    // 0x4a8f2
    function_259ce(result, v4);
    v5 = v3;
    v7 = v4;
    v6 = result;
    goto lab_0x4a90c;
  lab_0x4a90c:;
    int64_t v8 = *v5 + v6; // 0x4a916
    function_25a28(v8, v7, v1);
    function_2562c(v8 - 24, v4);
    // 0x4a92e
    return result;
}

// Address range: 0x4ed34 - 0x4eda6
int64_t function_4ed34(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x4ed3a
    int64_t v2 = 0; // 0x4ed4d
    if (a2 != 0) {
        // 0x4ed4f
        int64_t v3; // 0x4ed34
        int64_t v4 = 0x100000000000000 * v3 >> 56; // bp-48, 0x4ed60
        int64_t v5 = function_4eb52(a3 - 24); // bp-40, 0x4ed6f
        v2 = function_2508e(&v5) & -256 | function_4eb84(a1, &v4) % 256;
    }
    int64_t result = v2; // 0x4ed98
    if (v1 != __readfsqword(40)) {
        // 0x4ed9a
        __stack_chk_fail();
        result = (int64_t)&g18;
    }
    // 0x4ed9f
    return result;
}

// Address range: 0x5cab4 - 0x5cb26
int64_t function_5cab4(int64_t a1, int64_t a2) {
    if (a2 == 0) {
        // 0x5cb03
        function_542470("basic_string::_S_construct null not valid");
        // 0x5cb1a
        int64_t v1; // 0x5cab4
        *(int64_t *)v1 = (int64_t)&g14;
        return (int64_t)&g13;
    }
    int64_t v2 = function_24ded(a2); // 0x5caca
    int64_t result = (int64_t)&g13; // 0x5cad5
    int64_t v3 = (int64_t)&g14; // 0x5cad5
    if (v2 != 0) {
        int64_t v4 = function_5c5ec(v2, 0); // 0x5cadc
        v3 = v4 + 24;
        function_25a28(v3, a2, v2);
        result = function_2562c(v4, v2);
    }
    // 0x5cb1a
    *(int64_t *)a1 = v3;
    return result;
}

// Address range: 0x5f290 - 0x5f302
int64_t function_5f290(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a3 - a2; // 0x5f29d
    int64_t * v2 = (int64_t *)a1; // 0x5f2a0
    *v2 = 0;
    int64_t * v3 = (int64_t *)(a1 + 8); // 0x5f2a7
    *v3 = 0;
    int64_t * v4 = (int64_t *)(a1 + 16); // 0x5f2af
    *v4 = 0;
    if (v1 == 0) {
        // 0x5f2c5
        *v2 = 0;
        *v4 = 0;
        int64_t result = 0;
        *v3 = result + (v1 > 0 ? v1 : 0);
        return result;
    }
    int64_t result2 = function_4efd30(v1); // 0x5f2bc
    *v2 = result2;
    *v4 = result2 + v1;
    if (v1 < 1) {
        // 0x5f2ea
        *v3 = result2 + (v1 > 0 ? v1 : 0);
        return result2;
    }
    int64_t v5 = 0;
    *(char *)(v5 + result2) = *(char *)(v5 + a2);
    int64_t v6 = v5 + 1; // 0x5f2e5
    while (v6 != v1) {
        // 0x5f2de
        v5 = v6;
        *(char *)(v5 + result2) = *(char *)(v5 + a2);
        v6 = v5 + 1;
    }
    // 0x5f2ea
    *v3 = result2 + (v1 > 0 ? v1 : 0);
    return result2;
}

// Address range: 0x6aba4 - 0x6ac17
int64_t function_6aba4(int64_t a1) {
    // 0x6aba4
    function_68ee4();
    *(int64_t *)a1 = (int64_t)&g12;
    __asm_rep_stosd_memset((char *)(a1 + 184), (int32_t)&g12 ^ (int32_t)&g12, 138);
    __asm_rep_stosd_memset((char *)(a1 + (int64_t)&g2), (int32_t)&g12 ^ (int32_t)&g12, 256);
    __asm_rep_stosd_memset((char *)(a1 + (int64_t)&g9), (int32_t)&g12 ^ (int32_t)&g12, 86);
    __asm_rep_stosd_memset((char *)(a1 + (int64_t)&g10), (int32_t)&g12 ^ (int32_t)&g12, 110);
    __asm_rep_stosd_memset((char *)(a1 + (int64_t)&g15), (int32_t)&g12 ^ (int32_t)&g12, 94);
    *(char *)(a1 + (int64_t)&g16) = 0;
    return (int32_t)&g12 ^ (int32_t)&g12;
}

// Address range: 0x491024 - 0x491097
int64_t function_491024(int64_t a1) {
    // 0x491024
    if (*(char *)(a1 + 32) > -1) {
        // 0x49108c
        return (int64_t)*(char *)(a1 + 8);
    }
    uint32_t v1 = *(int32_t *)(a1 + 4); // 0x49102a
    if (v1 == 311) {
        // 0x491077
        if (*(char *)(a1 + 20) != -21) {
            // 0x49108c
            return (int64_t)*(char *)(a1 + 8);
        }
        // 0x491082
        return 5;
    }
    if (v1 >= 312) {
        if (v1 < 325) {
            // 0x49105b
            if (v1 < 322 || v1 >= 323) {
                // 0x491082
                return 6;
            }
            // 0x491083
            return (int64_t)*(char *)(a1 + 8) + 7;
        }
        if (v1 < 415) {
            // 0x491083
            return (int64_t)*(char *)(a1 + 8) + 7;
        }
        // 0x49108c
        return (int64_t)*(char *)(a1 + 8);
    }
    if (v1 >= 307) {
        // 0x49104b
        if (v1 < 309) {
            // 0x49108c
            return (int64_t)*(char *)(a1 + 8);
        }
        // 0x491082
        return 6;
    }
    if (v1 >= 305) {
        // 0x491083
        return (int64_t)*(char *)(a1 + 8) + 7;
    }
    // 0x491050
    if (v1 < 303) {
        // 0x49108c
        return (int64_t)*(char *)(a1 + 8);
    }
    // 0x491082
    return 6;
}

// Address range: 0x4945c0 - 0x494632
int64_t function_4945c0(int64_t a1, int32_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 144); // 0x4945ce
    if (*v1 == 0) {
        // 0x494628
        int64_t result; // 0x4945c0
        return result;
    }
    // 0x4945db
    function_49e770();
    return *v1;
}

// Address range: 0x496760 - 0x4967d0
int64_t function_496760(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 96); // 0x496761
    function_494d90(*(int64_t *)(*v1 + (int64_t)&g5));
    int64_t v2 = *v1; // 0x496774
    int32_t v3 = *(int32_t *)(v2 + (int64_t)&g3); // 0x49677d
    *(int64_t *)(v2 + (int64_t)&g5) = 0;
    *(int64_t *)(v2 + (int64_t)&g6) = 0;
    *(int32_t *)(v2 + (int64_t)&g7) = v3;
    function_4945c0(a1, 0);
    int64_t result; // 0x4967ad
    if (*(int32_t *)(a1 + 216) != 22) {
        // 0x4967ad
        result = *v1;
        *(char *)(result + (int64_t)&g4) = 0;
        return result;
    }
    // 0x4967c0
    if (*(char *)*(int64_t *)(a1 + 200) == 20) {
        // 0x4967cc
        return *v1;
    }
    // 0x4967ad
    result = *v1;
    *(char *)(result + (int64_t)&g4) = 0;
    return result;
}

// Address range: 0x4ac570 - 0x4ac5dc
int64_t function_4ac570(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4ac570
    int64_t v1; // 0x4ac570
    uint64_t v2 = v1;
    int64_t result = a2 - a1; // 0x4ac57f
    if (result < 1) {
        // 0x4ac5c9
        return result;
    }
    // 0x4ac587
    if (v2 % 128 != 2) {
        // 0x4ac5c9
        return 0xffffdd1e;
    }
    // 0x4ac59f
    *(int32_t *)a3 = (int32_t)v2 % 256;
    int64_t * v3 = (int64_t *)a1; // 0x4ac5aa
    *v3 = a1 + 1;
    int64_t v4 = function_4afd30(a1); // 0x4ac5b0
    if ((int32_t)v4 != 0) {
        // 0x4ac5d0
        return v4 - (int64_t)(int32_t)&g1 & 0xffffffff;
    }
    // 0x4ac5b9
    *(int64_t *)(a3 + 16) = a1;
    *v3 = *(int64_t *)(a3 + 8) + a1;
    // 0x4ac5c9
    return 0;
}

// Address range: 0x4c35e0 - 0x4c3652
int64_t function_4c35e0(int64_t a1, int64_t a2, int64_t a3) {
    if (a1 == 0) {
        // 0x4c3650
        int64_t result; // 0x4c35e0
        return result;
    }
    int64_t n = *(int64_t *)(a1 + 8); // 0x4c35f0
    int64_t str = (int64_t)&g8; // 0x4c3608
    int64_t v1 = (int64_t)&g11;
    int64_t v2; // 0x4c35e0
    int64_t result2 = v2; // 0x4c3620
    int64_t str2; // 0x4c3622
    int32_t memcmp_rc; // 0x4c3629
    if (*(int64_t *)(v1 + 8) == n) {
        // 0x4c3622
        str2 = *(int64_t *)(a1 + 16);
        memcmp_rc = memcmp((int64_t *)str, (int64_t *)str2, (int32_t)n);
        result2 = memcmp_rc;
        if (memcmp_rc == 0) {
            // 0x4c3632
            *(int32_t *)a2 = *(int32_t *)(v1 + 32);
            *(int32_t *)a3 = *(int32_t *)(v1 + 36);
            return 0;
        }
    }
    int64_t v3 = v1 + 40; // 0x4c3610
    int64_t v4 = *(int64_t *)v3; // 0x4c3614
    str = v4;
    while (v4 != 0) {
        // 0x4c361c
        v1 = v3;
        if (*(int64_t *)(v1 + 8) == n) {
            // 0x4c3622
            str2 = *(int64_t *)(a1 + 16);
            memcmp_rc = memcmp((int64_t *)str, (int64_t *)str2, (int32_t)n);
            result2 = memcmp_rc;
            if (memcmp_rc == 0) {
                // 0x4c3632
                *(int32_t *)a2 = *(int32_t *)(v1 + 32);
                *(int32_t *)a3 = *(int32_t *)(v1 + 36);
                return 0;
            }
        }
        // 0x4c3610
        v3 = v1 + 40;
        v4 = *(int64_t *)v3;
        str = v4;
    }
    // 0x4c3650
    return result2;
}

// Address range: 0x54e140 - 0x54e1b3
// From class:    std::__codecvt_utf8_base<char32_t>
// Type:          virtual member function
int64_t function_54e140(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    int64_t v1 = __readfsqword(40); // 0x54e148
    int64_t v2 = a3; // bp-56, 0x54e158
    int32_t v3 = *(int32_t *)(a1 + 24); // 0x54e16f
    int64_t v4 = a6; // bp-40, 0x54e17a
    int64_t result = function_54e0c0(&v2, &v4, *(int64_t *)(a1 + 16), v3); // 0x54e184
    *(int64_t *)a5 = v2;
    int64_t v5 = __readfsqword(40); // 0x54e19a
    *(int64_t *)a8 = v4;
    if (v1 == v5) {
        // 0x54e1a8
        return result;
    }
    // 0x54e1ae
    __stack_chk_fail();
    return (int64_t)&g18;
}

// Address range: 0x54e1c0 - 0x54e233
// From class:    std::__codecvt_utf8_base<wchar_t>
// Type:          virtual member function
int64_t function_54e1c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    int64_t v1 = __readfsqword(40); // 0x54e1c8
    int64_t v2 = a3; // bp-40, 0x54e1d8
    int32_t v3 = *(int32_t *)(a1 + 32); // 0x54e1ee
    int64_t v4 = a6; // bp-56, 0x54e1fb
    int64_t result = function_54e0c0(&v2, &v4, *(int64_t *)(a1 + 24), v3); // 0x54e204
    *(int64_t *)a5 = v2;
    int64_t v5 = __readfsqword(40); // 0x54e21a
    *(int64_t *)a8 = v4;
    if (v1 == v5) {
        // 0x54e228
        return result;
    }
    // 0x54e22e
    __stack_chk_fail();
    return (int64_t)&g18;
}
