/*
 * Targeted RetDec C for native executable gap queue batch 251.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x254ac2-0x254cc2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x254cc2-0x254ec2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x254ec2-0x2550c2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2f121e-0x2f141e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2f141e-0x2f161e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2f161e-0x2f181e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2f181e-0x2f1a1e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2f1a1e-0x2f1c1e rank=- name=- kind=- bytes=- uncovered=-
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
struct __dirstream;
struct dirent;
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
int64_t entry_point();
unsigned char llvm_ctpop_i8(unsigned char value);
uint16_t llvm_bswap_i16(uint16_t value);
uint32_t llvm_bswap_i32(uint32_t value);
uint64_t llvm_ctlz_i64(uint64_t value, bool is_zero_undef);
int __popcountdi2(uint64_t value);
void __asm_int(int32_t interrupt);
int64_t __asm_int1();
int64_t __asm_int3();
int32_t __asm_in(uint16_t port);
int32_t __asm_in_133(uint16_t port);
int32_t __asm_in_134(uint16_t port);
int32_t __asm_in_135(uint16_t port);
char __asm_in_136(uint16_t port);
char __asm_in_137(uint16_t port);
int32_t __asm_in_138(uint16_t port);
char __asm_insb(uint16_t port);
int32_t __asm_insd(uint16_t port);
void __asm_out(uint16_t port, char value);
void __asm_out_133(uint16_t port, int32_t value);
void __asm_out_134(uint16_t port, int32_t value);
void __asm_out_135(uint16_t port, int32_t value);
void __asm_out_136(uint16_t port, int32_t value);
void __asm_out_137(uint16_t port, char value);
void __asm_out_139(uint16_t port, int32_t value);
void __asm_outsb(uint16_t port, char value);
void __asm_outsd(uint16_t port, int32_t value);
uint8_t __readfsbyte(int64_t offset);
uint64_t __readfsqword(int64_t offset);
uint8_t __readgsbyte(int64_t offset);
uint32_t __readgsdword(int64_t offset);
uint64_t __readgsqword(int64_t offset);
void __writegsbyte(int64_t offset, uint8_t value);
int64_t __asm_iretd();
int64_t __asm_sti();
int64_t unknown_34e4aca1(int64_t value);
void unknown_11c3039(void);
int64_t unknown_2a35274a(void);
int64_t unknown_3dc1cbae(int32_t value);
int64_t unknown_6847365b(void);
int64_t unknown_74517502(void);
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
int64_t _ITM_RU8(void);
int64_t _ZGTtnam(int64_t size);
int64_t _ITM_memcpyRtWn(int64_t dst, int64_t src, int64_t size);
void __asm_rcl(int32_t value);
void __asm_rcl_133(int32_t value);
void __asm_rep_movsb_memcpy(char *dst, char *src, int64_t count);
void __asm_rep_stosb_memset(char *dst, char value, int64_t count);
void __asm_rep_stosd_memset(char *dst, int32_t value, int64_t count);
void __asm_rep_stosq_memset(char *dst, int64_t value, int64_t count);
void __asm_rep_movsd_memcpy(char *dst, char *src, int64_t count);
void __asm_rep_movsq_memcpy(char *dst, char *src, int64_t count);
int64_t __asm_hlt();
int64_t __asm_mfence();
void __asm_pause(void);
int64_t __asm_wait(...);
void __asm_fbld(float80_t value);
float80_t __asm_fbstp(float80_t value);
int64_t __pseudo_get_significand(float80_t value);
int64_t __pseudo_get_exponent(float80_t value);
int64_t __asm_fnstenv(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
struct eac_retdec_cpuid_regs __asm_cpuid(uint32_t leaf);
struct eac_retdec_cpuid_regs __asm_cpuid_133(uint32_t leaf);
struct eac_retdec_cpuid_regs __asm_cpuid_134(uint32_t leaf);
uint64_t __asm_xgetbv(uint64_t index);
uint64_t __asm_rdtsc(void);
void __stack_chk_fail(void);
int __cxa_atexit(void (*func)(int64_t *), void *arg, void *dso);
uint128_t __udivti3(uint128_t a, uint128_t b);
int64_t _ZN9__gnu_cxxL27__exchange_and_add_dispatchEPii_constprop_31(int64_t value);
int64_t _ZGTtdlPv(int64_t value);
int64_t blake3_hasher_init_derive_key_raw(int64_t hasher, int64_t context, int64_t context_len);
int64_t unknown_166c28d(void);
int128_t __asm_movsd(int64_t value);
int128_t __asm_movsd_133(int64_t value);
int128_t __asm_movd(int32_t value);
int128_t __asm_movss(int32_t value);
int64_t __asm_movss_133(int128_t value);
int128_t __asm_movdqa(int128_t value);
int128_t __asm_movq();
int128_t __asm_aesimc(int128_t value);
int128_t __asm_aeskeygenassist(int128_t value, int imm);
int128_t __asm_movdqu(int128_t value);
int128_t __asm_movdqu_133(int128_t value);
int128_t __asm_movapd(int128_t value);
int128_t __asm_movaps_133(int128_t value);
int128_t __asm_andpd(int128_t left, int128_t right);
int128_t __asm_andnpd(int128_t left, int128_t right);
int128_t __asm_orpd(int128_t left, int128_t right);
int128_t __asm_divsd(int128_t left, int64_t right);
int128_t __asm_divsd_133(int128_t left, int128_t right);
int128_t __asm_pclmulqdq(int128_t left, int128_t right, int imm);
int128_t __asm_pshufd(int128_t value, int imm);
int128_t __asm_psrldq(int128_t value, int count);
int128_t __asm_pslldq(int128_t value, int count);
int128_t __asm_punpckldq(int128_t left, int128_t right);
int128_t __asm_punpcklqdq(int128_t left, int128_t right);
int128_t __asm_psllq(int128_t value, int count);
int128_t __asm_psrlq(int128_t value, int count);
int128_t __asm_paddq(int128_t left, int128_t right);
int128_t __asm_pmaxsw(int128_t left, int128_t right);
int128_t __asm_por(int128_t left, int128_t right);
int128_t __asm_pxor(int128_t left, int128_t right);
int128_t __asm_xorps(int128_t left, int128_t right);
int128_t __asm_addps(int128_t left, int128_t right);
int128_t __asm_cmpnlesd(int128_t left, int128_t right);
int128_t __asm_cvtsi2sd(int64_t value);
int128_t __asm_cvtss2sd(int32_t value);
int128_t __asm_addsd(int128_t left, int128_t right);
int128_t __asm_subsd(int128_t left, int128_t right);
int64_t __asm_cvttsd2si(int128_t value);
int64_t __asm_vcvttsd2si(int128_t value);
void __asm_ucomisd(int128_t left, int128_t right);
void __asm_ucomiss(int128_t left, int64_t right);
void __asm_ucomiss_134(int128_t left, int128_t right);
int128_t __asm_movups();
int128_t __asm_movups_133();
void __asm_movups_134();
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
struct _IO_FILE *popen(const char *command, const char *type);
int uname(struct utsname *buf);
int64_t __tls_get_addr(void *arg);
void *dlsym(void *handle, const char *symbol);
int dlclose(void *handle);
int32_t mbrtowc(int32_t *pwc, const char *s, size_t n, struct _TYPEDEF___mbstate_t *ps);
size_t mbstowcs(int32_t *dest, const char *src, size_t n);
size_t mbsrtowcs(int32_t *dst, char **src, size_t len, struct _TYPEDEF___mbstate_t *ps);
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
size_t wcsnrtombs(char *dst, int32_t **src, size_t nwc, size_t len, struct _TYPEDEF___mbstate_t *ps);
size_t wcrtomb(char *s, int32_t wc, struct _TYPEDEF___mbstate_t *ps);
int64_t memset2();
int pthread_mutex_lock(void *mutex);
int pthread_mutex_trylock(void *mutex);
int pthread_mutex_unlock(void *mutex);
int pthread_mutex_init(void *mutex, void *attr);
int pthread_mutex_destroy(void *mutex);
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
int ftruncate(int fd, int64_t length);
int writev(int fd, const struct iovec *iov, int iovcnt);
int epoll_create(int size);
int epoll_ctl(int epfd, int op, int fd, struct epoll_event *event);
int epoll_wait(int epfd, struct epoll_event *events, int maxevents, int timeout);
int close(int fd);
struct __dirstream *opendir(const char *name);
struct dirent *readdir(struct __dirstream *dirp);
int closedir(struct __dirstream *dirp);
int64_t blake3_hasher_finalize_seek();
int ioctl(int fd, unsigned long request, ...);
int poll(struct pollfd *fds, unsigned long nfds, int timeout);
int gettimeofday(struct timeval *tv, void *tz);
int clock_gettime(int clk_id, struct timespec *tp);
int64_t sysconf(int name);
int64_t syscall(int64_t number, ...);
int mprotect(void *addr, size_t len, int prot);
int memfd_create(void *name, unsigned int flags);
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
void *__memcpy_chk(void *dest, const void *src, size_t len, size_t destlen);
struct tm *gmtime_r(const time_t *timep, struct tm *result);
struct _Unwind_Exception;
int64_t _Unwind_DeleteException(int64_t exception);
int64_t _Unwind_GetDataRelBase(int64_t context);
int64_t _Unwind_GetLanguageSpecificData(int64_t context);
int64_t _Unwind_GetIPInfo(int64_t context, void *ip_before_insn, int64_t extra);
int64_t _Unwind_GetRegionStart();
int64_t _Unwind_RaiseException(int64_t exception);
void _Unwind_SetGR(int64_t context, int index, int64_t value);
void _Unwind_SetIP(int64_t context, int64_t value);
void _Unwind_Resume(struct _Unwind_Exception *exception);
void _Unwind_Resume_or_Rethrow(int64_t exception);

int64_t function_20dd724();
int64_t function_254ac2(void);
int64_t function_254ac5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_254b1d(void);
int64_t function_254b45(void);
int64_t function_254b60(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_254b82(int64_t a1, int64_t a2);
int64_t function_254bb2(void);
int64_t function_254bbe(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9);
int64_t function_254cc6(void);
int64_t function_254d1d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_254e64(void);
int64_t function_254ebb(int64_t a1);
int64_t function_254edb(int64_t a1);
int64_t function_254ee6(int64_t a1);
int64_t function_254efe(void);
int64_t function_254f17(int64_t a1);
int64_t function_254f45(void);
int64_t function_254f6e(void);
int64_t function_254f8f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_254fb0(void);
int64_t function_254fd8(int64_t a1);
int64_t function_255008(void);
int64_t function_255023(void);
int64_t function_25504e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2f121e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2f1222(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2f12dc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_2f1458(int64_t a1);
int64_t function_2f15e1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2f171a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2f1893(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2f1a1e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2f1c19(void);
int64_t function_546e4d0a();
int64_t function_c4258();
int64_t function_ffffffff875f561d();
int64_t function_ffffffffb64fc9b2();
int64_t unknown_22af759f();
int64_t unknown_3da60976();
int64_t unknown_7c1d787();

// Address range: 0x254ac2 - 0x254ac3
int64_t function_254ac2(void) {
    // 0x254ac2
    int64_t result; // 0x254ac2
    return result;
}

// Address range: 0x254ac5 - 0x254ae6
int64_t function_254ac5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x254ac5
    int64_t v1; // 0x254ac5
    int32_t * v2 = (int32_t *)(v1 + 0x663f2c20); // 0x254ac5
    *v2 = *v2 + (int32_t)v1;
    return v1 & 0xffffffff;
}

// Address range: 0x254b1d - 0x254b22
int64_t function_254b1d(void) {
    // 0x254b1d
    return function_546e4d0a();
}

// Address range: 0x254b45 - 0x254b4a
int64_t function_254b45(void) {
    // 0x254b45
    return function_ffffffffb64fc9b2();
}

// Address range: 0x254b60 - 0x254b63
int64_t function_254b60(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x254b60
    int64_t result; // 0x254b60
    *(char *)a4 = (char)result - (char)a3;
    return result;
}

// Address range: 0x254b82 - 0x254b84
int64_t function_254b82(int64_t a1, int64_t a2) {
    // 0x254b82
    int64_t result; // 0x254b82
    return result;
}

// Address range: 0x254bb2 - 0x254bb3
int64_t function_254bb2(void) {
    // 0x254bb2
    int64_t result; // 0x254bb2
    return result;
}

// Address range: 0x254bbe - 0x254c5b
int64_t function_254bbe(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9) {
    // 0x254bbe
    int64_t v1; // 0x254bbe
    uint64_t v2 = ((v1 & -256) + a3) / 256 | a4;
    uint64_t result = a4 & 0xffffff00; // 0x254bc2
    int32_t * v3 = (int32_t *)(a1 + 123); // 0x254bc4
    *v3 = *v3 + (int32_t)a1;
    char * v4 = (char *)(v2 % 256 | result); // 0x254bc8
    unsigned char v5 = *v4; // 0x254bc8
    unsigned char v6 = v5 + (char)v2; // 0x254bc8
    *v4 = v6;
    int64_t v7 = v1 & 0xffffffff; // 0x254bcc
    if (v6 < v5 || v6 == 0) {
        v7 = function_254bb2();
    }
    int16_t v8 = a3; // 0x254bd5
    *(int32_t *)a1 = __asm_insd(v8);
    int32_t v9 = (int32_t)v7 ^ 101; // 0x254c2f
    __asm_out(v8, v9);
    *(int32_t *)-0x6e2d976cde45c5f2 = v9;
    *(char *)0x586c4246 = *(char *)0x586c4246 + (char)(result / 256);
    int32_t * v10 = (int32_t *)(a3 - 25); // 0x254c45
    *v10 = *v10 + 0x13fe1756;
    *(char *)(a3 + 86) = 84;
    *(char *)0x68a020ff = *(char *)0x68a020ff - 1;
    return result;
}

// Address range: 0x254cc6 - 0x254cc9
int64_t function_254cc6(void) {
    // 0x254cc6
    int64_t result; // 0x254cc6
    return result;
}

// Address range: 0x254d1d - 0x254da9
int64_t function_254d1d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = a1;
    int64_t v2; // 0x254d1d
    int64_t v3 = v2 | 256 * a3 & 0xff00; // 0x254d1d
    int16_t v4 = a3; // 0x254d1f
    *(char *)a1 = __asm_insb(v4);
    uint32_t v5 = (int32_t)(v2 & 0xcf074b00 | (int64_t)__asm_in(v4)) & -0x30f8b4f4; // 0x254d21
    if (v5 == 0) {
        // 0x254d28
        __asm_int1();
        int32_t * v6 = (int32_t *)(a2 + 37); // 0x254d2a
        *v6 = *v6 + (int32_t)a3;
        int64_t result = __asm_hlt(); // 0x254d32
        *(char *)v1 = *(char *)&v1 + (char)v2;
        char v7 = *(char *)0x4248754a; // 0x254d43
        *(char *)0x4248754a = v7 + (char)((256 * result + v3) / 256);
        return result;
    }
    int32_t * v8 = (int32_t *)(v2 + 126); // 0x254d8d
    int32_t v9 = *v8; // 0x254d8d
    int32_t v10 = v9 + (int32_t)v2; // 0x254d8d
    *v8 = v10;
    if (v10 >= 0) {
        int64_t v11 = v5; // 0x254d21
        int64_t v12 = v11 & 0xcf074b00; // 0x254d88
        int64_t v13 = v3; // 0x254d1d
        uint64_t v14 = a3;
        char v15 = *(char *)(v13 + 0xf01e800); // 0x254d57
        int64_t v16 = 256 * (int64_t)((char)(v10 < v9) + (char)(v14 / 256) + v15) | v14 & -0xff01; // 0x254d57
        int64_t v17 = v11 + a4 / 256 & 23 | 232; // 0x254d5d
        uint32_t v18 = *(int32_t *)0x49b2a866; // 0x254d5f
        uint32_t v19 = v18 + (int32_t)v1; // 0x254d5f
        *(int32_t *)0x49b2a866 = v19;
        int64_t v20; // 0x254d1d
        int64_t v21 = v20 - 8; // 0x254d65
        *(int64_t *)v21 = a2;
        *(int32_t *)0x4c759101e87a00a0 = (int32_t)(v17 | v12);
        int32_t * v22 = (int32_t *)(((2 * (v17 + 121 + (int64_t)(v19 < v18)) & 254 | v12) + 0xe8c47c94 & 0xfffffffe) - 0x4c9a37fd); // 0x254d79
        *v22 = *v22 + (int32_t)v16;
        v12 = unknown_7c1d787() & -256;
        int32_t v23 = *v8; // 0x254d8d
        int32_t v24 = v23 + (int32_t)v21; // 0x254d8d
        *v8 = v24;
        v20 = v21;
        v13 ^= 256 * v14 & 0xff00;
        int64_t v25 = v12 | (int64_t)*(char *)a2; // 0x254d90
        while (v24 >= 0) {
            int64_t v26 = v21 & 0xffffffff;
            v14 = v16;
            v15 = *(char *)(v13 + 0xf01e800);
            v16 = 256 * (int64_t)((char)(v24 < v23) + (char)(v14 / 256) + v15) | v14 & -0xff01;
            v17 = v25 + a4 / 256 & 23 | 232;
            v18 = *(int32_t *)0x49b2a866;
            v19 = v18 + (int32_t)v1;
            *(int32_t *)0x49b2a866 = v19;
            v21 = v20 - 8;
            *(int64_t *)v21 = v26;
            *(int32_t *)0x4c759101e87a00a0 = (int32_t)(v17 | v12);
            v22 = (int32_t *)(((2 * (v17 + 121 + (int64_t)(v19 < v18)) & 254 | v12) + 0xe8c47c94 & 0xfffffffe) - 0x4c9a37fd);
            *v22 = *v22 + (int32_t)v16;
            v12 = unknown_7c1d787() & -256;
            v23 = *v8;
            v24 = v23 + (int32_t)v21;
            *v8 = v24;
            v20 = v21;
            v13 ^= 256 * v14 & 0xff00;
            v25 = v12 | (int64_t)*(char *)v26;
        }
    }
    uint64_t v27 = unknown_22af759f(); // 0x254d99
    char * v28 = (char *)(v27 + 0x1e82800); // 0x254d9e
    *v28 = *v28 | (char)(v27 / 256);
    return 0x10000 * (int32_t)v1 >> 16;
}

// Address range: 0x254e64 - 0x254e67
int64_t function_254e64(void) {
    // 0x254e64
    int64_t result; // 0x254e64
    return result;
}

// Address range: 0x254ebb - 0x254ebe
int64_t function_254ebb(int64_t a1) {
    // 0x254ebb
    int64_t result; // 0x254ebb
    return result;
}

// Address range: 0x254edb - 0x254ede
int64_t function_254edb(int64_t a1) {
    // 0x254edb
    int64_t v1; // 0x254edb
    int64_t result = v1;
    *(int32_t *)result = (int32_t)result + (int32_t)v1;
    return result;
}

// Address range: 0x254ee6 - 0x254ee7
int64_t function_254ee6(int64_t a1) {
    // 0x254ee6
    int64_t result; // 0x254ee6
    return result;
}

// Address range: 0x254efe - 0x254eff
int64_t function_254efe(void) {
    // 0x254efe
    int64_t result; // 0x254efe
    return result;
}

// Address range: 0x254f17 - 0x254f19
int64_t function_254f17(int64_t a1) {
    // 0x254f17
    return __asm_wait(a1);
}

// Address range: 0x254f45 - 0x254f4a
int64_t function_254f45(void) {
    // 0x254f45
    return function_ffffffff875f561d();
}

// Address range: 0x254f6e - 0x254f76
int64_t function_254f6e(void) {
    // 0x254f6e
    return unknown_3da60976();
}

// Address range: 0x254f8f - 0x254fb0
int64_t function_254f8f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x254f8f
    int64_t v1; // 0x254f8f
    char * v2 = (char *)(v1 + 16); // 0x254f8f
    *v2 = *v2 ^ (char)(v1 / 256);
    *(char *)-0x4966c0fec2ffec16 = (char)v1;
    int64_t v3; // 0x254f8f
    *(char *)a4 = *(char *)&v3 - 88;
    return function_255008();
}

// Address range: 0x254fb0 - 0x254fc3
int64_t function_254fb0(void) {
    // 0x254fb0
    int64_t v1; // 0x254fb0
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    int64_t result = v2 & -256 | 8; // 0x254fb7
    char * v3 = (char *)result; // 0x254fb9
    *v3 = *v3 + 8;
    return result;
}

// Address range: 0x254fd8 - 0x254fdc
int64_t function_254fd8(int64_t a1) {
    // 0x254fd8
    int64_t result; // 0x254fd8
    return result;
}

// Address range: 0x255008 - 0x255016
int64_t function_255008(void) {
    // 0x255008
    return function_20dd724();
}

// Address range: 0x255023 - 0x255025
int64_t function_255023(void) {
    // 0x255023
    return function_255008();
}

// Address range: 0x25504e - 0x255060
int64_t function_25504e(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a2 - 0x3bcdd380); // 0x25504e
    *v1 = *v1 ^ -0x5270b976;
    int64_t result; // 0x25504e
    return result;
}

// Address range: 0x2f121e - 0x2f1221
int64_t function_2f121e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2f121e
    int64_t result; // 0x2f121e
    char * v1 = (char *)(result - 127); // 0x2f121e
    *v1 = *v1 | (char)a4;
    return result;
}

// Address range: 0x2f1222 - 0x2f12dc
int64_t function_2f1222(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2f1222
    int64_t v1; // 0x2f1222
    int64_t v2 = v1;
    *(char *)v2 = (char)v2;
    int64_t v3; // 0x2f1222
    int64_t v4 = v3;
    *(char *)v4 = *(char *)&v3 + (char)v4;
    return function_c4258(a1, a3, v1, v1, v1, v1, 0x71a07298);
}

// Address range: 0x2f12dc - 0x2f1458
int64_t function_2f12dc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x2f12dc
    int64_t v1; // bp-32, 0x2f12dc
    int64_t v2 = (int64_t)&v1; // 0x2f13cf
    v1 = v2;
    return function_c4258(a1, a2, a3, a4, a5, a6, v2);
}

// Address range: 0x2f1458 - 0x2f15e1
int64_t function_2f1458(int64_t a1) {
    int64_t v1 = 0x4adf6a02; // bp-32, 0x2f14d2
    int64_t v2 = (int64_t)&v1; // 0x2f14f9
    int64_t v3 = *(int64_t *)(v2 + 16); // 0x2f1501
    *(int64_t *)(v2 - 8) = v3;
    int64_t v4 = v2 - 16; // 0x2f1505
    int64_t * v5 = (int64_t *)v4; // 0x2f1505
    *v5 = a1;
    *(int64_t *)(v2 + 8) = *v5;
    *(int64_t *)(v2 + 24) = v3;
    *(int64_t *)(v2 - 24) = v4;
    *v5 = v2;
    int64_t v6; // 0x2f1458
    return function_c4258(v6, v6, v6, v6, v6, v6, v1);
}

// Address range: 0x2f15e1 - 0x2f171a
int64_t function_2f15e1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = 0x7a80be84; // bp-32, 0x2f1627
    int64_t v2 = (int64_t)&v1; // 0x2f1684
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x2f168c
    *v3 = 0x7f65c3a6;
    int64_t * v4 = (int64_t *)(v2 - 16); // 0x2f1691
    *(int64_t *)(v2 - 24) = a6;
    *v4 = a6;
    int64_t v5 = v2 + 8; // 0x2f16a5
    *(int64_t *)v5 = *v3;
    *v3 = a4;
    *v4 = 169;
    *(int64_t *)(v2 + 24) = 169;
    int64_t v6 = *v3; // 0x2f16c2
    *v4 = v6;
    *v3 = v5;
    int64_t v7; // 0x2f15e1
    return function_c4258(a1, 0x57b91805, a3, v6, a5, v7, v1);
}

// Address range: 0x2f171a - 0x2f1893
int64_t function_2f171a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x2f171a
    int64_t v1; // bp-40, 0x2f171a
    int64_t v2 = (int64_t)&v1; // 0x2f1780
    v1 = 0x7b204b81;
    int64_t v3 = v2 - 16; // 0x2f1798
    int64_t * v4 = (int64_t *)v3; // 0x2f1798
    int64_t v5 = *(int64_t *)(v2 + 32); // 0x2f17a7
    int64_t v6 = v2 - 8; // 0x2f17a7
    int64_t * v7 = (int64_t *)v6; // 0x2f17a7
    *v7 = v5;
    *v4 = a4;
    int64_t v8 = v2 - 24; // 0x2f17b7
    int64_t * v9 = (int64_t *)v8; // 0x2f17b7
    int64_t * v10 = (int64_t *)(v2 - 32); // 0x2f17de
    *v4 = v2;
    int64_t * v11 = (int64_t *)(v2 + 8); // 0x2f1800
    int64_t v12 = *v11; // 0x2f1800
    *v4 = v12;
    *v9 = v12;
    *v10 = v5;
    *v7 = *v9;
    *v9 = 0x6852db6a;
    *v10 = 0x54793413;
    *(int64_t *)(v2 - 40) = v12;
    *v11 = *v9;
    *v9 = a3;
    *v10 = v8;
    *v9 = v6;
    *v9 = *v4;
    *v10 = v3;
    return function_c4258(a1, a2, *v9, *v4, a5, a6, 0x2ed8b0);
}

// Address range: 0x2f1893 - 0x2f1a1e
int64_t function_2f1893(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2f1893
    int64_t v1; // 0x2f1893
    return function_c4258(a1, a2, a3, a4, v1, v1, 0x4131ebd0);
}

// Address range: 0x2f1a1e - 0x2f1b6f
int64_t function_2f1a1e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2f1a1e
    int64_t v1; // 0x2f1a1e
    return function_c4258(a1, a2, a3, a5, v1, v1, 310);
}

// Address range: 0x2f1c19 - 0x2f1c1c
int64_t function_2f1c19(void) {
    // 0x2f1c19
    int64_t result; // 0x2f1c19
    return result;
}
