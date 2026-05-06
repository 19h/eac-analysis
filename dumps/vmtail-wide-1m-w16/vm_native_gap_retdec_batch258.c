/*
 * Targeted RetDec C for native executable gap queue batch 258.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1672aa-0x1674aa rank=- name=- kind=- bytes=- uncovered=-
 *   0x2f221e-0x2f241e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2f241e-0x2f261e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2f261e-0x2f281e rank=- name=- kind=- bytes=- uncovered=-
 *   0x3128bb-0x312abb rank=- name=- kind=- bytes=- uncovered=-
 *   0x312abb-0x312cbb rank=- name=- kind=- bytes=- uncovered=-
 *   0x312cbb-0x312ebb rank=- name=- kind=- bytes=- uncovered=-
 *   0x312ebb-0x3130bb rank=- name=- kind=- bytes=- uncovered=-
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
extern int g3;
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

int64_t function_16727b();
int64_t function_1672aa(int64_t a1);
int64_t function_1672d6(void);
int64_t function_1672f5(void);
int64_t function_16733d(int64_t a1);
int64_t function_16735d(int64_t a1);
int64_t function_167412(void);
int64_t function_167418(void);
int64_t function_167451(void);
int64_t function_16745f(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_167483(void);
int64_t function_167489(void);
int64_t function_17f29e6a();
int64_t function_219a4ca();
int64_t function_2f221e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_2f2394(void);
int64_t function_2f2399(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_2f23b6(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2f23ba(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2f23d8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2f2401(int64_t a1);
int64_t function_2f2406(void);
int64_t function_2f24d7(int64_t a1);
int64_t function_2f24dc(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2f2579(int64_t a1);
int64_t function_2f25a7(void);
int64_t function_2f25cb(int64_t a1);
int64_t function_2f25e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2f2653(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2f26c3(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_2f26d3(void);
int64_t function_2f26e6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2f272a(int64_t a1, int64_t a2);
int64_t function_2f276e(int64_t a1, int64_t a2);
int64_t function_2f27b9(void);
int64_t function_3128bb(int64_t a1, int64_t a2, int64_t a3, int32_t a4);
int64_t function_3128fa(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3129e8(void);
int64_t function_3129f8(void);
int64_t function_312a71(void);
int64_t function_312a78(int64_t a1);
int64_t function_312ab1(void);
int64_t function_312ac5(int64_t a1);
int64_t function_312b27(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_312c5c(int64_t a1, int64_t a2);
int64_t function_312c86(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_312ccb(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_312ce3(void);
int64_t function_312cee(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_312d0f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_312d37(void);
int64_t function_312d3e(int64_t a1);
int64_t function_312d73(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_312d97(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_312eae(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_312f17(void);
int64_t function_312f77(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_312f92(void);
int64_t function_312fa6(int64_t a1);
int64_t function_312fa9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_312fd3(void);
int64_t function_313005(void);
int64_t function_313049(void);
int64_t function_31304e(void);
int64_t function_313056(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_313092(void);
int64_t function_3130ab(void);
int64_t function_34a973b0();
int64_t function_642e8568();
int64_t function_c4258();
int64_t function_ffffffff8a21353e();
int64_t function_ffffffff91cd17d9();
int64_t function_fffffffff13327a1();
int64_t function_fffffffff47b23fe();
int64_t unknown_13326921();
int64_t unknown_194644d3();
int64_t unknown_28371467();
int64_t unknown_3ab60844();
int64_t unknown_3d928c18();
int64_t unknown_3dfa21ca();
int64_t unknown_4425c6b9();
int64_t unknown_5e563a12();
int64_t unknown_618b939d();
int64_t unknown_6ac6b6b7();
int64_t unknown_7671887a();
int64_t unknown_7c293cd2();
int64_t unknown_ffffffff84b17c53();
int64_t unknown_ffffffff991100dc();
int64_t unknown_ffffffff9e251088();
int64_t unknown_ffffffffae2fd0f1();
int64_t unknown_ffffffffaf466308();
int64_t unknown_ffffffffb1f49df2();
int64_t unknown_ffffffffc0398c01();
int64_t unknown_ffffffffc26b6d93();
int64_t unknown_ffffffffe393d1d3();
int64_t unknown_ffffffffe8eb8d7f();

// Address range: 0x1672aa - 0x1672ab
int64_t function_1672aa(int64_t a1) {
    // 0x1672aa
    int64_t result; // 0x1672aa
    return result;
}

// Address range: 0x1672d6 - 0x1672d8
int64_t function_1672d6(void) {
    // 0x1672d6
    return function_16727b();
}

// Address range: 0x1672f5 - 0x1672f8
int64_t function_1672f5(void) {
    // 0x1672f5
    int64_t result; // 0x1672f5
    return result;
}

// Address range: 0x16733d - 0x167348
int64_t function_16733d(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 - 0x747fe884); // 0x16733d
    int64_t v2; // 0x16733d
    *v1 = *v1 + (int32_t)v2;
    return function_34a973b0();
}

// Address range: 0x16735d - 0x167363
int64_t function_16735d(int64_t a1) {
    // 0x16735d
    int64_t v1; // 0x16735d
    bool v2; // 0x16735d
    return v1 - (v2 ? 0xa416fc9e : 0xa416fc9d) & 0xffffffff;
}

// Address range: 0x167412 - 0x167413
int64_t function_167412(void) {
    // 0x167412
    int64_t result; // 0x167412
    return result;
}

// Address range: 0x167418 - 0x167419
int64_t function_167418(void) {
    // 0x167418
    int64_t result; // 0x167418
    return result;
}

// Address range: 0x167451 - 0x167453
int64_t function_167451(void) {
    // 0x167451
    int64_t result; // 0x167451
    return result;
}

// Address range: 0x16745f - 0x16747c
int64_t function_16745f(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x16745f
    int64_t v1; // 0x16745f
    int64_t v2 = v1;
    *(int32_t *)v2 = (int32_t)v2;
    unsigned char v3 = *(char *)0x2828af2a0ce801e8; // 0x167464
    int64_t v4 = v2 & -256 | (int64_t)v3; // 0x167464
    char * v5 = (char *)(4 * a2 + a1); // 0x16746d
    *v5 = *v5 + (char)(a3 / 256);
    char * v6 = (char *)v4; // 0x167470
    char v7 = *v6; // 0x167470
    *v6 = v7 - v3;
    __asm_int3();
    int64_t result = unknown_7671887a(); // 0x167479
    if (v4 > (int64_t)v7) {
        result = function_167412();
    }
    // 0x16747b
    return result;
}

// Address range: 0x167483 - 0x167488
int64_t function_167483(void) {
    // 0x167483
    return __asm_hlt();
}

// Address range: 0x167489 - 0x16748b
int64_t function_167489(void) {
    // 0x167489
    return function_167418();
}

// Address range: 0x2f221e - 0x2f2394
int64_t function_2f221e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x2f221e
    int64_t v1; // 0x2f221e
    char * v2 = (char *)(v1 - 127); // 0x2f221e
    *v2 = *v2 | (char)a4;
    int64_t v3 = 0x491924de; // bp-16, 0x2f2295
    int64_t v4; // bp-40, 0x2f221e
    v4 = (int64_t)&v4;
    int64_t v5 = (int64_t)&v3; // 0x2f2351
    int64_t v6 = v5 - 8; // 0x2f236c
    int64_t * v7 = (int64_t *)v6; // 0x2f236c
    *v7 = a6;
    int64_t * v8 = (int64_t *)(v5 - 16); // 0x2f236e
    *v8 = v6;
    *v8 = a2;
    *v7 = *v7 ^ v5 + 8 ^ *v7;
    return function_c4258(a1, *v8, a3, a4);
}

// Address range: 0x2f2394 - 0x2f2399
int64_t function_2f2394(void) {
    // 0x2f2394
    int64_t result; // 0x2f2394
    return result;
}

// Address range: 0x2f2399 - 0x2f23b5
int64_t function_2f2399(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x2f2399
    int64_t v1; // 0x2f2399
    int64_t v2 = v1;
    *(int32_t *)v2 = *(int32_t *)(int32_t *)&g2 + (int32_t)v2;
    int64_t result = (v2 + a4 / 256) % 256 | v2 & -256; // 0x2f239c
    int32_t * v3 = (int32_t *)(v1 + 0x5800d700); // 0x2f239e
    *v3 = *v3 + (int32_t)v1;
    int32_t * v4 = (int32_t *)(result - 0x1c17fbe); // 0x2f23a4
    int32_t v5 = *v4 + (int32_t)a4; // 0x2f23a4
    *v4 = v5;
    if (v5 < 1) {
        // 0x2f23b9
        return result;
    }
    // 0x2f23ac
    *(int32_t *)a1 = 0x65e201e8;
    return 0x65e201e8;
}

// Address range: 0x2f23b6 - 0x2f23b9
int64_t function_2f23b6(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2f23b6
    int64_t v1; // 0x2f23b6
    *(char *)a1 = (char)v1;
    int64_t v2; // 0x2f23b6
    int64_t result = (int64_t)&v2; // 0x2f23b7
    __asm_out((int16_t)a3, (char)result);
    return result;
}

// Address range: 0x2f23ba - 0x2f23d6
int64_t function_2f23ba(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    unsigned char v1 = (unsigned char)(char)a4 % 32; // 0x2f23c4
    if (v1 != 0) {
        char * v2 = (char *)(a4 + 0x2c758c00 & 0xffffffff); // 0x2f23c4
        unsigned char v3 = *v2; // 0x2f23c4
        *v2 = v3 >> v1 | v3 << 8 - v1;
    }
    unknown_7c293cd2(((a5 & (int64_t)&g1) == 0 ? 1 : -1) + a1);
    return function_fffffffff47b23fe();
}

// Address range: 0x2f23d8 - 0x2f2401
int64_t function_2f23d8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x2f23d8
    int64_t v1; // 0x2f23d8
    int64_t v2 = v1;
    *(int32_t *)v2 = 2 * (int32_t)v2;
    int64_t v3; // 0x2f23d8
    *(int32_t *)a4 = *(int32_t *)&v3 + (int32_t)v1;
    float80_t v4; // 0x2f23d8
    *(int64_t *)(__asm_int1((int64_t)&g3) + 0xad0a2c7) = (int64_t)v4;
    *(int64_t *)-0x2499feb85cc4918b = unknown_ffffffffb1f49df2();
    return unknown_ffffffffc0398c01();
}

// Address range: 0x2f2401 - 0x2f2403
int64_t function_2f2401(int64_t a1) {
    // 0x2f2401
    return __asm_int1(a1);
}

// Address range: 0x2f2406 - 0x2f2407
int64_t function_2f2406(void) {
    // 0x2f2406
    int64_t result; // 0x2f2406
    return result;
}

// Address range: 0x2f24d7 - 0x2f24dc
int64_t function_2f24d7(int64_t a1) {
    // 0x2f24d7
    int64_t result; // 0x2f24d7
    return result;
}

// Address range: 0x2f24dc - 0x2f252f
int64_t function_2f24dc(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = unknown_3d928c18(); // 0x2f2512
    int32_t * v2 = (int32_t *)v1; // 0x2f2517
    uint32_t v3 = *v2; // 0x2f2517
    uint32_t v4 = v3 + (int32_t)v1; // 0x2f2517
    *v2 = v4;
    unsigned char v5 = (char)(v1 + 62 + (int64_t)(v4 < v3)) + 126; // 0x2f251b
    *(char *)a1 = v5;
    if (v5 != 0) {
        // 0x2f2522
        bool v6; // 0x2f24dc
        uint32_t v7 = (int32_t)((v6 ? 0xffffffff : 1) + a1); // 0x2f2522
        uint32_t v8 = v7 + (int32_t)a2; // 0x2f2522
        *(char *)(int64_t)v8 = v5;
        uint64_t v9 = ((int64_t)v5 - (v8 < v7 ? 140 : 139)) % 256 | v1 & -256; // 0x2f2526
        int32_t * v10 = (int32_t *)a3; // 0x2f2528
        *v10 = *v10 + (int32_t)v9;
        uint64_t result = v9 / 2 % 0x80000000; // 0x2f252b
        int32_t * v11 = (int32_t *)result; // 0x2f252d
        int64_t v12; // bp+16, 0x2f24dc
        *v11 = *v11 + (int32_t)(int64_t)&v12;
        return result;
    }
    while (true) {
        // continue -> 0x2f250a
    }
}

// Address range: 0x2f2579 - 0x2f257c
int64_t function_2f2579(int64_t a1) {
    // 0x2f2579
    int64_t result; // 0x2f2579
    return result;
}

// Address range: 0x2f25a7 - 0x2f25ad
int64_t function_2f25a7(void) {
    // 0x2f25a7
    return unknown_ffffffffae2fd0f1();
}

// Address range: 0x2f25cb - 0x2f25cc
int64_t function_2f25cb(int64_t a1) {
    // 0x2f25cb
    int64_t result; // 0x2f25cb
    return result;
}

// Address range: 0x2f25e0 - 0x2f25e4
int64_t function_2f25e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2f25e0
    *(char *)a3 = (char)a4;
    int64_t result; // 0x2f25e0
    return result;
}

// Address range: 0x2f2653 - 0x2f2656
int64_t function_2f2653(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2f2653
    int64_t result; // 0x2f2653
    return result;
}

// Address range: 0x2f26c3 - 0x2f26cf
int64_t function_2f26c3(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x2f26c3
    int64_t v1; // 0x2f26c3
    int64_t v2 = v1;
    int64_t v3 = v1;
    int32_t * v4 = (int32_t *)(v2 + 0x6a8079fe + 2 * v2); // 0x2f26c5
    *v4 = *v4 + (int32_t)v1;
    bool v5; // 0x2f26c3
    return (v3 + a4 / 256 + (int64_t)v5) % 256 | v3 & -256;
}

// Address range: 0x2f26d3 - 0x2f26dc
int64_t function_2f26d3(void) {
    // 0x2f26d3
    return function_17f29e6a();
}

// Address range: 0x2f26e6 - 0x2f2700
int64_t function_2f26e6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2f26e6
    int64_t v1; // 0x2f26e6
    int32_t * v2 = (int32_t *)(v1 - 0x2b54b1d7);
    *v2 = *v2 | (int32_t)v1;
    int64_t result; // 0x2f26e6
    int64_t v3 = result;
    *(char *)v3 = *(char *)&result + (char)v3;
    return result;
}

// Address range: 0x2f272a - 0x2f2739
int64_t function_2f272a(int64_t a1, int64_t a2) {
    // 0x2f272a
    *(int32_t *)-0x2150f9ef = *(int32_t *)-0x2150f9ef >> 29;
    return function_fffffffff13327a1();
}

// Address range: 0x2f276e - 0x2f2772
int64_t function_2f276e(int64_t a1, int64_t a2) {
    // 0x2f276e
    return a1 & 0xffffffff;
}

// Address range: 0x2f27b9 - 0x2f27ba
int64_t function_2f27b9(void) {
    // 0x2f27b9
    int64_t result; // 0x2f27b9
    return result;
}

// Address range: 0x3128bb - 0x3128d0
int64_t function_3128bb(int64_t a1, int64_t a2, int64_t a3, int32_t a4) {
    int32_t result = a4;
    *(int32_t *)(a3 - 0x1739c545) = (int32_t)(int64_t)&result;
    return result;
}

// Address range: 0x3128fa - 0x312958
int64_t function_3128fa(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x3128fa
    int64_t v1; // 0x3128fa
    int64_t v2 = v1;
    int64_t v3 = a3 & -256 | 211; // 0x3128fa
    uint64_t v4 = unknown_ffffffffaf466308(); // 0x312902
    char * v5 = (char *)(((v2 & 0xff00) + v2 & 0xff00 | v2 & 0xffff00ff) + (8 * v3 | 7)); // 0x31290a
    *v5 = *v5 - 45;
    *(int32_t *)0x683311ac = *(int32_t *)0x683311ac + (int32_t)a2;
    char * v6 = (char *)v3; // 0x312914
    char v7 = *v6 | (char)(v4 / 256); // 0x312914
    if (v7 >= 0 == (v7 != 0)) {
        function_3128fa(a1, a2, v3, a4, (int64_t)&g3, (int64_t)&g3, (int64_t)&g3);
    }
    int64_t v8 = a4 & 0xffffffff; // 0x312918
    *(int32_t *)v8 = (int32_t)a4 ^ 0x6401e8cf;
    *v6 = *v6 + (char)a4;
    unknown_3ab60844(v8, v8);
    char * v9 = (char *)(a7 + 12); // 0x31294a
    *v9 = *v9 + (char)(a3 / 256);
    __asm_out((int16_t)v3, (char)unknown_ffffffff84b17c53());
    return function_642e8568();
}

// Address range: 0x3129e8 - 0x3129e9
int64_t function_3129e8(void) {
    // 0x3129e8
    int64_t result; // 0x3129e8
    return result;
}

// Address range: 0x3129f8 - 0x3129fb
int64_t function_3129f8(void) {
    // 0x3129f8
    int64_t result; // 0x3129f8
    return result;
}

// Address range: 0x312a71 - 0x312a72
int64_t function_312a71(void) {
    // 0x312a71
    int64_t result; // 0x312a71
    return result;
}

// Address range: 0x312a78 - 0x312a7b
int64_t function_312a78(int64_t a1) {
    // 0x312a78
    int64_t result; // 0x312a78
    return result;
}

// Address range: 0x312ab1 - 0x312ab2
int64_t function_312ab1(void) {
    // 0x312ab1
    int64_t result; // 0x312ab1
    return result;
}

// Address range: 0x312ac5 - 0x312acc
int64_t function_312ac5(int64_t a1) {
    // 0x312ac5
    int64_t v1; // 0x312ac5
    bool v2; // 0x312ac5
    if (!v2) {
        v1 = function_312ab1();
    }
    int64_t result = v1; // 0x312ac7
    if (!v2) {
        result = function_312a71();
    }
    // 0x312ac9
    return result;
}

// Address range: 0x312b27 - 0x312c20
int64_t function_312b27(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int32_t * v1 = (int32_t *)(a1 + 17); // 0x312b27
    *v1 = *v1 + 1;
    int32_t * v2 = (int32_t *)(a1 + 0x9d8c3eb); // 0x312b9d
    *v2 = (int32_t)a2;
    int32_t * v3 = (int32_t *)(a4 - 10); // 0x312ba5
    uint32_t v4 = *v3; // 0x312ba5
    int32_t v5 = a4; // 0x312ba5
    int32_t v6 = v4 + v5; // 0x312ba5
    *v3 = v6;
    if (v6 >= v4 && v6 != 0) {
        // 0x312c0b
        __asm_int1((int64_t)&g3);
        unknown_5e563a12();
        bool v7; // 0x312b27
        *(int32_t *)((v7 ? 0x1e85ca2 : 0x1e85caa) + (int64_t)*v2) = v5;
        return unknown_13326921();
    }
    int64_t v8 = __asm_wait(); // 0x312bab
    if (v6 > 0) {
        // 0x312bae
        return v8 & -256 | (int64_t)*(char *)0x1e8e8bc8f6f73ec;
    }
    // 0x312b5a
    return (int64_t)(*(int32_t *)0x3907c9b082701e8 & -256) | (int64_t)__asm_in(50);
}

// Address range: 0x312c5c - 0x312c71
int64_t function_312c5c(int64_t a1, int64_t a2) {
    // 0x312c5c
    int64_t v1; // 0x312c5c
    __asm_out_133(49, (int32_t)v1);
    bool v2; // 0x312c5c
    int64_t v3 = v2 ? -4 : 4; // 0x312c60
    int64_t v4 = unknown_28371467(v3 + a1, v3 + a2); // 0x312c61
    return (v4 + 139) % 256 | v4 & -256;
}

// Address range: 0x312c86 - 0x312c91
int64_t function_312c86(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(a3 - 0x176bc7f9); // 0x312c86
    *v1 = *v1 & (char)a3;
    int64_t v2; // 0x312c86
    *(int32_t *)a4 = *(int32_t *)&v2 + (int32_t)a3;
    int64_t result; // 0x312c86
    __asm_out_134((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x312ccb - 0x312cde
int64_t function_312ccb(int64_t a1, int64_t a2, uint64_t a3) {
    char * v1 = (char *)(a2 + 0x62000734); // 0x312ccb
    *v1 = *v1 + (char)(a3 / 256);
    int64_t v2; // 0x312ccb
    int32_t * v3 = (int32_t *)(v2 + 0x64009900); // 0x312cd3
    *v3 = *v3 + (int32_t)a1;
    return function_ffffffff8a21353e();
}

// Address range: 0x312ce3 - 0x312ce4
int64_t function_312ce3(void) {
    // 0x312ce3
    int64_t result; // 0x312ce3
    return result;
}

// Address range: 0x312cee - 0x312cf8
int64_t function_312cee(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x312cee
    int64_t v1; // 0x312cee
    int64_t v2 = v1;
    __asm_in_135((int16_t)a3);
    return (v2 + 17) % 256 | v2 & 0xffffff00;
}

// Address range: 0x312d0f - 0x312d2e
int64_t function_312d0f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint32_t v1 = (int32_t)a4; // 0x312d11
    uint32_t v2 = 2 * v1; // 0x312d11
    int64_t v3; // 0x312d0f
    if (v2 < v1 || v2 == 0) {
        v3 = function_312ce3();
    }
    uint64_t v4 = v3 - (v2 < v1 ? 223 : 222); // 0x312d1a
    int64_t result = v4 % 256 | v3 & -256; // 0x312d1a
    *(int64_t *)0xd4b21536 = -34;
    __asm_int(-24);
    int32_t * v5 = (int32_t *)(result + 0x7000bbf8); // 0x312d20
    int64_t v6; // 0x312d0f
    *v5 = *v5 + (int32_t)v6;
    int32_t * v7 = (int32_t *)(a2 + 6); // 0x312d26
    *v7 = *v7 - v2;
    char * v8 = (char *)(int64_t)v2; // 0x312d29
    *v8 = *v8 | (char)v4;
    return result;
}

// Address range: 0x312d37 - 0x312d38
int64_t function_312d37(void) {
    // 0x312d37
    int64_t result; // 0x312d37
    return result;
}

// Address range: 0x312d3e - 0x312d3f
int64_t function_312d3e(int64_t a1) {
    // 0x312d3e
    int64_t result; // 0x312d3e
    return result;
}

// Address range: 0x312d73 - 0x312d82
int64_t function_312d73(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x312d73
    int64_t v1; // 0x312d73
    int32_t * v2 = (int32_t *)(8 * v1 + a3); // 0x312d73
    *v2 = *v2 + (int32_t)a1;
    int64_t result = unknown_ffffffffe8eb8d7f(); // 0x312d79
    __asm_out_134((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x312d97 - 0x312dd2
int64_t function_312d97(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x312d97
    int64_t v1; // 0x312d97
    int64_t v2 = v1;
    unknown_618b939d();
    int64_t result = __asm_int1((int64_t)&g3); // 0x312d9c
    int32_t v3 = v1;
    if (((v3 - (int32_t)v2 ^ v3) & (int32_t)(v1 ^ v2)) >= 0) {
        // 0x312da1
        return result;
    }
    // 0x312db3
    bool v4; // 0x312d97
    unknown_4425c6b9((v4 ? -4 : 4) + a1);
    uint32_t v5 = (int32_t)a4 % 32; // 0x312db8
    if (v5 != 0) {
        int32_t * v6 = (int32_t *)(v1 - 0x45fee200); // 0x312db8
        *v6 = *v6 << v5;
    }
    int32_t * v7 = (int32_t *)(unknown_3dfa21ca() + v1 & 0xffffffff); // 0x312dcb
    *v7 = *v7 + (int32_t)a3;
    return unknown_ffffffffe393d1d3();
}

// Address range: 0x312eae - 0x312edc
int64_t function_312eae(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x312eae
    int64_t v1; // 0x312eae
    int32_t v2 = v1; // 0x312eb8
    *(int32_t *)-0x3ee88252 = *(int32_t *)-0x3ee88252 + v2;
    int32_t * v3 = (int32_t *)(a2 - 61); // 0x312ec3
    *v3 = *v3 + (int32_t)a4;
    *(int32_t *)(2 * a2 - 121 + v1) = v2;
    unknown_194644d3();
    char v4 = __asm_insb((int16_t)(a3 & 0xff00 | (int64_t)*(char *)(v1 - 24))); // 0x312ed3
    *(char *)a1 = v4;
    return unknown_ffffffff991100dc();
}

// Address range: 0x312f17 - 0x312f1c
int64_t function_312f17(void) {
    // 0x312f17
    return function_219a4ca();
}

// Address range: 0x312f77 - 0x312f90
int64_t function_312f77(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x312f77
    int64_t v1; // 0x312f77
    char * v2 = (char *)(v1 - 0x38ced683); // 0x312f79
    *v2 = (char)v1;
    char * v3 = (char *)(a1 + 1); // 0x312f7f
    *v3 = *v3 | *v2;
    unknown_ffffffff9e251088();
    return unknown_ffffffffc26b6d93();
}

// Address range: 0x312f92 - 0x312f94
int64_t function_312f92(void) {
    // 0x312f92
    int64_t result; // 0x312f92
    return result;
}

// Address range: 0x312fa6 - 0x312fa9
int64_t function_312fa6(int64_t a1) {
    // 0x312fa6
    int64_t result; // 0x312fa6
    return result;
}

// Address range: 0x312fa9 - 0x312fb7
int64_t function_312fa9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x312fa9
    bool v1; // 0x312fa9
    int64_t v2 = v1 ? -4 : 4; // 0x312fab
    return unknown_6ac6b6b7(v2 + a1, v2 + a2 & -256 | 25);
}

// Address range: 0x312fd3 - 0x312fd8
int64_t function_312fd3(void) {
    // 0x312fd3
    return function_ffffffff91cd17d9();
}

// Address range: 0x313005 - 0x313006
int64_t function_313005(void) {
    // 0x313005
    int64_t result; // 0x313005
    return result;
}

// Address range: 0x313049 - 0x31304c
int64_t function_313049(void) {
    // 0x313049
    int64_t result; // 0x313049
    return result;
}

// Address range: 0x31304e - 0x31304f
int64_t function_31304e(void) {
    // 0x31304e
    int64_t result; // 0x31304e
    return result;
}

// Address range: 0x313056 - 0x313063
int64_t function_313056(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5;
    int64_t v2 = (int64_t)&v1; // 0x313058
    int64_t result = v2; // 0x31305b
    int64_t v3; // 0x313056
    if ((char)v3 == (char)a4) {
        result = function_313005();
    }
    // 0x31305d
    *(int32_t *)(v3 + a1 & 0xffffffff) = (int32_t)v2;
    return result;
}

// Address range: 0x313092 - 0x313095
int64_t function_313092(void) {
    // 0x313092
    int64_t result; // 0x313092
    return result;
}

// Address range: 0x3130ab - 0x3130ae
int64_t function_3130ab(void) {
    // 0x3130ab
    return function_31304e();
}
