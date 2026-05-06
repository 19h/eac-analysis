/*
 * Targeted RetDec C for native executable gap queue batch 41.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x54f870-0x54f91a rank=- name=- kind=- bytes=- uncovered=-
 *   0x4ba6e0-0x4ba789 rank=- name=- kind=- bytes=- uncovered=-
 *   0x50cc40-0x50cce9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x545b60-0x545c09 rank=- name=- kind=- bytes=- uncovered=-
 *   0x548990-0x548a39 rank=- name=- kind=- bytes=- uncovered=-
 *   0x509b2-0x50a92 rank=- name=- kind=- bytes=- uncovered=-
 *   0x699a6-0x69a4e rank=- name=- kind=- bytes=- uncovered=-
 *   0xe50f4-0xe519c rank=- name=- kind=- bytes=- uncovered=-
 *   0x4eea40-0x4eeae8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x549920-0x5499c8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x570260-0x570308 rank=- name=- kind=- bytes=- uncovered=-
 *   0x61468-0x6150e rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c8db0-0x4c8e56 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4f9b30-0x4f9bd6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4fc380-0x4fc425 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4fcce0-0x4fcd85 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_1fcc0();
int64_t function_20210();
int64_t function_203b0();
int64_t function_2508e();
int64_t function_35fcc();
int64_t function_44a22();
int64_t function_44ae0();
int64_t function_48da52();
int64_t function_48da6e();
int64_t function_48fb27();
int64_t function_4a8c6();
int64_t function_4a93a();
int64_t function_4b0890();
int64_t function_4ba6b0();
int64_t function_4ba6e0(int64_t a1);
int64_t function_4c8da0();
int64_t function_4c8db0(int64_t a1);
int64_t function_4eea40(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4f0ad0();
int64_t function_4f8cc0();
int64_t function_4f9b30(int64_t result);
int64_t function_4fc380(int64_t a1, int64_t a2);
int64_t function_4fca70();
int64_t function_4fcce0(int64_t a1, int64_t a2);
int64_t function_509b2(int64_t a1, int64_t a2);
int64_t function_50ab00();
int64_t function_50b6e0();
int64_t function_50b730();
int64_t function_50c6b0();
int64_t function_50c7f0();
int64_t function_50c840();
int64_t function_50cac0();
int64_t function_50cc40(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t wstr2, int64_t a6, int64_t a7, int64_t a8);
int64_t function_5236c();
int64_t function_542470();
int64_t function_545920();
int64_t function_5459a0();
int64_t function_545b60(int64_t result, int64_t a2);
int64_t function_547d00();
int64_t function_548990(int64_t a1, int64_t a2);
int64_t function_548dd0();
int64_t function_548f80();
int64_t function_549690();
int64_t function_549920(int64_t a1);
int64_t function_54df80();
int64_t function_54f870(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t result, int64_t a8);
int64_t function_554b00();
int64_t function_555910();
int64_t function_555960();
int64_t function_5568e0();
int64_t function_556a20();
int64_t function_556a70();
int64_t function_566af0();
int64_t function_5688e0();
int64_t function_570260(int64_t a1, uint64_t a2, int64_t a3);
int64_t function_5f453();
int64_t function_61468(int64_t a1);
int64_t function_69802();
int64_t function_699a6(int64_t result, int64_t a2, int64_t a3);
int64_t function_6a82f();
int64_t function_729b6();
int64_t function_729ce();
int64_t function_cdc60();
int64_t function_e50f4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);

// Address range: 0x509b2 - 0x50a92
int64_t function_509b2(int64_t a1, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x509cd
    int64_t v2; // bp-72, 0x509b2
    function_729b6(&v2);
    int64_t * v3 = (int64_t *)(a1 + 192); // 0x509e5
    int64_t v4 = function_48da6e(*v3); // 0x509f4
    int64_t v5 = v4; // 0x509fb
    if ((char)v4 != 0) {
        int64_t v6 = *(int64_t *)(a1 + 32); // 0x509fd
        int64_t v7 = a1 + 16; // 0x50a06
        int64_t v8 = v6; // 0x50a0d
        v5 = 0;
        if (v6 != v7) {
            int64_t v9; // bp-64, 0x509b2
            function_5236c(&v9, v8 + 112);
            uint64_t v10 = function_48da52(4 * *(int64_t *)(*v3 - 24) + *(int64_t *)(v9 + 8)); // 0x50a37
            int64_t v11; // bp-56, 0x509b2
            function_35fcc(&v11);
            while ((char)v10 == 0) {
                int64_t v12 = function_4f0ad0(v8); // 0x50a54
                v8 = v12;
                v5 = 0;
                if (v12 == v7) {
                    goto lab_0x50a60;
                }
                function_5236c(&v9, v8 + 112);
                v10 = function_48da52(4 * *(int64_t *)(*v3 - 24) + *(int64_t *)(v9 + 8));
                function_35fcc(&v11);
            }
            // 0x50a0f
            v5 = v10 % 256;
        }
    }
  lab_0x50a60:;
    int64_t result = function_729ce(&v2) & -256 | v5 % 256; // 0x50a7e
    if (v1 != __readfsqword(40)) {
        // 0x50a80
        __stack_chk_fail();
        result = (int64_t)&g7;
    }
    // 0x50a85
    return result;
}

// Address range: 0x61468 - 0x6150e
int64_t function_61468(int64_t a1) {
    int64_t v1 = __readfsqword(40); // 0x61470
    function_44ae0();
    char * v2 = (char *)(a1 + (int64_t)&g6); // 0x61494
    *v2 = 0;
    int64_t v3 = 0x4c4e9e43b68d7470; // bp-48, 0x6149b
    if ((char)function_44a22(a1, &v3, 32) != 0) {
        // 0x614de
        *(int32_t *)(a1 + (int64_t)&g5) = (int32_t)function_48fb27();
        __asm_mfence();
        *v2 = 1;
    }
    int64_t result = 0; // 0x61501
    if (v1 != __readfsqword(40)) {
        // 0x61503
        __stack_chk_fail();
        result = (int64_t)&g7;
    }
    // 0x61508
    return result;
}

// Address range: 0x699a6 - 0x69a4e
int64_t function_699a6(int64_t result, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x699ca
    function_6a82f();
    int64_t v2; // bp-56, 0x699a6
    function_5f453(result, &v2, " HTTP/1.1\r\n");
    function_2508e(&v2);
    function_69802(&v2, a2, a3 + 16);
    function_4a8c6(result, &v2);
    function_2508e(&v2);
    function_4a93a(result, "\r\n");
    if (v1 != __readfsqword(40)) {
        // 0x69a3b
        __stack_chk_fail();
    }
    // 0x69a40
    return result;
}

// Address range: 0xe50f4 - 0xe519c
int64_t function_e50f4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xe50f4
    int64_t v1; // 0xe50f4
    v1 = (int64_t)&v1 + 16;
    return function_cdc60();
}

// Address range: 0x4ba6e0 - 0x4ba789
int64_t function_4ba6e0(int64_t a1) {
    if (a1 == 0) {
        // 0x4ba784
        int64_t result; // 0x4ba6e0
        return result;
    }
    // 0x4ba6f0
    if (*(int32_t *)(a1 + 192) != 1) {
        // 0x4ba6f9
        function_4b0890(a1 + 8);
        function_4b0890(a1 + 32);
        function_4b0890(a1 + 56);
        function_4ba6b0(a1 + 80);
        function_4b0890(a1 + 152);
    }
    int64_t * v1 = (int64_t *)(a1 + 232); // 0x4ba729
    int64_t v2 = *v1; // 0x4ba729
    if (v2 != 0) {
        int64_t * v3 = (int64_t *)(a1 + 240); // 0x4ba735
        int64_t v4 = 0; // 0x4ba73d
        int64_t v5 = v2; // 0x4ba73d
        if (*v3 != 0) {
            int64_t v6 = 1; // 0x4ba74b
            function_4ba6b0(v4 + v2);
            int64_t v7 = *v1; // 0x4ba75f
            int64_t v8 = v6; // 0x4ba766
            int64_t v9 = v7; // 0x4ba766
            v4 += 72;
            v5 = v7;
            while (*v3 > v6) {
                // 0x4ba748
                v6 = v8 + 1;
                function_4ba6b0(v4 + v9);
                v7 = *v1;
                v8 = v6;
                v9 = v7;
                v4 += 72;
                v5 = v7;
            }
        }
        // 0x4ba768
        free((int64_t *)v5);
    }
    int64_t result2 = a1 + 248; // 0x4ba76d
    int64_t v10 = a1; // 0x4ba774
    *(char *)v10 = 0;
    v10++;
    while (v10 != result2) {
        // 0x4ba778
        *(char *)v10 = 0;
        v10++;
    }
    // 0x4ba784
    return result2;
}

// Address range: 0x4c8db0 - 0x4c8e53
int64_t function_4c8db0(int64_t a1) {
    // 0x4c8db0
    int64_t v1; // 0x4c8db0
    int64_t v2; // 0x4c8db0
    int64_t v3; // 0x4c8db0
    int64_t v4; // 0x4c8db0
    if (a1 % 2 != 0) {
        int64_t v5 = a1 + 1; // 0x4c8e10
        *(char *)a1 = 0;
        v3 = v5;
        v1 = 335;
        v4 = v5;
        v2 = 333;
        if ((v5 & 2) == 0) {
            goto lab_0x4c8dc5;
        } else {
            goto lab_0x4c8e28;
        }
    } else {
        // 0x4c8dbf
        v3 = a1;
        v1 = 336;
        v4 = a1;
        v2 = 334;
        if ((a1 & 2) != 0) {
            goto lab_0x4c8e28;
        } else {
            goto lab_0x4c8dc5;
        }
    }
  lab_0x4c8dc5:;
    int64_t v6 = v3; // 0x4c8dc9
    int64_t v7 = v1; // 0x4c8dc9
    int64_t v8 = v3; // 0x4c8dc9
    int64_t v9 = v1; // 0x4c8dc9
    if ((v3 & 4) != 0) {
        goto lab_0x4c8e40;
    } else {
        goto lab_0x4c8dcb;
    }
  lab_0x4c8e28:
    // 0x4c8e28
    *(int16_t *)v4 = 0;
    int64_t v10 = v4 + 2; // 0x4c8e2d
    v6 = v10;
    v7 = v2;
    v8 = v10;
    v9 = v2;
    if ((v10 & 4) == 0) {
        goto lab_0x4c8dcb;
    } else {
        goto lab_0x4c8e40;
    }
  lab_0x4c8e40:
    // 0x4c8e40
    *(int32_t *)v8 = 0;
    v6 = v8 + 4;
    v7 = v9 + 0xfffffffc & 0xffffffff;
    goto lab_0x4c8dcb;
  lab_0x4c8dcb:;
    uint64_t v11 = v7 / 8 % 0x20000000; // 0x4c8dd0
    __asm_rep_stosq_memset((char *)v6, 0, v11);
    bool v12; // 0x4c8db0
    int64_t v13 = v11 * (v12 ? -8 : 8) + v6; // 0x4c8dd7
    int64_t v14 = v13; // 0x4c8dda
    if ((v7 & 4) != 0) {
        // 0x4c8ddc
        *(int32_t *)v13 = 0;
        v14 = v13 + 4;
    }
    int64_t v15 = v14; // 0x4c8dea
    if ((v7 & 2) != 0) {
        // 0x4c8dec
        *(int16_t *)v14 = 0;
        v15 = v14 + 2;
    }
    if (v7 % 2 != 0) {
        // 0x4c8dfb
        *(char *)v15 = 0;
    }
    // 0x4c8dfe
    return function_4c8da0(a1);
}

// Address range: 0x4eea40 - 0x4eeae8
int64_t function_4eea40(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a2 & -8; // 0x4eea54
    int64_t v2 = v1 + a1; // 0x4eea58
    int64_t v3 = -0x395b586ca42e166b * a2 ^ a3; // 0x4eea5b
    int64_t v4 = v3; // 0x4eea61
    int64_t v5 = v3; // 0x4eea61
    if (v1 != 0) {
        int64_t v6 = a1 + 8; // 0x4eea6b
        uint64_t v7 = -0x395b586ca42e166b * *(int64_t *)a1; // 0x4eea6f
        v4 = -0x395b586ca42e166b * (-0x395b586ca42e166b * (v7 / 0x800000000000 ^ v7) ^ v4);
        v5 = v4;
        while (v2 != v6) {
            int64_t v8 = v6;
            v6 = v8 + 8;
            v7 = -0x395b586ca42e166b * *(int64_t *)v8;
            v4 = -0x395b586ca42e166b * (-0x395b586ca42e166b * (v7 / 0x800000000000 ^ v7) ^ v4);
            v5 = v4;
        }
    }
    uint32_t v9 = (int32_t)a2 % 8; // 0x4eea90
    uint64_t v10; // 0x4eea40
    uint64_t v11; // 0x4eead9
    if (v9 == 0) {
        // 0x4eeac5
        v10 = v5;
        v11 = -0x395b586ca42e166b * (v10 / 0x800000000000 ^ v10);
        return v11 / 0x800000000000 ^ v11;
    }
    int64_t v12 = 0; // 0x4eea9d
    int64_t v13 = 0x100000000 * (int64_t)v9 - 0x100000000 >> 32;
    int64_t v14 = v13 - 1; // 0x4eeaa9
    v12 = 256 * v12 | (int64_t)*(char *)(v13 + v2);
    while ((int32_t)v14 >= 0) {
        // 0x4eeaa0
        v13 = v14;
        v14 = v13 - 1;
        v12 = 256 * v12 | (int64_t)*(char *)(v13 + v2);
    }
    // 0x4eeac5
    v10 = -0x395b586ca42e166b * (v12 ^ v5);
    v11 = -0x395b586ca42e166b * (v10 / 0x800000000000 ^ v10);
    return v11 / 0x800000000000 ^ v11;
}

// Address range: 0x4f9b30 - 0x4f9bd5
int64_t function_4f9b30(int64_t result) {
    int64_t * v1 = (int64_t *)(result + 8); // 0x4f9b40
    *v1 = 0;
    __readfsqword(40);
    function_4f8cc0();
    char v2; // 0x4f9b30
    if (v2 == 0) {
        // 0x4f9b99
        __readfsqword(40);
        return result;
    }
    // 0x4f9b69
    char v3; // bp-17, 0x4f9b30
    int64_t v4 = *(int64_t *)((int64_t)&v3 - 24); // 0x4f9b6c
    int64_t v5 = *(int64_t *)(result + 232 + v4); // 0x4f9b70
    int64_t * v6 = (int64_t *)(v5 + 16); // 0x4f9b78
    uint64_t v7 = *v6; // 0x4f9b78
    int64_t v8; // 0x4f9b30
    int64_t v9; // 0x4f9b30
    if (*(int64_t *)(v5 + 24) > v7) {
        int64_t v10 = v7 + 4; // 0x4f9b84
        *v6 = v10;
        v8 = (int64_t)*(int32_t *)v7;
        v9 = v10;
    } else {
        // 0x4f9bb8
        v8 = *(int64_t *)v5;
        v9 = v7;
    }
    // 0x4f9b8c
    if ((int32_t)v8 == -1) {
        int64_t v11 = *(int64_t *)(v5 - 24) + result; // 0x4f9bc7
        return function_4fca70(v11, *(int32_t *)(v11 + 32) | 2, v9);
    }
    // 0x4f9b91
    *v1 = 1;
    // 0x4f9b99
    __readfsqword(40);
    return result;
}

// Address range: 0x4fc380 - 0x4fc422
int64_t function_4fc380(int64_t a1, int64_t a2) {
    // 0x4fc380
    if ((char)function_5568e0(a2) == 0) {
        // 0x4fc3e8
        *(int64_t *)(a1 + 240) = 0;
        if ((char)function_556a20(a2) != 0) {
            goto lab_0x4fc3b3;
        } else {
            goto lab_0x4fc400;
        }
    } else {
        // 0x4fc398
        *(int64_t *)(a1 + 240) = function_554b00(a2);
        if ((char)function_556a20(a2) == 0) {
            goto lab_0x4fc400;
        } else {
            goto lab_0x4fc3b3;
        }
    }
  lab_0x4fc3b3:
    // 0x4fc3b3
    *(int64_t *)(a1 + 248) = function_555910(a2);
    int64_t result = function_556a70(a2); // 0x4fc3c5
    if ((char)result == 0) {
        // 0x4fc417
        *(int64_t *)(a1 + 256) = 0;
        return result;
    }
    int64_t result2 = function_555960(a2); // 0x4fc3d1
    *(int64_t *)(a1 + 256) = result2;
    return result2;
  lab_0x4fc400:
    // 0x4fc400
    *(int64_t *)(a1 + 248) = 0;
    int64_t result3 = function_556a70(a2); // 0x4fc40e
    if ((char)result3 == 0) {
        // 0x4fc417
        *(int64_t *)(a1 + 256) = 0;
        return result3;
    }
    // 0x4fc3ce
    result2 = function_555960(a2);
    *(int64_t *)(a1 + 256) = result2;
    return result2;
}

// Address range: 0x4fcce0 - 0x4fcd82
int64_t function_4fcce0(int64_t a1, int64_t a2) {
    // 0x4fcce0
    if ((char)function_50c6b0(a2) == 0) {
        // 0x4fcd48
        *(int64_t *)(a1 + 240) = 0;
        if ((char)function_50c7f0(a2) != 0) {
            goto lab_0x4fcd13;
        } else {
            goto lab_0x4fcd60;
        }
    } else {
        // 0x4fccf8
        *(int64_t *)(a1 + 240) = function_50ab00(a2);
        if ((char)function_50c7f0(a2) == 0) {
            goto lab_0x4fcd60;
        } else {
            goto lab_0x4fcd13;
        }
    }
  lab_0x4fcd13:
    // 0x4fcd13
    *(int64_t *)(a1 + 248) = function_50b6e0(a2);
    int64_t result = function_50c840(a2); // 0x4fcd25
    if ((char)result == 0) {
        // 0x4fcd77
        *(int64_t *)(a1 + 256) = 0;
        return result;
    }
    int64_t result2 = function_50b730(a2); // 0x4fcd31
    *(int64_t *)(a1 + 256) = result2;
    return result2;
  lab_0x4fcd60:
    // 0x4fcd60
    *(int64_t *)(a1 + 248) = 0;
    int64_t result3 = function_50c840(a2); // 0x4fcd6e
    if ((char)result3 == 0) {
        // 0x4fcd77
        *(int64_t *)(a1 + 256) = 0;
        return result3;
    }
    // 0x4fcd2e
    result2 = function_50b730(a2);
    *(int64_t *)(a1 + 256) = result2;
    return result2;
}

// Address range: 0x50cc40 - 0x50cce9
int64_t function_50cc40(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t wstr2, int64_t a6, int64_t a7, int64_t a8) {
    int64_t v1 = a4 & 0xffffffff; // 0x50cc4f
    int64_t v2; // 0x50cc40
    if (wstr2 == 0) {
        int32_t * v3 = (int32_t *)a8; // 0x50ccc8
        int32_t v4 = *v3; // 0x50ccc8
        uint64_t result = function_50cac0(a6, v1, a2, a3, a7, 4 * (int64_t)v4 + a7, v2, v2, v2, v2) - a6; // 0x50ccdd
        *v3 = (int32_t)(result / 4);
        return result;
    }
    int64_t v5 = wstr2 - a7 >> 2; // 0x50cc6d
    int64_t wstr = function_50cac0(a6, v1, a2, a3, a7, (0x100000000 * v5 >> 30) + a7, v2, v2, v2, v2); // 0x50cc7e
    int32_t * v6 = (int32_t *)a8; // 0x50cc90
    int32_t v7 = v5; // 0x50cc92
    int32_t n = *v6 - v7; // 0x50cc92
    int64_t result2 = wstr; // 0x50cc9a
    int32_t v8 = n; // 0x50cc9a
    if (n != 0) {
        // 0x50ccb0
        result2 = (int64_t)wmemcpy((int32_t *)wstr, (int32_t *)wstr2, n);
        v8 = *v6 - v7;
    }
    // 0x50cc9c
    *v6 = v8 + (int32_t)((wstr - a6) / 4);
    return result2;
}

// Address range: 0x545b60 - 0x545c09
int64_t function_545b60(int64_t result, int64_t a2) {
    // 0x545b60
    __readfsqword(40);
    function_545920();
    char v1; // bp-56, 0x545b60
    char v2; // 0x545b60
    if (v2 == 0) {
        // 0x545bbe
        function_5459a0((int64_t *)&v1);
        __readfsqword(40);
        return result;
    }
    int64_t v3 = *(int64_t *)((int64_t)&v1 - 24); // 0x545b95
    int64_t v4 = *(int64_t *)(result + 232 + v3); // 0x545b99
    int64_t * v5 = (int64_t *)(v4 + 40); // 0x545ba4
    uint64_t v6 = *v5; // 0x545ba4
    if (*(int64_t *)(v4 + 48) <= v6) {
        // 0x545c00
        return *(int64_t *)v4;
    }
    int32_t v7 = a2; // 0x545bae
    *(int32_t *)v6 = v7;
    int64_t v8 = v6 + 4; // 0x545bb1
    *v5 = v8;
    if (v7 == -1) {
        int64_t v9 = *(int64_t *)(v4 - 24) + result; // 0x545bef
        function_4fca70(v9, *(int32_t *)(v9 + 32) | 1, v8);
    }
    // 0x545bbe
    function_5459a0((int64_t *)&v1);
    __readfsqword(40);
    return result;
}

// Address range: 0x548990 - 0x548a39
int64_t function_548990(int64_t a1, int64_t a2) {
    // 0x548990
    if (a2 == a1) {
        // 0x5489d0
        return (int64_t)&g4;
    }
    if (a1 == 0) {
        // 0x548a2d
        return function_542470("basic_string::_S_construct null not valid");
    }
    int64_t v1 = a2 - a1; // 0x5489a8
    int64_t v2 = function_547d00(v1, 0); // 0x5489b0
    int64_t v3 = v2 + 24; // 0x5489bc
    int64_t dest_mem; // 0x548990
    if (v1 == 1) {
        // 0x5489e0
        *(char *)v3 = (char)a1;
        dest_mem = v3;
    } else {
        // 0x5489c2
        dest_mem = v3;
        if (v1 != 0) {
            // 0x548a00
            dest_mem = (int64_t)memcpy((int64_t *)v3, (int64_t *)a1, (int32_t)v1);
        }
    }
    // 0x5489c7
    if (v2 != (int64_t)g2) {
        // 0x548a18
        *(int32_t *)(v2 + 16) = 0;
        *(int64_t *)v2 = v1;
        *(char *)(v3 + v1) = 0;
    }
    // 0x5489d0
    return dest_mem;
}

// Address range: 0x549920 - 0x5499c8
// From class:    std::__ios_failure
// Type:          constructor
int64_t function_549920(int64_t a1) {
    // 0x549920
    __readfsqword(40);
    int64_t v1 = function_20210(); // 0x54993e
    char * v2 = gettext((char *)a1); // 0x549949
    function_548f80();
    int64_t v3 = 1; // bp-56, 0x54995f
    function_549690(v1, (int64_t)v2, &v3);
    *(int64_t *)v1 = (int64_t)&g1;
    function_5688e0(v1 + 32, function_566af0(v1));
    int64_t v4 = function_203b0(v1, 0x845e70, 0x548ea0); // 0x5499a8
    while (true) {
        // 0x5499ab
        function_1fcc0(v1);
        _Unwind_Resume((struct _Unwind_Exception *)v4);
        function_548dd0(v1);
        v4 = (int64_t)&g7;
    }
}

// Address range: 0x54f870 - 0x54f919
// From class:    std::codecvt<char32_t, char, __mbstate_t>
// Type:          virtual member function
int64_t function_54f870(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t result, int64_t a8) {
    // 0x54f870
    __readfsqword(40);
    int64_t v1 = a6; // bp-40, 0x54f895
    int64_t v2; // 0x54f870
    int32_t v3 = v2;
    if (a3 != a4 != v3 < 0x110000) {
        // 0x54f910
        return result;
    }
    int64_t v4 = a3; // 0x54f89e
    int64_t v5 = function_54df80(&v1, v3); // 0x54f8cf
    int64_t v6 = v4; // 0x54f8d6
    int64_t result2 = 1; // 0x54f8d6
    while ((char)v5 != 0) {
        // 0x54f8b8
        v4 += 4;
        v6 = a4;
        result2 = 0;
        if (v4 == a4) {
            // break -> 0x54f8e1
            break;
        }
        uint32_t v7 = *(int32_t *)v4; // 0x54f8c1
        if (v7 >= 0x110000) {
            // 0x54f910
            return 2;
        }
        v5 = function_54df80(&v1, v7);
        v6 = v4;
        result2 = 1;
    }
    // 0x54f8e1
    __readfsqword(40);
    *(int64_t *)a5 = v6;
    *(int64_t *)a8 = v1;
    return result2;
}

// Address range: 0x570260 - 0x570308
int64_t function_570260(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x570284
    int64_t v2; // bp-56, 0x570260
    int64_t v3 = (int64_t)&v2; // 0x57029c
    int64_t v4 = v3; // 0x57029f
    v4--;
    *(char *)v4 = *(char *)(a3 + (int64_t)"0123456789");
    uint64_t v5 = v3 - v4; // 0x5702ca
    int64_t result = 0xffffffff; // 0x5702d0
    if (v5 <= a2) {
        // 0x5702d2
        int64_t v6; // bp-80, 0x570260
        memcpy((int64_t *)a1, (int64_t *)((int64_t)&v6 + 24 - v5), (int32_t)v5);
        result = v5 & 0xffffffff;
    }
    // 0x5702e4
    if (v1 == __readfsqword(40)) {
        // 0x5702f3
        return result;
    }
    // 0x570303
    __stack_chk_fail();
    return (int64_t)&g7;
}
