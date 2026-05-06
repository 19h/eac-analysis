/*
 * Targeted RetDec C for native executable gap queue batch 35.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x570890-0x57094e rank=- name=- kind=- bytes=- uncovered=-
 *   0x36840-0x368fd rank=- name=- kind=- bytes=- uncovered=-
 *   0x36cda-0x36d97 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1a7ffe-0x1a80bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x4f3f50-0x4f400d rank=- name=- kind=- bytes=- uncovered=-
 *   0x4f4060-0x4f411d rank=- name=- kind=- bytes=- uncovered=-
 *   0x569eb0-0x569f6d rank=- name=- kind=- bytes=- uncovered=-
 *   0x569fc0-0x56a07d rank=- name=- kind=- bytes=- uncovered=-
 *   0x4d1b80-0x4d1c3c rank=- name=- kind=- bytes=- uncovered=-
 *   0x20c63-0x20d1e rank=- name=- kind=- bytes=- uncovered=-
 *   0x25442-0x254fd rank=- name=- kind=- bytes=- uncovered=-
 *   0x47294-0x4734f rank=- name=- kind=- bytes=- uncovered=-
 *   0x4944cc-0x494587 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b5fe0-0x4b609b rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c0b00-0x4c0bbb rank=- name=- kind=- bytes=- uncovered=-
 *   0x54f930-0x54f9eb rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_1a7ffe(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_20c63(int64_t a1, int64_t a2, int64_t a3);
int64_t function_25442(int64_t a1, int64_t a2);
int64_t function_25da6();
int64_t function_29cea();
int64_t function_29cf4();
int64_t function_29ef7();
int64_t function_35b6a();
int64_t function_36840(int64_t result, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_36b3c();
int64_t function_36cda(int64_t result, uint64_t a2, uint64_t a3);
int64_t function_36fe2();
int64_t function_36ff8();
int64_t function_47294(int64_t a1);
int64_t function_4944cc(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4add30();
int64_t function_4aec20();
int64_t function_4b5fe0(int64_t a1, int64_t a2);
int64_t function_4c0600();
int64_t function_4c0830();
int64_t function_4c0b00(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11);
int64_t function_4d1510();
int64_t function_4d1b80(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, uint64_t a10);
int64_t function_4eeb40();
int64_t function_4eeb50();
int64_t function_4efd30();
int64_t function_4f0ae0();
int64_t function_4f0bc0();
int64_t function_4f3f50(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4f4060(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4fd1e();
int64_t function_52b020();
int64_t function_542470();
int64_t function_542590();
int64_t function_54de20();
int64_t function_54e460();
int64_t function_54f930(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_565970();
int64_t function_569eb0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_569fc0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_570890(int64_t a1, int64_t a2, int64_t a3);
int64_t function_c57b8();

// Address range: 0x20c63 - 0x20d1e
int64_t function_20c63(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a3 & 0xffffffff; // 0x20c75
    int64_t v2 = __readfsqword(40); // 0x20c87
    int32_t v3 = a3;
    int64_t v4 = v3 > (int32_t)&g1 ? (int64_t)&g1 : v1; // 0x20ca5
    int64_t v5; // bp-4160, 0x20c63
    __asm_rep_stosb_memset((char *)&v5, 0, v4);
    int64_t v6 = v1; // 0x20cb9
    int64_t v7 = 1; // 0x20cb9
    if (v3 != 0) {
        int64_t v8 = v3 > (int32_t)&g1 ? (int64_t)&g1 & 0xffffffff : v6; // 0x20cc8
        v7 = 0;
        while (v8 == 0) {
            int64_t v9 = v6 - v8; // 0x20ce6
            int32_t v10 = v9; // 0x20cb7
            v6 = v9 & 0xffffffff;
            v7 = 1;
            if (v10 == 0) {
                // break -> 0x20cf4
                break;
            }
            v8 = v10 > (int32_t)&g1 ? (int64_t)&g1 & 0xffffffff : v6;
            v7 = 0;
        }
    }
    int64_t result = v7; // 0x20d05
    if (v2 != __readfsqword(40)) {
        // 0x20d07
        __stack_chk_fail();
        result = (int64_t)&g7;
    }
    // 0x20d0c
    return result;
}

// Address range: 0x25442 - 0x254fd
int64_t function_25442(int64_t a1, int64_t a2) {
    int64_t v1 = a1 + 8; // 0x25446
    int64_t v2 = *(int64_t *)(a1 + 16);
    int64_t v3 = v1; // 0x25458
    if (v2 != 0) {
        int64_t v4 = v2;
        int64_t v5; // 0x25442
        int64_t v6; // 0x25442
        while ((a2 & 0xffffffff) > (int64_t)*(int32_t *)(v4 + 32)) {
            // 0x2546a
            v5 = *(int64_t *)(v4 + 24);
            v6 = v1;
            if (v5 == 0) {
                // break (via goto) -> 0x25470
                goto lab_0x25470;
            }
            v4 = v5;
        }
        int64_t v7 = *(int64_t *)(v4 + 16);
        v6 = v4;
        while (v7 != 0) {
            int64_t v8 = v4;
            v4 = v7;
            while ((a2 & 0xffffffff) > (int64_t)*(int32_t *)(v4 + 32)) {
                // 0x2546a
                v5 = *(int64_t *)(v4 + 24);
                v6 = v8;
                if (v5 == 0) {
                    // break (via goto) -> 0x25470
                    goto lab_0x25470;
                }
                v4 = v5;
            }
            // 0x25461
            v7 = *(int64_t *)(v4 + 16);
            v6 = v4;
        }
      lab_0x25470:
        // 0x25470
        v3 = v1;
        if (v1 != v6) {
            // 0x25475
            v3 = v6;
            if (0x100000000 * a2 >> 32 >= (int64_t)*(int32_t *)(v6 + 32)) {
                // 0x254f0
                return v6 + 36;
            }
        }
    }
    int64_t v9 = function_4efd30(40); // 0x25487
    int64_t v10 = v9 + 32; // 0x25496
    *(char *)(v9 + 36) = 0;
    int32_t * v11 = (int32_t *)v10; // 0x254a4
    *v11 = (int32_t)a2;
    int64_t v12 = function_25da6(a1, v3, v10); // 0x254a7
    if (v10 == 0) {
        // 0x254e5
        function_4eeb50(v9);
        // 0x254f0
        return v12 + 36;
    }
    bool v13 = v1 == v10 | v12 != 0;
    bool v14 = v13; // 0x254c4
    if (!v13) {
        int32_t v15 = *(int32_t *)(v9 + 64); // 0x254c6
        int32_t v16 = *v11; // 0x254c9
        int32_t v17 = v16 - v15; // 0x254c9
        v14 = v17 < 0 != ((v17 ^ v16) & (v16 ^ v15)) < 0;
    }
    // 0x254d0
    function_4f0bc0((int64_t)v14, v9, v10, v1);
    int64_t * v18 = (int64_t *)(a1 + 40); // 0x254df
    *v18 = *v18 + 1;
    // 0x254f0
    return v9 + 36;
}

// Address range: 0x36840 - 0x368fd
int64_t function_36840(int64_t result, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = function_36b3c(a2, a3, "basic_string::substr"); // 0x3685e
    uint64_t v2 = *(int64_t *)(a3 - 24) - v1; // 0x36878
    int64_t v3 = 4 * ((v2 > a4 ? a4 : v2) + v1); // 0x36885
    int64_t v4 = 4 * function_36b3c(a2, v1, "basic_string::basic_string"); // 0x36892
    int64_t v5 = v4 + a3; // 0x36896
    if (v3 + a3 == v5) {
        // 0x368ed
        *(int64_t *)result = (int64_t)&g6;
        return result;
    }
    int64_t v6; // 0x36840
    if (v5 == 0) {
        // 0x368d6
        function_542470("basic_string::_S_construct null not valid");
        v6 = (int64_t)&g6;
    } else {
        int64_t v7 = v3 - v4 >> 2; // 0x368a8
        int64_t v8 = function_35b6a(v7, 0); // 0x368af
        int64_t v9 = v8 + 24; // 0x368b4
        function_29ef7(v9, v5, v7);
        function_29cf4(v8, v7);
        v6 = v9;
    }
    // 0x368ed
    *(int64_t *)result = v6;
    return result;
}

// Address range: 0x36cda - 0x36d97
int64_t function_36cda(int64_t result, uint64_t a2, uint64_t a3) {
    int64_t v1 = result; // 0x36cf1
    if (a3 >= 0xfffffffffffffff) {
        // 0x36cf3
        function_542590("basic_string::assign");
        v1 = (int64_t)"basic_string::assign";
    }
    int64_t v2 = v1; // 0x36d08
    if (v1 <= a2) {
        int64_t v3 = v1 - 24; // 0x36d35
        v2 = v1;
        if (4 * *(int64_t *)v3 + v1 >= a2) {
            int64_t v4 = function_29cea(v3); // 0x36d46
            v2 = v3;
            if ((char)v4 == 0) {
                uint64_t v5 = (a2 - v3) / 4; // 0x36d59
                if (v5 < a3) {
                    if (v5 != 0) {
                        // 0x36d74
                        function_36fe2(v3, a2, a3);
                    }
                } else {
                    // 0x36d62
                    function_29ef7(v3, a2, a3);
                }
                // 0x36d7f
                function_29cf4(v1 - 48, a3);
                // 0x36d8f
                return result;
            }
        }
    }
    // 0x36d0a
    function_36ff8(result, 0, *(int64_t *)(v2 - 24), a3);
    if (a3 != 0) {
        // 0x36d24
        function_29ef7(result, a2, a3);
    }
    // 0x36d8f
    return result;
}

// Address range: 0x47294 - 0x4734f
int64_t function_47294(int64_t a1) {
    int64_t v1 = __readfsqword(40); // 0x472c1
    function_4fd1e();
    int64_t result = 0; // 0x4733b
    if (v1 != __readfsqword(40)) {
        // 0x4733d
        __stack_chk_fail();
        result = (int64_t)&g7;
    }
    // 0x47342
    return result;
}

// Address range: 0x1a7ffe - 0x1a80bb
int64_t function_1a7ffe(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x1a7ffe
    int64_t v1; // bp-8, 0x1a7ffe
    v1 = (int64_t)&v1 + 8;
    return function_c57b8();
}

// Address range: 0x4944cc - 0x494587
int64_t function_4944cc(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 + 8; // 0x4944d0
    int64_t v2 = *(int64_t *)(a1 + 16);
    int64_t v3; // 0x4944cc
    uint32_t v4 = (int32_t)v3;
    int64_t v5 = v1; // 0x4944ee
    int32_t * v6; // 0x4944cc
    int64_t result2; // 0x4944cc
    if (v2 == 0) {
        goto lab_0x494513;
    } else {
        v5 = v2;
        int32_t * v7 = (int32_t *)(v5 + 32);
        uint32_t v8 = *v7; // 0x4944f0
        int64_t v9 = *(int64_t *)((v8 <= v4 ? 24 : 16) + v5);
        while (v9 != 0) {
            // 0x4944f0
            v5 = v9;
            v7 = (int32_t *)(v5 + 32);
            v8 = *v7;
            v9 = *(int64_t *)((v8 <= v4 ? 24 : 16) + v5);
        }
        // 0x49450f
        v6 = v7;
        result2 = v5;
        if (v8 <= v4) {
            goto lab_0x494526;
        } else {
            goto lab_0x494513;
        }
    }
  lab_0x494513:;
    int64_t v10 = v5; // 0x494517
    if (*(int64_t *)(a1 + 24) == v5) {
        goto lab_0x494531;
    } else {
        int64_t v11 = function_4f0ae0(v5); // 0x49451c
        v6 = (int32_t *)(v11 + 32);
        result2 = v11;
        goto lab_0x494526;
    }
  lab_0x494531:;
    int64_t v12 = 1; // 0x494537
    if (v1 != v10) {
        // 0x494539
        v12 = *(int32_t *)(v10 + 32) > v4;
    }
    int64_t result = function_4efd30(40); // 0x494549
    *(int32_t *)(result + 32) = v4;
    function_4f0bc0(v12, result, v10, v1);
    int64_t * v13 = (int64_t *)(a1 + 40); // 0x49456c
    *v13 = *v13 + 1;
    // 0x49457a
    return result;
  lab_0x494526:
    // 0x494526
    v10 = v5;
    if (*v6 >= v4) {
        // 0x49457a
        return result2;
    }
    goto lab_0x494531;
}

// Address range: 0x4b5fe0 - 0x4b609b
int64_t function_4b5fe0(int64_t a1, int64_t a2) {
    int64_t v1 = a1 + 40; // 0x4b5ff4
    int64_t v2; // bp-88, 0x4b5fe0
    int64_t v3 = (int64_t)&v2; // 0x4b6001
    __asm_rep_stosq_memset((char *)&v2, 0, 6);
    int64_t v4 = 0;
    char * v5 = (char *)(a1 + 15 + v4); // 0x4b6010
    int64_t v6 = (int64_t)*v5 + 1; // 0x4b6016
    char v7 = v6; // 0x4b601a
    *v5 = v7;
    int64_t v8; // 0x4b5fe0
    while (v7 == 0) {
        // 0x4b6024
        v8 = v4 - 1;
        if (v4 == -15) {
            // break -> 0x4b602e
            break;
        }
        v4 = v8;
        v5 = (char *)(a1 + 15 + v4);
        v6 = (int64_t)*v5 + 1;
        v7 = v6;
        *v5 = v7;
    }
    int64_t v9 = v3 + 16; // 0x4b603c
    function_4aec20(v1, 1, a1, v3, v6);
    int64_t v10 = 0; // 0x4b604d
    int64_t v11; // bp-40, 0x4b5fe0
    while (v9 != (int64_t)&v11) {
        int64_t v12 = v9;
        v4 = 0;
        v5 = (char *)(a1 + 15 + v4);
        v6 = (int64_t)*v5 + 1;
        v7 = v6;
        *v5 = v7;
        while (v7 == 0) {
            // 0x4b6024
            v8 = v4 - 1;
            if (v4 == -15) {
                // break -> 0x4b602e
                break;
            }
            v4 = v8;
            v5 = (char *)(a1 + 15 + v4);
            v6 = (int64_t)*v5 + 1;
            v7 = v6;
            *v5 = v7;
        }
        // 0x4b602e
        v9 = v12 + 16;
        function_4aec20(v1, 1, a1, v12, v6);
        v10 = 0;
    }
    char v13 = *(char *)(v10 + a2); // 0x4b6058
    char * v14 = (char *)(v10 + v3); // 0x4b605e
    *v14 = *v14 ^ v13;
    int64_t v15 = v10 + 1; // 0x4b6061
    v10 = v15;
    while (v15 != 48) {
        // 0x4b6058
        v13 = *(char *)(v10 + a2);
        v14 = (char *)(v10 + v3);
        *v14 = *v14 ^ v13;
        v15 = v10 + 1;
        v10 = v15;
    }
    // 0x4b606b
    function_4add30(v1, &v2, 256, v13);
    int32_t v16; // 0x4b5fe0
    *(int64_t *)(a1 + 8) = (int64_t)v16;
    return 0;
}

// Address range: 0x4c0b00 - 0x4c0bb7
int64_t function_4c0b00(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11) {
    int64_t result = function_4c0600(); // 0x4c0b4a
    if ((int32_t)result == 0) {
        // 0x4c0b80
        return function_4c0830(a1, a3, a8, a9);
    }
    // 0x4c0b53
    return result;
}

// Address range: 0x4d1b80 - 0x4d1c3c
int64_t function_4d1b80(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, uint64_t a10) {
    int64_t v1 = a6; // bp-104, 0x4d1b9f
    int64_t result = function_4d1510(); // 0x4d1bd5
    if (a10 == 0 || (int32_t)result != 0) {
        // 0x4d1c31
        return result;
    }
    int64_t v2 = 0; // 0x4d1b80
    int64_t v3 = 0; // 0x4d1c07
    uint64_t v4 = v2 + 1; // 0x4d1bf3
    char v5 = *(char *)((int64_t)&v1 + 48 + v2 % 256); // 0x4d1bf6
    uint64_t v6 = v4 % 256; // 0x4d1bff
    v3 |= (int64_t)(*(char *)a9 ^ v5);
    v2 = v4 & 0xffffffff;
    while (v6 < a10) {
        int64_t v7 = v6;
        v4 = v2 + 1;
        v5 = *(char *)((int64_t)&v1 + 48 + v2 % 256);
        v6 = v4 % 256;
        v3 |= (int64_t)(*(char *)(v7 + a9) ^ v5);
        v2 = v4 & 0xffffffff;
    }
    // 0x4d1c0f
    if (v3 == 0) {
        // 0x4d1c31
        return result;
    }
    // 0x4d1c14
    if (a2 == 0) {
        // 0x4d1c31
        return 0xfffffff1;
    }
    int64_t v8 = a8; // 0x4d1c1b
    *(char *)v8 = 0;
    v8++;
    while (v8 != a8 + a2) {
        // 0x4d1c20
        *(char *)v8 = 0;
        v8++;
    }
    // 0x4d1c31
    return 0xfffffff1;
}

// Address range: 0x4f3f50 - 0x4f400c
// From class:    std::moneypunct<char, true>
// Type:          constructor
int64_t function_4f3f50(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4f3f50
    *(int64_t *)a1 = (int64_t)&g4;
    int64_t * v1 = (int64_t *)(a1 + 16); // 0x4f3f67
    int64_t v2 = *v1; // 0x4f3f67
    int64_t v3 = v2; // 0x4f3f70
    int64_t v4; // 0x4f3f50
    if (*(int64_t *)(v2 + 24) != 0) {
        int64_t v5 = *(int64_t *)(v2 + 16); // 0x4f3f72
        v3 = v2;
        if (v5 != 0) {
            // 0x4f3f7b
            function_4eeb40(v5, a2, a3, v4);
            v3 = *v1;
        }
    }
    int64_t v6 = v3; // 0x4f3f89
    if (*(int64_t *)(v3 + 64) != 0) {
        int64_t v7 = *(int64_t *)(v3 + 56); // 0x4f3f8b
        v6 = v3;
        if (v7 != 0) {
            // 0x4f3f94
            function_4eeb40(v7, a2, a3, v4);
            v6 = *v1;
        }
    }
    int64_t v8 = a3; // 0x4f3fa2
    int64_t v9 = a2; // 0x4f3fa2
    int64_t v10; // 0x4f3f50
    if (*(int64_t *)(v6 + 80) != 0) {
        int64_t v11 = *(int64_t *)(v6 + 72); // 0x4f3fa4
        bool v12; // 0x4f3f50
        int64_t v13 = v12 ? -1 : 1; // 0x4f3fb7
        int64_t v14 = (int64_t)"()"; // 0x4f3f50
        unsigned char v15 = *(char *)v11; // 0x4f3fb7
        char v16 = *(char *)v14; // 0x4f3fb7
        v9 = v11 + v13;
        int64_t v17 = 2; // 0x4f3fb7
        char v18 = v16; // 0x4f3fb7
        bool v19 = false; // 0x4f3fb7
        while (v15 == v16) {
            v14 += v13;
            v18 = v15;
            v19 = true;
            if (v17 == 0) {
                // break -> 
                break;
            }
            v15 = *(char *)v9;
            v16 = *(char *)v14;
            v9 += v13;
            v17--;
            v18 = v16;
            v19 = false;
        }
        unsigned char v20 = v18;
        uint64_t v21 = (int64_t)!((v15 < v20 | v19)) - (int64_t)(v15 < v20); // 0x4f3fbc
        v8 = v21 % 256 | a3 & -256;
        v10 = v17;
        if ((char)v21 != 0) {
            // 0x4f4000
            function_4eeb40(v11, v9, v8, v17);
            return *v1;
        }
    }
    // 0x4f3fc3
    if (*(int64_t *)(v6 + 48) == 0) {
        // 0x4f3ff1
        return function_565970(a1);
    }
    int64_t v22 = *(int64_t *)(v6 + 40); // 0x4f3fca
    if (v22 != 0) {
        // 0x4f3fd3
        function_4eeb40(v22, v9, v8, v10);
    }
    // 0x4f3ff1
    return function_565970(a1);
}

// Address range: 0x4f4060 - 0x4f411c
// From class:    std::moneypunct<char, false>
// Type:          constructor
int64_t function_4f4060(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4f4060
    *(int64_t *)a1 = (int64_t)&g5;
    int64_t * v1 = (int64_t *)(a1 + 16); // 0x4f4077
    int64_t v2 = *v1; // 0x4f4077
    int64_t v3 = v2; // 0x4f4080
    int64_t v4; // 0x4f4060
    if (*(int64_t *)(v2 + 24) != 0) {
        int64_t v5 = *(int64_t *)(v2 + 16); // 0x4f4082
        v3 = v2;
        if (v5 != 0) {
            // 0x4f408b
            function_4eeb40(v5, a2, a3, v4);
            v3 = *v1;
        }
    }
    int64_t v6 = v3; // 0x4f4099
    if (*(int64_t *)(v3 + 64) != 0) {
        int64_t v7 = *(int64_t *)(v3 + 56); // 0x4f409b
        v6 = v3;
        if (v7 != 0) {
            // 0x4f40a4
            function_4eeb40(v7, a2, a3, v4);
            v6 = *v1;
        }
    }
    int64_t v8 = a3; // 0x4f40b2
    int64_t v9 = a2; // 0x4f40b2
    int64_t v10; // 0x4f4060
    if (*(int64_t *)(v6 + 80) != 0) {
        int64_t v11 = *(int64_t *)(v6 + 72); // 0x4f40b4
        bool v12; // 0x4f4060
        int64_t v13 = v12 ? -1 : 1; // 0x4f40c7
        int64_t v14 = (int64_t)"()"; // 0x4f4060
        unsigned char v15 = *(char *)v11; // 0x4f40c7
        char v16 = *(char *)v14; // 0x4f40c7
        v9 = v11 + v13;
        int64_t v17 = 2; // 0x4f40c7
        char v18 = v16; // 0x4f40c7
        bool v19 = false; // 0x4f40c7
        while (v15 == v16) {
            v14 += v13;
            v18 = v15;
            v19 = true;
            if (v17 == 0) {
                // break -> 
                break;
            }
            v15 = *(char *)v9;
            v16 = *(char *)v14;
            v9 += v13;
            v17--;
            v18 = v16;
            v19 = false;
        }
        unsigned char v20 = v18;
        uint64_t v21 = (int64_t)!((v15 < v20 | v19)) - (int64_t)(v15 < v20); // 0x4f40cc
        v8 = v21 % 256 | a3 & -256;
        v10 = v17;
        if ((char)v21 != 0) {
            // 0x4f4110
            function_4eeb40(v11, v9, v8, v17);
            return *v1;
        }
    }
    // 0x4f40d3
    if (*(int64_t *)(v6 + 48) == 0) {
        // 0x4f4101
        return function_565970(a1);
    }
    int64_t v22 = *(int64_t *)(v6 + 40); // 0x4f40da
    if (v22 != 0) {
        // 0x4f40e3
        function_4eeb40(v22, v9, v8, v10);
    }
    // 0x4f4101
    return function_565970(a1);
}

// Address range: 0x54f930 - 0x54f9e1
// From class:    std::__codecvt_utf16_base<char32_t>
// Type:          virtual member function
int64_t function_54f930(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    int64_t v1 = a6; // bp-72, 0x54f947
    int64_t v2 = (int64_t)*(int32_t *)(a1 + 24); // 0x54f94b
    __readfsqword(40);
    int64_t v3 = function_54e460(&v1, v2); // 0x54f977
    int64_t result2 = 1; // 0x54f983
    int64_t v4 = a3; // 0x54f983
    if ((char)v3 != 0) {
        int64_t v5 = a3; // 0x54f9b1
        result2 = 0;
        v4 = a3;
        if (a3 != a4) {
            int64_t v6 = (int64_t)*(int32_t *)v5; // 0x54f990
            int64_t result = v6; // 0x54f999
            while (*(int64_t *)(a1 + 16) >= v6) {
                int64_t v7 = function_54de20(&v1, v6, v2); // 0x54f9a1
                result = v7;
                if ((char)v7 == 0) {
                    // break -> 0x54f9e8
                    break;
                }
                int64_t v8 = v5 + 4; // 0x54f9aa
                v5 = v8;
                result2 = 0;
                v4 = v8;
                if (v8 == a4) {
                    goto lab_0x54f9b8;
                }
                v6 = (int64_t)*(int32_t *)v5;
                result = v6;
            }
            // 0x54f9e8
            return result;
        }
    }
  lab_0x54f9b8:
    // 0x54f9b8
    *(int64_t *)a5 = v4;
    __readfsqword(40);
    *(int64_t *)a8 = v1;
    return result2;
}

// Address range: 0x569eb0 - 0x569f6c
// From class:    std::__cxx11::moneypunct<char, true>
// Type:          constructor
int64_t function_569eb0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x569eb0
    *(int64_t *)a1 = (int64_t)&g2;
    int64_t * v1 = (int64_t *)(a1 + 16); // 0x569ec7
    int64_t v2 = *v1; // 0x569ec7
    int64_t v3 = v2; // 0x569ed0
    int64_t v4; // 0x569eb0
    if (*(int64_t *)(v2 + 24) != 0) {
        int64_t v5 = *(int64_t *)(v2 + 16); // 0x569ed2
        v3 = v2;
        if (v5 != 0) {
            // 0x569edb
            function_4eeb40(v5, a2, a3, v4);
            v3 = *v1;
        }
    }
    int64_t v6 = v3; // 0x569ee9
    if (*(int64_t *)(v3 + 64) != 0) {
        int64_t v7 = *(int64_t *)(v3 + 56); // 0x569eeb
        v6 = v3;
        if (v7 != 0) {
            // 0x569ef4
            function_4eeb40(v7, a2, a3, v4);
            v6 = *v1;
        }
    }
    int64_t v8 = a3; // 0x569f02
    int64_t v9 = a2; // 0x569f02
    int64_t v10; // 0x569eb0
    if (*(int64_t *)(v6 + 80) != 0) {
        int64_t v11 = *(int64_t *)(v6 + 72); // 0x569f04
        bool v12; // 0x569eb0
        int64_t v13 = v12 ? -1 : 1; // 0x569f17
        int64_t v14 = (int64_t)"()"; // 0x569eb0
        unsigned char v15 = *(char *)v11; // 0x569f17
        char v16 = *(char *)v14; // 0x569f17
        v9 = v11 + v13;
        int64_t v17 = 2; // 0x569f17
        char v18 = v16; // 0x569f17
        bool v19 = false; // 0x569f17
        while (v15 == v16) {
            v14 += v13;
            v18 = v15;
            v19 = true;
            if (v17 == 0) {
                // break -> 
                break;
            }
            v15 = *(char *)v9;
            v16 = *(char *)v14;
            v9 += v13;
            v17--;
            v18 = v16;
            v19 = false;
        }
        unsigned char v20 = v18;
        uint64_t v21 = (int64_t)!((v15 < v20 | v19)) - (int64_t)(v15 < v20); // 0x569f1c
        v8 = v21 % 256 | a3 & -256;
        v10 = v17;
        if ((char)v21 != 0) {
            // 0x569f60
            function_4eeb40(v11, v9, v8, v17);
            return *v1;
        }
    }
    // 0x569f23
    if (*(int64_t *)(v6 + 48) == 0) {
        // 0x569f51
        return function_565970(a1);
    }
    int64_t v22 = *(int64_t *)(v6 + 40); // 0x569f2a
    if (v22 != 0) {
        // 0x569f33
        function_4eeb40(v22, v9, v8, v10);
    }
    // 0x569f51
    return function_565970(a1);
}

// Address range: 0x569fc0 - 0x56a07c
// From class:    std::__cxx11::moneypunct<char, false>
// Type:          constructor
int64_t function_569fc0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x569fc0
    *(int64_t *)a1 = (int64_t)&g3;
    int64_t * v1 = (int64_t *)(a1 + 16); // 0x569fd7
    int64_t v2 = *v1; // 0x569fd7
    int64_t v3 = v2; // 0x569fe0
    int64_t v4; // 0x569fc0
    if (*(int64_t *)(v2 + 24) != 0) {
        int64_t v5 = *(int64_t *)(v2 + 16); // 0x569fe2
        v3 = v2;
        if (v5 != 0) {
            // 0x569feb
            function_4eeb40(v5, a2, a3, v4);
            v3 = *v1;
        }
    }
    int64_t v6 = v3; // 0x569ff9
    if (*(int64_t *)(v3 + 64) != 0) {
        int64_t v7 = *(int64_t *)(v3 + 56); // 0x569ffb
        v6 = v3;
        if (v7 != 0) {
            // 0x56a004
            function_4eeb40(v7, a2, a3, v4);
            v6 = *v1;
        }
    }
    int64_t v8 = a3; // 0x56a012
    int64_t v9 = a2; // 0x56a012
    int64_t v10; // 0x569fc0
    if (*(int64_t *)(v6 + 80) != 0) {
        int64_t v11 = *(int64_t *)(v6 + 72); // 0x56a014
        bool v12; // 0x569fc0
        int64_t v13 = v12 ? -1 : 1; // 0x56a027
        int64_t v14 = (int64_t)"()"; // 0x569fc0
        unsigned char v15 = *(char *)v11; // 0x56a027
        char v16 = *(char *)v14; // 0x56a027
        v9 = v11 + v13;
        int64_t v17 = 2; // 0x56a027
        char v18 = v16; // 0x56a027
        bool v19 = false; // 0x56a027
        while (v15 == v16) {
            v14 += v13;
            v18 = v15;
            v19 = true;
            if (v17 == 0) {
                // break -> 
                break;
            }
            v15 = *(char *)v9;
            v16 = *(char *)v14;
            v9 += v13;
            v17--;
            v18 = v16;
            v19 = false;
        }
        unsigned char v20 = v18;
        uint64_t v21 = (int64_t)!((v15 < v20 | v19)) - (int64_t)(v15 < v20); // 0x56a02c
        v8 = v21 % 256 | a3 & -256;
        v10 = v17;
        if ((char)v21 != 0) {
            // 0x56a070
            function_4eeb40(v11, v9, v8, v17);
            return *v1;
        }
    }
    // 0x56a033
    if (*(int64_t *)(v6 + 48) == 0) {
        // 0x56a061
        return function_565970(a1);
    }
    int64_t v22 = *(int64_t *)(v6 + 40); // 0x56a03a
    if (v22 != 0) {
        // 0x56a043
        function_4eeb40(v22, v9, v8, v10);
    }
    // 0x56a061
    return function_565970(a1);
}

// Address range: 0x570890 - 0x57094e
int64_t function_570890(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x57089e
    if (a2 == 0 == (a3 != 0)) {
        // 0x570947
        return 0;
    }
    int64_t v2 = a3 - a2; // 0x5708bf
    int64_t v3 = v2; // bp-40, 0x5708c6
    int64_t v4; // 0x570890
    int64_t v5; // 0x570890
    if (v2 < 16) {
        if (v2 != 1) {
            // 0x570940
            v5 = a1;
            v4 = a1;
            if (v2 == 0) {
                goto lab_0x5708e4;
            } else {
                goto lab_0x570929;
            }
        } else {
            // 0x5708d9
            int64_t v6; // 0x570890
            *(char *)a1 = (char)v6;
            v5 = a1;
            goto lab_0x5708e4;
        }
    } else {
        int64_t v7 = function_52b020(a1, &v3, 0); // 0x570918
        *(int64_t *)a1 = v7;
        *(int64_t *)(a1 + 16) = v3;
        v4 = v7;
        goto lab_0x570929;
    }
  lab_0x570929:
    // 0x570929
    memcpy((int64_t *)v4, (int64_t *)a2, (int32_t)v2);
    v5 = v4;
    goto lab_0x5708e4;
  lab_0x5708e4:
    // 0x5708e4
    *(int64_t *)(a1 + 8) = v3;
    *(char *)(v3 + v5) = 0;
    return __readfsqword(40) ^ v1;
}
