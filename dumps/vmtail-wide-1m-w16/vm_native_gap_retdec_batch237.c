/*
 * Targeted RetDec C for native executable gap queue batch 237.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x2eea1e-0x2eec1e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2eec1e-0x2eee1e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2eee1e-0x2ef01e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2ef01e-0x2ef21e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2ef21e-0x2ef41e rank=- name=- kind=- bytes=- uncovered=-
 *   0x219066-0x219266 rank=- name=- kind=- bytes=- uncovered=-
 *   0x219266-0x219466 rank=- name=- kind=- bytes=- uncovered=-
 *   0x219666-0x219866 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g2;
extern int g4;
extern int g5;
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

int64_t function_219066(void);
int64_t function_219067(int64_t a1);
int64_t function_219089(void);
int64_t function_2190ae(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_2190f4(int64_t a1);
int64_t function_219125(void);
int64_t function_219136(void);
int64_t function_219180(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2191de(void);
int64_t function_2191e0(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_219274(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5);
int64_t function_219366(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_219432(int64_t a1, int64_t a2, int64_t a3);
int64_t function_219666(void);
int64_t function_21966a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2196b3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2196b5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_219783(void);
int64_t function_21978e(int64_t a1, int64_t a2);
int64_t function_2197c8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_21985b(int64_t a1);
int64_t function_219862(int64_t a1);
int64_t function_2229bf();
int64_t function_2eea1e(int64_t a1);
int64_t function_2eea32(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2eea96(void);
int64_t function_2eea98(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2eebe6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2eed20(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2eee7d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_2ef009(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2ef152(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2ef2f5(void);
int64_t function_2ef346(void);
int64_t function_2ef384(void);
int64_t function_2ef3d1(void);
int64_t function_2ef3d5(void);
int64_t function_c4258();
int64_t function_c57b8();
int64_t unknown_2221fdf5();
int64_t unknown_38ef1662();
int64_t unknown_3a4096df();
int64_t unknown_4c723c8e();
int64_t unknown_5376046f();
int64_t unknown_6e449f66();
int64_t unknown_79eb9a2();
int64_t unknown_8d978a2();
int64_t unknown_e49c318();
int64_t unknown_ffffffff90bfe5b1();
int64_t unknown_ffffffffafcc2485();
int64_t unknown_ffffffffb7c71e23();
int64_t unknown_ffffffffbc277e93();
int64_t unknown_ffffffffbf192064();
int64_t unknown_ffffffffcaf306fa();
int64_t unknown_ffffffffd50bafba();
int64_t unknown_ffffffffdd05cb8c();
int64_t unknown_ffffffffe822cf9b();
int64_t unknown_ffffffffe822d44a();
int64_t unknown_ffffffffe8cb4d3f();
int64_t unknown_fffffffffd19b838();

// Address range: 0x219066 - 0x219067
int64_t function_219066(void) {
    // 0x219066
    int64_t result; // 0x219066
    return result;
}

// Address range: 0x219067 - 0x219089
int64_t function_219067(int64_t a1) {
    // 0x219067
    return function_c57b8();
}

// Address range: 0x219089 - 0x21908e
int64_t function_219089(void) {
    // 0x219089
    return function_2229bf();
}

// Address range: 0x2190ae - 0x2190c3
int64_t function_2190ae(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x2190ae
    int64_t v1; // 0x2190ae
    *(char *)a3 = (char)(v1 ^ (uint64_t)v1 / 256);
    int64_t v2 = unknown_ffffffffd50bafba(); // 0x2190b4
    int32_t v3 = *(int32_t *)a7; // 0x2190bf
    __asm_outsd((int16_t)a3 % 256 | (int16_t)&g1, v3);
    return v2 ^ 28;
}

// Address range: 0x2190f4 - 0x2190f5
int64_t function_2190f4(int64_t a1) {
    // 0x2190f4
    int64_t result; // 0x2190f4
    return result;
}

// Address range: 0x219125 - 0x219128
int64_t function_219125(void) {
    // 0x219125
    int64_t result; // 0x219125
    return result;
}

// Address range: 0x219136 - 0x219137
int64_t function_219136(void) {
    // 0x219136
    int64_t result; // 0x219136
    return result;
}

// Address range: 0x219180 - 0x2191a3
int64_t function_219180(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 - 65); // 0x219180
    *v1 = *v1 | (int32_t)a3;
    int64_t v2; // 0x219180
    uint64_t v3 = v2 + a4; // 0x219185
    __asm_sti();
    int32_t * v4 = (int32_t *)((v3 & 0xffffffff) - 11); // 0x21918f
    uint32_t v5 = *v4; // 0x21918f
    uint32_t v6 = v5 + (int32_t)v2; // 0x21918f
    *v4 = v6;
    char * v7 = (char *)(3 * a1); // 0x219192
    *v7 = *v7 + (char)(v3 / 256) + (char)(v6 < v5);
    return unknown_8d978a2();
}

// Address range: 0x2191de - 0x2191df
int64_t function_2191de(void) {
    // 0x2191de
    int64_t result; // 0x2191de
    return result;
}

// Address range: 0x2191e0 - 0x219271
int64_t function_2191e0(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    int64_t v1 = __asm_int3(a1); // 0x219225
    int64_t v2; // 0x2191e0
    if ((char)v1 - (char)a1 < 0) {
        // 0x219208
        bool v3; // 0x2191e0
        int32_t * v4 = (int32_t *)(a3 - 11 + 4 * ((v3 ? 0x3fffffffffffffff : 1) + a1)); // 0x219208
        uint32_t v5 = *v4; // 0x219208
        int32_t v6 = v2; // 0x219208
        uint32_t v7 = v5 + v6; // 0x219208
        *v4 = v7;
        int64_t v8 = v1; // 0x21920c
        if (v7 < v5) {
            v8 = function_2191de();
        }
        int64_t v9 = v8;
        int64_t result = (v9 + 1) % 256 | v9 & -256; // 0x21920f
        int32_t * v10 = (int32_t *)(result - 107); // 0x219211
        *v10 = *v10 + v6 + (int32_t)((v9 & 256) != 0);
        return result;
    }
    unsigned char v11 = (char)a3;
    unsigned char v12 = *(char *)0x67a7923a; // 0x219233
    char v13 = (int32_t)v1 > 0xa153d2c5; // 0x219239
    unsigned char v14 = v13 + (char)(a3 / 256); // 0x219239
    char v15 = v11 - v14; // 0x219239
    bool v16 = (int32_t)v1 > 0xa153d2c5 ? v14 != -1 | v15 - v13 > v11 : v14 > v11; // 0x219239
    *(char *)a3 = v15;
    uint32_t v17 = *(int32_t *)((256 * (int64_t)v12 | v2 & -0xff01) + 2 * v2); // 0x21923c
    uint64_t v18 = v1 + 0x5eac2d3a & 0xffffffff | 0x100000000 * a3; // 0x21923c
    uint64_t v19 = (int64_t)v17; // 0x21923c
    char * v20 = (char *)(v18 / v19 & 0xffffffff); // 0x21923f
    unsigned char v21 = *v20; // 0x21923f
    unsigned char v22 = v21 + (char)v2; // 0x21923f
    unsigned char v23 = v22 + (char)v16; // 0x21923f
    unsigned char v24 = llvm_ctpop_i8(v23); // 0x21923f
    *v20 = v23;
    uint32_t result2 = *(int32_t *)0x97ac23a2504620; // 0x219241
    if (v24 % 2 == 0) {
        // 0x21924d
        return result2;
    }
    uint64_t v25 = v18 % v19; // 0x21923c
    int64_t v26; // 0x2191e0
    uint32_t v27 = result2 + (int32_t)(v16 ? v23 <= v21 : v22 < v21) + *(int32_t *)&v26; // 0x21926b
    unsigned char v28 = *(char *)v25; // 0x21926d
    int32_t v29 = *(int32_t *)(int64_t)v27; // 0x21926f
    return v29 + v27 + (int32_t)(v28 < (char)v25);
}

// Address range: 0x219274 - 0x219319
int64_t function_219274(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t v2 = __asm_iretd(); // 0x219277
    bool v3; // 0x219274
    *(int32_t *)v2 = (int32_t)v3;
    int64_t v4; // 0x219274
    unsigned char v5 = *(char *)(v4 - 123 + 8 * v4); // 0x219280
    int64_t v6 = unknown_ffffffffdd05cb8c(); // 0x219286
    if ((v5 > (char)(a3 / 256) ? 11 : 10) > (char)v2) {
        char * v7 = (char *)(2 * v1 + (v6 & -0xff01 | (int64_t)&g5)); // 0x21928f
        *v7 = *v7 - (char)(a4 / 256);
        return unknown_ffffffffe822cf9b();
    }
    char * v8 = (char *)v6; // 0x219301
    unsigned char v9 = *v8; // 0x219301
    *v8 = v9 / 2 | 128 * v9;
    *(int32_t *)v1 = (int32_t)v6 - 0x17300dfe + *(int32_t *)&v1;
    unknown_e49c318();
    return __asm_in(-56);
}

// Address range: 0x219366 - 0x2193eb
int64_t function_219366(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int32_t v1 = *(int32_t *)-0x37d869c5 ^ 0x56001e8; // 0x219366
    *(int32_t *)-0x37d869c5 = v1;
    int64_t result; // 0x219366
    if (v1 < 0) {
        int32_t * v2 = (int32_t *)(result + 0x47743c0a); // 0x2193e5
        *v2 = *v2 + (int32_t)result;
        return result;
    }
    unsigned char v3 = (char)result;
    unsigned char v4 = 2 * v3; // 0x219375
    *(char *)result = v4;
    int64_t v5 = __asm_int3(a1); // 0x219377
    char * v6 = (char *)(result + 0x401e89f); // 0x219378
    unsigned char v7 = *v6; // 0x219378
    unsigned char v8 = v7 + (char)a4; // 0x219378
    unsigned char v9 = v8 + (char)(v4 < v3); // 0x219378
    *v6 = v9;
    int64_t v10 = v4 < v3 ? v9 <= v7 : v8 < v7 ? 0x15700029 : 0x15700028; // 0x21937e
    int64_t v11 = (int64_t)*(int32_t *)(result + 31); // 0x219387
    char * v12 = (char *)(a3 & -256 | 233); // 0x219390
    char v13 = *v12; // 0x219390
    *v12 = v13 - (char)(a3 / 256) + (char)(-0x4c4fe18 * v11 != -0x4c4fe1800000000 * v11 >> 32);
    return v5 - v10 & 0xffff00ff | 0xe500;
}

// Address range: 0x219432 - 0x21943b
int64_t function_219432(int64_t a1, int64_t a2, int64_t a3) {
    // 0x219432
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t result; // 0x219432
    return result;
}

// Address range: 0x219666 - 0x219669
int64_t function_219666(void) {
    // 0x219666
    int64_t result; // 0x219666
    int64_t v1 = result;
    *(char *)v1 = (char)v1 & -2;
    return result;
}

// Address range: 0x21966a - 0x2196b3
int64_t function_21966a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x21966a
    int64_t v1; // 0x21966a
    uint64_t v2 = v1;
    char v3 = *(char *)(v2 - 0x5dd8fe18); // 0x21966c
    int32_t * v4 = (int32_t *)((256 * (int64_t)(v3 + (char)(v2 / 256)) | v2 & -0xff01) + unknown_38ef1662()); // 0x21967f
    *v4 = *v4 + (int32_t)v1;
    uint32_t v5 = (int32_t)a4 % 32; // 0x219684
    if (v5 != 0) {
        *(int32_t *)0xe8ce163a = *(int32_t *)0xe8ce163a << v5;
    }
    unknown_ffffffffbc277e93(0xe8ce163a);
    unknown_79eb9a2();
    __asm_int(-94);
    int64_t v6 = (a5 & (int64_t)&g2) == 0 ? 1 : -1; // 0x2196a9
    __asm_wait(v6 + 0xe8ce163a, v6 + a2);
    return unknown_ffffffff90bfe5b1();
}

// Address range: 0x2196b3 - 0x2196b5
int64_t function_2196b3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2196b3
    int64_t result; // 0x2196b3
    __asm_outsd((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x2196b5 - 0x219776
int64_t function_2196b5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2196b5
    int64_t v1; // 0x2196b5
    uint64_t v2 = v1;
    *(char *)a3 = (char)v1 + (char)a3;
    int32_t v3 = (int32_t)v2 + (int32_t)a1; // 0x2196bb
    if (v3 >= 1) {
        // 0x2196c0
        return a3 & 0xffffffff;
    }
    int64_t v4 = v3; // 0x2196bb
    unknown_ffffffffe8cb4d3f(v3);
    char * v5 = (char *)(v4 + 0x5900e960); // 0x21973e
    *v5 = *v5 - (char)(v2 / 256);
    int64_t v6 = unknown_ffffffffe822d44a(); // 0x219744
    int32_t * v7 = (int32_t *)v4; // 0x219749
    uint32_t v8 = *v7; // 0x219749
    uint32_t v9 = (int32_t)a2; // 0x219749
    uint32_t v10 = v8 + v9; // 0x219749
    unsigned char v11 = llvm_ctpop_i8((char)v10); // 0x219749
    *v7 = v10;
    char * v12 = (char *)(v6 & -0xff01 | 256 * (64 * (int64_t)(v10 == 0) | (int64_t)(v10 < v8) | 128 * (int64_t)(v10 < 0) | 16 * (int64_t)(v8 % 16 + v9 % 16 > 15) | 4 * (int64_t)(v11 % 2 == 0)) | 512); // 0x21974c
    *v12 = *v12 + (char)v1 + (char)(v10 < v8);
    __asm_out((int16_t)a4, (char)v6);
    __asm_wait((int64_t)(-0x7cfe178c * *(int32_t *)(v2 - 70)), a2);
    unknown_6e449f66();
    return unknown_5376046f();
}

// Address range: 0x219783 - 0x219786
int64_t function_219783(void) {
    // 0x219783
    int64_t result; // 0x219783
    return result;
}

// Address range: 0x21978e - 0x2197a3
int64_t function_21978e(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 0x5ba1880e); // 0x219798
    int64_t v2; // 0x21978e
    *v1 = *v1 + (int32_t)v2;
    int64_t v3; // 0x21978e
    return (int64_t)&v3;
}

// Address range: 0x2197c8 - 0x219839
int64_t function_2197c8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2197c8
    int64_t v1; // 0x2197c8
    uint64_t v2 = v1;
    int64_t v3 = a2;
    bool v4; // 0x2197c8
    int64_t v5 = v2 - 256 * ((int64_t)v4 + a3) & 0xff00 | v2 & -0xff01; // 0x2197ca
    int64_t v6 = v4 ? -4 : 4; // 0x2197d2
    int64_t v7 = v6 + a1; // 0x2197d2
    *(int32_t *)v5 = (int32_t)v5;
    unknown_3a4096df(v7);
    int16_t v8 = a3; // 0x2197de
    __asm_in_133(v8);
    int64_t v9; // 0x2197c8
    *(int32_t *)v7 = (int32_t)(int64_t)&v9;
    int64_t v10 = v7 + v6; // 0x2197e0
    int64_t v11 = (v2 % 256 | a4 & -0x10000) ^ 236 | (int64_t)&g4; // 0x2197e3
    int64_t v12 = unknown_2221fdf5(v10); // 0x2197ef
    char * v13 = (char *)(v12 + 0x251e800); // 0x2197f4
    char v14 = v12; // 0x2197f4
    *v13 = *v13 + v14;
    *(int32_t *)0xd74b34e8 = *(int32_t *)0xd74b34e8 - 0xf3545dc;
    int64_t v15 = *(int64_t *)(v1 + 96 & 0xffffffff); // 0x219802
    unsigned char v16 = (char)v11 % 32; // 0x219804
    if (v16 != 0) {
        char * v17 = (char *)(v11 + 0xdc759c00 & 0xffffffff); // 0x219804
        unsigned char v18 = *v17; // 0x219804
        unsigned char v19 = *(char *)v10; // 0x219803
        *v17 = v18 >> v16 | (char)((int16_t)v18 << (int16_t)(9 - v16)) | (char)(v19 > v14 + (char)((int64_t)&g4 >> 8)) << 8 - v16;
    }
    int64_t v20 = ((v15 & (int64_t)&g2) == 0 ? 1 : -1) + v10; // 0x219803
    *(char *)(v11 - 0x4ad4fe18) = 1;
    __asm_outsb(v8, *(char *)&v3);
    __asm_iretd();
    int32_t * v21 = (int32_t *)(v20 - 0x6b0abfea); // 0x219816
    uint32_t v22 = (int32_t)v11; // 0x219816
    *v21 = *v21 ^ v22;
    unknown_ffffffffb7c71e23();
    function_2197c8(v20, v3, a3, v11);
    uint32_t v23 = v22 % 32; // 0x219824
    int64_t v24 = v3; // 0x219824
    if (v23 != 0) {
        v24 = (int32_t)v3 << v23;
        v3 = v24;
    }
    int32_t * v25 = (int32_t *)v11; // 0x21982b
    int32_t v26 = *v25 + (int32_t)v24; // 0x21982b
    *v25 = v26;
    int64_t result = unknown_ffffffffcaf306fa(); // 0x21982e
    if (v26 < 1) {
        // 0x21986f
        return result;
    }
    // 0x219835
    return result & 0xf0caba24;
}

// Address range: 0x21985b - 0x219861
int64_t function_21985b(int64_t a1) {
    // 0x21985b
    return unknown_ffffffffbf192064(a1);
}

// Address range: 0x219862 - 0x219863
int64_t function_219862(int64_t a1) {
    // 0x219862
    int64_t result; // 0x219862
    return result;
}

// Address range: 0x2eea1e - 0x2eea1f
int64_t function_2eea1e(int64_t a1) {
    // 0x2eea1e
    int64_t result; // 0x2eea1e
    return result;
}

// Address range: 0x2eea32 - 0x2eea95
int64_t function_2eea32(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_fffffffffd19b838(); // 0x2eea32
    int32_t * v2 = (int32_t *)a1; // 0x2eea3e
    *v2 = 2 * (int32_t)a1;
    int64_t v3; // 0x2eea32
    if (a4 != 0) {
        int64_t v4 = 0x10000 * (int32_t)v1 >> 16 & -0x17d30451; // 0x2eea38
        return v4 & 0xe82cfb00 | (int64_t)*(char *)((v4 & 175) + v3);
    }
    char * v5 = (char *)(a2 + 3); // 0x2eea7a
    *v5 = *v5 + (char)(v3 / 256);
    __asm_in_134((int16_t)a3);
    int64_t v6 = unknown_ffffffffafcc2485(); // 0x2eea7f
    *v2 = (int32_t)v6;
    char * v7 = (char *)(v3 + 8 * v3); // 0x2eea85
    *v7 = *v7 + (char)v6;
    bool v8; // 0x2eea32
    uint64_t result = unknown_4c723c8e((v8 ? -4 : 4) + a1); // 0x2eea88
    char * v9 = (char *)(result + 0x1e88e00); // 0x2eea8f
    *v9 = *v9 + (char)(result / 256);
    return result;
}

// Address range: 0x2eea96 - 0x2eea98
int64_t function_2eea96(void) {
    // 0x2eea96
    int64_t result; // 0x2eea96
    return result;
}

// Address range: 0x2eea98 - 0x2eebe6
int64_t function_2eea98(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2eea98
    int64_t v1; // 0x2eea98
    *(int32_t *)a2 = (int32_t)v1 + 1;
    char * v2 = (char *)(v1 - 0x22d9700); // 0x2eea9a
    *v2 = *v2 + (char)v1;
    int64_t v3; // bp-64, 0x2eea98
    v3 = (int64_t)&v3 + 16;
    return function_c4258(a1, a2, a3, a4, v1, v1, 0x59585009);
}

// Address range: 0x2eebe6 - 0x2eed20
int64_t function_2eebe6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x2eebe6
    int64_t v1; // 0x2eebe6
    return function_c4258(a1, a2, a3, a4, a5, v1, a6);
}

// Address range: 0x2eed20 - 0x2eee7d
int64_t function_2eed20(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2eed20
    int64_t v1; // bp-32, 0x2eed20
    int64_t v2 = (int64_t)&v1; // 0x2eee02
    v1 = v2;
    int64_t v3; // 0x2eed20
    int64_t v4 = v3 - 8; // 0x2eee58
    *(int64_t *)(v3 - 16) = v4;
    *(int64_t *)v4 = v3 + 8;
    int64_t v5; // bp-48, 0x2eed20
    return function_c4258(a1, a2, a3, v2, v3, v3, (int64_t)&v5 + 16);
}

// Address range: 0x2eee7d - 0x2ef009
int64_t function_2eee7d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x2eee7d
    return function_c4258(a1, a2, a3, a4, a5, a6, 0x2e7f33);
}

// Address range: 0x2ef009 - 0x2ef152
int64_t function_2ef009(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = 0x76f74947; // bp-40, 0x2ef080
    int64_t v2 = (int64_t)&v1; // 0x2ef0b7
    int64_t * v3 = (int64_t *)(v2 + 16); // 0x2ef0bf
    int64_t v4 = *v3; // 0x2ef0bf
    int64_t * v5 = (int64_t *)(v2 - 8); // 0x2ef0bf
    *v5 = v4;
    int64_t * v6 = (int64_t *)(v2 - 16); // 0x2ef0c3
    *v6 = v2;
    int64_t * v7 = (int64_t *)(v2 - 24); // 0x2ef0f0
    bool v8; // 0x2ef009
    *v7 = 0x4000 * (int64_t)(bool)v8 | 2048 * (int64_t)v8 | 1024 * (int64_t)v8 | 512 * (int64_t)v8 | 256 * (int64_t)v8 | 128 * (int64_t)v8 | 64 * (int64_t)v8 | 16 * (int64_t)v8 | (int64_t)v8 | 4 * (int64_t)v8 | 2;
    v1 = *v6;
    *v6 = 0x604b6f92;
    *(int64_t *)(v2 - 32) = v4;
    *v3 = *v6;
    int64_t v9 = *v5; // 0x2ef10e
    *v6 = v9;
    *v7 = v9;
    *v5 = v1;
    *v6 = v2;
    return function_c4258(a1, a2, a3, a4, a5, 0x3fc6f860, v1);
}

// Address range: 0x2ef152 - 0x2ef2e7
int64_t function_2ef152(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x2ef152
    int64_t v1; // 0x2ef152
    return function_c4258(a1, a2, a3, a4, a5, v1, a6);
}

// Address range: 0x2ef2f5 - 0x2ef2f8
int64_t function_2ef2f5(void) {
    // 0x2ef2f5
    int64_t result; // 0x2ef2f5
    return result;
}

// Address range: 0x2ef346 - 0x2ef347
int64_t function_2ef346(void) {
    // 0x2ef346
    int64_t result; // 0x2ef346
    return result;
}

// Address range: 0x2ef384 - 0x2ef385
int64_t function_2ef384(void) {
    // 0x2ef384
    int64_t result; // 0x2ef384
    return result;
}

// Address range: 0x2ef3d1 - 0x2ef3d4
int64_t function_2ef3d1(void) {
    // 0x2ef3d1
    int64_t result; // 0x2ef3d1
    return result;
}

// Address range: 0x2ef3d5 - 0x2ef3d8
int64_t function_2ef3d5(void) {
    // 0x2ef3d5
    int64_t result; // 0x2ef3d5
    return result;
}
