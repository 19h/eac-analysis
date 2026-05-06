/*
 * Targeted RetDec C for native executable gap queue batch 262.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1e16e8-0x1e18e8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1e18e8-0x1e1ae8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1e1ae8-0x1e1ce8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1e1ce8-0x1e1ee8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2a5975-0x2a5b75 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2a5d75-0x2a5f75 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3130bb-0x3132bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x3132bb-0x3134bb rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_16e3487();
int64_t function_1e16e8(void);
int64_t function_1e1751(int64_t a1);
int64_t function_1e1755(int64_t a1);
int64_t function_1e1800(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_1e181a(void);
int64_t function_1e182c(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_1e1862(void);
int64_t function_1e1864(int64_t a1);
int64_t function_1e1887(void);
int64_t function_1e18fe(int64_t a1);
int64_t function_1e1930(void);
int64_t function_1e19c2(void);
int64_t function_1e19d4(int64_t a1);
int64_t function_1e19f4(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_1e1a25(int64_t a1);
int64_t function_1e1ab3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1e1aec(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1e1b44(int64_t a1, int64_t a2);
int64_t function_1e1b81(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1e1b97(int64_t a1);
int64_t function_1e1b9a(void);
int64_t function_1e1bf7(void);
int64_t function_1e1c0a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1e1c47(int64_t a1);
int64_t function_1e1c62(void);
int64_t function_1e1ca7(void);
int64_t function_1e1cd7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1e1cfc(void);
int64_t function_1e1d07(int64_t a1);
int64_t function_1e1d12(void);
int64_t function_1e1d23(void);
int64_t function_1e1d29(int64_t a1);
int64_t function_1e1d43(void);
int64_t function_1e1d5e(int64_t a1);
int64_t function_1e1d66(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1e1d88(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_1e1e1f(int64_t a1);
int64_t function_1e1e24(void);
int64_t function_1e1e56(void);
int64_t function_1e1e5c(int64_t a1);
int64_t function_1e1e65(void);
int64_t function_1e1e6e(void);
int64_t function_1e1eb5(int64_t a1);
int64_t function_1e1ebe(int64_t a1);
int64_t function_1e1ec3(void);
int64_t function_2a5975(void);
int64_t function_2a597b(void);
int64_t function_2a59b6(void);
int64_t function_2a5a35(void);
int64_t function_2a5a42(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2a5a5e(void);
int64_t function_2a5a68(void);
int64_t function_2a5a7d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_2a5a9d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2a5aa6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2a5b60(int64_t a1, int64_t a2);
int64_t function_2a5d75(int64_t a1, int64_t a2, int64_t result);
int64_t function_2a5e6b(void);
int64_t function_3130bb(void);
int64_t function_3130c4(void);
int64_t function_313120(void);
int64_t function_313123(int64_t a1);
int64_t function_31319e(int64_t a1);
int64_t function_3131cb(int64_t a1);
int64_t function_3131d8(void);
int64_t function_313250(void);
int64_t function_313269(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3132c8(int64_t a1);
int64_t function_3132d7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3133ad(int64_t a1);
int64_t function_3133bb(int64_t a1, int64_t a2, int64_t a3);
int64_t function_313438(void);
int64_t function_313469(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3d2a58d4();
int64_t function_51741e94();
int64_t function_6d027afc();
int64_t function_70334156();
int64_t function_ffffffff8677a899();
int64_t function_ffffffff98d1f6b3();
int64_t function_ffffffffad638221();
int64_t function_ffffffffb3776b65();
int64_t unknown_10805375();
int64_t unknown_10fe7e4d();
int64_t unknown_2c6ad2dc();
int64_t unknown_342b3792();
int64_t unknown_38d0d485();
int64_t unknown_50a81d6a();
int64_t unknown_635824a3();
int64_t unknown_6428a538();
int64_t unknown_74371b24();
int64_t unknown_ffffffff8e333137();
int64_t unknown_ffffffffa481d5b0();
int64_t unknown_ffffffffaa038814();
int64_t unknown_ffffffffab702b38();
int64_t unknown_ffffffffb3c65da1();
int64_t unknown_ffffffffb987872a();
int64_t unknown_ffffffffc71463f6();
int64_t unknown_ffffffffcb742367();

// Address range: 0x1e16e8 - 0x1e16e9
int64_t function_1e16e8(void) {
    // 0x1e16e8
    int64_t result; // 0x1e16e8
    return result;
}

// Address range: 0x1e1751 - 0x1e1752
int64_t function_1e1751(int64_t a1) {
    // 0x1e1751
    int64_t result; // 0x1e1751
    return result;
}

// Address range: 0x1e1755 - 0x1e1756
int64_t function_1e1755(int64_t a1) {
    // 0x1e1755
    int64_t result; // 0x1e1755
    return result;
}

// Address range: 0x1e1800 - 0x1e1805
int64_t function_1e1800(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x1e1800
    int64_t v1; // 0x1e1800
    *(int32_t *)a3 = 2 * (int32_t)v1;
    return v1 | a4 / 256 % 256;
}

// Address range: 0x1e181a - 0x1e181b
int64_t function_1e181a(void) {
    // 0x1e181a
    int64_t result; // 0x1e181a
    return result;
}

// Address range: 0x1e182c - 0x1e1850
int64_t function_1e182c(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int32_t * v1 = (int32_t *)(a1 - 53); // 0x1e182c
    *v1 = *v1 | (int32_t)a4;
    int64_t v2; // 0x1e182c
    *(char *)a1 = *(char *)&v2;
    int64_t v3; // 0x1e182c
    int64_t v4; // 0x1e182c
    int32_t v5 = *(int32_t *)&v3 | (int32_t)v4; // 0x1e1831
    *(char *)v3 = 61;
    int32_t * v6 = (int32_t *)(((a4 / 256 + a4) % 256 | a4 & -256) - 0x19eb934b); // 0x1e183a
    uint32_t v7 = *v6; // 0x1e183a
    uint32_t v8 = v7 + v5; // 0x1e183a
    *v6 = v8;
    int64_t v9 = v3 + 0xf077e0b3 + (int64_t)(v8 < v7); // 0x1e1840
    int32_t * v10 = (int32_t *)((v9 & 0xffffffff) + 0x1f01e8fb); // 0x1e1845
    *v10 = *v10 + v5;
    return 0x10000 * (int32_t)v9 >> 16;
}

// Address range: 0x1e1862 - 0x1e1863
int64_t function_1e1862(void) {
    // 0x1e1862
    int64_t result; // 0x1e1862
    return result;
}

// Address range: 0x1e1864 - 0x1e1865
int64_t function_1e1864(int64_t a1) {
    // 0x1e1864
    int64_t result; // 0x1e1864
    return result;
}

// Address range: 0x1e1887 - 0x1e1888
int64_t function_1e1887(void) {
    // 0x1e1887
    int64_t result; // 0x1e1887
    return result;
}

// Address range: 0x1e18fe - 0x1e1914
int64_t function_1e18fe(int64_t a1) {
    int64_t result = __asm_int3(); // 0x1e1901
    int64_t v1; // 0x1e18fe
    *(int32_t *)result = (int32_t)v1 - 0x64ee74d5;
    char * v2 = (char *)(v1 + 0x67013d5b); // 0x1e190b
    *v2 = *v2 + (char)v1;
    return result;
}

// Address range: 0x1e1930 - 0x1e1932
int64_t function_1e1930(void) {
    // 0x1e1930
    int64_t result; // 0x1e1930
    return result;
}

// Address range: 0x1e19c2 - 0x1e19c3
int64_t function_1e19c2(void) {
    // 0x1e19c2
    int64_t result; // 0x1e19c2
    return result;
}

// Address range: 0x1e19d4 - 0x1e19dc
int64_t function_1e19d4(int64_t a1) {
    // 0x1e19d4
    int64_t v1; // 0x1e19d4
    int64_t v2 = v1;
    *(char *)v2 = (char)(v2 & (uint64_t)v1 / 256);
    return unknown_2c6ad2dc(a1);
}

// Address range: 0x1e19f4 - 0x1e19fc
int64_t function_1e19f4(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x1e19f4
    int64_t v1; // 0x1e19f4
    int64_t v2 = v1;
    return (v2 - a4 / 256) % 256 | v2 & -256;
}

// Address range: 0x1e1a25 - 0x1e1a28
int64_t function_1e1a25(int64_t a1) {
    // 0x1e1a25
    int64_t result; // 0x1e1a25
    return result;
}

// Address range: 0x1e1ab3 - 0x1e1abd
int64_t function_1e1ab3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1e1ab3
    int64_t v1; // 0x1e1ab3
    int32_t * v2 = (int32_t *)(a4 - 256 * v1 & 0xff00 | a4 & -0xff01); // 0x1e1ab5
    *v2 = *v2 + (int32_t)a3;
    return v1 | 214;
}

// Address range: 0x1e1aec - 0x1e1b14
int64_t function_1e1aec(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5;
    unknown_ffffffffc71463f6();
    int64_t result = *(int64_t *)-0x266188f2154bc814; // 0x1e1af5
    char * v2 = (char *)(result - 24); // 0x1e1aff
    int64_t v3; // 0x1e1aec
    *v2 = *v2 & (char)v3;
    int32_t * v4 = (int32_t *)(v3 + 0x3ad2f8fe); // 0x1e1b02
    *v4 = *v4 + (int32_t)(int64_t)&v1;
    uint32_t v5 = (int32_t)a4 % 32; // 0x1e1b0c
    if (v5 != 0) {
        int32_t * v6 = (int32_t *)result; // 0x1e1b0c
        uint32_t v7 = *v6; // 0x1e1b0c
        *v6 = v7 >> 32 - v5 | v7 << v5;
    }
    return result;
}

// Address range: 0x1e1b44 - 0x1e1b4c
int64_t function_1e1b44(int64_t a1, int64_t a2) {
    // 0x1e1b44
    return function_70334156();
}

// Address range: 0x1e1b81 - 0x1e1b87
int64_t function_1e1b81(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1e1b81
    int64_t result; // 0x1e1b81
    *(char *)a4 = 2 * (char)result;
    return result;
}

// Address range: 0x1e1b97 - 0x1e1b98
int64_t function_1e1b97(int64_t a1) {
    // 0x1e1b97
    int64_t result; // 0x1e1b97
    return result;
}

// Address range: 0x1e1b9a - 0x1e1b9b
int64_t function_1e1b9a(void) {
    // 0x1e1b9a
    int64_t result; // 0x1e1b9a
    return result;
}

// Address range: 0x1e1bf7 - 0x1e1bf8
int64_t function_1e1bf7(void) {
    // 0x1e1bf7
    int64_t result; // 0x1e1bf7
    return result;
}

// Address range: 0x1e1c0a - 0x1e1c20
int64_t function_1e1c0a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1e1c0a
    int64_t v1; // 0x1e1c0a
    *(char *)a2 = 2 * (char)v1;
    int32_t v2 = (int32_t)v1 - (int32_t)a4; // 0x1e1c13
    int64_t v3 = unknown_ffffffffaa038814(); // 0x1e1c15
    if (v2 >= 0) {
        v3 = function_1e1b9a();
    }
    int64_t result = v3; // 0x1e1c17
    if (a4 != 1 == v2 == 0) {
        result = function_1e1bf7();
    }
    // 0x1e1c19
    return result;
}

// Address range: 0x1e1c47 - 0x1e1c4a
int64_t function_1e1c47(int64_t a1) {
    // 0x1e1c47
    int64_t result; // 0x1e1c47
    return result;
}

// Address range: 0x1e1c62 - 0x1e1c63
int64_t function_1e1c62(void) {
    // 0x1e1c62
    int64_t result; // 0x1e1c62
    return result;
}

// Address range: 0x1e1ca7 - 0x1e1cac
int64_t function_1e1ca7(void) {
    // 0x1e1ca7
    return function_51741e94();
}

// Address range: 0x1e1cd7 - 0x1e1cdf
int64_t function_1e1cd7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1e1cd7
    return function_1e1d5e(a1);
}

// Address range: 0x1e1cfc - 0x1e1cfd
int64_t function_1e1cfc(void) {
    // 0x1e1cfc
    int64_t result; // 0x1e1cfc
    return result;
}

// Address range: 0x1e1d07 - 0x1e1d0a
int64_t function_1e1d07(int64_t a1) {
    // 0x1e1d07
    int64_t result; // 0x1e1d07
    return result;
}

// Address range: 0x1e1d12 - 0x1e1d13
int64_t function_1e1d12(void) {
    // 0x1e1d12
    int64_t result; // 0x1e1d12
    return result;
}

// Address range: 0x1e1d23 - 0x1e1d28
int64_t function_1e1d23(void) {
    // 0x1e1d23
    return function_ffffffffad638221();
}

// Address range: 0x1e1d29 - 0x1e1d38
int64_t function_1e1d29(int64_t a1) {
    // 0x1e1d29
    int64_t v1; // 0x1e1d29
    if (v1 / 256 > 0x100000000000000 * v1 >> 56) {
        function_1e1cfc();
    }
    // 0x1e1d2d
    unknown_50a81d6a();
    return unknown_6428a538();
}

// Address range: 0x1e1d43 - 0x1e1d46
int64_t function_1e1d43(void) {
    // 0x1e1d43
    int64_t result; // 0x1e1d43
    return result;
}

// Address range: 0x1e1d5e - 0x1e1d65
int64_t function_1e1d5e(int64_t a1) {
    // 0x1e1d5e
    return 0x15ae01e8;
}

// Address range: 0x1e1d66 - 0x1e1d88
int64_t function_1e1d66(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1e1d66
    int64_t v1; // 0x1e1d66
    char * v2 = (char *)(((v1 ^ a4) & 0xffffffff) + 0x136ab601); // 0x1e1d72
    *v2 = *v2 + (char)a5;
    return a2 & 0xffffffff;
}

// Address range: 0x1e1d88 - 0x1e1da5
int64_t function_1e1d88(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x1e1d88
    int64_t v1; // 0x1e1d88
    uint64_t v2 = v1;
    unsigned char v3 = (char)(v2 / 256); // 0x1e1d88
    unsigned char v4 = (char)v1 + v3; // 0x1e1d88
    float80_t v5; // 0x1e1d88
    *(int16_t *)a4 = (int16_t)v5;
    unknown_342b3792();
    int64_t v6; // 0x1e1d88
    int64_t v7 = (int64_t)&v6; // 0x1e1d91
    char * v8 = (char *)(a1 + 8); // 0x1e1d92
    char v9 = a4 / 256; // 0x1e1d92
    *v8 = (char)(v4 < v3) - v9 + *v8;
    unsigned char v10 = *(char *)((256 * (int64_t)v4 | v2 & -0xff01) + (v7 & 248)); // 0x1e1d95
    int64_t result = unknown_ffffffffb3c65da1(); // 0x1e1d9b
    char * v11 = (char *)((v7 & 0xffffff00 | (int64_t)v10) + 10); // 0x1e1da0
    *v11 = *v11 + v9;
    return result;
}

// Address range: 0x1e1e1f - 0x1e1e20
int64_t function_1e1e1f(int64_t a1) {
    // 0x1e1e1f
    int64_t result; // 0x1e1e1f
    return result;
}

// Address range: 0x1e1e24 - 0x1e1e29
int64_t function_1e1e24(void) {
    // 0x1e1e24
    return function_6d027afc();
}

// Address range: 0x1e1e56 - 0x1e1e57
int64_t function_1e1e56(void) {
    // 0x1e1e56
    int64_t result; // 0x1e1e56
    return result;
}

// Address range: 0x1e1e5c - 0x1e1e5d
int64_t function_1e1e5c(int64_t a1) {
    // 0x1e1e5c
    int64_t result; // 0x1e1e5c
    return result;
}

// Address range: 0x1e1e65 - 0x1e1e66
int64_t function_1e1e65(void) {
    // 0x1e1e65
    int64_t result; // 0x1e1e65
    return result;
}

// Address range: 0x1e1e6e - 0x1e1e79
int64_t function_1e1e6e(void) {
    // 0x1e1e6e
    return function_ffffffff8677a899();
}

// Address range: 0x1e1eb5 - 0x1e1eb8
int64_t function_1e1eb5(int64_t a1) {
    // 0x1e1eb5
    int64_t result; // 0x1e1eb5
    return result;
}

// Address range: 0x1e1ebe - 0x1e1ec0
int64_t function_1e1ebe(int64_t a1) {
    // 0x1e1ebe
    int64_t result; // 0x1e1ebe
    return result;
}

// Address range: 0x1e1ec3 - 0x1e1ec5
int64_t function_1e1ec3(void) {
    // 0x1e1ec3
    return function_1e1e56();
}

// Address range: 0x2a5975 - 0x2a5977
int64_t function_2a5975(void) {
    // 0x2a5975
    int64_t v1; // 0x2a5975
    int64_t result = v1;
    *(int32_t *)result = (int32_t)result + (int32_t)v1;
    return result;
}

// Address range: 0x2a597b - 0x2a597e
int64_t function_2a597b(void) {
    // 0x2a597b
    int64_t v1; // 0x2a597b
    int64_t v2 = v1;
    bool v3; // 0x2a597b
    return (v2 - (v3 ? 227 : 226)) % 256 | v2 & -256;
}

// Address range: 0x2a59b6 - 0x2a59b8
int64_t function_2a59b6(void) {
    // 0x2a59b6
    int64_t v1; // 0x2a59b6
    uint64_t v2 = v1;
    return v2 & -256 | (int64_t)*(char *)(v2 % 256 + v1);
}

// Address range: 0x2a5a35 - 0x2a5a36
int64_t function_2a5a35(void) {
    // 0x2a5a35
    int64_t result; // 0x2a5a35
    return result;
}

// Address range: 0x2a5a42 - 0x2a5a4c
int64_t function_2a5a42(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2a5a42
    int64_t result; // 0x2a5a42
    int32_t * v1 = (int32_t *)(result - 0x726e470d); // 0x2a5a42
    *v1 = *v1 + (int32_t)a4;
    return result;
}

// Address range: 0x2a5a5e - 0x2a5a5f
int64_t function_2a5a5e(void) {
    // 0x2a5a5e
    int64_t result; // 0x2a5a5e
    return result;
}

// Address range: 0x2a5a68 - 0x2a5a6d
int64_t function_2a5a68(void) {
    // 0x2a5a68
    return function_3d2a58d4();
}

// Address range: 0x2a5a7d - 0x2a5a9a
int64_t function_2a5a7d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x2a5a7d
    int64_t v1; // 0x2a5a7d
    *(int32_t *)a4 = 2 * (int32_t)v1;
    *(char *)(v1 - 0x170d9dc2) = (char)a3;
    int64_t v2; // 0x2a5a7d
    *(int32_t *)a1 = *(int32_t *)&v2 + (int32_t)a2;
    char v3 = *(char *)-0x17059b01; // 0x2a5a8f
    *(char *)-0x17059b01 = (char)(-1 - (char)v1 < (char)(a4 / 256)) + (char)a4 + v3;
    return __asm_in_133(104);
}

// Address range: 0x2a5a9d - 0x2a5aa6
int64_t function_2a5a9d(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2a5a9d
    unknown_635824a3(a1, a2, a3);
    return function_2a5a35();
}

// Address range: 0x2a5aa6 - 0x2a5b5f
int64_t function_2a5aa6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2a5aa6
    bool v1; // 0x2a5aa6
    int64_t v2 = (v1 ? -1 : 1) + (int64_t)(*(int32_t *)(a3 + 25) ^ (int32_t)a2); // 0x2a5aa9
    unknown_ffffffffa481d5b0();
    __asm_fbld(*(float80_t *)(a3 + 0x8da01e8));
    int64_t v3 = __asm_wait(); // 0x2a5abb
    int64_t v4; // 0x2a5aa6
    if (llvm_ctpop_i8(*(char *)(v2 + 0x1e840a3) - (char)(v4 / 256)) % 2 != 0) {
        // 0x2a5b2c
        unknown_ffffffffab702b38();
        return *(int64_t *)(v4 + 8);
    }
    int32_t * v5 = (int32_t *)(v3 - 0x623b5df6); // 0x2a5b44
    *v5 = *v5 + (int32_t)v4;
    int32_t v6 = *(int32_t *)((a4 | a1) & 0xffff00ff | (int64_t)"le"); // 0x2a5b4a
    uint32_t v7 = v6 & (int32_t)v3; // 0x2a5b4a
    int64_t v8 = v7; // 0x2a5b4a
    float80_t v9; // 0x2a5aa6
    *(float32_t *)(v8 - 24 + 2 * v8) = (float32_t)v9;
    int32_t * v10 = (int32_t *)(2 * v2 + 0x1d990147 + (int64_t)(11 * v7)); // 0x2a5b53
    *v10 = *v10 - 0x79ece6f1;
    return v8 & 0xffff00ff | 0xcb00;
}

// Address range: 0x2a5b60 - 0x2a5b6c
int64_t function_2a5b60(int64_t a1, int64_t a2) {
    // 0x2a5b60
    bool v1; // 0x2a5b60
    int64_t v2 = v1 ? -1 : 1; // 0x2a5b60
    int64_t v3 = v2 + a1; // 0x2a5b60
    int64_t result = unknown_ffffffffcb742367(v3, v2 + a2); // 0x2a5b61
    char * v4 = (char *)v3; // 0x2a5b66
    int64_t v5; // 0x2a5b60
    *v4 = *v4 + (char)((uint64_t)v5 / 256);
    return result;
}

// Address range: 0x2a5d75 - 0x2a5d97
int64_t function_2a5d75(int64_t a1, int64_t a2, int64_t result) {
    // 0x2a5d75
    int64_t v1; // 0x2a5d75
    uint64_t v2 = v1;
    char * v3 = (char *)(a2 - 0x2fca8f7d); // 0x2a5d75
    *v3 = *v3 + (char)(v2 / 256);
    char * v4 = (char *)(a1 - 78 + v2); // 0x2a5d7b
    *v4 = *v4 + (char)v1;
    int64_t v5 = unknown_38d0d485(); // 0x2a5d7f
    char v6 = __asm_in(59); // 0x2a5d84
    int64_t v7 = v5 & -256 | (int64_t)v6; // 0x2a5d84
    int32_t v8 = v7; // 0x2a5d86
    *(int32_t *)a1 = v8;
    bool v9; // 0x2a5d75
    int64_t v10 = v9 ? -4 : 4; // 0x2a5d86
    int64_t v11 = v10 + a1; // 0x2a5d86
    char * v12 = (char *)v7; // 0x2a5d87
    *v12 = *v12 - v6;
    int64_t v13; // 0x2a5d75
    *(int32_t *)v11 = *(int32_t *)&v13;
    *(int32_t *)0x3267c401e8fada7e = v8;
    __asm_hlt(v11 + v10, v10 + a2);
    return result;
}

// Address range: 0x2a5e6b - 0x2a5e6c
int64_t function_2a5e6b(void) {
    // 0x2a5e6b
    int64_t result; // 0x2a5e6b
    return result;
}

// Address range: 0x3130bb - 0x3130bc
int64_t function_3130bb(void) {
    // 0x3130bb
    int64_t result; // 0x3130bb
    return result;
}

// Address range: 0x3130c4 - 0x3130c5
int64_t function_3130c4(void) {
    // 0x3130c4
    int64_t result; // 0x3130c4
    return result;
}

// Address range: 0x313120 - 0x313121
int64_t function_313120(void) {
    // 0x313120
    int64_t result; // 0x313120
    return result;
}

// Address range: 0x313123 - 0x31313a
int64_t function_313123(int64_t a1) {
    int64_t v1 = unknown_ffffffffb987872a(); // 0x313129
    bool v2; // 0x313123
    if (v2 || false) {
        v1 = function_313120();
    }
    char v3 = *(char *)0x28c35514; // 0x31312b
    char v4 = v1 / 256; // 0x31312b
    char v5 = v2; // 0x31312b
    char v6 = v3 + v5 + v4; // 0x31312b
    char v7 = v6 + v5; // 0x31312b
    *(char *)0x28c35514 = v6;
    int64_t result = unknown_ffffffff8e333137(); // 0x313136
    if (((v7 ^ v3) & (v7 ^ v4)) >= 0) {
        result = function_3130c4();
    }
    // 0x313138
    return result;
}

// Address range: 0x31319e - 0x3131a1
int64_t function_31319e(int64_t a1) {
    // 0x31319e
    int64_t result; // 0x31319e
    return result;
}

// Address range: 0x3131cb - 0x3131cc
int64_t function_3131cb(int64_t a1) {
    // 0x3131cb
    int64_t result; // 0x3131cb
    return result;
}

// Address range: 0x3131d8 - 0x3131dd
int64_t function_3131d8(void) {
    // 0x3131d8
    return function_ffffffffb3776b65();
}

// Address range: 0x313250 - 0x313255
int64_t function_313250(void) {
    // 0x313250
    return function_ffffffff98d1f6b3();
}

// Address range: 0x313269 - 0x31326f
int64_t function_313269(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x313269
    int64_t result; // 0x313269
    bool v1; // 0x313269
    *(char *)a3 = (char)result + (char)a4 + (char)v1;
    return result;
}

// Address range: 0x3132c8 - 0x3132cd
int64_t function_3132c8(int64_t a1) {
    // 0x3132c8
    int64_t v1; // 0x3132c8
    return (uint64_t)v1 % 256 ^ v1;
}

// Address range: 0x3132d7 - 0x313323
int64_t function_3132d7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3132d7
    bool v1; // 0x3132d7
    if (v1) {
        // 0x31331e
        return unknown_74371b24();
    }
    // 0x3132d9
    int64_t result; // 0x3132d7
    *(int32_t *)a1 = (int32_t)result;
    return result;
}

// Address range: 0x3133ad - 0x3133ae
int64_t function_3133ad(int64_t a1) {
    // 0x3133ad
    int64_t result; // 0x3133ad
    return result;
}

// Address range: 0x3133bb - 0x3133cb
int64_t function_3133bb(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3133bb
    int64_t v1; // 0x3133bb
    uint64_t result = v1;
    char * v2 = (char *)(2 * a3 + 0x1e8c0b6 + result); // 0x3133c0
    *v2 = *v2 | (char)(result / 256);
    return result;
}

// Address range: 0x313438 - 0x313451
int64_t function_313438(void) {
    // 0x313438
    int64_t v1; // 0x313438
    *(int32_t *)0x1e81636e4436400 = (int32_t)v1;
    while (true) {
        // 0x313441
        int64_t v2; // 0x313438
        int64_t v3; // 0x313438
        *(int32_t *)v3 = (int32_t)v2;
        bool v4; // 0x313438
        int64_t v5 = v3 + (v4 ? -4 : 4); // 0x313441
        int64_t v6; // 0x313438
        v2 = unknown_10fe7e4d(v5) & -256 | (int64_t)*(char *)v6;
        v6 += (v4 ? -1 : 1);
        v3 = v5;
    }
}

// Address range: 0x313469 - 0x31347a
int64_t function_313469(int64_t a1, int64_t a2, int64_t a3) {
    // 0x313469
    unknown_10805375();
    __asm_wait();
    return function_16e3487();
}
