/*
 * Targeted RetDec C for native executable gap queue batch 155.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x4f1700-0x4f1708 rank=73 name=fcn.004f1700 kind=r2_discovered bytes=8 uncovered=8
 *   0x4f1a20-0x4f1a28 rank=74 name=method.__gnu_cxx::__concurrence_lock_error.virtual_16 kind=native_discovered bytes=8 uncovered=8
 *   0x4f1a30-0x4f1a38 rank=75 name=method.__gnu_cxx::__concurrence_unlock_error.virtual_16 kind=native_discovered bytes=8 uncovered=8
 *   0x507980-0x507988 rank=76 name=method.std::moneypunct_wchar_t__false_.virtual_16 kind=native_discovered bytes=8 uncovered=8
 *   0x507990-0x507998 rank=77 name=method.std::moneypunct_wchar_t__false_.virtual_24 kind=native_discovered bytes=8 uncovered=8
 *   0x5079a0-0x5079a8 rank=78 name=method.std::moneypunct_wchar_t__false_.virtual_64 kind=native_discovered bytes=8 uncovered=8
 *   0x507a30-0x507a38 rank=79 name=method.std::moneypunct_wchar_t__true_.virtual_16 kind=native_discovered bytes=8 uncovered=8
 *   0x507a40-0x507a48 rank=80 name=method.std::moneypunct_wchar_t__true_.virtual_24 kind=native_discovered bytes=8 uncovered=8
 *   0x507a50-0x507a58 rank=81 name=method.std::moneypunct_wchar_t__true_.virtual_64 kind=native_discovered bytes=8 uncovered=8
 *   0x507b20-0x507b28 rank=82 name=method.std::numpunct_wchar_t_.virtual_16 kind=native_discovered bytes=8 uncovered=8
 *   0x507b30-0x507b38 rank=83 name=method.std::numpunct_wchar_t_.virtual_24 kind=native_discovered bytes=8 uncovered=8
 *   0x518b50-0x518b58 rank=84 name=method.std::__cxx11::moneypunct_char__false_.virtual_64 kind=native_discovered bytes=8 uncovered=8
 *   0x518c00-0x518c08 rank=85 name=method.std::__cxx11::moneypunct_char__true_.virtual_64 kind=native_discovered bytes=8 uncovered=8
 *   0x52def0-0x52def8 rank=86 name=method.std::__cxx11::moneypunct_wchar_t__false_.virtual_16 kind=native_discovered bytes=8 uncovered=8
 *   0x52df00-0x52df08 rank=87 name=method.std::__cxx11::moneypunct_wchar_t__false_.virtual_24 kind=native_discovered bytes=8 uncovered=8
 *   0x52df10-0x52df18 rank=88 name=method.std::__cxx11::moneypunct_wchar_t__false_.virtual_64 kind=native_discovered bytes=8 uncovered=8
 */
#include <stdbool.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef __int128 int128_t;
typedef unsigned __int128 uint128_t;
typedef int64_t int224_t;
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
struct stat;
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
int32_t __asm_insd(uint16_t port);
void __asm_out(uint16_t port, char value);
void __asm_out_133(uint16_t port, int32_t value);
void __asm_out_135(uint16_t port, int32_t value);
void __asm_outsb(uint16_t port, char value);
void __asm_outsd(uint16_t port, int32_t value);
uint8_t __readfsbyte(int64_t offset);
uint64_t __readfsqword(int64_t offset);
uint8_t __readgsbyte(int64_t offset);
uint32_t __readgsdword(int64_t offset);
uint64_t __readgsqword(int64_t offset);
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
int64_t unknown_3a9782b0(void);
int64_t unknown_4a2eb0c7(int64_t value);
int64_t unknown_4c300d9d(void);
int64_t unknown_1a5f8c06(void);
int64_t unknown_1c9eef14(void);
int64_t unknown_fce9f06(void);
int64_t unknown_6830301e(void);
int64_t unknown_2f0fdc0b(void);
int64_t unknown_38ae20ec(void);
int64_t unknown_401c0cfa(void);
void unknown_b6ccb9(void);
int64_t unknown_ffffffffd3dfe90d(void);
int64_t unknown_ffffffffba4fa1e3(void);
int64_t unknown_ffffffffa83be585(void);
int64_t unknown_ffffffffa845fcb4(int64_t a1, int64_t a2, int64_t a3);
int64_t unknown_ffffffffa337f4e6(void);
int64_t unknown_ffffffffb8c4d43e(void);
int64_t unknown_ffffffffb1f005c0(int64_t value);
int64_t unknown_ffffffffc9a6c1f7(void);
int64_t unknown_ffffffffe026915f(void);
int64_t unknown_ffffffffffa50add(void);
int64_t unknown_ffffffff8d401ab3(void);
int64_t unknown_ffffffff920a593a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t unknown_ffffffffc304842d(int64_t value);
int64_t unknown_ffffffffc23c8777(int64_t a1, int64_t a2);
int64_t unknown_ffffffffd64cfc2a(int64_t dst, int64_t src);
int64_t unknown_ffffffffd296219c(void);
int64_t unknown_ffffffffe8914fc1(void);
int64_t unknown_fffffffff537c295(void);
int64_t unknown_ffffffffb38ec0a9(void);
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
int64_t __asm_fnstenv(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
struct eac_retdec_cpuid_regs __asm_cpuid(uint32_t leaf);
struct eac_retdec_cpuid_regs __asm_cpuid_133(uint32_t leaf);
struct eac_retdec_cpuid_regs __asm_cpuid_134(uint32_t leaf);
uint64_t __asm_xgetbv(uint64_t index);
uint64_t __asm_rdtsc(void);
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
void __freelocale(struct __locale_struct *locale);
struct __locale_struct *__uselocale(struct __locale_struct *locale);
struct __locale_struct *__duplocale(struct __locale_struct *locale);
float32_t __strtof_l(const char *nptr, char **endptr, struct __locale_struct *locale);
float64_t __strtod_l(const char *nptr, char **endptr, struct __locale_struct *locale);
float80_t strtold_l(const char *nptr, char **endptr, struct __locale_struct *locale);
int32_t __strcoll_l(const char *s1, const char *s2, struct __locale_struct *locale);
int32_t __wcscoll_l(const int32_t *s1, const int32_t *s2, struct __locale_struct *locale);
size_t __strxfrm_l(char *dest, const char *src, size_t n, struct __locale_struct *locale);
size_t __wcsxfrm_l(int32_t *dest, const int32_t *src, size_t n, struct __locale_struct *locale);
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
int fileno(struct _IO_FILE *stream);
void rewind(struct _IO_FILE *stream);
int fclose(struct _IO_FILE *stream);
int uname(struct utsname *buf);
int64_t __tls_get_addr(void *arg);
void *dlsym(void *handle, const char *symbol);
int dlclose(void *handle);
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
int wmemcmp(const int32_t *s1, const int32_t *s2, size_t n);
int32_t *wmemmove(int32_t *dest, const int32_t *src, size_t n);
int32_t *wmemset(int32_t *wcs, int32_t wc, size_t n);
int32_t getwc(struct _IO_FILE *stream);
int32_t putwc(int32_t wc, struct _IO_FILE *stream);
int32_t ungetwc(int32_t wc, struct _IO_FILE *stream);
int64_t memset2(void *s, int c, size_t n);
int pthread_mutex_lock(void *mutex);
int pthread_mutex_trylock(void *mutex);
int pthread_mutex_unlock(void *mutex);
int pthread_mutex_init(void *mutex, void *attr);
int pthread_mutexattr_init(void *attr);
int pthread_mutexattr_settype(void *attr, int type);
int pthread_create(int32_t *thread, const void *attr, int64_t *(*start_routine)(int64_t *), int64_t *arg);
int pthread_join(int32_t thread, void **retval);
int pthread_once(int32_t *once_control, ...);
int pthread_cond_init(void *cond, void *attr);
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
int64_t blake3_hasher_finalize_seek();
int ioctl(int fd, unsigned long request, ...);
int poll(struct pollfd *fds, unsigned long nfds, int timeout);
int gettimeofday(struct timeval *tv, void *tz);
int clock_gettime(int clk_id, struct timespec *tp);
int64_t sysconf(int name);
int64_t syscall(int64_t number, ...);
int mprotect(void *addr, size_t len, int prot);
void *mmap(void *addr, size_t len, int prot, int flags, int fd, int64_t offset);
int munmap(void *addr, size_t len);
int __xstat(int ver, const char *path, struct stat *buf);
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
int32_t __strftime_l(char *s, int32_t max, const char *format, struct tm *tm, struct __locale_struct *locale);
int32_t __wcsftime_l(int32_t *s, int32_t max, int32_t *format, struct tm *tm, struct __locale_struct *locale);
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

int64_t function_4f1700(int64_t stream);
int64_t function_4f1a20(void);
int64_t function_4f1a30(void);
int64_t function_507980(int64_t a1);
int64_t function_507990(int64_t a1);
int64_t function_5079a0(int64_t a1);
int64_t function_507a30(int64_t a1);
int64_t function_507a40(int64_t a1);
int64_t function_507a50(int64_t a1);
int64_t function_507b20(int64_t a1);
int64_t function_507b30(int64_t a1);
int64_t function_518b50(int64_t a1);
int64_t function_518c00(int64_t a1);
int64_t function_52def0(int64_t a1);
int64_t function_52df00(int64_t a1);
int64_t function_52df10(int64_t a1);

// Address range: 0x4f1700 - 0x4f1708
int64_t function_4f1700(int64_t stream) {
    // 0x4f1700
    return fileno((struct _IO_FILE *)stream);
}

// Address range: 0x4f1a20 - 0x4f1a28
// From class:    __gnu_cxx::__concurrence_lock_error
// Type:          virtual member function
int64_t function_4f1a20(void) {
    // 0x4f1a20
    return (int64_t)"__gnu_cxx::__concurrence_lock_error";
}

// Address range: 0x4f1a30 - 0x4f1a38
// From class:    __gnu_cxx::__concurrence_unlock_error
// Type:          virtual member function
int64_t function_4f1a30(void) {
    // 0x4f1a30
    return (int64_t)"__gnu_cxx::__concurrence_unlock_error";
}

// Address range: 0x507980 - 0x507988
// From class:    std::moneypunct<wchar_t, false>
// Type:          virtual member function
int64_t function_507980(int64_t a1) {
    // 0x507980
    return (int64_t)*(int32_t *)(*(int64_t *)(a1 + 16) + 36);
}

// Address range: 0x507990 - 0x507998
// From class:    std::moneypunct<wchar_t, false>
// Type:          virtual member function
int64_t function_507990(int64_t a1) {
    // 0x507990
    return (int64_t)*(int32_t *)(*(int64_t *)(a1 + 16) + 40);
}

// Address range: 0x5079a0 - 0x5079a8
// From class:    std::moneypunct<wchar_t, false>
// Type:          virtual member function
int64_t function_5079a0(int64_t a1) {
    // 0x5079a0
    return (int64_t)*(int32_t *)(*(int64_t *)(a1 + 16) + 96);
}

// Address range: 0x507a30 - 0x507a38
// From class:    std::moneypunct<wchar_t, true>
// Type:          virtual member function
int64_t function_507a30(int64_t a1) {
    // 0x507a30
    return (int64_t)*(int32_t *)(*(int64_t *)(a1 + 16) + 36);
}

// Address range: 0x507a40 - 0x507a48
// From class:    std::moneypunct<wchar_t, true>
// Type:          virtual member function
int64_t function_507a40(int64_t a1) {
    // 0x507a40
    return (int64_t)*(int32_t *)(*(int64_t *)(a1 + 16) + 40);
}

// Address range: 0x507a50 - 0x507a58
// From class:    std::moneypunct<wchar_t, true>
// Type:          virtual member function
int64_t function_507a50(int64_t a1) {
    // 0x507a50
    return (int64_t)*(int32_t *)(*(int64_t *)(a1 + 16) + 96);
}

// Address range: 0x507b20 - 0x507b28
// From class:    std::numpunct_byname<wchar_t>
// Type:          virtual member function
int64_t function_507b20(int64_t a1) {
    // 0x507b20
    return (int64_t)*(int32_t *)(*(int64_t *)(a1 + 16) + 72);
}

// Address range: 0x507b30 - 0x507b38
// From class:    std::numpunct_byname<wchar_t>
// Type:          virtual member function
int64_t function_507b30(int64_t a1) {
    // 0x507b30
    return (int64_t)*(int32_t *)(*(int64_t *)(a1 + 16) + 76);
}

// Address range: 0x518b50 - 0x518b58
// From class:    *NSt13__facet_shims12_GLOBAL__N_115moneypunct_shimIcLb0EEE
// Type:          virtual member function
int64_t function_518b50(int64_t a1) {
    // 0x518b50
    return (int64_t)*(int32_t *)(*(int64_t *)(a1 + 16) + 88);
}

// Address range: 0x518c00 - 0x518c08
// From class:    *NSt13__facet_shims12_GLOBAL__N_115moneypunct_shimIcLb1EEE
// Type:          virtual member function
int64_t function_518c00(int64_t a1) {
    // 0x518c00
    return (int64_t)*(int32_t *)(*(int64_t *)(a1 + 16) + 88);
}

// Address range: 0x52def0 - 0x52def8
// From class:    *NSt13__facet_shims12_GLOBAL__N_115moneypunct_shimIwLb0EEE
// Type:          virtual member function
int64_t function_52def0(int64_t a1) {
    // 0x52def0
    return (int64_t)*(int32_t *)(*(int64_t *)(a1 + 16) + 36);
}

// Address range: 0x52df00 - 0x52df08
// From class:    *NSt13__facet_shims12_GLOBAL__N_115moneypunct_shimIwLb0EEE
// Type:          virtual member function
int64_t function_52df00(int64_t a1) {
    // 0x52df00
    return (int64_t)*(int32_t *)(*(int64_t *)(a1 + 16) + 40);
}

// Address range: 0x52df10 - 0x52df18
// From class:    *NSt13__facet_shims12_GLOBAL__N_115moneypunct_shimIwLb0EEE
// Type:          virtual member function
int64_t function_52df10(int64_t a1) {
    // 0x52df10
    return (int64_t)*(int32_t *)(*(int64_t *)(a1 + 16) + 96);
}
