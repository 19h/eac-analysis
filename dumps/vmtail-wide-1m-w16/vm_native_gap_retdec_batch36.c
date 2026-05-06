/*
 * Targeted RetDec C for native executable gap queue batch 36.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x54fb40-0x54fbfb rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c3be-0x4c478 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4fd1e-0x4fdd8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5a560-0x5a61a rank=- name=- kind=- bytes=- uncovered=-
 *   0x62ad8-0x62b92 rank=- name=- kind=- bytes=- uncovered=-
 *   0x217fac-0x218066 rank=- name=- kind=- bytes=- uncovered=-
 *   0x496940-0x4969fa rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b93b0-0x4b946a rank=- name=- kind=- bytes=- uncovered=-
 *   0x25cec-0x25da5 rank=- name=- kind=- bytes=- uncovered=-
 *   0x6b6e6-0x6b79f rank=- name=- kind=- bytes=- uncovered=-
 *   0x25c34-0x25cec rank=- name=- kind=- bytes=- uncovered=-
 *   0x288fa-0x289b2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x50557-0x5060f rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b1300-0x4b13b8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x50cf40-0x50cff8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x50d000-0x50d0b8 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_217fac(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_21a50();
int64_t function_2508e();
int64_t function_2509a();
int64_t function_254fe();
int64_t function_25622();
int64_t function_2562c();
int64_t function_259ce();
int64_t function_25a28();
int64_t function_25c34(int64_t result, uint64_t a2, uint64_t a3);
int64_t function_25cec(int64_t result, uint64_t a2, uint64_t a3);
int64_t function_25e90();
int64_t function_25f7a();
int64_t function_288fa(int64_t result, int64_t a2);
int64_t function_48e347();
int64_t function_48e480();
int64_t function_496940(int64_t a1);
int64_t function_4aad8();
int64_t function_4b1300(int64_t a1, int64_t a2);
int64_t function_4b8fc0();
int64_t function_4b93b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_4c3be(int64_t a1, int64_t a2);
int64_t function_4efd30();
int64_t function_4fd1e(int64_t a1, int64_t a2);
int64_t function_4ff30();
int64_t function_50557(int64_t a1, uint64_t a2);
int64_t function_50cf40(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_50d000(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_5423b0();
int64_t function_542590();
int64_t function_54de20();
int64_t function_54e460();
int64_t function_54fb40(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_5a470();
int64_t function_5a560(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_62350();
int64_t function_62ad8(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_63032();
int64_t function_6b6e6(int64_t a1, int64_t node, int64_t a3, int64_t a4);
int64_t function_6bd8a();
int64_t function_729b6();
int64_t function_729ce();
int64_t function_c57b8();

// Address range: 0x25c34 - 0x25cec
int64_t function_25c34(int64_t result, uint64_t a2, uint64_t a3) {
    int64_t v1 = result; // 0x25c4b
    if (a3 >= 0x3ffffffffffffffa) {
        // 0x25c4d
        function_542590("basic_string::assign");
        v1 = (int64_t)"basic_string::assign";
    }
    int64_t v2 = v1; // 0x25c62
    if (v1 <= a2) {
        int64_t v3 = v1 - 24; // 0x25c8f
        v2 = v1;
        if (*(int64_t *)v3 + v1 >= a2) {
            int64_t v4 = function_25622(v3); // 0x25c9f
            v2 = v3;
            if ((char)v4 == 0) {
                uint64_t v5 = a2 - v3; // 0x25caf
                if (v5 < a3) {
                    if (v5 != 0) {
                        // 0x25cc9
                        function_25f7a(v3, a2, a3);
                    }
                } else {
                    // 0x25cb7
                    function_25a28(v3, a2, a3);
                }
                // 0x25cd4
                function_2562c(v1 - 48, a3);
                // 0x25ce4
                return result;
            }
        }
    }
    // 0x25c64
    function_25e90(result, 0, *(int64_t *)(v2 - 24), a3);
    if (a3 != 0) {
        // 0x25c7e
        function_25a28(result, a2, a3);
    }
    // 0x25ce4
    return result;
}

// Address range: 0x25cec - 0x25da5
int64_t function_25cec(int64_t result, uint64_t a2, uint64_t a3) {
    if (a3 == 0) {
        // 0x25d9a
        return result;
    }
    int64_t * v1 = (int64_t *)(result - 24);
    int64_t v2 = *v1; // 0x25d12
    int64_t v3 = result; // 0x25d1c
    if (0x3ffffffffffffff9 - v2 < a3) {
        // 0x25d1e
        function_542590("basic_string::append");
        v3 = (int64_t)"basic_string::append";
    }
    uint64_t v4 = v2 + a3; // 0x25d2a
    int64_t v5 = v3; // 0x25d34
    int64_t * v6; // 0x25cec
    int64_t v7; // 0x25cec
    int64_t v8; // 0x25cec
    if (v4 > *(int64_t *)(v3 - 16)) {
        goto lab_0x25d36;
    } else {
        // 0x25d40
        v5 = v3 - 24;
        if ((char)function_25622(v5) != 0) {
            goto lab_0x25d36;
        } else {
            // 0x25d40
            v6 = (int64_t *)(v3 - 48);
            v8 = v5;
            v7 = a2;
            goto lab_0x25d79;
        }
    }
  lab_0x25d36:;
    uint64_t v9 = v5;
    int64_t v10 = a3; // 0x25d3c
    if (v9 <= a2) {
        int64_t v11 = *(int64_t *)(v9 - 24) + v9; // 0x25d53
        v10 = v11;
        if (v11 < a2) {
            goto lab_0x25d6e;
        } else {
            // 0x25d5b
            function_259ce(result, v4, v11);
            v6 = v1;
            v8 = result;
            v7 = a2 + result - v9;
            goto lab_0x25d79;
        }
    } else {
        goto lab_0x25d6e;
    }
  lab_0x25d6e:
    // 0x25d6e
    function_259ce(result, v4, v10);
    v6 = v1;
    v8 = result;
    v7 = a2;
    goto lab_0x25d79;
  lab_0x25d79:;
    int64_t v12 = *v6 + v8; // 0x25d82
    function_25a28(v12, v7, a3);
    function_2562c(v12 - 24, v4);
    // 0x25d9a
    return result;
}

// Address range: 0x288fa - 0x289b2
int64_t function_288fa(int64_t result, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x28915
    int64_t v2; // bp-40, 0x288fa
    function_729b6((int64_t)&v2, a2 + (int64_t)&g7);
    function_2509a(result, a2 + (int64_t)&g1);
    function_2509a(result + 8, a2 + (int64_t)&g2);
    function_2509a(result + 16, a2 + (int64_t)&g3);
    function_2509a(result + 24, a2 + (int64_t)&g4);
    function_2509a(result + 32, a2 + (int64_t)&g5);
    function_2509a(result + 40, a2 + (int64_t)&g6);
    function_729ce(&v2);
    if (v1 != __readfsqword(40)) {
        // 0x289a1
        __stack_chk_fail();
    }
    // 0x289a6
    return result;
}

// Address range: 0x4c3be - 0x4c478
int64_t function_4c3be(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a2 + 8); // 0x4c3d2
    int64_t v2 = *v1 - a2; // 0x4c3d6
    int64_t * v3 = (int64_t *)a1; // 0x4c3d9
    *v3 = 0;
    int64_t * v4 = (int64_t *)(a1 + 8); // 0x4c3e0
    *v4 = 0;
    int64_t * v5 = (int64_t *)(a1 + 16); // 0x4c3e8
    *v5 = 0;
    uint64_t v6 = v2 >> 4; // 0x4c3f3
    int64_t v7 = 0; // 0x4c3f7
    if (v6 != 0) {
        if (v6 >= 0x1000000000000000) {
            // 0x4c408
            function_5423b0();
        }
        // 0x4c40d
        v7 = function_4efd30(v2);
    }
    // 0x4c41c
    *v3 = v7;
    *v4 = v7;
    *v5 = v7 + v2;
    int64_t v8 = *v1; // 0x4c430
    int64_t v9 = v7; // 0x4c43d
    int64_t result; // 0x4c3be
    if (v8 == a2) {
        // 0x4c461
        *v4 = v7 - a2 + v8;
        return result;
    }
    int64_t v10 = a2 + 16; // 0x4c446
    *(char *)v9 = *(char *)a2;
    *(int64_t *)(v9 + 8) = function_4aad8(*(int64_t *)(a2 + 8) - 24);
    v9 += 16;
    while (v8 != v10) {
        int64_t v11 = v10;
        v10 = v11 + 16;
        *(char *)v9 = *(char *)v11;
        *(int64_t *)(v9 + 8) = function_4aad8(*(int64_t *)(v11 + 8) - 24);
        v9 += 16;
    }
    // 0x4c461
    *v4 = v7 - a2 + v8;
    return result;
}

// Address range: 0x4fd1e - 0x4fdd8
int64_t function_4fd1e(int64_t a1, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x4fd2e
    int64_t * v2 = (int64_t *)(a2 + 8); // 0x4fd46
    *v2 = a2;
    int64_t v3 = a1 + 56; // 0x4fd4a
    int64_t v4; // bp-64, 0x4fd1e
    function_729b6((int64_t)&v4, v3);
    int64_t v5 = *(int64_t *)(a1 + 16);
    int64_t v6 = v3; // 0x4fd63
    if (v5 != 0) {
        int64_t v7 = v5;
        int64_t v8 = *(int64_t *)(v7 + 16); // 0x4fd65
        int64_t v9 = v8; // bp-56, 0x4fd70
        int64_t v10 = v3; // 0x4fd75
        int64_t v11; // 0x4fd7e
        int64_t v12; // 0x4fd8b
        int64_t * v13; // 0x4fd77
        if (*(char *)(v8 + 152) == 0) {
            // 0x4fd77
            v13 = (int64_t *)(v8 + 144);
            *v13 = *v13 + 1;
            v11 = *v2;
            if (v11 == *(int64_t *)(a2 + 16)) {
                // 0x4fd95
                function_4ff30(a2, v11, &v9);
                v10 = v11;
            } else {
                // 0x4fd88
                *(int64_t *)v11 = v8;
                v12 = v11 + 8;
                *v2 = v12;
                v10 = v12;
            }
        }
        int64_t v14 = v10;
        v7 = *(int64_t *)v7;
        v6 = v14;
        while (v7 != 0) {
            // 0x4fd65
            v8 = *(int64_t *)(v7 + 16);
            v9 = v8;
            v10 = v14;
            if (*(char *)(v8 + 152) == 0) {
                // 0x4fd77
                v13 = (int64_t *)(v8 + 144);
                *v13 = *v13 + 1;
                v11 = *v2;
                if (v11 == *(int64_t *)(a2 + 16)) {
                    // 0x4fd95
                    function_4ff30(a2, v11, &v9);
                    v10 = v11;
                } else {
                    // 0x4fd88
                    *(int64_t *)v11 = v8;
                    v12 = v11 + 8;
                    *v2 = v12;
                    v10 = v12;
                }
            }
            // 0x4fda0
            v14 = v10;
            v7 = *(int64_t *)v7;
            v6 = v14;
        }
    }
    int64_t v15 = v6;
    function_729ce(&v4);
    int64_t result = v15 & -256 | (int64_t)(*v2 != v15); // 0x4fdc6
    if (v1 != __readfsqword(40)) {
        // 0x4fdc8
        __stack_chk_fail();
        result = (int64_t)&g8;
    }
    // 0x4fdcd
    return result;
}

// Address range: 0x50557 - 0x5060f
int64_t function_50557(int64_t a1, uint64_t a2) {
    int32_t v1 = a1; // 0x50559
    int64_t result = 0; // 0x50557
    bool v2; // 0x50557
    switch (v1) {
        case 0: {
            return result;
        }
        case -0x2600: {
            // 0x505c2
            return 19;
        }
        default: {
            if (v1 > -0x2600) {
                // 0x50598
                if (v1 == -0x2280) {
                    // 0x505c2
                    return 20;
                }
                if (v1 > -0x2280) {
                    // 0x505b2
                    if (v1 == -0x2200) {
                        // 0x505c2
                        return 19;
                    }
                    // 0x505ba
                    v2 = v1 == -0x2180;
                } else {
                    // 0x505a2
                    if (v1 == -0x2580) {
                        // 0x505c2
                        return 19;
                    }
                    // 0x505aa
                    v2 = v1 == -0x2300;
                }
                goto lab_0x505c0;
            } else {
                // 0x5056f
                if (v1 == -0x2780) {
                    // 0x505c2
                    return 20;
                }
                if (v1 > -0x2780) {
                    // 0x50581
                    result = 21;
                    switch (v1) {
                        case -0x2700: {
                            // 0x505c8
                            if (a2 % 2 != 0) {
                                // 0x505c2
                                return 30;
                            }
                            // 0x505d3
                            if ((a2 & 2) != 0) {
                                // 0x505c2
                                return 32;
                            }
                            // 0x505de
                            if ((a2 & 4) != 0) {
                                // 0x505c2
                                return 31;
                            }
                            // 0x505e9
                            result = 33;
                            if ((a2 & 16) == 0) {
                                // 0x505f4
                                return (a2 & 32) == 0 ? 22 : 34;
                            }
                            // 0x505c2
                            return result;
                        }
                        case -0x2680: {
                            return result;
                        }
                        default: {
                            return 11;
                        }
                    }
                } else {
                    // 0x50579
                    v2 = v1 == -0x2800;
                    goto lab_0x505c0;
                }
            }
        }
    }
  lab_0x505c0:
    // 0x505c0
    if (!v2) {
        // 0x505c2
        return 11;
    }
    // 0x505c2
    return 20;
}

// Address range: 0x5a560 - 0x5a61a
int64_t function_5a560(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = __readfsqword(40); // 0x5a583
    int64_t v2; // bp-80, 0x5a560
    function_5a470(&v2);
    function_48e347(a1, &v2);
    function_2508e(&v2);
    function_48e480(a1, a5);
    int64_t result = a1; // 0x5a608
    if (v1 != __readfsqword(40)) {
        // 0x5a60a
        __stack_chk_fail();
        result = (int64_t)&g8;
    }
    // 0x5a60f
    return result;
}

// Address range: 0x62ad8 - 0x62b92
int64_t function_62ad8(int64_t a1, int64_t a2, uint64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x62afe
    int64_t v2; // bp-120, 0x62ad8
    function_729b6((int64_t)&v2, a1 + 304);
    int64_t v3 = 0; // bp-112, 0x62b18
    int64_t v4; // bp-80, 0x62ad8
    function_63032(&v4);
    function_21a50(&v3, a2);
    function_62350(a1, &v3, a3 % 256);
    function_254fe(&v3);
    function_729ce(&v2);
    int64_t result = 0; // 0x62b7e
    if (v1 != __readfsqword(40)) {
        // 0x62b80
        __stack_chk_fail();
        result = (int64_t)&g8;
    }
    // 0x62b85
    return result;
}

// Address range: 0x6b6e6 - 0x6b79f
int64_t function_6b6e6(int64_t a1, int64_t node, int64_t a3, int64_t a4) {
    int64_t v1 = __readfsqword(40); // 0x6b707
    int64_t str; // bp-48, 0x6b6e6
    snprintf((char *)&str, 16, "%i");
    int64_t hints; // bp-96, 0x6b6e6
    __asm_rep_stosd_memset((char *)&hints, 0, 12);
    struct addrinfo * addr_info; // bp-104, 0x6b6e6
    int32_t v2 = getaddrinfo((char *)node, (char *)&str, (struct addrinfo *)&hints, &addr_info); // 0x6b74a
    int64_t v3 = v2; // 0x6b751
    int64_t v4 = 0; // 0x6b751
    if (v2 == 0) {
        struct addrinfo * addr_info2 = NULL; // 0x6b75a
        v4 = 0;
        if (addr_info != NULL) {
            int64_t v5 = (int64_t)addr_info; // 0x6b76f
            function_6bd8a(a4, *(int64_t *)(v5 + 24) + 4);
            v5 += 40;
            while (v5 != 0) {
                // 0x6b75c
                function_6bd8a(a4, *(int64_t *)(v5 + 24) + 4);
                v5 += 40;
            }
            // 0x6b757
            addr_info2 = addr_info;
            v4 = 1;
        }
        // 0x6b775
        freeaddrinfo(addr_info2);
        v3 = (int64_t)&g8;
    }
    int64_t result = v4 | v3 & -256; // 0x6b78f
    if (v1 != __readfsqword(40)) {
        // 0x6b791
        __stack_chk_fail();
        result = (int64_t)&g8;
    }
    // 0x6b796
    return result;
}

// Address range: 0x217fac - 0x218066
int64_t function_217fac(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x217fac
    int64_t v1; // 0x217fac
    int64_t v2 = (int64_t)&v1; // 0x218006
    v1 = v2;
    *(int64_t *)(v2 + 32) = v1;
    *(int64_t *)(v2 - 8) = v2;
    v1 = v2 + 16;
    return function_c57b8(0x440e7d93);
}

// Address range: 0x496940 - 0x4969ea
int64_t function_496940(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 168); // 0x496943
    int64_t result = (int64_t)*(char *)(v1 + 2); // 0x496952
    if ((*(char *)(a1 + 373) & 16) == 0) {
        // 0x4969e8
        return result;
    }
    unsigned char v2 = *(char *)(v1 + 7); // 0x496968
    unsigned char v3 = *(char *)(v1 + 6); // 0x496963
    unsigned char v4 = *(char *)(v1 + 5); // 0x49695f
    unsigned char v5 = *(char *)(v1 + 4); // 0x49695b
    unsigned char v6 = *(char *)(v1 + 3); // 0x496956
    int64_t * v7 = (int64_t *)(a1 + 256); // 0x496992
    uint64_t v8 = *v7; // 0x496992
    int64_t result3 = 0x10000000000 * result | (int64_t)v2 | 256 * (int64_t)v3 | 0x10000 * (int64_t)v4 | 0x1000000 * (int64_t)v5 | 0x100000000 * (int64_t)v6; // 0x496999
    if (v8 >= result3) {
        uint64_t v9 = v8 - result3; // 0x4969d0
        int64_t result2 = result3; // 0x4969d7
        if (v9 < 64) {
            // 0x4969d9
            result2 = 1 << v9 % 64;
            int64_t * v10 = (int64_t *)(a1 + 264); // 0x4969e1
            *v10 = *v10 | result2;
        }
        // 0x4969e8
        return result2;
    }
    uint64_t v11 = result3 - v8; // 0x4969a4
    if (v11 >= 64) {
        // 0x4969e8
        return result3;
    }
    int64_t * v12 = (int64_t *)(a1 + 264); // 0x4969b0
    *v7 = result3;
    *v12 = *v12 << v11 % 64 | 1;
    return result3;
}

// Address range: 0x4b1300 - 0x4b13b7
int64_t function_4b1300(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)(a1 + 8); // 0x4b1300
    int64_t v2 = 0; // 0x4b1307
    if (v1 != 0) {
        int64_t v3 = *(int64_t *)(a1 + 16); // 0x4b1309
        int64_t v4 = v1 - 1; // 0x4b130d
        v2 = v1;
        if (*(int64_t *)(v3 + 8 * v4) == 0) {
            // 0x4b132c
            v2 = v4;
            if (v4 != 0) {
                int64_t v5 = v4; // 0x4b1328
                v2 = v5;
                while (*(int64_t *)(v3 - 8 + 8 * v5) == 0) {
                    // 0x4b1328
                    v5--;
                    v2 = v5;
                    if (v5 == 0) {
                        // break -> 0x4b1334
                        break;
                    }
                    v2 = v5;
                }
            }
        }
    }
    uint64_t v6 = v2;
    int64_t v7 = *(int64_t *)(a2 + 8); // 0x4b1334
    int64_t v8 = 0; // 0x4b133b
    if (v7 != 0) {
        int64_t v9 = *(int64_t *)(a2 + 16); // 0x4b133d
        int64_t v10 = v7 - 1; // 0x4b1341
        v8 = v7;
        if (*(int64_t *)(v9 + 8 * v10) == 0) {
            // 0x4b135c
            v8 = v10;
            if (v10 != 0) {
                int64_t v11 = v10; // 0x4b1358
                v8 = v11;
                while (*(int64_t *)(v9 - 8 + 8 * v11) == 0) {
                    // 0x4b1358
                    v11--;
                    v8 = v11;
                    if (v11 == 0) {
                        // break -> 0x4b1364
                        break;
                    }
                    v8 = v11;
                }
            }
        }
    }
    // 0x4b1364
    if ((v8 || v6) == 0) {
        // 0x4b13b7
        return 0;
    }
    // 0x4b136e
    if (v6 > v8 || v6 == 0 || v6 < v8) {
        // 0x4b13b7
        return 1;
    }
    int64_t v12 = v6 - 1; // 0x4b137c
    int64_t v13 = *(int64_t *)(a1 + 16); // 0x4b1380
    int64_t v14 = *(int64_t *)(a2 + 16); // 0x4b1384
    int64_t v15 = 8 * v12; // 0x4b1388
    if (v12 != 0 != (*(int64_t *)(v14 + v15) == *(int64_t *)(v13 + v15))) {
        // 0x4b13b7
        return 1;
    }
    int64_t v16 = v12; // 0x4b1390
    int64_t v17 = 8 * v16 - 8;
    v16--;
    while (*(int64_t *)(v17 + v13) == *(int64_t *)(v17 + v14) == (v16 != 0)) {
        // 0x4b13a0
        v17 = 8 * v16 - 8;
        v16--;
    }
    // 0x4b13b7
    return 1;
}

// Address range: 0x4b93b0 - 0x4b9466
int64_t function_4b93b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4b93b0
    if (a1 == 0 || *(int64_t *)(a1 + 176) == 0) {
        // 0x4b9470
        int64_t result; // 0x4b93b0
        return result;
    }
    // 0x4b93e7
    return function_4b8fc0();
}

// Address range: 0x50cf40 - 0x50cff6
int64_t function_50cf40(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    if ((char)a5 != 0) {
        int64_t v1 = a1; // 0x50cf5b
        v1 -= 4;
        *(int32_t *)v1 = *(int32_t *)(a3 + 16 + 4 * a2);
        // 0x50cf80
        return a1 - v1 >> 2;
    }
    if ((a4 & 74) == 64) {
        // 0x50cfd7
        return (int64_t)*(int32_t *)(a3 + 16 + (4 * a2 & 28));
    }
    int64_t v2 = ((int32_t)a4 & (int32_t)"le") == 0 ? 4 : 20; // 0x50cfad
    int64_t v3 = a1; // 0x50cfb1
    uint64_t v4 = a2;
    v3 -= 4;
    *(int32_t *)v3 = *(int32_t *)(4 * (v4 % 16 + v2) + a3);
    int64_t v5 = v4 / 16; // 0x50cfd3
    while (v4 >= 16) {
        // 0x50cfb8
        v4 = v5;
        v3 -= 4;
        *(int32_t *)v3 = *(int32_t *)(4 * (v4 % 16 + v2) + a3);
        v5 = v4 / 16;
    }
    // 0x50cf80
    return a1 - v3 >> 2;
}

// Address range: 0x50d000 - 0x50d0b6
int64_t function_50d000(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    if ((char)a5 != 0) {
        int64_t v1 = a1; // 0x50d01b
        v1 -= 4;
        *(int32_t *)v1 = *(int32_t *)(a3 + 16 + 4 * a2);
        // 0x50d040
        return a1 - v1 >> 2;
    }
    if ((a4 & 74) == 64) {
        // 0x50d097
        return (int64_t)*(int32_t *)(a3 + 16 + (4 * a2 & 28));
    }
    int64_t v2 = ((int32_t)a4 & (int32_t)"le") == 0 ? 4 : 20; // 0x50d06d
    int64_t v3 = a1; // 0x50d071
    uint64_t v4 = a2;
    v3 -= 4;
    *(int32_t *)v3 = *(int32_t *)(4 * (v4 % 16 + v2) + a3);
    int64_t v5 = v4 / 16; // 0x50d093
    while (v4 >= 16) {
        // 0x50d078
        v4 = v5;
        v3 -= 4;
        *(int32_t *)v3 = *(int32_t *)(4 * (v4 % 16 + v2) + a3);
        v5 = v4 / 16;
    }
    // 0x50d040
    return a1 - v3 >> 2;
}

// Address range: 0x54fb40 - 0x54fbf1
// From class:    std::__codecvt_utf16_base<wchar_t>
// Type:          virtual member function
int64_t function_54fb40(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    int64_t v1 = a6; // bp-72, 0x54fb57
    int64_t v2 = (int64_t)*(int32_t *)(a1 + 32); // 0x54fb5b
    __readfsqword(40);
    int64_t v3 = function_54e460(&v1, v2); // 0x54fb87
    int64_t result2 = 1; // 0x54fb93
    int64_t v4 = a3; // 0x54fb93
    if ((char)v3 != 0) {
        int64_t v5 = a3; // 0x54fbc1
        result2 = 0;
        v4 = a3;
        if (a3 != a4) {
            int64_t v6 = (int64_t)*(int32_t *)v5; // 0x54fba0
            int64_t result = v6; // 0x54fba9
            while (*(int64_t *)(a1 + 24) >= v6) {
                int64_t v7 = function_54de20(&v1, v6, v2); // 0x54fbb1
                result = v7;
                if ((char)v7 == 0) {
                    // break -> 0x54fbf8
                    break;
                }
                int64_t v8 = v5 + 4; // 0x54fbba
                v5 = v8;
                result2 = 0;
                v4 = v8;
                if (v8 == a4) {
                    goto lab_0x54fbc8;
                }
                v6 = (int64_t)*(int32_t *)v5;
                result = v6;
            }
            // 0x54fbf8
            return result;
        }
    }
  lab_0x54fbc8:
    // 0x54fbc8
    *(int64_t *)a5 = v4;
    __readfsqword(40);
    *(int64_t *)a8 = v1;
    return result2;
}
