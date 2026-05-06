/*
 * Targeted RetDec C for native executable gap queue batch 48.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x56b730-0x56b7c3 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2a421-0x2a4b3 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4eda6-0x4ee38 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2c7675-0x2c7707 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b1900-0x4b1992 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b19a0-0x4b1a32 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b7290-0x4b7322 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4caa90-0x4cab22 rank=- name=- kind=- bytes=- uncovered=-
 *   0x517140-0x5171d2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x54de20-0x54deb2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x54f4b0-0x54f542 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5601d0-0x560262 rank=- name=- kind=- bytes=- uncovered=-
 *   0x27998-0x27a29 rank=- name=- kind=- bytes=- uncovered=-
 *   0x53334-0x533c5 rank=- name=- kind=- bytes=- uncovered=-
 *   0x54fa00-0x54fa91 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5514e0-0x551571 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_255da();
int64_t function_27998(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_29432();
int64_t function_2a421(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2c7675(int64_t a1, int64_t a2);
int64_t function_2ce9a();
int64_t function_4b0890();
int64_t function_4b1300();
int64_t function_4b16c0();
int64_t function_4b1820();
int64_t function_4b1900(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4b19a0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4b6d30();
int64_t function_4b7290(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4caa90(int64_t a1);
int64_t function_4e928();
int64_t function_4eab6();
int64_t function_4eb52();
int64_t function_4eda6(int64_t a1, int64_t a2);
int64_t function_4eeb50();
int64_t function_4efd30();
int64_t function_50b1c0();
int64_t function_516790();
int64_t function_517140(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_53270();
int64_t function_53334(int64_t a1, int64_t a2, int64_t a3);
int64_t function_5423b0();
int64_t function_54de20(int64_t a1, uint64_t a2, uint64_t a3);
int64_t function_54e080();
int64_t function_54e240();
int64_t function_54f250();
int64_t function_54f4b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_54fa00(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_550870();
int64_t function_5514e0(int64_t wstr2, int64_t a2);
int64_t function_55f830();
int64_t function_5601d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_5659d0();
int64_t function_566180();
int64_t function_567d40();
int64_t function_567f20();
int64_t function_56b730(int64_t a1, int64_t a2, int64_t a3);
int64_t function_cf3c7();

// Address range: 0x27998 - 0x27a29
int64_t function_27998(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t * v1 = (int64_t *)(a2 + 8); // 0x2799f
    int64_t v2 = *v1 - a2; // 0x279a6
    int64_t * v3 = (int64_t *)a1; // 0x279a9
    *v3 = 0;
    int64_t * v4 = (int64_t *)(a1 + 8); // 0x279b0
    *v4 = 0;
    int64_t * v5 = (int64_t *)(a1 + 16); // 0x279b8
    *v5 = 0;
    uint64_t v6 = v2 >> 3; // 0x279c3
    int64_t v7 = 0; // 0x279c7
    if (v6 != 0) {
        if (v6 >= 0x2000000000000000) {
            // 0x279d8
            function_5423b0();
        }
        // 0x279dd
        v7 = function_4efd30(v2);
    }
    // 0x279ec
    *v3 = v7;
    *v4 = v7;
    *v5 = v7 + v2;
    int64_t v8 = *v1; // 0x279fb
    int64_t v9 = v8 - a2; // 0x27a07
    int64_t dest_mem = a2; // 0x27a0d
    if (v8 != a2) {
        // 0x27a0f
        dest_mem = (int64_t)memmove((int64_t *)v7, (int64_t *)a2, (int32_t)v9);
    }
    // 0x27a1d
    *v4 = dest_mem + v9;
    return dest_mem;
}

// Address range: 0x2a421 - 0x2a4b3
int64_t function_2a421(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = __readfsqword(40); // 0x2a425
    int64_t v2 = 10; // 0x2a443
    if (a1 != 0 && a2 != 0 && a3 != 0) {
        // 0x2a44d
        int64_t v3; // bp-48, 0x2a421
        __asm_rep_stosd_memset((char *)&v3, 0, 8);
        bool v4; // 0x2a421
        int64_t v5 = v4 ? -32 : 32; // 0x2a459
        function_29432(function_2ce9a(v5 + (int64_t)&v3), 0x2a4b3, &v3);
        v2 = 18;
    }
    int64_t result = v2; // 0x2a4a7
    if (v1 != __readfsqword(40)) {
        // 0x2a4a9
        __stack_chk_fail();
        result = (int64_t)&g5;
    }
    // 0x2a4ae
    return result;
}

// Address range: 0x4eda6 - 0x4ee38
int64_t function_4eda6(int64_t a1, int64_t a2) {
    uint64_t v1 = function_4eab6(a2); // 0x4edb9
    if ((char)v1 == 0) {
        // 0x4ee2d
        return v1 & -256 | v1 % 256;
    }
    int64_t v2 = a1 + 8; // 0x4edc8
    int64_t * v3 = (int64_t *)v2; // 0x4edc8
    if (*v3 != a2) {
        int64_t v4 = function_4eb52(a2 - 24); // 0x4edd6
        function_4e928(*v3 - 24);
        *v3 = v4;
    }
    // 0x4edef
    function_255da(v2);
    int64_t v5 = *v3; // 0x4edfa
    function_255da(v2);
    int64_t v6 = *v3; // 0x4ee03
    int64_t v7 = *(int64_t *)(v6 - 24) + v6; // 0x4ee0e
    if (v7 == v5) {
        // 0x4ee2d
        return v5 & -256 | v1 % 256;
    }
    int64_t v8 = v5; // 0x4ee14
    char * v9 = (char *)v8; // 0x4ee16
    char v10 = *v9; // 0x4ee16
    *v9 = v10 == 90 | (int32_t)v10 < 90 ? v10 | 32 : v10;
    v8++;
    while (v7 != v8) {
        // 0x4ee16
        v9 = (char *)v8;
        v10 = *v9;
        *v9 = v10 == 90 | (int32_t)v10 < 90 ? v10 | 32 : v10;
        v8++;
    }
    // 0x4ee2d
    return v7 & -256 | v1 % 256;
}

// Address range: 0x53334 - 0x533c5
int64_t function_53334(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x53341
    int64_t * v2 = (int64_t *)(a1 + 16); // 0x53351
    int64_t v3 = *v2; // 0x53351
    __asm_rep_stosb_memset((char *)a1, 0, 8 * *(int64_t *)(a1 + 8));
    *(int64_t *)(a1 + 24) = 0;
    *v2 = 0;
    function_53270(a1);
    if (v3 != 0) {
        int64_t v4 = *(int64_t *)v3; // 0x53399
        function_4eeb50(v3);
        while (v4 != 0) {
            int64_t v5 = v4;
            v4 = *(int64_t *)v5;
            function_4eeb50(v5);
        }
    }
    int64_t result = a1; // 0x533b7
    if (v1 != __readfsqword(40)) {
        // 0x533b9
        __stack_chk_fail();
        result = (int64_t)&g5;
    }
    // 0x533be
    return result;
}

// Address range: 0x2c7675 - 0x2c7707
int64_t function_2c7675(int64_t a1, int64_t a2) {
    // 0x2c7675
    int64_t v1; // bp+16, 0x2c7675
    v1 = (int64_t)&v1;
    return function_cf3c7();
}

// Address range: 0x4b1900 - 0x4b1992
int64_t function_4b1900(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4b1900
    int64_t v1; // 0x4b1900
    int32_t v2 = v1;
    if (v2 * (int32_t)a3 >= 0) {
        int64_t result = function_4b16c0(); // 0x4b192e
        if ((int32_t)result != 0) {
            // 0x4b193b
            return result;
        }
        // 0x4b1937
        *(int32_t *)a1 = v2;
        // 0x4b193b
        return result;
    }
    // 0x4b1958
    if ((int32_t)function_4b1300(a2, a3) < 0) {
        // 0x4b1980
        return function_4b1820(a1, a3, a2);
    }
    int64_t result2 = function_4b1820(a1, a2, a3); // 0x4b1970
    if ((int32_t)result2 != 0) {
        // 0x4b193b
        return result2;
    }
    // 0x4b1937
    *(int32_t *)a1 = v2;
    // 0x4b193b
    return result2;
}

// Address range: 0x4b19a0 - 0x4b1a32
int64_t function_4b19a0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4b19a0
    int64_t v1; // 0x4b19a0
    int32_t v2 = v1;
    if (v2 * (int32_t)a3 < 1) {
        int64_t result = function_4b16c0(); // 0x4b1a10
        if ((int32_t)result != 0) {
            // 0x4b19ef
            return result;
        }
        // 0x4b1a19
        *(int32_t *)a1 = v2;
        // 0x4b19ef
        return result;
    }
    // 0x4b19ce
    if ((int32_t)function_4b1300(a2, a3) < 0) {
        // 0x4b1a20
        return function_4b1820(a1, a3, a2);
    }
    int64_t result2 = function_4b1820(a1, a2, a3); // 0x4b19e6
    if ((int32_t)result2 != 0) {
        // 0x4b19ef
        return result2;
    }
    // 0x4b1a19
    *(int32_t *)a1 = v2;
    // 0x4b19ef
    return result2;
}

// Address range: 0x4b7290 - 0x4b7322
int64_t function_4b7290(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4b7290
    function_4b6d30(a1, a3);
    function_4b6d30(a2 + 128, a3 + 8);
    int64_t v1 = a2; // 0x4b72c2
    int64_t v2 = 0;
    int64_t v3 = a1 + 128;
    int64_t v4 = v2 + a1;
    int32_t * v5 = (int32_t *)v1; // 0x4b72cc
    *v5 = *(int32_t *)(v4 + 120);
    int32_t * v6 = (int32_t *)(v1 + 4); // 0x4b72d2
    *v6 = *(int32_t *)(v4 + 124);
    int64_t v7 = v2 + a2;
    *(int32_t *)v3 = *(int32_t *)(v7 + 248);
    *(int32_t *)(v3 + 4) = *(int32_t *)(v7 + 252);
    *(int32_t *)(v3 + 128) = *(int32_t *)(v3 - 128);
    *(int32_t *)(v3 + 132) = *(int32_t *)(v3 - 124);
    int64_t result = v3 + 8; // 0x4b7300
    *(int32_t *)(v1 + 256) = *v5;
    *(int32_t *)(v1 + 260) = *v6;
    int64_t v8 = v2 - 8; // 0x4b731b
    v1 += 8;
    while (v2 != -120) {
        // 0x4b72c8
        v2 = v8;
        v3 = result;
        v4 = v2 + a1;
        v5 = (int32_t *)v1;
        *v5 = *(int32_t *)(v4 + 120);
        v6 = (int32_t *)(v1 + 4);
        *v6 = *(int32_t *)(v4 + 124);
        v7 = v2 + a2;
        *(int32_t *)v3 = *(int32_t *)(v7 + 248);
        *(int32_t *)(v3 + 4) = *(int32_t *)(v7 + 252);
        *(int32_t *)(v3 + 128) = *(int32_t *)(v3 - 128);
        *(int32_t *)(v3 + 132) = *(int32_t *)(v3 - 124);
        result = v3 + 8;
        *(int32_t *)(v1 + 256) = *v5;
        *(int32_t *)(v1 + 260) = *v6;
        v8 = v2 - 8;
        v1 += 8;
    }
    // 0x4b731d
    return result;
}

// Address range: 0x4caa90 - 0x4cab22
int64_t function_4caa90(int64_t a1) {
    // 0x4caa90
    function_4b0890(a1 + 280);
    function_4b0890(a1 + 304);
    function_4b0890(a1 + 256);
    function_4b0890(a1 + 232);
    function_4b0890(a1 + 208);
    function_4b0890(a1 + 184);
    function_4b0890(a1 + 160);
    function_4b0890(a1 + 136);
    function_4b0890(a1 + 112);
    function_4b0890(a1 + 88);
    function_4b0890(a1 + 64);
    function_4b0890(a1 + 40);
    return function_4b0890(a1 + 16);
}

// Address range: 0x517140 - 0x5171d2
// From class:    std::num_get<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
// Type:          virtual member function
int64_t function_517140(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    int32_t * v1 = (int32_t *)(a6 + 24); // 0x517150
    int32_t v2 = *v1; // 0x517150
    int64_t v3 = __readfsqword(40); // 0x517154
    *v1 = v2 & -75 | 8;
    int64_t result = function_516790(); // 0x517180
    *v1 = v2;
    if (v3 == __readfsqword(40)) {
        // 0x5171c2
        return result;
    }
    // 0x5171cd
    __stack_chk_fail();
    return (int64_t)&g5;
}

// Address range: 0x54de20 - 0x54deb1
int64_t function_54de20(int64_t a1, uint64_t a2, uint64_t a3) {
    uint64_t v1 = *(int64_t *)(a1 + 8) - a1; // 0x54de29
    if ((int32_t)a2 <= (int32_t)&g4) {
        if (v1 < 2) {
            // 0x54de5e
            return 0;
        }
        int64_t v2 = a3 % 2 == 0 ? (int64_t)llvm_bswap_i16((int16_t)a2) : a2;
        *(int16_t *)a1 = (int16_t)v2;
        *(int64_t *)a1 = a1 + 2;
        return 1;
    }
    if (v1 < 4) {
        // 0x54de5e
        return 0;
    }
    int64_t v3 = (a2 & ((int64_t)(int16_t)&g2 | -0x10000)) - (int64_t)(int16_t)&g1; // 0x54de6a
    int16_t v4 = (int16_t)(a2 / 1024) - (int16_t)"\t\v";
    if (a3 % 2 != 0) {
        // 0x54de78
        *(int16_t *)a1 = v4;
        int64_t v5 = a1 + 2; // 0x54de7f
        *(int16_t *)v5 = (int16_t)v3;
        *(int64_t *)a1 = v5;
        return 1;
    }
    int16_t v6 = llvm_bswap_i16(v4); // 0x54de98
    int16_t v7 = llvm_bswap_i16((int16_t)v3); // 0x54de9c
    *(int16_t *)a1 = v6;
    int64_t result = a1 + 2; // 0x54dea7
    *(int64_t *)a1 = result;
    *(int16_t *)result = v7;
    return result;
}

// Address range: 0x54f4b0 - 0x54f542
// From class:    std::__codecvt_utf8_base<char16_t>
// Type:          virtual member function
int64_t function_54f4b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    int64_t v1 = __readfsqword(40); // 0x54f4bf
    int32_t v2 = *(int32_t *)(a1 + 24); // 0x54f4de
    int64_t v3 = a3; // bp-72, 0x54f4e1
    int64_t v4 = a6; // bp-56, 0x54f4ea
    int64_t v5 = *(int64_t *)(a1 + 16); // 0x54f4f4
    int64_t v6 = (int32_t)v5 >= (int32_t)&g4 ? (int64_t)&g4 : v5 & 0xffffffff; // 0x54f50d
    int64_t result = function_54f250(&v3, &v4, v6, v2 & 6 | 1); // 0x54f511
    *(int64_t *)a5 = v3;
    *(int64_t *)a8 = v4;
    if (v1 == __readfsqword(40)) {
        // 0x54f536
        return result;
    }
    // 0x54f53d
    __stack_chk_fail();
    return (int64_t)&g5;
}

// Address range: 0x54fa00 - 0x54fa91
// From class:    std::__codecvt_utf8_utf16_base<char16_t>
// Type:          virtual member function
int64_t function_54fa00(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x54fa00
    __readfsqword(40);
    int64_t v1 = a3; // bp-72, 0x54fa30
    int64_t v2 = a6; // bp-56, 0x54fa39
    if ((*(char *)(a1 + 24) & 2) != 0) {
        // 0x54fa80
        if ((char)function_54e080(&v2, &v2) == 0) {
            // 0x54fa8c
            return 1;
        }
    }
    int64_t result = function_54e240(&v1); // 0x54fa4d
    *(int64_t *)a5 = v1;
    *(int64_t *)a8 = v2;
    __readfsqword(40);
    return result;
}

// Address range: 0x5514e0 - 0x551568
int64_t function_5514e0(int64_t wstr2, int64_t a2) {
    // 0x5514e0
    if (a2 == wstr2) {
        // 0x551530
        return (int64_t)&g3;
    }
    int64_t n = a2 - wstr2 >> 2; // 0x5514fb
    int64_t v1 = function_550870(n, 0); // 0x551502
    int64_t wstr = v1 + 24; // 0x55150e
    int64_t v2 = v1; // 0x5514e0
    switch (n) {
        case 1: {
            // 0x551560
            *(int32_t *)wstr = (int32_t)wstr2;
            v2 = wstr2 & 0xffffffff;
        }
        case 0: {
            // break -> 0x551530
            break;
        }
        default: {
            // 0x551519
            v2 = (int64_t)wmemcpy((int32_t *)wstr, (int32_t *)wstr2, (int32_t)n);
            break;
        }
    }
    // 0x551530
    return v1 != *(int64_t *)0x848c20 ? v2 : wstr;
}

// Address range: 0x5601d0 - 0x560262
// From class:    std::num_get<char, std::istreambuf_iterator<char, std::char_traits<char> > >
// Type:          virtual member function
int64_t function_5601d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    int32_t * v1 = (int32_t *)(a6 + 24); // 0x5601e0
    int32_t v2 = *v1; // 0x5601e0
    int64_t v3 = __readfsqword(40); // 0x5601e4
    *v1 = v2 & -75 | 8;
    int64_t result = function_55f830(); // 0x560210
    *v1 = v2;
    if (v3 == __readfsqword(40)) {
        // 0x560252
        return result;
    }
    // 0x56025d
    __stack_chk_fail();
    return (int64_t)&g5;
}

// Address range: 0x56b730 - 0x56b7c3
// From class:    std::messages_byname<wchar_t>
// Type:          virtual member function
int64_t function_56b730(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x56b743
    int64_t v2 = *(int64_t *)(function_50b1c0() + 16); // 0x56b758
    bind_textdomain_codeset((char *)v2, __nl_langinfo_l(14, (struct __locale_struct *)v2));
    int64_t v3 = function_567d40(); // 0x56b775
    int64_t v4; // bp-56, 0x56b730
    function_5659d0(&v4, a3);
    int64_t v5 = function_567f20(v3, a3, &v4); // 0x56b792
    function_566180(&v4);
    if (v1 == __readfsqword(40)) {
        // 0x56b7b3
        return v5 & 0xffffffff;
    }
    // 0x56b7be
    __stack_chk_fail();
    return (int64_t)&g5;
}
