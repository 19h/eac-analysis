/*
 * Targeted RetDec C for native executable gap queue batch 240.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x143513-0x143713 rank=- name=- kind=- bytes=- uncovered=-
 *   0x143713-0x143913 rank=- name=- kind=- bytes=- uncovered=-
 *   0x143913-0x143b13 rank=- name=- kind=- bytes=- uncovered=-
 *   0x143d13-0x143f13 rank=- name=- kind=- bytes=- uncovered=-
 *   0x219866-0x219a66 rank=- name=- kind=- bytes=- uncovered=-
 *   0x219c66-0x219e66 rank=- name=- kind=- bytes=- uncovered=-
 *   0x219e66-0x21a066 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2ef41e-0x2ef61e rank=- name=- kind=- bytes=- uncovered=-
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
extern int g1;
extern int g3;
extern int g6;
extern int g7;
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

int64_t function_143513(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_143579(void);
int64_t function_14359e(void);
int64_t function_1435bf(void);
int64_t function_1435c9(int64_t a1, int64_t a2, int64_t a3);
int64_t function_14362f(int64_t a1);
int64_t function_143639(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_143683(void);
int64_t function_143690(int64_t a1, int64_t a2);
int64_t function_14369d(void);
int64_t function_1436ae(void);
int64_t function_1436d8(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_143770(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_14377c(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_1437ad(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1437c9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_143824(void);
int64_t function_143843(void);
int64_t function_143845(void);
int64_t function_14384c(void);
int64_t function_14387f(int64_t a1);
int64_t function_1438b1(void);
int64_t function_1438c6(int64_t a1);
int64_t function_1438ea(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_143994(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5);
int64_t function_143a86(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_143d13(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_143d47(void);
int64_t function_143d64(void);
int64_t function_143d81(int64_t a1);
int64_t function_143dc0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_143dd0(void);
int64_t function_143e2d(int64_t a1);
int64_t function_143e75(void);
int64_t function_143f02(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_151377e();
int64_t function_15138b2();
int64_t function_219866(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2198f5(void);
int64_t function_219926(void);
int64_t function_21993a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_219a5a(void);
int64_t function_219a63(void);
int64_t function_219c17();
int64_t function_219c66(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_219dde(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_219e47(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_219e51(void);
int64_t function_219e78(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_219ee9(int64_t a1);
int64_t function_219f8e(void);
int64_t function_219fcf(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2ef41e(int64_t a1, int64_t a2);
int64_t function_2ef464(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2ef5a2(int64_t a1);
int64_t function_2ef5b2(void);
int64_t function_2ef616(void);
int64_t function_76c79fe0();
int64_t function_c1e06be();
int64_t function_c4258();
int64_t function_ffffffff89773c2d();
int64_t function_ffffffffa2094bc2();
int64_t function_ffffffffc3e91484();
int64_t unknown_11d1875e();
int64_t unknown_69fd1506();
int64_t unknown_ffffffffb668db86();
int64_t unknown_ffffffffc2357c46();
int64_t unknown_ffffffffca36bb62();
int64_t unknown_ffffffffcf25286e();
int64_t unknown_ffffffffea308015();

// Address range: 0x143513 - 0x143540
int64_t function_143513(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    uint64_t v1 = a4 / 256; // 0x143515
    if ((*(char *)(a3 + 113) & (char)v1) == 0) {
        // 0x14353b
        int64_t v2; // 0x143513
        return (v2 | v1 % 256) + v2 & 0xffffffff;
    }
    uint32_t v3 = (int32_t)a4 & -256 | 11; // 0x14351e
    uint32_t v4 = *(int32_t *)(a1 + 44) + v3; // 0x14351e
    *(char *)a2 = (char)(v4 / 256) + (char)a2 + (char)(v4 < v3);
    return 0x60128319;
}

// Address range: 0x143579 - 0x14357b
int64_t function_143579(void) {
    // 0x143579
    int64_t result; // 0x143579
    return result;
}

// Address range: 0x14359e - 0x1435a2
int64_t function_14359e(void) {
    // 0x14359e
    int64_t result; // 0x14359e
    return result;
}

// Address range: 0x1435bf - 0x1435c0
int64_t function_1435bf(void) {
    // 0x1435bf
    int64_t result; // 0x1435bf
    return result;
}

// Address range: 0x1435c9 - 0x1435e3
int64_t function_1435c9(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1435c9
    int64_t v1; // 0x1435c9
    __asm_outsb((int16_t)a3, (char)v1);
    int64_t result = v1 & 0xffffffff; // 0x1435de
    if ((char)(v1 / 256) >= (char)(v1 / 256)) {
        result = function_1435bf();
    }
    // 0x1435e0
    return result;
}

// Address range: 0x14362f - 0x143632
int64_t function_14362f(int64_t a1) {
    // 0x14362f
    int64_t result; // 0x14362f
    return result;
}

// Address range: 0x143639 - 0x14364b
int64_t function_143639(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint32_t v1 = (int32_t)a4 % 32; // 0x14363b
    int64_t v2; // 0x143639
    if (v1 != 0) {
        uint32_t v3 = (int32_t)v2;
        *(int32_t *)v2 = v3 >> 32 - v1 | v3 << v1;
    }
    return v2 & -256 | (int64_t)*(char *)0x5901013dc5072c01;
}

// Address range: 0x143683 - 0x143684
int64_t function_143683(void) {
    // 0x143683
    int64_t result; // 0x143683
    return result;
}

// Address range: 0x143690 - 0x143697
int64_t function_143690(int64_t a1, int64_t a2) {
    // 0x143690
    int64_t v1; // 0x143690
    *(char *)a2 = 2 * (char)v1;
    return function_ffffffffa2094bc2();
}

// Address range: 0x14369d - 0x14369e
int64_t function_14369d(void) {
    // 0x14369d
    int64_t result; // 0x14369d
    return result;
}

// Address range: 0x1436ae - 0x1436af
int64_t function_1436ae(void) {
    // 0x1436ae
    int64_t result; // 0x1436ae
    return result;
}

// Address range: 0x1436d8 - 0x14376b
int64_t function_1436d8(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a4;
    int64_t v2 = a2;
    int64_t v3; // 0x1436d8
    bool v4; // 0x1436d8
    if (v4) {
        v3 = function_1436ae();
    }
    // 0x1436da
    *(int32_t *)a1 = (int32_t)v3;
    int64_t v5 = v3; // 0x1436dc
    if (true == !v4) {
        v5 = function_143683();
    }
    int64_t v6 = v5;
    *(int32_t *)v1 = *(int32_t *)&v1 ^ -0x71da61c0;
    *(char *)(v1 - 0x620627c2) = (char)(a3 / 256);
    int64_t v7 = unknown_ffffffffc2357c46(); // 0x143740
    unsigned char v8 = (char)v1 % 32; // 0x143745
    if (v8 != 0) {
        char * v9 = (char *)(v2 + 0x3d002a07); // 0x143745
        *v9 = *v9 >> v8;
    }
    uint32_t v10 = (int32_t)((v4 ? 0xfffffffc : 4) + a1); // 0x14374c
    uint32_t v11 = (int32_t)v7 + v10; // 0x14374c
    int64_t v12 = v11; // 0x14374c
    int64_t v13; // 0x1436d8
    int64_t v14 = v13; // 0x14374e
    v13 = v7 & 0xffffffff;
    int32_t * v15 = (int32_t *)(((v6 + 223) % 256 | v6 & 0xffffff00) + 0x66fa4597); // 0x14374f
    *v15 = -1 - *v15;
    *(char *)(v14 & 0xffffffff) = *(char *)&v13 - (v11 < v10 ? 103 : 102);
    *(char *)v12 = *(char *)&v2;
    int64_t v16 = v4 ? -1 : 1; // 0x143758
    int64_t result = unknown_ffffffffca36bb62(v16 + v12, v2 + v16); // 0x143759
    uint32_t v17 = (int32_t)result; // 0x143763
    if (v17 < 0x3af61a01) {
        // 0x14376a
        return result;
    }
    char v18 = *(char *)(result + 84); // 0x14372b
    int32_t v19 = *(int32_t *)(result & -256 | (int64_t)((char)(v17 < 0x3af61a01) + (char)result - v18)); // 0x14372f
    return 61 * v19;
}

// Address range: 0x143770 - 0x14377c
int64_t function_143770(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint32_t v1 = (int32_t)a4 % 32; // 0x143775
    if (v1 != 0) {
        int64_t v2; // 0x143770
        uint32_t v3 = (int32_t)v2;
        *(int32_t *)v2 = v3 >> 32 - v1 | v3 << v1;
    }
    return function_151377e();
}

// Address range: 0x14377c - 0x1437ad
int64_t function_14377c(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x14377c
    int64_t v1; // 0x14377c
    int64_t v2 = v1;
    int64_t v3 = a4;
    int16_t v4 = a3; // 0x14377c
    __asm_out(v4, (int32_t)v1);
    int32_t * v5 = (int32_t *)(v2 + 0x51493218); // 0x14377d
    *v5 = *v5 / 4;
    int32_t * v6 = (int32_t *)(a4 + 22); // 0x143784
    *v6 = *v6 + (int32_t)v1;
    char v7 = v1; // 0x14378a
    __asm_out_133(v4, v7);
    char v8 = *(char *)(v2 + 0x3dc59102); // 0x14378b
    int64_t v9 = v2 & -256 | (int64_t)(v8 | (char)v2); // 0x14378b
    *(int32_t *)a4 = *(int32_t *)&v3 + (int32_t)v9;
    char v10 = *(char *)(v1 + 0x4ae37615 + 4 * v9); // 0x143793
    int32_t * v11 = (int32_t *)(v9 + a1); // 0x14379e
    uint32_t v12 = *v11; // 0x14379e
    uint32_t v13 = v12 + (int32_t)v1; // 0x14379e
    *v11 = v13;
    char v14 = v13 < v12; // 0x1437a1
    unsigned char v15 = v7 - 6 + v14; // 0x1437a1
    int64_t result = v1 & -256 | (int64_t)v15; // 0x1437a1
    int32_t v16 = result; // 0x1437a3
    __asm_out((int16_t)(256 * (int64_t)(v10 & (char)(a3 / 256)) | a3 % 256), v16);
    if ((v15 + v14 & 9 - v7) >= 0) {
        // 0x1437e3
        return result;
    }
    int32_t * v17 = (int32_t *)(v3 - 0x7d95137c); // 0x1437a6
    *v17 = *v17 + v16;
    return result;
}

// Address range: 0x1437ad - 0x1437c8
int64_t function_1437ad(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    unsigned char v1 = (char)a4 % 32; // 0x1437c5
    int64_t result; // 0x1437ad
    if (v1 != 0) {
        unsigned char v2 = (char)result;
        *(char *)result = v2 >> 8 - v1 | v2 << v1;
    }
    return result;
}

// Address range: 0x1437c9 - 0x1437e3
int64_t function_1437c9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1437c9
    int64_t v1; // 0x1437c9
    char * v2 = (char *)(a4 + 61 + 2 * v1); // 0x1437d0
    *v2 = *v2 + (char)(v1 / 256);
    int64_t v3; // 0x1437c9
    uint32_t v4 = *(int32_t *)&v3; // 0x1437d4
    uint32_t v5 = v4 + (int32_t)v1; // 0x1437d4
    *(int32_t *)v3 = v5;
    int64_t v6 = v3;
    return (v6 + 152 + (int64_t)(v5 < v4)) % 256 | v6 & -256;
}

// Address range: 0x143824 - 0x143827
int64_t function_143824(void) {
    // 0x143824
    int64_t result; // 0x143824
    return result;
}

// Address range: 0x143843 - 0x143844
int64_t function_143843(void) {
    // 0x143843
    int64_t result; // 0x143843
    return result;
}

// Address range: 0x143845 - 0x143846
int64_t function_143845(void) {
    // 0x143845
    int64_t result; // 0x143845
    return result;
}

// Address range: 0x14384c - 0x143851
int64_t function_14384c(void) {
    // 0x14384c
    return function_15138b2();
}

// Address range: 0x14387f - 0x143883
int64_t function_14387f(int64_t a1) {
    // 0x14387f
    int64_t v1; // 0x14387f
    int64_t v2 = v1;
    *(int32_t *)v2 = (int32_t)v2 + (int32_t)a1;
    return function_143843();
}

// Address range: 0x1438b1 - 0x1438b2
int64_t function_1438b1(void) {
    // 0x1438b1
    int64_t result; // 0x1438b1
    return result;
}

// Address range: 0x1438c6 - 0x1438c7
int64_t function_1438c6(int64_t a1) {
    // 0x1438c6
    int64_t result; // 0x1438c6
    return result;
}

// Address range: 0x1438ea - 0x1438f2
int64_t function_1438ea(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1438ea
    int64_t result; // 0x1438ea
    bool v1; // 0x1438ea
    if (a4 != 1 == v1) {
        result = function_1438b1();
    }
    // 0x1438ec
    return result;
}

// Address range: 0x143994 - 0x143a84
int64_t function_143994(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5) {
    // 0x143994
    int64_t v1; // 0x143994
    uint64_t v2 = v1;
    int64_t v3 = a4 & -0xff01 | (int64_t)&g6; // 0x14399d
    char v4 = *(char *)(a3 - 42 + v1); // 0x1439a2
    int64_t v5 = 256 * (int64_t)(v4 + (char)(v2 / 256)) | v2 & -0xff01; // 0x1439a2
    int64_t v6 = a3 & -256 | 57; // 0x1439a6
    int16_t v7 = v6; // 0x1439a8
    int32_t v8 = __asm_in(v7); // 0x1439a8
    int32_t * v9 = (int32_t *)(a1 - 12 + 4 * v3); // 0x1439a9
    *v9 = 0x200000 * *v9;
    uint32_t v10 = v8 + 0x670af0; // 0x1439b3
    int64_t v11 = v1 + a1; // 0x1439b9
    int64_t v12 = v11 & 0xffffffff; // 0x1439b9
    uint32_t v13 = (int32_t)v5; // 0x1439bb
    uint64_t v14 = (int64_t)v10 + ((int64_t)&g6 >> 8) + (int64_t)(v13 < (int32_t)v6); // 0x1439bd
    uint32_t v15 = v10 & -256;
    int64_t v16 = v15; // 0x1439bd
    int32_t * v17 = (int32_t *)(v12 + 13); // 0x1439bf
    *v17 = *v17 + v13;
    *(char *)a1 = __asm_insb(v7);
    char * v18 = (char *)v5; // 0x1439c3
    *v18 = *v18 ^ 41;
    char v19 = *(char *)(v14 % 256 | v16); // 0x1439c7
    uint32_t v20 = (int32_t)v3 % 32; // 0x1439d1
    if (v20 != 0) {
        int32_t * v21 = (int32_t *)v12; // 0x1439d1
        *v21 = *v21 << v20;
    }
    bool v22; // 0x143994
    if (v3 == 0) {
        // 0x143a41
        *(int32_t *)-0x48f5c80418fec300 = v15 | (int32_t)(v19 + (char)v14 | 111);
        *(int64_t *)v1 = 0x3a0c8700;
        int32_t v23 = *(int32_t *)__asm_wait(); // 0x143a51
        int64_t v24; // 0x143994
        *(char *)v24 = *(char *)&v24 | (char)v1;
        unknown_11d1875e();
        char v25 = a5 / 256; // 0x143a5d
        __writegsbyte(-0x32c95d9b, __readgsbyte(-0x32c95d9b) + v25);
        *(int64_t *)(v1 - 8) = -0x74d9b00;
        *(int32_t *)51 = *(int32_t *)51 + 0x6c5e3f1;
        *(int64_t *)(v1 - 16) = (int64_t)(7 * v23);
        unsigned char v26 = *(char *)0x5503f67d; // 0x143a76
        unsigned char v27 = v26 + v25; // 0x143a76
        *(char *)0x5503f67d = v27;
        int32_t * v28 = (int32_t *)(a5 + 0x17065800); // 0x143a7c
        uint32_t v29 = *v28; // 0x143a7c
        int32_t v30 = v27 < v26; // 0x143a7c
        uint32_t v31 = v30 + (int32_t)(v11 ^ v1); // 0x143a7c
        int32_t v32 = v29 - v31; // 0x143a7c
        uint32_t v33 = v32 - v30; // 0x143a7c
        bool v34 = v27 < v26 ? v31 != -1 | v29 < v33 : v29 < v31; // 0x143a7c
        unsigned char v35 = llvm_ctpop_i8((char)v32); // 0x143a7c
        *v28 = v32;
        *(int64_t *)(v1 - 24) = 0x4000 * (int64_t)v22 | 1024 * (int64_t)v22 | 512 * (int64_t)v22 | 256 * (int64_t)v22 | 64 * (int64_t)(v32 == 0) | 128 * (int64_t)(v32 < 0) | 16 * (int64_t)(v29 % 16 + v30 - v31 % 16 > 15) | (int64_t)v34 | 4 * (int64_t)(v35 % 2 == 0) | 2048 * (int64_t)(((v33 ^ v29) & (v31 ^ v29)) < 0) | 2;
        return a1 & 0xffffffff;
    }
    // 0x1439d5
    *(int64_t *)v1 = v3;
    int64_t v36 = v12 + a5; // 0x1439d9
    int64_t v37 = v36 & 0xffffffff; // 0x1439d9
    int32_t * v38 = (int32_t *)(v37 - 0x4cc9932c); // 0x1439e4
    *v38 = *v38 + (int32_t)v36;
    char * v39 = (char *)((int64_t)*(char *)0x3d00475affb889b4 | v16); // 0x1439ea
    *v39 = *v39 | (char)(a5 / 256);
    *(int32_t *)a1 = *(int32_t *)v37;
    int64_t v40 = v22 ? -4 : 4; // 0x1439ec
    int64_t v41 = v40 + a1; // 0x1439ec
    int64_t result = v3 & -256 | 19; // 0x1439ed
    *(int64_t *)(v1 - 8) = v6;
    int32_t * v42 = (int32_t *)result; // 0x1439ff
    int32_t v43 = a5; // 0x1439ff
    *v42 = *v42 + v43;
    __asm_sti(v41, v37 + v40);
    int64_t v44 = result + 0xc439de0e; // 0x143a08
    int64_t v45 = v44 & 0xffffff21; // 0x143a08
    *(int32_t *)v41 = (int32_t)unknown_ffffffffea308015();
    int32_t * v46 = (int32_t *)v45; // 0x143a1d
    *v46 = *v46 | (int32_t)v44;
    *(int32_t *)0x227eadcda2bb6002 = (int32_t)result;
    int32_t * v47 = (int32_t *)(a5 + 61); // 0x143a29
    *v47 = *v47 | v43;
    int32_t * v48 = (int32_t *)(v45 + 49); // 0x143a2c
    *v48 = (int32_t)v41 + 4 + *v48;
    char * v49 = (char *)(result + 0x457b3ae7); // 0x143a2f
    *v49 = *v49 + (char)a5;
    return result;
}

// Address range: 0x143a86 - 0x143b12
int64_t function_143a86(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x143a86
    int64_t v1; // 0x143a86
    uint64_t v2 = v1;
    int64_t v3 = 256 * (v2 / 256 + a3 + (int64_t)((char)v1 > (char)(a4 / 256))) & 0xff00 | v2 & -0xff01; // 0x143a88
    char * v4 = (char *)v3; // 0x143a92
    *v4 = *v4 + (char)v2;
    unsigned char v5 = *(char *)0xc1fc39e; // 0x143a97
    unsigned char v6 = v5 + (char)(v1 / 256); // 0x143a97
    *(char *)0xc1fc39e = v6;
    if (a4 != 1 != ((v6 < v5 ? -42 : -43) == (char)v1)) {
        // 0x143aa2
        return (int64_t)(*(int32_t *)(a4 + 0x231f31ce) + ((int32_t)v1 & -256));
    }
    // 0x143adc
    bool v7; // 0x143a86
    int32_t * v8 = (int32_t *)((v7 ? -4 : 4) + a2); // 0x143add
    *v8 = *v8 >> 1;
    int32_t * v9 = (int32_t *)((a3 & 0xffffffff) + 0x4b6a3414); // 0x143afa
    int32_t v10 = *v9; // 0x143afa
    int32_t v11 = a3; // 0x143afa
    int32_t v12 = v10 + v11; // 0x143afa
    *v9 = v12;
    int64_t result = unknown_69fd1506((v3 & -256 | v2 & 65 | 190) + 0xef01e800 & 0xffffffff); // 0x143b00
    if (((v12 ^ v10) & (v12 ^ v11)) >= 0) {
        // 0x143b08
        return result ^ 16;
    }
    // 0x143b0d
    __asm_out_134(-117, (int32_t)result);
    return result;
}

// Address range: 0x143d13 - 0x143d1b
int64_t function_143d13(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a1 + 0x400683c); // 0x143d15
    int64_t result; // 0x143d13
    *v1 = *v1 + (int32_t)(256 * result & 0xff00 | a4);
    return result;
}

// Address range: 0x143d47 - 0x143d4d
int64_t function_143d47(void) {
    // 0x143d47
    int64_t result; // 0x143d47
    return result;
}

// Address range: 0x143d64 - 0x143d65
int64_t function_143d64(void) {
    // 0x143d64
    int64_t result; // 0x143d64
    return result;
}

// Address range: 0x143d81 - 0x143d82
int64_t function_143d81(int64_t a1) {
    // 0x143d81
    int64_t result; // 0x143d81
    return result;
}

// Address range: 0x143dc0 - 0x143dd0
int64_t function_143dc0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    unsigned char v1 = (char)a4 % 32; // 0x143dc0
    if (v1 != 0) {
        int64_t v2; // 0x143dc0
        char * v3 = (char *)(v2 - 0x53d2e5aa); // 0x143dc0
        *v3 = *v3 << v1;
    }
    int64_t result; // 0x143dc0
    if (a4 == 0) {
        result = function_143d64();
    }
    // 0x143dcf
    return result;
}

// Address range: 0x143dd0 - 0x143dd9
int64_t function_143dd0(void) {
    // 0x143dd0
    __asm_hlt();
    bool v1; // 0x143dd0
    while (v1 || v1) {
        // continue -> 0x143dd1
    }
    // 0x143dd3
    int64_t v2; // 0x143dd0
    return __asm_sti(v2, v2);
}

// Address range: 0x143e2d - 0x143e31
int64_t function_143e2d(int64_t a1) {
    // 0x143e2d
    return __asm_iretd(a1);
}

// Address range: 0x143e75 - 0x143e76
int64_t function_143e75(void) {
    // 0x143e75
    int64_t result; // 0x143e75
    return result;
}

// Address range: 0x143f02 - 0x143f09
int64_t function_143f02(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x143f02
    int64_t result; // 0x143f02
    return result;
}

// Address range: 0x219866 - 0x21986d
int64_t function_219866(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x219866
    return unknown_ffffffffcf25286e(a1, a2, a3, a4);
}

// Address range: 0x2198f5 - 0x2198f6
int64_t function_2198f5(void) {
    // 0x2198f5
    int64_t result; // 0x2198f5
    return result;
}

// Address range: 0x219926 - 0x219927
int64_t function_219926(void) {
    // 0x219926
    int64_t result; // 0x219926
    return result;
}

// Address range: 0x21993a - 0x219a35
int64_t function_21993a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x21993a
    int64_t v1; // 0x21993a
    int64_t v2 = v1;
    *(int32_t *)0x223e49 = *(int32_t *)0x223e49 - (int32_t)a1;
    char v3 = a3; // 0x219948
    *(char *)0x7560b060 = *(char *)0x7560b060 + v3;
    *(char *)v2 = 2 * (char)v2;
    int32_t v4 = (int32_t)v2 + 0x34ccddff; // 0x21994d
    if (v4 >= 0) {
        // 0x2199c6
        bool v5; // 0x21993a
        char * v6 = (char *)(a1 - 89 + (v5 ? -1 : 1)); // 0x2199d1
        *v6 = *v6 + (char)(v1 / 256);
        return (v2 + 160) % 256 | v2 & -256;
    }
    unsigned char v7 = llvm_ctpop_i8((char)v4); // 0x21994d
    int64_t result = v2 & -256 | (int64_t)__asm_in_135(-32); // 0x219954
    if (v7 % 2 != 0) {
        // 0x2199c1
        return result;
    }
    char * v8 = (char *)(result + 10); // 0x219959
    *v8 = *v8 + (char)(result / 256);
    int64_t v9 = a4 - 1; // 0x21995d
    int64_t result2 = result; // 0x21995d
    if (v9 != 0 && (result & 0x4000) == 0) {
        result2 = function_2198f5();
    }
    uint32_t v10 = (int32_t)v9 % 32; // 0x21995f
    if (v10 != 0) {
        int32_t * v11 = (int32_t *)(result2 + 8 * v1); // 0x21995f
        uint32_t v12 = *v11; // 0x21995f
        *v11 = v12 << v10 | (int32_t)((result & 256) != 0) << v10 - 1 | (int32_t)((int64_t)v12 >> (int64_t)(33 - v10));
    }
    int32_t * v13 = (int32_t *)(a5 + 0x3da20a2f); // 0x219962
    *v13 = *v13 + (int32_t)v1;
    int32_t * v14 = (int32_t *)result2; // 0x219968
    *v14 = *v14 + (int32_t)result2;
    *(char *)a3 = (char)(v1 / 256);
    char * v15 = (char *)(a3 - 99); // 0x21996f
    *v15 = *v15 + v3;
    return result2;
}

// Address range: 0x219a5a - 0x219a5f
int64_t function_219a5a(void) {
    // 0x219a5a
    return function_ffffffffc3e91484();
}

// Address range: 0x219a63 - 0x219a65
int64_t function_219a63(void) {
    // 0x219a63
    int64_t result; // 0x219a63
    return result;
}

// Address range: 0x219c66 - 0x219d71
int64_t function_219c66(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    char * v1 = (char *)(a2 - 117); // 0x219c6d
    int64_t v2; // 0x219c66
    *v1 = *v1 + (char)(v2 / 256);
    int64_t result2; // 0x219c66
    char v3 = *(char *)&result2; // 0x219c75
    char v4 = a4 / 256; // 0x219c75
    char v5 = v3 + v4; // 0x219c75
    *(char *)result2 = v5;
    int64_t v6; // bp-6928, 0x219c66
    int64_t result = (int64_t)&v6; // 0x219c78
    result2 = result;
    int64_t v7; // 0x219c66
    if (a4 == 0) {
        if (((v5 ^ v3) & (v5 ^ v4)) >= 0) {
            // 0x219cc1
            return result;
        }
        // 0x219ce5
        *(char *)0x862e1f1 = *(char *)0x862e1f1 + (char)(v7 / 256);
        return a2 & 0xffffffff;
    }
    // 0x219c7b
    *(char *)a1 = (char)result;
    if (v5 == 0) {
        function_219c17();
    }
    // 0x219c7e
    result2 = unknown_ffffffffb668db86();
    if (*(int32_t *)&v7 < (int32_t)a4) {
        int32_t * v8 = (int32_t *)(a1 - 5); // 0x219c8d
        *v8 = *v8 + (int32_t)a2;
        int64_t v9 = v7;
        *(int32_t *)v9 = *(int32_t *)&v7 + (int32_t)v9;
        int64_t v10; // bp-8, 0x219c66
        return (int64_t)&v10;
    }
    int32_t * v11 = (int32_t *)(v2 + 0x3d0a8004); // 0x219cca
    *v11 = *v11 + (int32_t)a5;
    int32_t * v12 = (int32_t *)(result2 - 0x7525dcf4); // 0x219cd1
    int32_t v13 = *v12 + (int32_t)result2; // 0x219cd1
    *v12 = v13;
    if (a4 == 1 || v13 == 0) {
        // 0x219cd9
        return result2;
    }
    // 0x219d37
    return a1 + 1 & 0xffffffff;
}

// Address range: 0x219dde - 0x219e46
int64_t function_219dde(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x219dde
    int64_t v1; // 0x219dde
    int64_t v2 = v1;
    int64_t v3 = a2;
    int64_t v4 = (v2 + 195) % 256 | v2 & -256; // 0x219dde
    int32_t * v5 = (int32_t *)v4; // 0x219de0
    uint32_t v6 = *v5; // 0x219de0
    int32_t v7 = v4; // 0x219de0
    uint32_t v8 = v6 + v7; // 0x219de0
    *v5 = v8;
    __asm_out((int16_t)a3, v7);
    if (v8 == 0) {
        int64_t result = a1 & 0xffffffff; // 0x219de3
        int64_t v9; // 0x219dde
        *(int32_t *)result = *(int32_t *)&v9 + (int32_t)v1;
        *(char *)v3 = *(char *)&v3 + (char)(a3 / 256);
        return result;
    }
    int64_t v10 = a1 & 0xffff00ff | (int64_t)&g3; // 0x219e1f
    int32_t * v11 = (int32_t *)v10; // 0x219e26
    *v11 = (int32_t)(v8 < v6) - (int32_t)v10 + *v11;
    char v12 = v1 / 256; // 0x219e28
    *(char *)0x18fcc02f = *(char *)0x18fcc02f + v12;
    char * v13 = (char *)((a3 + 0x1800 & 0xff00 | a3 & -0xff01) + 0x63760560); // 0x219e35
    *v13 = *v13 + (char)a4;
    *(char *)0x6b8ee247 = *(char *)0x6b8ee247 + v12;
    return -0x5234700;
}

// Address range: 0x219e47 - 0x219e4f
int64_t function_219e47(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint32_t v1 = (int32_t)a4 % 32; // 0x219e47
    int64_t v2; // 0x219e47
    if (v1 != 0) {
        uint32_t v3 = (int32_t)v2;
        *(int32_t *)v2 = v3 >> 32 - v1 | v3 << v1;
    }
    return v2 & -0xff01 | (int64_t)&g1;
}

// Address range: 0x219e51 - 0x219e52
int64_t function_219e51(void) {
    // 0x219e51
    int64_t result; // 0x219e51
    return result;
}

// Address range: 0x219e78 - 0x219ea3
int64_t function_219e78(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x219e78
    int64_t v1; // 0x219e78
    int32_t * v2 = (int32_t *)(v1 + 0xe0b7813); // 0x219e78
    uint32_t v3 = *v2; // 0x219e78
    bool v4; // 0x219e78
    *v2 = v3 / 0x2000000 | 256 * v3 | 128 * (int32_t)v4;
    int32_t * v5 = (int32_t *)(v1 + 0x4b5b3daf); // 0x219e7f
    *v5 = *v5 + (int32_t)a3;
    int64_t v6 = v1 + 0xc2ba0954; // 0x219e85
    int32_t * v7 = (int32_t *)(v6 & 0xffffffff); // 0x219e8a
    *v7 = *v7 + (int32_t)v6;
    int64_t v8 = __asm_iretd((int64_t)&g7); // 0x219e8c
    char * v9 = (char *)(v8 + 5); // 0x219e91
    *v9 = *v9 + (char)v8;
    __asm_out((int16_t)a3, (int32_t)v8);
    *(char *)((v8 + 214) % 256 | v8 & -256) = (char)(a3 / 256);
    return function_76c79fe0();
}

// Address range: 0x219ee9 - 0x219eea
int64_t function_219ee9(int64_t a1) {
    // 0x219ee9
    int64_t result; // 0x219ee9
    return result;
}

// Address range: 0x219f8e - 0x219f93
int64_t function_219f8e(void) {
    // 0x219f8e
    return function_c1e06be();
}

// Address range: 0x219fcf - 0x21a047
int64_t function_219fcf(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x219fcf
    int64_t v1; // 0x219fcf
    int64_t v2 = v1;
    int64_t v3 = a3;
    int64_t v4 = a2;
    int64_t v5 = ((v2 + 68) % 256 | v2 & 0xffffff00) + 0x50a176fc; // 0x219fd9
    char * v6 = (char *)(a3 + 0x54b0093a); // 0x219fde
    *v6 = -*v6;
    char v7 = v5; // 0x219fe4
    __asm_out_136(-93, v7);
    *(char *)0x70b9bef0 = *(char *)0x70b9bef0 + (char)(v1 / 256);
    int64_t result = (v5 & 0xffffff00 | (int64_t)(*(char *)(v1 + 121) ^ v7)) ^ 0xcb052900; // 0x219ff6
    unsigned char v8 = (char)(result / 256) + (char)a4; // 0x219ff9
    if (v8 == 0) {
        // 0x219ffd
        return a1 & 0xffffffff;
    }
    // 0x21a02a
    *(char *)v3 = *(char *)&v3 ^ -21;
    char * v9 = (char *)(a1 - 0x6818ffff); // 0x21a02d
    char v10 = *v9 & -20; // 0x21a02d
    *v9 = v10;
    if (v10 == 0) {
        // 0x21a068
        return result;
    }
    int64_t v11 = 0; // 0x219fef
    int32_t v12 = *(int32_t *)&v4; // 0x21a038
    *(int32_t *)v4 = v12 + (int32_t)(a4 & 0xffffff00 | (int64_t)v8);
    int64_t v13 = v3; // 0x21a03a
    v3 = result;
    *(int64_t *)(v11 - 8) = -0x2344bb08;
    *(char *)a1 = (char)v13;
    char v14 = __asm_in_137((int16_t)v3); // 0x21a041
    *(int64_t *)(v11 - 16) = 0x6001e88f;
    return v13 & 0xffffff00 | (int64_t)v14;
}

// Address range: 0x2ef41e - 0x2ef464
int64_t function_2ef41e(int64_t a1, int64_t a2) {
    // 0x2ef41e
    int64_t v1; // 0x2ef41e
    return function_c4258(v1, v1, v1);
}

// Address range: 0x2ef464 - 0x2ef5a0
int64_t function_2ef464(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2ef464
    return function_c4258(a1, a2, a3);
}

// Address range: 0x2ef5a2 - 0x2ef5a8
int64_t function_2ef5a2(int64_t a1) {
    // 0x2ef5a2
    return function_ffffffff89773c2d();
}

// Address range: 0x2ef5b2 - 0x2ef5b5
int64_t function_2ef5b2(void) {
    // 0x2ef5b2
    int64_t result; // 0x2ef5b2
    return result;
}

// Address range: 0x2ef616 - 0x2ef619
int64_t function_2ef616(void) {
    // 0x2ef616
    int64_t result; // 0x2ef616
    return result;
}
