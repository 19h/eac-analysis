/*
 * Targeted RetDec C for native executable gap queue batch 238.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x30f0bb-0x30f2bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x30f2bb-0x30f4bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x30f4bb-0x30f6bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x30f6bb-0x30f8bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x30f8bb-0x30fabb rank=- name=- kind=- bytes=- uncovered=-
 *   0x163eaa-0x1640aa rank=- name=- kind=- bytes=- uncovered=-
 *   0x1640aa-0x1642aa rank=- name=- kind=- bytes=- uncovered=-
 *   0x1642aa-0x1644aa rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_1094f049();
int64_t function_163ea5();
int64_t function_163eaa(void);
int64_t function_163efc(void);
int64_t function_163f07(int64_t a1, int64_t a2, int64_t a3);
int64_t function_16401a(int64_t a1);
int64_t function_164026(void);
int64_t function_16403c(void);
int64_t function_164045(void);
int64_t function_164086(void);
int64_t function_1640b4(int64_t a1);
int64_t function_1640c6(int64_t a1);
int64_t function_164158(void);
int64_t function_164169(void);
int64_t function_164181(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1641e1(void);
int64_t function_1641f6(void);
int64_t function_164205(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_164285(void);
int64_t function_16428d(void);
int64_t function_1642d2(void);
int64_t function_1642d6(int64_t a1);
int64_t function_16432c(void);
int64_t function_164340(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_16434e(void);
int64_t function_164374(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1643a6(void);
int64_t function_1643a7(void);
int64_t function_1643d6(int64_t a1, int64_t a2);
int64_t function_1643f9(void);
int64_t function_16441a(void);
int64_t function_16441f(void);
int64_t function_164453(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_16df378();
int64_t function_16df42b();
int64_t function_219b295();
int64_t function_30f0bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_30f0d4(void);
int64_t function_30f114(int64_t a1);
int64_t function_30f122(void);
int64_t function_30f150(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_30f16c(void);
int64_t function_30f174(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_30f1a5(void);
int64_t function_30f1b5(void);
int64_t function_30f1e1(void);
int64_t function_30f204(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_30f251(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_30f2b8(void);
int64_t function_30f2c1(void);
int64_t function_30f2f9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_30f3fd(void);
int64_t function_30f406(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_30f424(void);
int64_t function_30f46f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_30f4bc(void);
int64_t function_30f4cc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_30f501(int64_t a1, int64_t a2, int64_t a3);
int64_t function_30f577(void);
int64_t function_30f592(int64_t a1, int64_t a2, int64_t a3);
int64_t function_30f5d7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_30f61e(int64_t a1);
int64_t function_30f6de(void);
int64_t function_30f730(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_30f80a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_30f81f(void);
int64_t function_30f831(void);
int64_t function_30f841(int64_t a1);
int64_t function_30f846(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_30f867(void);
int64_t function_30f871(int64_t a1);
int64_t function_30f8ae(int64_t a1);
int64_t function_30f8da(void);
int64_t function_30f90c(int64_t a1);
int64_t function_30f951(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_30f9d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_30f9f1(int64_t a1);
int64_t function_30fa1d(int64_t a1);
int64_t function_30fa2b(int64_t a1, int64_t a2, int64_t a3, int64_t result);
int64_t function_30fa3d(void);
int64_t function_30fa6f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_30fa7f(int64_t a1, int64_t a2);
int64_t function_3cf04330();
int64_t function_4232da1c();
int64_t function_ffffffff96505660();
int64_t function_ffffffffb572f89e();
int64_t function_ffffffffde6b7564();
int64_t function_fffffffff2db448c();
int64_t unknown_1019d217();
int64_t unknown_10e5f902();
int64_t unknown_10e98841();
int64_t unknown_3d3b6ba3();
int64_t unknown_3db35509();
int64_t unknown_481e5238();
int64_t unknown_5632355e();
int64_t unknown_6e3b1d22();
int64_t unknown_c835efd();
int64_t unknown_ffffffff8b178f93();
int64_t unknown_ffffffffa270b17d();
int64_t unknown_ffffffffb3d4eddc();
int64_t unknown_ffffffffbaff2fa8();
int64_t unknown_ffffffffc58c3811();
int64_t unknown_ffffffffe81e522d();
int64_t unknown_fffffffff483c7bb();

// Address range: 0x163eaa - 0x163ead
int64_t function_163eaa(void) {
    // 0x163eaa
    int64_t result; // 0x163eaa
    int32_t * v1 = (int32_t *)(result + 8); // 0x163eaa
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x163efc - 0x163f03
int64_t function_163efc(void) {
    // 0x163efc
    unknown_10e5f902();
    return function_163ea5();
}

// Address range: 0x163f07 - 0x163f19
int64_t function_163f07(int64_t a1, int64_t a2, int64_t a3) {
    // 0x163f07
    int64_t v1; // 0x163f07
    int64_t result = v1;
    *(char *)result = 2 * (char)result;
    return result;
}

// Address range: 0x16401a - 0x164024
int64_t function_16401a(int64_t a1) {
    // 0x16401a
    int64_t result; // 0x16401a
    return result;
}

// Address range: 0x164026 - 0x164027
int64_t function_164026(void) {
    // 0x164026
    int64_t result; // 0x164026
    return result;
}

// Address range: 0x16403c - 0x16403e
int64_t function_16403c(void) {
    // 0x16403c
    return function_164026();
}

// Address range: 0x164045 - 0x164049
int64_t function_164045(void) {
    // 0x164045
    int64_t v1; // 0x164045
    int64_t result = v1;
    *(char *)result = (char)result + 64;
    return result;
}

// Address range: 0x164086 - 0x16408b
int64_t function_164086(void) {
    // 0x164086
    return function_ffffffff96505660();
}

// Address range: 0x1640b4 - 0x1640b5
int64_t function_1640b4(int64_t a1) {
    // 0x1640b4
    int64_t result; // 0x1640b4
    return result;
}

// Address range: 0x1640c6 - 0x1640c9
int64_t function_1640c6(int64_t a1) {
    // 0x1640c6
    int64_t result; // 0x1640c6
    return result;
}

// Address range: 0x164158 - 0x164159
int64_t function_164158(void) {
    // 0x164158
    int64_t result; // 0x164158
    return result;
}

// Address range: 0x164169 - 0x16416a
int64_t function_164169(void) {
    // 0x164169
    int64_t result; // 0x164169
    return result;
}

// Address range: 0x164181 - 0x1641b4
int64_t function_164181(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a3 & 0xffffffff ^ 115; // 0x164194
    __asm_rcl(*(int32_t *)v1);
    char * v2 = (char *)(v1 - 105); // 0x164199
    *v2 = *v2 | (char)a4;
    int64_t v3 = function_164158(); // 0x16419c
    int32_t v4 = *(int32_t *)(a2 + 2); // 0x1641a0
    char v5 = *(char *)0x4a132daa; // 0x1641a3
    int64_t v6; // 0x164181
    *(char *)0x4a132daa = v5 + (char)((uint64_t)v6 / 256);
    unsigned char v7 = *(char *)0x4639001309ac070a; // 0x1641a9
    return (int64_t)((int32_t)v3 - v4 + (int32_t)((v3 & 256) != 0) & -256) | (int64_t)v7;
}

// Address range: 0x1641e1 - 0x1641e2
int64_t function_1641e1(void) {
    // 0x1641e1
    int64_t result; // 0x1641e1
    return result;
}

// Address range: 0x1641f6 - 0x1641fa
int64_t function_1641f6(void) {
    // 0x1641f6
    int64_t v1; // 0x1641f6
    return v1 & 0xffffffff;
}

// Address range: 0x164205 - 0x16426f
int64_t function_164205(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x164205
    int64_t v1; // 0x164205
    int32_t * v2 = (int32_t *)(a1 + 0x24b8f0f + 4 * v1); // 0x164205
    *v2 = *v2 + (int32_t)v1;
    char v3 = (char)a5 & -110; // 0x16420e
    uint64_t v4 = unknown_1019d217(); // 0x164211
    if (v3 >= 0 == (v3 != 0)) {
        char v5 = *(char *)(a3 - 0x54fe1737); // 0x16425b
        int64_t result = 256 * (int64_t)(v5 | (char)(v4 / 256)) | v4 & -0xff01; // 0x16425b
        *(int32_t *)-0x17cb55cdf93f10ac = (int32_t)result;
        *(int32_t *)a1 = __asm_insd((int16_t)a3);
        return result;
    }
    char * v6 = (char *)(3 * a1); // 0x164218
    char v7 = *v6 + 19; // 0x164218
    *v6 = v7;
    unknown_6e3b1d22();
    int64_t v8 = a4 - 1; // 0x164221
    if (v8 != 0 && v7 != 0) {
        function_1641e1();
    }
    int64_t v9 = unknown_ffffffffe81e522d(); // 0x164227
    int16_t v10 = a3; // 0x16422c
    __asm_out(v10, (char)v9);
    __asm_outsd(v10, *(int32_t *)(v9 & 0xffffffff));
    unknown_481e5238();
    __asm_sti(a1);
    int64_t result2 = unknown_10e98841(); // 0x16423b
    char * v11 = (char *)(result2 + 85); // 0x164240
    *v11 = *v11 | (char)v8;
    return result2;
}

// Address range: 0x164285 - 0x164289
int64_t function_164285(void) {
    // 0x164285
    int64_t v1; // 0x164285
    int64_t result = v1;
    *(char *)result = (char)result + 60;
    return result;
}

// Address range: 0x16428d - 0x164297
int64_t function_16428d(void) {
    // 0x16428d
    unknown_ffffffff8b178f93();
    return function_3cf04330();
}

// Address range: 0x1642d2 - 0x1642d3
int64_t function_1642d2(void) {
    // 0x1642d2
    int64_t result; // 0x1642d2
    return result;
}

// Address range: 0x1642d6 - 0x1642d7
int64_t function_1642d6(int64_t a1) {
    // 0x1642d6
    int64_t result; // 0x1642d6
    return result;
}

// Address range: 0x16432c - 0x16432e
int64_t function_16432c(void) {
    // 0x16432c
    return function_1642d2();
}

// Address range: 0x164340 - 0x164349
int64_t function_164340(int64_t a1, int64_t a2, uint64_t a3) {
    char * v1 = (char *)(a2 + 0x5901e8b8); // 0x164340
    *v1 = *v1 + (char)(a3 / 256);
    return function_1643a6();
}

// Address range: 0x16434e - 0x16434f
int64_t function_16434e(void) {
    // 0x16434e
    int64_t result; // 0x16434e
    return result;
}

// Address range: 0x164374 - 0x1643a6
int64_t function_164374(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x164374
    int64_t v1; // 0x164374
    int64_t v2 = v1 & -256 | 224; // 0x164374
    int64_t v3 = (int64_t)(*(int32_t *)v2 + (int32_t)v1); // 0x164378
    if (a4 == 0) {
        v3 = function_16434e();
    }
    int64_t v4 = v3;
    uint32_t v5 = (int32_t)a1 - *(int32_t *)(a2 + 100 + 2 * a1); // 0x16437a
    uint32_t v6 = (int32_t)a4 % 32; // 0x16437e
    int64_t v7 = v6 == 0 ? v4 : (int64_t)((int32_t)v4 >> v6);
    *(int32_t *)-0x17bb7f77 = *(int32_t *)-0x17bb7f77 + v5;
    int32_t * v8 = (int32_t *)(a3 - 42); // 0x164388
    uint32_t v9 = *v8; // 0x164388
    uint32_t v10 = v9 + (int32_t)v2; // 0x164388
    *v8 = v10;
    char * v11 = (char *)((int64_t)v5 - 0x5aff9707); // 0x16438b
    *v11 = *v11 + (char)((v7 + v1) / 256) + (char)(v10 < v9);
    int64_t result = unknown_3d3b6ba3(v5 - 0xa478907); // 0x16439d
    int32_t * v12 = (int32_t *)result; // 0x1643a2
    *v12 = *v12 + (int32_t)result;
    return result;
}

// Address range: 0x1643a6 - 0x1643a7
int64_t function_1643a6(void) {
    // 0x1643a6
    int64_t result; // 0x1643a6
    return result;
}

// Address range: 0x1643a7 - 0x1643aa
int64_t function_1643a7(void) {
    // 0x1643a7
    int64_t result; // 0x1643a7
    return result;
}

// Address range: 0x1643d6 - 0x1643db
int64_t function_1643d6(int64_t a1, int64_t a2) {
    // 0x1643d6
    int64_t v1; // 0x1643d6
    return v1 & 0xffffffff;
}

// Address range: 0x1643f9 - 0x1643fb
int64_t function_1643f9(void) {
    // 0x1643f9
    int64_t v1; // 0x1643f9
    return function_164453(v1, v1, v1, v1);
}

// Address range: 0x16441a - 0x16441d
int64_t function_16441a(void) {
    // 0x16441a
    int64_t result; // 0x16441a
    return result;
}

// Address range: 0x16441f - 0x164424
int64_t function_16441f(void) {
    // 0x16441f
    return function_fffffffff2db448c();
}

// Address range: 0x164453 - 0x164460
int64_t function_164453(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x164453
    int64_t v1; // 0x164453
    unsigned char v2 = (char)v1; // 0x164453
    bool v3; // 0x164453
    unsigned char v4 = v2 + 119 + (char)v3; // 0x164453
    bool v5 = v3 ? v4 <= v2 : v2 > 136; // 0x164453
    int32_t * v6 = (int32_t *)(a4 - 0x6697c54a); // 0x16445a
    *v6 = *v6 + 1;
    return (v1 & 0xffffff00 | (int64_t)v4) + 0xe5509bb3 + (int64_t)v5 & 0xffffffff;
}

// Address range: 0x30f0bb - 0x30f0d3
int64_t function_30f0bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint32_t v1 = (int32_t)a4;
    uint32_t v2 = v1 % 32; // 0x30f0c1
    if (v2 != 0) {
        *(int32_t *)a4 = v1 << 32 - v2 | v1 >> v2;
    }
    int64_t result; // 0x30f0bb
    return result;
}

// Address range: 0x30f0d4 - 0x30f0d9
int64_t function_30f0d4(void) {
    // 0x30f0d4
    return function_ffffffffde6b7564();
}

// Address range: 0x30f114 - 0x30f11a
int64_t function_30f114(int64_t a1) {
    // 0x30f114
    int64_t result; // 0x30f114
    return result;
}

// Address range: 0x30f122 - 0x30f123
int64_t function_30f122(void) {
    // 0x30f122
    int64_t result; // 0x30f122
    return result;
}

// Address range: 0x30f150 - 0x30f157
int64_t function_30f150(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x30f150
    bool v1; // 0x30f150
    if (a4 != 1 && !v1) {
        function_30f122();
    }
    // 0x30f152
    return function_1094f049();
}

// Address range: 0x30f16c - 0x30f16d
int64_t function_30f16c(void) {
    // 0x30f16c
    int64_t result; // 0x30f16c
    return result;
}

// Address range: 0x30f174 - 0x30f17c
int64_t function_30f174(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x30f174
    int64_t result; // 0x30f174
    bool v1; // 0x30f174
    if (a4 != 1 == v1) {
        result = function_30f16c();
    }
    // 0x30f176
    return result;
}

// Address range: 0x30f1a5 - 0x30f1ac
int64_t function_30f1a5(void) {
    // 0x30f1a5
    __asm_in(-88);
    return function_4232da1c();
}

// Address range: 0x30f1b5 - 0x30f1b8
int64_t function_30f1b5(void) {
    // 0x30f1b5
    int64_t result; // 0x30f1b5
    return result;
}

// Address range: 0x30f1e1 - 0x30f1e2
int64_t function_30f1e1(void) {
    // 0x30f1e1
    int64_t result; // 0x30f1e1
    return result;
}

// Address range: 0x30f204 - 0x30f218
int64_t function_30f204(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3;
    int64_t v2 = a2;
    bool v3; // 0x30f204
    if (v3) {
        function_30f1e1();
    }
    int32_t result = __asm_in_133(6); // 0x30f206
    __asm_out((int16_t)a3, (char)result);
    int64_t v4; // 0x30f204
    *(int32_t *)a3 = (int32_t)(v4 | a3);
    *(char *)v1 = *(char *)&v1 + (char)a4;
    *(int16_t *)-0x71c00dea = (int16_t)v4;
    *(int32_t *)a1 = *(int32_t *)&v2;
    return result;
}

// Address range: 0x30f251 - 0x30f27a
int64_t function_30f251(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x30f251
    __asm_int(2);
    *(int32_t *)a1 = __asm_insd((int16_t)a3 % 256);
    int64_t v1; // 0x30f251
    *(char *)a2 = *(char *)&v1 - (char)a4;
    int64_t v2; // 0x30f251
    int32_t * v3 = (int32_t *)((v2 & 0xffffffff) + 0x3d006acc); // 0x30f26d
    *v3 = *v3 & (int32_t)v2;
    uint16_t v4 = (int16_t)v2; // 0x30f275
    int64_t v5; // 0x30f251
    uint16_t v6 = (int16_t)*(char *)&v5; // 0x30f275
    return v2 & 0xffff0000 | (int64_t)(v4 / v6 % 256) | (int64_t)(256 * (v4 % v6));
}

// Address range: 0x30f2b8 - 0x30f2bd
int64_t function_30f2b8(void) {
    // 0x30f2b8
    return function_16df378();
}

// Address range: 0x30f2c1 - 0x30f2c5
int64_t function_30f2c1(void) {
    // 0x30f2c1
    int64_t result; // 0x30f2c1
    int64_t v1 = result;
    *(char *)v1 = (char)v1 - 108;
    return result;
}

// Address range: 0x30f2f9 - 0x30f36f
int64_t function_30f2f9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a4;
    int64_t v2; // 0x30f2f9
    int32_t * v3 = (int32_t *)(v2 - 120); // 0x30f2f9
    uint32_t v4 = (int32_t)a3; // 0x30f2f9
    *v3 = *v3 + v4;
    uint32_t v5 = __asm_in_133(-101); // 0x30f301
    unsigned char v6 = *(char *)-0x707323f6; // 0x30f303
    char v7 = v6 + (char)(v2 / 256); // 0x30f303
    *(char *)-0x707323f6 = v7;
    if (v7 < 1) {
        int32_t v8 = v4 + 0x483403ff; // 0x30f363
        return a3 & 0xffff00ff | 256 * (64 * (int64_t)(v8 == 0) | (int64_t)(v4 < 0xb7cbfc01) | 128 * (int64_t)(v8 < 0) | 16 * (int64_t)(v4 % 16 > 16) | 4 * (int64_t)(llvm_ctpop_i8((char)v8) % 2 == 0)) | 512;
    }
    int32_t * v9 = (int32_t *)((a3 & 0xffffffff) - 10); // 0x30f30d
    *v9 = (int32_t)(v7 < v6) + (int32_t)v2 + *v9;
    int64_t result = a3 & 0xffffffa0; // 0x30f313
    char * v10 = (char *)(int64_t)v5; // 0x30f315
    char v11 = result; // 0x30f315
    *v10 = *v10 + v11;
    *(char *)v1 = *(char *)&v1 - v11;
    return result;
}

// Address range: 0x30f3fd - 0x30f402
int64_t function_30f3fd(void) {
    // 0x30f3fd
    return function_16df42b();
}

// Address range: 0x30f406 - 0x30f411
int64_t function_30f406(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result = unknown_ffffffffc58c3811(a1, a2, a3, a4, a5); // 0x30f408
    uint32_t v1 = (int32_t)a4 % 32; // 0x30f40d
    if (v1 != 0) {
        int32_t * v2 = (int32_t *)result; // 0x30f40d
        uint32_t v3 = *v2; // 0x30f40d
        *v2 = v3 >> 32 - v1 | v3 << v1;
    }
    return result;
}

// Address range: 0x30f424 - 0x30f429
int64_t function_30f424(void) {
    // 0x30f424
    return function_219b295();
}

// Address range: 0x30f46f - 0x30f47d
int64_t function_30f46f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint32_t v1 = (int32_t)a4;
    uint32_t v2 = v1 % 32; // 0x30f46f
    if (v2 != 0) {
        *(int32_t *)a4 = v1 << v2;
    }
    int64_t v3; // 0x30f46f
    return v3 & 0xffffffff;
}

// Address range: 0x30f4bc - 0x30f4bd
int64_t function_30f4bc(void) {
    // 0x30f4bc
    int64_t result; // 0x30f4bc
    return result;
}

// Address range: 0x30f4cc - 0x30f500
int64_t function_30f4cc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x30f4cc
    int64_t v1; // 0x30f4cc
    int32_t * v2 = (int32_t *)(v1 - 0x54f801f1); // 0x30f4cc
    *v2 = *v2 & (int32_t)v1;
    int64_t v3; // 0x30f4cc
    int32_t v4 = *(int32_t *)&v3; // 0x30f4d2
    int64_t v5 = __asm_wait(); // 0x30f4d4
    v3 = v5;
    char v6 = *(char *)(a3 - 104 + 8 * v1); // 0x30f4dc
    int32_t * v7 = (int32_t *)(v1 - 16); // 0x30f4e5
    int32_t v8 = *v7; // 0x30f4e5
    int32_t v9 = v4 + (int32_t)a4 + v8 + (int32_t)(((int32_t)(v5 & 0xffffff00 | (int64_t)(v6 + (char)v5 + (char)((int32_t)v5 < 0xff2f7901))) ^ -2) < 0x1d5e50a2); // 0x30f4e5
    unsigned char v10 = llvm_ctpop_i8((char)v9); // 0x30f4e5
    *v7 = v9;
    if (v10 % 2 != 0) {
        function_30f4bc();
    }
    uint32_t v11 = *(int32_t *)-0x5d586448fec2cdc3; // 0x30f4eb
    v3 = v11;
    *(int32_t *)a1 = v11;
    bool v12; // 0x30f4cc
    int64_t v13 = (v12 ? -4 : 4) + a1; // 0x30f4f8
    char * v14 = (char *)(2 * v3 + v1); // 0x30f4fa
    unsigned char v15 = *v14; // 0x30f4fa
    *v14 = v15 / 128 | 2 * v15;
    int64_t result = __asm_sti(v13); // 0x30f4fd
    *(char *)v13 = (char)result;
    return result;
}

// Address range: 0x30f501 - 0x30f512
int64_t function_30f501(int64_t a1, int64_t a2, int64_t a3) {
    int64_t result = unknown_3db35509(); // 0x30f503
    int32_t * v1 = (int32_t *)result; // 0x30f508
    *v1 = *v1 + (int32_t)result;
    int64_t v2; // 0x30f501
    *(int32_t *)a1 = *(int32_t *)&v2;
    return result;
}

// Address range: 0x30f577 - 0x30f579
int64_t function_30f577(void) {
    // 0x30f577
    int64_t v1; // 0x30f577
    return function_30f5d7(v1, v1, v1, v1);
}

// Address range: 0x30f592 - 0x30f5ab
int64_t function_30f592(int64_t a1, int64_t a2, int64_t a3) {
    // 0x30f592
    __asm_wait();
    unsigned char v1 = *(char *)-0x29c69e64; // 0x30f594
    unsigned char v2 = v1 + (char)a1; // 0x30f594
    *(char *)-0x29c69e64 = v2;
    char * v3 = (char *)(a3 + 99 + unknown_ffffffffbaff2fa8()); // 0x30f5a1
    *v3 = (char)(v2 < v1) - (char)a3 + *v3;
    return __asm_in_134((int16_t)a3);
}

// Address range: 0x30f5d7 - 0x30f5e8
int64_t function_30f5d7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x30f5d7
    int64_t v1; // 0x30f5d7
    *(int32_t *)a1 = (int32_t)v1;
    char * v2 = (char *)(a4 + 76); // 0x30f5dc
    *v2 = *v2 / 2;
    *(char *)-0x559f3a19 = *(char *)-0x559f3a19 + (char)(v1 / 256);
    return v1 & -16;
}

// Address range: 0x30f61e - 0x30f61f
int64_t function_30f61e(int64_t a1) {
    // 0x30f61e
    int64_t result; // 0x30f61e
    return result;
}

// Address range: 0x30f6de - 0x30f6df
int64_t function_30f6de(void) {
    // 0x30f6de
    int64_t result; // 0x30f6de
    return result;
}

// Address range: 0x30f730 - 0x30f7bf
int64_t function_30f730(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = a3;
    char v2 = a3; // 0x30f735
    int64_t v3; // 0x30f730
    *(char *)v3 = v2;
    *(int32_t *)a2 = (int32_t)v3;
    char * v4 = (char *)(2 * a1 + 61 + a4); // 0x30f739
    *v4 = *v4 + v2;
    int32_t * v5 = (int32_t *)(a4 + 93); // 0x30f73d
    uint32_t v6 = *v5; // 0x30f73d
    int32_t v7 = v6 + (int32_t)a2; // 0x30f73d
    *v5 = v7;
    uint32_t v8 = (int32_t)v3;
    unsigned char v9 = llvm_ctpop_i8((char)(v8 - 0x3eba0801));
    bool v10 = v7 < v6;
    int64_t result; // 0x30f730
    while (!v10 && v7 != 0) {
        if (v9 % 2 != 0) {
            // 0x30f7be
            return (int64_t)(0x10000 * v8 / 0x10000);
        }
        // 0x30f7a6
        if (v8 >= 0x3eba0801) {
            // 0x30f75a
            return result;
        }
        v10 = v8 < 0x3eba0801;
    }
    if (!v10 || v7 < 0) {
        // 0x30f75a
        return result;
    }
    // 0x30f747
    int3_t v11; // 0x30f730
    *(int32_t *)(v1 - 0x7cf527d8) = (int32_t)__frontend_reg_load_fpr(v11);
    if (v7 != 0) {
        function_30f6de();
    }
    uint32_t v12 = -70 * *(int32_t *)&v1; // 0x30f74f
    int64_t result2 = v12; // 0x30f74f
    char v13 = v12;
    if (llvm_ctpop_i8(v13 - 1) % 2 != 0) {
        // 0x30f75a
        return result2;
    }
    int3_t v14 = v11 + 1; // 0x30f747
    *(char *)0x2334a68e = *(char *)0x2334a68e + (char)(a4 / 256);
    __frontend_reg_load_fpr(v14);
    __frontend_reg_load_fpr(v14);
    return result2 & 0xffffff00 | (int64_t)((*(char *)(v1 - 115) | v13) & -29);
}

// Address range: 0x30f80a - 0x30f80f
int64_t function_30f80a(int64_t a1, int64_t a2, int64_t a3) {
    // 0x30f80a
    int64_t result; // 0x30f80a
    return result;
}

// Address range: 0x30f81f - 0x30f820
int64_t function_30f81f(void) {
    // 0x30f81f
    int64_t result; // 0x30f81f
    return result;
}

// Address range: 0x30f831 - 0x30f836
int64_t function_30f831(void) {
    // 0x30f831
    return function_ffffffffb572f89e();
}

// Address range: 0x30f841 - 0x30f844
int64_t function_30f841(int64_t a1) {
    // 0x30f841
    int64_t result; // 0x30f841
    return result;
}

// Address range: 0x30f846 - 0x30f862
int64_t function_30f846(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x30f846
    return unknown_5632355e();
}

// Address range: 0x30f867 - 0x30f868
int64_t function_30f867(void) {
    // 0x30f867
    int64_t result; // 0x30f867
    return result;
}

// Address range: 0x30f871 - 0x30f874
int64_t function_30f871(int64_t a1) {
    // 0x30f871
    int64_t result; // 0x30f871
    return result;
}

// Address range: 0x30f8ae - 0x30f8b2
int64_t function_30f8ae(int64_t a1) {
    // 0x30f8ae
    int64_t result; // 0x30f8ae
    *(int32_t *)a1 = (int32_t)result;
    return result;
}

// Address range: 0x30f8da - 0x30f8de
int64_t function_30f8da(void) {
    // 0x30f8da
    int64_t result; // 0x30f8da
    return result;
}

// Address range: 0x30f90c - 0x30f911
int64_t function_30f90c(int64_t a1) {
    // 0x30f90c
    int64_t result; // 0x30f90c
    return result;
}

// Address range: 0x30f951 - 0x30f9d0
int64_t function_30f951(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int16_t v1 = a3; // 0x30f9a8
    bool v2; // 0x30f951
    __asm_outsb(v1, *(char *)((v2 ? -4 : 4) + a2));
    int32_t v3 = 2 * (int32_t)a2;
    int32_t v4 = v3 | (int32_t)v2; // 0x30f9ae
    int64_t v5 = v3 & -256; // 0x30f9b0
    if (v4 != 0) {
        int64_t result = (int64_t)*(char *)-0x56d6abfec2fe176b | v5; // 0x30f962
        int32_t * v6 = (int32_t *)(a3 + 0x1c0039a8); // 0x30f972
        *v6 = *v6 + (int32_t)a1;
        __asm_out_135(v1, (int32_t)result);
        return result;
    }
    // 0x30f9b3
    if (llvm_ctpop_i8((char)v4) % 2 != 0) {
        // 0x30f9b5
        return unknown_fffffffff483c7bb();
    }
    int64_t v7 = v2 ? 0x4d4801e7 : 0x4d4801e9; // 0x30f9b0
    int64_t v8; // 0x30f951
    int32_t * v9 = (int32_t *)(8 * a4 - 0x3652bafc + v8); // 0x30f9bf
    *v9 = *v9 + (int32_t)v7;
    int32_t * v10 = (int32_t *)(v7 + 0x1601e8bb); // 0x30f9c6
    *v10 = *v10 ^ -47;
    return (int64_t)*(char *)0x4d4801e8 | v5;
}

// Address range: 0x30f9d0 - 0x30f9f1
int64_t function_30f9d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x30f9d0
    *(int32_t *)(a4 + 0x518f6cdd) = (int32_t)a1;
    int64_t v1 = unknown_ffffffffb3d4eddc(); // 0x30f9d6
    unsigned char v2 = *(char *)-0x178a5179; // 0x30f9dc
    *(char *)-0x178a5179 = v2 / 128 | 2 * v2;
    int64_t result = v1 | 126; // 0x30f9e7
    int32_t * v3 = (int32_t *)(result + 21); // 0x30f9eb
    int64_t v4; // 0x30f9d0
    *v3 = *v3 + (int32_t)v4;
    return result;
}

// Address range: 0x30f9f1 - 0x30fa00
int64_t function_30f9f1(int64_t a1) {
    // 0x30f9f1
    __asm_in_133(49);
    unknown_c835efd();
    int64_t v1; // 0x30f9f1
    return function_30fa2b(v1, v1, a1, (int64_t)&g1);
}

// Address range: 0x30fa1d - 0x30fa1e
int64_t function_30fa1d(int64_t a1) {
    // 0x30fa1d
    int64_t result; // 0x30fa1d
    return result;
}

// Address range: 0x30fa2b - 0x30fa38
int64_t function_30fa2b(int64_t a1, int64_t a2, int64_t a3, int64_t result) {
    // 0x30fa2b
    int64_t v1; // 0x30fa2b
    *(int32_t *)a3 = (int32_t)v1 + (int32_t)a1;
    return result;
}

// Address range: 0x30fa3d - 0x30fa3e
int64_t function_30fa3d(void) {
    // 0x30fa3d
    int64_t result; // 0x30fa3d
    return result;
}

// Address range: 0x30fa6f - 0x30fa7f
int64_t function_30fa6f(int64_t a1, int64_t a2, int64_t a3) {
    // 0x30fa6f
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int64_t result = unknown_ffffffffa270b17d(); // 0x30fa7c
    bool v1; // 0x30fa6f
    if (v1) {
        result = function_30fa3d();
    }
    // 0x30fa7e
    return result;
}

// Address range: 0x30fa7f - 0x30fa83
int64_t function_30fa7f(int64_t a1, int64_t a2) {
    // 0x30fa7f
    int64_t v1; // 0x30fa7f
    uint64_t result = v1;
    char * v2 = (char *)(a1 - 61); // 0x30fa7f
    *v2 = *v2 + (char)(result / 256);
    return result;
}
