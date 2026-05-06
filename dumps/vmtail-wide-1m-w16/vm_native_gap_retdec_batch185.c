/*
 * Targeted RetDec C for native executable gap queue batch 185.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x2a320-0x2b9b6 rank=51 name=fcn.0002a320 kind=r2_discovered bytes=5782 uncovered=2640
 *   0x4c1ea0-0x4c28e6 rank=52 name=fcn.004c1ea0 kind=r2_discovered bytes=2630 uncovered=2630
 *   0x57ba10-0x57c443 rank=53 name=fcn.0057ba10 kind=r2_discovered bytes=2611 uncovered=2611
 *   0x512ca0-0x5136b9 rank=54 name=fcn.00512ca0 kind=r2_discovered bytes=2585 uncovered=2585
 *   0x5137b0-0x5141c9 rank=55 name=fcn.005137b0 kind=r2_discovered bytes=2585 uncovered=2585
 *   0x3ff6e-0x4096a rank=56 name=fcn.0003ff6e kind=r2_discovered bytes=2556 uncovered=2556
 *   0x4ccde0-0x4cd7c5 rank=57 name=fcn.004ccde0 kind=r2_discovered bytes=2533 uncovered=2533
 *   0x55d470-0x55de3e rank=58 name=fcn.0055d470 kind=r2_discovered bytes=2510 uncovered=2510
 *   0x55df10-0x55e8de rank=59 name=fcn.0055df10 kind=r2_discovered bytes=2510 uncovered=2510
 *   0x562030-0x5629f1 rank=60 name=method.std::num_get_char__std::istreambuf_iterator_char__std::char_traits_char_____.virtual_56 kind=native_discovered bytes=2497 uncovered=2497
 *   0x562060-0x562a1c rank=61 name=fcn.00562060 kind=r2_discovered bytes=2492 uncovered=2492
 *   0x4bbff0-0x4bc986 rank=62 name=fcn.004bbff0 kind=r2_discovered bytes=2454 uncovered=2454
 *   0x4b2d10-0x4b369e rank=63 name=fcn.004b2d10 kind=r2_discovered bytes=2446 uncovered=2446
 *   0x56d3e0-0x56dd19 rank=64 name=fcn.0056d3e0 kind=r2_discovered bytes=2361 uncovered=2361
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
extern int g4;
extern int g5;
extern int g6;
extern int g7;
extern int g8;
extern int g9;
extern int g10;
extern int g11;
extern int g13;
extern int g14;
extern int g15;
extern int g16;
extern int g17;
extern int g18;
extern int g19;
extern int g20;
extern int g21;
extern int g22;
extern int g23;
extern int g24;
extern int g25;
extern int g26;
extern int g28;
extern int g29;
extern int g30;
extern int g31;
extern int g32;
extern int g33;
extern int g34;
extern int g36;
extern int g37;
extern int g38;
extern int g39;
extern int g40;
extern int g41;
extern int g42;
extern int g43;
extern int g44;
extern int g45;
extern int g46;
extern int g47;
extern int g48;
extern int g49;
extern int g50;
extern int g51;
extern int g52;
extern int g53;
extern int g54;
extern int g55;
extern int g56;
extern int32_t SHA256_Hash_constant_words_K__0x428a2f98__at_598520;
int64_t entry_point();
unsigned char llvm_ctpop_i8(unsigned char value);
uint16_t llvm_bswap_i16(uint16_t value);
uint32_t llvm_bswap_i32(uint32_t value);
uint64_t llvm_ctlz_i64(uint64_t value, bool is_zero_undef);
void __asm_int(int32_t interrupt);
int64_t __asm_int1();
int64_t __asm_int3();
int32_t __asm_in(uint16_t port);
int32_t __asm_in_133(uint16_t port);
int32_t __asm_in_134(uint16_t port);
char __asm_in_136(uint16_t port);
char __asm_in_137(uint16_t port);
int32_t __asm_in_138(uint16_t port);
char __asm_insb(uint16_t port);
int32_t __asm_insd(uint16_t port);
void __asm_out(uint16_t port, char value);
void __asm_out_133(uint16_t port, int32_t value);
void __asm_out_134(uint16_t port, int32_t value);
void __asm_out_135(uint16_t port, int32_t value);
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
int64_t __asm_wait(void);
void __asm_fbld(float80_t value);
float80_t __asm_fbstp(float80_t value);
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

int64_t function_10188d();
int64_t function_1078ec();
int64_t function_10e519();
int64_t function_1ff50();
int64_t function_20550();
int64_t function_221a8();
int64_t function_2263e();
int64_t function_2293e();
int64_t function_22aea();
int64_t function_23344();
int64_t function_24ded();
int64_t function_2508e();
int64_t function_256ba();
int64_t function_259ce();
int64_t function_25c34();
int64_t function_25e90();
int64_t function_286ac();
int64_t function_29432();
int64_t function_2a2bf();
int64_t function_2a320(void);
int64_t function_2a333(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2a339(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2a389(void);
int64_t function_2a3b7(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_2a3c3(void);
int64_t function_2a3d1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2a421(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2a4b3(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_2a521(int64_t a1);
int64_t function_2a56d(void);
int64_t function_2a5d3(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2a672(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2a711(int64_t a1, int64_t a2);
int64_t function_2a73a(void);
int64_t function_2a78b(void);
int64_t function_2a98d(void);
int64_t function_2a98e(void);
int64_t function_2a994(int64_t a1);
int64_t function_2a9bb(void);
int64_t function_2a9c1(void);
int64_t function_2a9c7(void);
int64_t function_2a9cd(void);
int64_t function_2a9d3(void);
int64_t function_2a9d4(void);
int64_t function_2a9d5(void);
int64_t function_2a9d6(void);
int64_t function_2a9d7(void);
int64_t function_2a9d8(void);
int64_t function_2a9d9(void);
int64_t function_2a9da(void);
int64_t function_2a9db(void);
int64_t function_2a9dc(void);
int64_t function_2a9dd(void);
int64_t function_2a9de(int64_t a1, int64_t a2);
int64_t function_2aa00(void);
int64_t function_2aa4d(int64_t a1);
int64_t function_2ab0f(void);
int64_t function_2ab5f(int64_t a1, int64_t a2);
int64_t function_2ab6b(void);
int64_t function_2ab6d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2ab74(int64_t a1);
int64_t function_2ab9f(int64_t a1, int64_t a2);
int64_t function_2abc6(int64_t a1);
int64_t function_2ac15(int64_t a1);
int64_t function_2ac33(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2ac76(void);
int64_t function_2aca9(void);
int64_t function_2acb2(int64_t a1);
int64_t function_2accc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2acd7(int64_t a1, int64_t a2);
int64_t function_2acf8(void);
int64_t function_2ad6a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2ad76(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2ad82(void);
int64_t function_2adcf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5);
int64_t function_2ae1e(int64_t a1);
int64_t function_2ae58(int64_t str, int64_t str2);
int64_t function_2aec0(int64_t a1, int64_t a2);
int64_t function_2aeea(int64_t a1);
int64_t function_2af10(int64_t * a1, int64_t * a2, int64_t a3);
int64_t function_2af1a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2b0ae(int64_t a1);
int64_t function_2b130(int64_t a1, int64_t a2);
int64_t function_2b148(int64_t a1);
int64_t function_2b160(int64_t a1, int64_t a2);
int64_t function_2b1e2(int64_t a1);
int64_t function_2b252(int64_t a1);
int64_t function_2b34a(int64_t a1, int64_t a2);
int64_t function_2b466(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2b4b6(int64_t a1);
int64_t function_2b5a2(int64_t a1);
int64_t function_2b5ba(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2b5db(int64_t a1, int64_t a2);
int64_t function_2b5e0(int64_t a1);
int64_t function_2b5fe(int64_t result);
int64_t function_2b604(void);
int64_t function_2b60a(void);
int64_t function_2b60e(int64_t a1);
int64_t function_2b64a(int64_t a1);
int64_t function_2b674(int64_t result, int32_t * a2);
int64_t function_2b768(void);
int64_t function_2b76a(void);
int64_t function_2b76c(int64_t result);
int64_t function_2b770(void);
int64_t function_2b772(void);
int64_t function_2b776(void);
int64_t function_2b79a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2b858(int64_t a1, int64_t a2, int32_t * a3);
int64_t function_2b88e(int32_t a1);
int64_t function_2b8b0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2b93d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2b961(void);
int64_t function_2b97e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2b9a6(int64_t a1);
int64_t function_2ce9a();
int64_t function_3aeea();
int64_t function_3d788();
int64_t function_3dcac();
int64_t function_3df27();
int64_t function_3ff6e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_41cb45a7();
int64_t function_444f8215();
int64_t function_448e6();
int64_t function_451f2();
int64_t function_48bde0();
int64_t function_48d3d1();
int64_t function_4b0870();
int64_t function_4b0890();
int64_t function_4b08f0();
int64_t function_4b0ac0();
int64_t function_4b0c90();
int64_t function_4b0d80();
int64_t function_4b0df0();
int64_t function_4b0f10();
int64_t function_4b1100();
int64_t function_4b1220();
int64_t function_4b13e0();
int64_t function_4b1590();
int64_t function_4b1680();
int64_t function_4b1820();
int64_t function_4b1900();
int64_t function_4b19a0();
int64_t function_4b1ac0();
int64_t function_4b26c0();
int64_t function_4b2d10(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5);
int64_t function_4b38b0();
int64_t function_4b3cf0();
int64_t function_4b95a0();
int64_t function_4ba580();
int64_t function_4ba6b0();
int64_t function_4ba7d0();
int64_t function_4baf40();
int64_t function_4bbc70();
int64_t function_4bbf40();
int64_t function_4bbff0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_4c1ea0(int64_t a1, int64_t a2);
int64_t function_4ccde0(int64_t a1, int64_t a2);
int64_t function_4eeb30();
int64_t function_4eeb50();
int64_t function_4efd30();
int64_t function_50ab00();
int64_t function_50d0c0();
int64_t function_50d7e0();
int64_t function_50f6f0();
int64_t function_512ca0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13);
int64_t function_5137b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13);
int64_t function_5245c0();
int64_t function_524600();
int64_t function_5246d0();
int64_t function_542590();
int64_t function_547990();
int64_t function_552550();
int64_t function_554b00();
int64_t function_557390();
int64_t function_557a40();
int64_t function_558300();
int64_t function_55d470(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13);
int64_t function_55df10(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13);
int64_t function_5615d0();
int64_t function_562030(void);
int64_t function_562040(int64_t a1);
int64_t function_562060(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_565f30();
int64_t function_567a10();
int64_t function_569070();
int64_t function_56d3e0(int64_t a1, int64_t a2);
int64_t function_5797e0();
int64_t function_579d80();
int64_t function_57a000();
int64_t function_57b2f0();
int64_t function_57b480();
int64_t function_57ba10(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_57bbe0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_57bc10(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_57bc40(void);
int64_t function_57bc58(int64_t a1, int64_t a2);
int64_t function_57bc98(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_57bcc8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_57bcf8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_57bd28(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_57c770();
int64_t function_57ca40();
int64_t function_5e68a674();
int64_t function_6150e();
int64_t function_61562();
int64_t function_61792();
int64_t function_619f2();
int64_t function_6745f();
int64_t function_6746a();
int64_t function_6747c();
int64_t function_71c60();
int64_t function_7216c();
int64_t function_72588();
int64_t function_7259e();
int64_t function_7260a();
int64_t function_7293a();
int64_t function_72994();
int64_t function_729b6();
int64_t function_729ce();
int64_t function_72b18();
int64_t function_7bbf70dc();
int64_t function_ffffffff9e60ee95();
int64_t function_ffffffffa2642099();
int64_t function_ffffffffa57d088f();
int64_t unknown_ffffffffdee3dc3d();

// Address range: 0x2a320 - 0x2a333
int64_t function_2a320(void) {
    // 0x2a320
    return function_10188d();
}

// Address range: 0x2a333 - 0x2a339
int64_t function_2a333(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2a333
    int64_t result; // 0x2a333
    bool v1; // 0x2a333
    *(int32_t *)a1 = (int32_t)result + (int32_t)a4 + (int32_t)v1;
    return result;
}

// Address range: 0x2a339 - 0x2a34f
int64_t function_2a339(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2a339
    int64_t v1; // 0x2a339
    bool v2; // 0x2a339
    if (a4 != 1 && !v2) {
        v1 = function_2a2bf();
    }
    // 0x2a33b
    int64_t v3; // 0x2a339
    unsigned char v4 = *(char *)(v1 % 256 + v3); // 0x2a33b
    char * v5 = (char *)(a1 - 73); // 0x2a348
    *v5 = *v5 - v4;
    return v1 & -256 | (int64_t)v4;
}

// Address range: 0x2a389 - 0x2a38e
int64_t function_2a389(void) {
    // 0x2a389
    return function_41cb45a7();
}

// Address range: 0x2a3b7 - 0x2a3c1
int64_t function_2a3b7(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x2a3b7
    int64_t v1; // 0x2a3b7
    *(int32_t *)a4 = (int32_t)v1;
    int64_t v2; // 0x2a3b7
    *(char *)a3 = *(char *)&v2 - (char)(a4 / 256);
    return function_7bbf70dc();
}

// Address range: 0x2a3c3 - 0x2a3c6
int64_t function_2a3c3(void) {
    // 0x2a3c3
    int64_t result; // 0x2a3c3
    return result;
}

// Address range: 0x2a3d1 - 0x2a421
int64_t function_2a3d1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2a3d1
    int64_t v1; // 0x2a3d1
    uint64_t v2 = v1;
    char v3 = __asm_in(-1); // 0x2a3d5
    char * v4 = (char *)(a3 + 0x727d3bba); // 0x2a3d9
    *v4 = *v4 + (char)(v2 / 256);
    unsigned char v5 = *(char *)-0x596b69b8ff454e13; // 0x2a3e1
    uint64_t v6 = a4 & 0xffffff00; // 0x2a3e1
    char * v7 = (char *)(a1 + 0x6d130f16 + 2 * a2); // 0x2a3eb
    *v7 = *v7 & (char)(v6 / 256);
    uint32_t v8 = *(int32_t *)(8 * a3 + 0x68a119 + ((int64_t)v3 & 0xffffffff | v1 & 0xffffff00)); // 0x2a3f2
    int32_t v9 = __asm_insd((int16_t)((v6 | (int64_t)v5) * (int64_t)v8 / 0x100000000)); // 0x2a3f9
    *(int32_t *)a1 = v9;
    return v2 & 0xffffffff;
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
        result = (int64_t)&g56;
    }
    // 0x2a4ae
    return result;
}

// Address range: 0x2a4b3 - 0x2a521
int64_t function_2a4b3(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x2a4b3
    if (a4 == 0 || (char)a4 != 0) {
        // 0x2a519
        int64_t v1; // 0x2a4b3
        return v1 & -256;
    }
    int32_t * v2 = (int32_t *)(a4 + 24); // 0x2a4ca
    *(char *)a4 = 1;
    int64_t v3 = function_48d3d1(*(int64_t *)(a4 + 16), a3, *v2); // 0x2a4d9
    if (v3 >= (int64_t)*v2) {
        // 0x2a50d
        *(int32_t *)(a4 + 4) = 22;
        // 0x2a519
        return v3 & -256 | a4 % 256;
    }
    int64_t v4 = (a1 & 0xffffffff) + 0xffffffff; // 0x2a4e6
    *(int32_t *)(a4 + 4) = 0;
    int64_t v5 = 0; // 0x2a4f9
    if ((int32_t)v4 < 15) {
        char v6 = *(char *)((v4 & 0xffffffff) + (int64_t)&g14); // 0x2a502
        v5 = v6;
    }
    // 0x2a506
    *(int32_t *)*(int64_t *)(a4 + 8) = (int32_t)v5;
    // 0x2a519
    return v5 & -256 | 1;
}

// Address range: 0x2a521 - 0x2a56d
int64_t function_2a521(int64_t a1) {
    // 0x2a521
    if (a1 == 0) {
        // 0x2a56c
        return 10;
    }
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x2a526
    if (*v1 == 0) {
        // 0x2a56c
        return 10;
    }
    int32_t * v2 = (int32_t *)(a1 + 4); // 0x2a52d
    int32_t v3 = *v2; // 0x2a52d
    if (v3 == 0 || ((int32_t)&g48 < 1 || (int32_t)&g48 == 1) ^ true) {
        // 0x2a56c
        return v3 == 0 ? 10 : (int64_t)&g11;
    }
    // 0x2a546
    return function_22aea(function_286ac(function_2ce9a(a1)), *v1, *v2);
}

// Address range: 0x2a56d - 0x2a5d3
int64_t function_2a56d(void) {
    // 0x2a56d
    if (*(char *)&g42 != 0) {
        // 0x2a5c2
        return (int64_t)&g43;
    }
    // 0x2a577
    if ((int32_t)function_20550(&g42) != 0) {
        // 0x2a58b
        function_6150e(&g43, 1);
        function_1ff50(&g42);
        __cxa_atexit((void (*)(int64_t *))0x2aeea, &g43, (int64_t *)0x849800);
    }
    // 0x2a5c2
    return (int64_t)&g43;
}

// Address range: 0x2a5d3 - 0x2a672
int64_t function_2a5d3(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2a5d3
    if (a1 == 0) {
        // 0x2a66e
        return 10;
    }
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x2a5e2
    if (*v1 == 0) {
        // 0x2a66e
        return 10;
    }
    int32_t * v2 = (int32_t *)(a1 + 4); // 0x2a5ed
    if (*v2 == 0) {
        // 0x2a66e
        return 10;
    }
    int32_t v3 = *(int32_t *)(a1 + 16); // 0x2a5f3
    if (v3 == 0 || a2 == 0 || a3 == 0) {
        // 0x2a66e
        return 10;
    }
    // 0x2a604
    if (g49 != 1) {
        // 0x2a66e
        return (int64_t)&g11 & 0xffffffff;
    }
    // 0x2a613
    *(int32_t *)a3 = v3;
    int64_t v4 = function_61792(function_2a56d(), *v1, *v2, a2, a3); // 0x2a63d
    int64_t result = 0x7fffffff; // 0x2a64b
    if ((int32_t)v4 < 7) {
        uint32_t v5 = *(int32_t *)((4 * v4 & 0x3fffffffc) + (int64_t)&g13); // 0x2a656
        result = v5;
    }
    // 0x2a664
    return result;
}

// Address range: 0x2a672 - 0x2a711
int64_t function_2a672(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2a672
    if (a1 == 0) {
        // 0x2a70d
        return 10;
    }
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x2a681
    if (*v1 == 0) {
        // 0x2a70d
        return 10;
    }
    int32_t * v2 = (int32_t *)(a1 + 4); // 0x2a68c
    if (*v2 == 0) {
        // 0x2a70d
        return 10;
    }
    int32_t v3 = *(int32_t *)(a1 + 16); // 0x2a692
    if (v3 == 0 || a2 == 0 || a3 == 0) {
        // 0x2a70d
        return 10;
    }
    // 0x2a6a3
    if (g49 != 1) {
        // 0x2a70d
        return (int64_t)&g11 & 0xffffffff;
    }
    // 0x2a6b2
    *(int32_t *)a3 = v3;
    int64_t v4 = function_619f2(function_2a56d(), *v1, *v2, a2, a3); // 0x2a6dc
    int64_t result = 0x7fffffff; // 0x2a6ea
    if ((int32_t)v4 < 7) {
        uint32_t v5 = *(int32_t *)((4 * v4 & 0x3fffffffc) + (int64_t)&g13); // 0x2a6f5
        result = v5;
    }
    // 0x2a703
    return result;
}

// Address range: 0x2a711 - 0x2a73a
int64_t function_2a711(int64_t a1, int64_t a2) {
    // 0x2a711
    if (a1 == 0 || a2 == 0) {
        // 0x2a739
        return 10;
    }
    // 0x2a71b
    if (g49 != 1) {
        // 0x2a739
        return (int64_t)&g11;
    }
    // 0x2a729
    *(int32_t *)a2 = *(int32_t *)(a1 + 4) + 22;
    return 0;
}

// Address range: 0x2a73a - 0x2a78b
int64_t function_2a73a(void) {
    // 0x2a73a
    if (((int32_t)&g48 < 1 || (int32_t)&g48 == 1) ^ true) {
        // 0x2a785
        return (int64_t)&g11;
    }
    // 0x2a748
    int64_t v1; // 0x2a73a
    function_2263e(function_286ac(function_2ce9a(v1)));
    g49 = 0;
    g47 = 0;
    g44 = 0;
    return 0;
}

// Address range: 0x2a78b - 0x2a98d
int64_t function_2a78b(void) {
    // 0x2a78b
    int64_t v1; // bp-72, 0x2a78b
    int64_t v2 = (int64_t)&v1; // 0x2a78c
    __readfsqword(40);
    int64_t v3; // bp-68, 0x2a78b
    int64_t v4; // 0x2a78b
    if (g49 != 1) {
        if (g49 == 2) {
            // 0x2a849
            int64_t v5; // 0x2a78b
            if (g46 != 0) {
                // 0x2a853
                v3 = 0;
                int64_t v6 = function_286ac(function_2ce9a(v4)); // 0x2a871
                int64_t v7 = v2 + 8; // 0x2a876
                int64_t v8 = function_2293e(v6, v7, &v3); // 0x2a881
                v5 = v6;
                if ((char)v8 != 0) {
                    int64_t v9 = v2 + 32; // 0x2a893
                    *(int64_t *)v9 = g44;
                    *(int64_t *)(v2 + 40) = *(int64_t *)v7;
                    *(int32_t *)(v2 + 48) = *(int32_t *)(v2 | 4);
                    int64_t v10 = function_286ac(function_2ce9a((char)function_48bde0(0) == 0 ? v9 : 0)); // 0x2a871
                    int64_t v11 = function_2293e(v10, v7, &v3); // 0x2a881
                    v5 = v10;
                    while ((char)v11 != 0) {
                        // 0x2a88a
                        *(int64_t *)v9 = g44;
                        *(int64_t *)(v2 + 40) = *(int64_t *)v7;
                        *(int32_t *)(v2 + 48) = *(int32_t *)(v2 | 4);
                        v10 = function_286ac(function_2ce9a((char)function_48bde0(0) == 0 ? v9 : 0));
                        v11 = function_2293e(v10, v7, &v3);
                        v5 = v10;
                    }
                }
            }
            // 0x2a8d2
            if (g45 != 0) {
                int64_t v12 = v2 + 8; // 0x2a8e0
                int64_t * v13 = (int64_t *)v12; // 0x2a8e0
                *v13 = 0;
                int64_t * v14 = (int64_t *)(v2 + 16); // 0x2a8e9
                *v14 = 0;
                *(int64_t *)(v2 + 24) = 0;
                if ((char)function_23344(function_286ac(function_2ce9a(v5)), v12) != 0) {
                    // 0x2a919
                    *(int64_t *)(v2 + 32) = g44;
                    int64_t v15 = *v13; // 0x2a92c
                    *(int64_t *)(v2 + 40) = v15;
                    *(int32_t *)(v2 + 48) = (int32_t)(*v14 - v15);
                    function_48bde0(0);
                }
                int64_t v16 = *v13; // 0x2a963
                if (v16 != 0) {
                    // 0x2a96d
                    function_4eeb50(v16);
                }
            }
        }
    } else {
        // 0x2a7af
        if (g47 != 0) {
            // 0x2a7bd
            v3 = 0;
            int64_t v17 = function_286ac(function_2ce9a(v4)); // 0x2a7db
            int64_t v18 = v2 + 8; // 0x2a7e0
            if ((char)function_2293e(v17, v18, &v3) != 0) {
                int64_t v19 = v2 + 32; // 0x2a801
                *(int64_t *)v19 = g44;
                *(int64_t *)(v2 + 40) = *(int64_t *)v18;
                *(int32_t *)(v2 + 48) = *(int32_t *)(v2 | 4);
                int64_t v20 = function_286ac(function_2ce9a((char)function_48bde0(0) == 0 ? v19 : 0)); // 0x2a7db
                while ((char)function_2293e(v20, v18, &v3) != 0) {
                    // 0x2a7f8
                    *(int64_t *)v19 = g44;
                    *(int64_t *)(v2 + 40) = *(int64_t *)v18;
                    *(int32_t *)(v2 + 48) = *(int32_t *)(v2 | 4);
                    v20 = function_286ac(function_2ce9a((char)function_48bde0(0) == 0 ? v19 : 0));
                }
            }
        }
    }
    int64_t result = 0; // 0x2a980
    if (*(int64_t *)(v2 + 56) != __readfsqword(40)) {
        // 0x2a982
        __stack_chk_fail();
        result = (int64_t)&g56;
    }
    // 0x2a987
    return result;
}

// Address range: 0x2a98d - 0x2a98e
int64_t function_2a98d(void) {
    // 0x2a98d
    int64_t result; // 0x2a98d
    return result;
}

// Address range: 0x2a98e - 0x2a994
int64_t function_2a98e(void) {
    // 0x2a98e
    return 16;
}

// Address range: 0x2a994 - 0x2a9bb
int64_t function_2a994(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 + 16);
    uint32_t result = *v1;
    *v1 = result - 1;
    if (result >= 0 == (result != 0)) {
        // 0x2a9ba
        return result;
    }
    // 0x2a9b5
    return function_4eeb50(a1);
}

// Address range: 0x2a9bb - 0x2a9c1
int64_t function_2a9bb(void) {
    // 0x2a9bb
    return 16;
}

// Address range: 0x2a9c1 - 0x2a9c7
int64_t function_2a9c1(void) {
    // 0x2a9c1
    return 16;
}

// Address range: 0x2a9c7 - 0x2a9cd
int64_t function_2a9c7(void) {
    // 0x2a9c7
    return 16;
}

// Address range: 0x2a9cd - 0x2a9d3
int64_t function_2a9cd(void) {
    // 0x2a9cd
    return 16;
}

// Address range: 0x2a9d3 - 0x2a9d4
int64_t function_2a9d3(void) {
    // 0x2a9d3
    int64_t result; // 0x2a9d3
    return result;
}

// Address range: 0x2a9d4 - 0x2a9d5
int64_t function_2a9d4(void) {
    // 0x2a9d4
    int64_t result; // 0x2a9d4
    return result;
}

// Address range: 0x2a9d5 - 0x2a9d6
int64_t function_2a9d5(void) {
    // 0x2a9d5
    int64_t result; // 0x2a9d5
    return result;
}

// Address range: 0x2a9d6 - 0x2a9d7
int64_t function_2a9d6(void) {
    // 0x2a9d6
    int64_t result; // 0x2a9d6
    return result;
}

// Address range: 0x2a9d7 - 0x2a9d8
int64_t function_2a9d7(void) {
    // 0x2a9d7
    int64_t result; // 0x2a9d7
    return result;
}

// Address range: 0x2a9d8 - 0x2a9d9
int64_t function_2a9d8(void) {
    // 0x2a9d8
    int64_t result; // 0x2a9d8
    return result;
}

// Address range: 0x2a9d9 - 0x2a9da
int64_t function_2a9d9(void) {
    // 0x2a9d9
    int64_t result; // 0x2a9d9
    return result;
}

// Address range: 0x2a9da - 0x2a9db
int64_t function_2a9da(void) {
    // 0x2a9da
    int64_t result; // 0x2a9da
    return result;
}

// Address range: 0x2a9db - 0x2a9dc
int64_t function_2a9db(void) {
    // 0x2a9db
    int64_t result; // 0x2a9db
    return result;
}

// Address range: 0x2a9dc - 0x2a9dd
int64_t function_2a9dc(void) {
    // 0x2a9dc
    int64_t result; // 0x2a9dc
    return result;
}

// Address range: 0x2a9dd - 0x2a9de
int64_t function_2a9dd(void) {
    // 0x2a9dd
    int64_t result; // 0x2a9dd
    return result;
}

// Address range: 0x2a9de - 0x2aa00
int64_t function_2a9de(int64_t a1, int64_t a2) {
    // 0x2a9de
    return function_61562(function_2a56d(), a1, a2);
}

// Address range: 0x2aa00 - 0x2aa2f
int64_t function_2aa00(void) {
    // 0x2aa00
    __readfsqword(40);
    return function_1078ec();
}

// Address range: 0x2aa4d - 0x2aa50
int64_t function_2aa4d(int64_t a1) {
    // 0x2aa4d
    int64_t result; // 0x2aa4d
    return result;
}

// Address range: 0x2ab0f - 0x2ab12
int64_t function_2ab0f(void) {
    // 0x2ab0f
    int64_t result; // 0x2ab0f
    return result;
}

// Address range: 0x2ab5f - 0x2ab65
int64_t function_2ab5f(int64_t a1, int64_t a2) {
    // 0x2ab5f
    return function_ffffffffa57d088f();
}

// Address range: 0x2ab6b - 0x2ab6c
int64_t function_2ab6b(void) {
    // 0x2ab6b
    int64_t result; // 0x2ab6b
    return result;
}

// Address range: 0x2ab6d - 0x2ab72
int64_t function_2ab6d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2ab6d
    int64_t v1; // 0x2ab6d
    *(int32_t *)(v1 + 14) = (int32_t)a4;
    return function_2abc6((int64_t)&g56);
}

// Address range: 0x2ab74 - 0x2ab75
int64_t function_2ab74(int64_t a1) {
    // 0x2ab74
    int64_t result; // 0x2ab74
    return result;
}

// Address range: 0x2ab9f - 0x2abb8
int64_t function_2ab9f(int64_t a1, int64_t a2) {
    // 0x2ab9f
    *(int32_t *)(a2 + 0x7765c275) = (int32_t)a2;
    int64_t v1; // 0x2ab9f
    return v1 & -256 | (int64_t)*(char *)-0x19b870ff3fcc606f;
}

// Address range: 0x2abc6 - 0x2abc8
int64_t function_2abc6(int64_t a1) {
    // 0x2abc6
    int64_t v1; // 0x2abc6
    bool v2; // 0x2abc6
    return v1 & -0xff01 | 256 * (64 * (int64_t)v2 | 128 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2) | 512;
}

// Address range: 0x2ac15 - 0x2ac19
int64_t function_2ac15(int64_t a1) {
    // 0x2ac15
    int64_t result; // 0x2ac15
    return result;
}

// Address range: 0x2ac33 - 0x2ac3e
int64_t function_2ac33(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2ac33
    *(int32_t *)(a3 - 0x8050641) = (int32_t)a4;
    int64_t result; // 0x2ac33
    return result;
}

// Address range: 0x2ac76 - 0x2ac78
int64_t function_2ac76(void) {
    // 0x2ac76
    int64_t result; // 0x2ac76
    return result;
}

// Address range: 0x2aca9 - 0x2acaa
int64_t function_2aca9(void) {
    // 0x2aca9
    int64_t result; // 0x2aca9
    return result;
}

// Address range: 0x2acb2 - 0x2acb5
int64_t function_2acb2(int64_t a1) {
    // 0x2acb2
    int64_t result; // 0x2acb2
    return result;
}

// Address range: 0x2accc - 0x2acd7
int64_t function_2accc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2accc
    int64_t v1; // 0x2accc
    return (int64_t)(*(int32_t *)(a2 + 43) + (int32_t)v1 & -256 | 70);
}

// Address range: 0x2acd7 - 0x2acf4
int64_t function_2acd7(int64_t a1, int64_t a2) {
    // 0x2acd7
    bool v1; // 0x2acd7
    if (!v1) {
        function_2aca9();
    }
    // 0x2acd9
    __asm_sti();
    int64_t v2; // 0x2acd7
    __asm_fbld(*(float80_t *)&v2);
    return function_5e68a674();
}

// Address range: 0x2acf8 - 0x2ad03
int64_t function_2acf8(void) {
    // 0x2acf8
    int64_t v1; // 0x2acf8
    *(char *)v1 = 0;
    return function_444f8215();
}

// Address range: 0x2ad6a - 0x2ad76
int64_t function_2ad6a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2ad6a
    return function_ffffffffa2642099();
}

// Address range: 0x2ad76 - 0x2ad81
int64_t function_2ad76(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2ad76
    int64_t result; // 0x2ad76
    unsigned char v1 = (char)result;
    bool v2; // 0x2ad76
    char v3 = v2; // 0x2ad76
    unsigned char v4 = v3 + (char)a3; // 0x2ad76
    char v5 = v1 - v4; // 0x2ad76
    bool v6 = v2 ? v4 != -1 | v5 - v3 > v1 : v4 > v1; // 0x2ad76
    *(char *)a4 = v5;
    int64_t v7; // 0x2ad76
    *(int32_t *)a3 = *(int32_t *)&v7 - 0x633b4769 + (int32_t)v6;
    return result;
}

// Address range: 0x2ad82 - 0x2ad83
int64_t function_2ad82(void) {
    // 0x2ad82
    int64_t result; // 0x2ad82
    return result;
}

// Address range: 0x2adcf - 0x2ae1d
int64_t function_2adcf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5) {
    // 0x2adcf
    int64_t v1; // 0x2adcf
    *(int32_t *)a1 = (int32_t)(v1 & 0xffffff00 | (int64_t)__asm_in(126));
    int64_t result = v1 & 0xffffffff; // 0x2ae06
    if (v1 != __readfsqword(40)) {
        // 0x2ae08
        __stack_chk_fail();
        result = (int64_t)&g56;
    }
    // 0x2ae0d
    return result;
}

// Address range: 0x2ae1e - 0x2ae58
int64_t function_2ae1e(int64_t a1) {
    // 0x2ae1e
    function_2508e(a1 + 40);
    function_2508e(a1 + 32);
    function_2508e(a1 + 24);
    function_2508e(a1 + 16);
    function_2508e(a1 + 8);
    return function_2508e(a1);
}

// Address range: 0x2ae58 - 0x2aebf
int64_t function_2ae58(int64_t str, int64_t str2) {
    uint64_t v1 = function_24ded(str2); // 0x2ae6b
    uint64_t v2 = *(int64_t *)(str - 24); // 0x2ae70
    int64_t n = v2 < v1 ? v2 : v1; // 0x2ae7e
    if (n != 0) {
        int32_t memcmp_rc = memcmp((int64_t *)str, (int64_t *)str2, (int32_t)n); // 0x2ae8f
        if (memcmp_rc != 0) {
            // 0x2aeb6
            return memcmp_rc;
        }
    }
    uint64_t v3 = v2 - v1; // 0x2ae98
    int64_t result = 0x7fffffff; // 0x2aea7
    if (v3 <= 0x7fffffff) {
        int64_t v4 = v3 + 0x80000000; // 0x2aeac
        result = v4 < 0 == ((v4 ^ v3) & (v3 ^ -0x8000000000000000)) < 0 ? v3 & 0xffffffff : 0x80000000;
    }
    // 0x2aeb6
    return result;
}

// Address range: 0x2aec0 - 0x2aeea
int64_t function_2aec0(int64_t a1, int64_t a2) {
    // 0x2aec0
    return function_25c34(a1, a2, function_24ded(a2));
}

// Address range: 0x2aeea - 0x2af10
int64_t function_2aeea(int64_t a1) {
    // 0x2aeea
    function_448e6(a1 + (int64_t)&g55);
    function_72994(a1 + (int64_t)&g54);
    return function_448e6(a1 + 64);
}

// Address range: 0x2af10 - 0x2af1a
int64_t function_2af10(int64_t * a1, int64_t * a2, int64_t a3) {
    if ((int32_t)a3 == 1) {
        // 0x2af14
        *a1 = (int64_t)a2;
    }
    // 0x2af17
    return 0;
}

// Address range: 0x2af1a - 0x2b0ae
int64_t function_2af1a(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x2af29
    char * v2 = (char *)(a1 + 88); // 0x2af41
    char v3 = *v2; // 0x2af41
    *v2 = v3 == 0 ? 1 : v3;
    if (v3 == 0) {
        int64_t v4 = a1 + 136; // 0x2af51
        function_72b18(v4, 0);
        int64_t v5; // bp-152, 0x2af1a
        int64_t v6; // bp-184, 0x2af1a
        function_2af10(&v5, &v6, 2);
        function_7216c(v4, &v5, 250, 500);
        function_221a8(&v5);
        function_221a8(&v6);
    }
    int64_t result = 0; // 0x2b099
    if (v1 != __readfsqword(40)) {
        // 0x2b09b
        __stack_chk_fail();
        result = (int64_t)&g56;
    }
    // 0x2b0a0
    return result;
}

// Address range: 0x2b0ae - 0x2b130
int64_t function_2b0ae(int64_t a1) {
    // 0x2b0ae
    *(char *)(a1 + 16) = 0;
    *(int32_t *)(a1 + 20) = 0;
    *(int64_t *)a1 = (int64_t)&g34;
    *(int64_t *)(a1 + 24) = 0;
    *(int64_t *)(a1 + 32) = 0;
    *(int64_t *)(a1 + 40) = 0;
    *(int64_t *)(a1 + 8) = (int64_t)&g33;
    function_7293a(a1 + 48);
    *(char *)(a1 + 88) = 0;
    *(char *)(a1 + 89) = 0;
    *(int64_t *)(a1 + 96) = 0;
    *(int64_t *)(a1 + 104) = 0;
    *(int64_t *)(a1 + 112) = 0;
    *(int32_t *)(a1 + 120) = 0;
    *(int64_t *)(a1 + 124) = 0;
    return function_71c60(a1 + 136);
}

// Address range: 0x2b130 - 0x2b148
int64_t function_2b130(int64_t a1, int64_t a2) {
    int32_t v1 = a2;
    if (v1 == 0) {
        // 0x2b147
        int64_t result; // 0x2b130
        return result;
    }
    int64_t result2 = function_2b88e(v1); // 0x2b13a
    *(int32_t *)a2 = 0;
    return result2;
}

// Address range: 0x2b148 - 0x2b15f
int64_t function_2b148(int64_t a1) {
    int64_t v1 = function_2b60a() + 0xffffffff; // 0x2b155
    return v1 & 0xffffff00 | (int64_t)((int32_t)v1 < 2);
}

// Address range: 0x2b160 - 0x2b1e2
int64_t function_2b160(int64_t a1, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x2b168
    int32_t v2 = a2;
    if (a2 != 0 && v2 != 0) {
        // 0x2b185
        int64_t v3; // bp-40, 0x2b160
        function_729b6(&v3, a1 + 48);
        if ((int32_t)function_2b60a() == 1) {
            // 0x2b1a4
            if (*(int32_t *)(a1 + 124) == v2) {
                // 0x2b1ac
                if (*(int32_t *)(a2 + 4) == 1) {
                    int64_t v4 = a1 + 120; // 0x2b197
                    *(int32_t *)v4 = 2;
                    __asm_mfence(v4);
                }
            }
        }
        // 0x2b1bc
        function_729ce(&v3);
    }
    int64_t result = 0; // 0x2b1d2
    if (v1 != __readfsqword(40)) {
        // 0x2b1d4
        __stack_chk_fail();
        result = (int64_t)&g56;
    }
    // 0x2b1d9
    return result;
}

// Address range: 0x2b1e2 - 0x2b251
int64_t function_2b1e2(int64_t a1) {
    char * v1 = (char *)(a1 + 16); // 0x2b1ef
    if (*v1 % 2 != 0) {
        // 0x2b1f5
        function_2b64a(a1);
    }
    // 0x2b1fd
    *(int64_t *)(a1 + 24) = a1;
    *(int64_t *)(a1 + 40) = 0;
    *(int64_t *)(a1 + 32) = 0x2b160;
    int64_t v2 = function_2b776(); // 0x2b214
    int64_t v3 = a1; // 0x2b21c
    if (v2 != 0) {
        // 0x2b21e
        v3 = function_6746a(v2, "SteamAPI_RegisterCallback") == 0 ? v2 : a1;
    }
    int64_t result = 0; // 0x2b242
    if (*v1 % 2 != 0) {
        // 0x2b244
        *(char *)(a1 + 89) = 1;
        result = __asm_mfence(v3);
    }
    // 0x2b24d
    return result;
}

// Address range: 0x2b252 - 0x2b34a
int64_t function_2b252(int64_t a1) {
    int64_t v1 = __readfsqword(40); // 0x2b25d
    int32_t v2 = 0; // bp-36, 0x2b26d
    int64_t v3 = function_2b148(a1); // 0x2b275
    int64_t v4 = v3 % 256; // 0x2b27c
    int64_t v5 = v3; // 0x2b27f
    int64_t v6 = v4; // 0x2b27f
    if ((char)v3 == 0) {
        // 0x2b285
        if (*(char *)(a1 + 89) == 0) {
            // 0x2b28c
            function_2b1e2(a1);
        }
        int32_t * v7 = (int32_t *)(a1 + 124);
        if ((int32_t)function_2b60a() == 3) {
            // 0x2b2a2
            if (*v7 != 0) {
                int64_t v8 = a1 + 128; // 0x2b2a8
                function_2b130(a1, v8);
                *v7 = 0;
                *(int32_t *)v8 = *v7;
            }
        }
        int64_t v9 = a1 + 96; // 0x2b2c7
        int64_t * v10 = (int64_t *)v9; // 0x2b2c7
        int64_t * v11 = (int64_t *)(a1 + 104); // 0x2b2d7
        *v11 = *v10;
        function_2b674(v9, L"\n2");
        int64_t v12 = *v10; // 0x2b2e0
        int32_t v13 = function_2b858(v12, *v11 - v12, &v2); // 0x2b2f5
        *v7 = v13;
        int32_t * v14 = (int32_t *)(a1 + 120);
        if (v13 == 0) {
            // 0x2b317
            *v14 = 0;
            __asm_mfence(v12);
            int64_t v15 = *v10; // 0x2b321
            *v11 = v15;
            v5 = v15;
            v6 = v4;
        } else {
            // 0x2b2fc
            *v14 = 1;
            __asm_mfence(v9);
            v5 = function_2b674(v9, (int32_t *)(int64_t)v2);
            v6 = 1;
        }
    }
    int64_t result = v6 | v5 & -256; // 0x2b33a
    if (v1 != __readfsqword(40)) {
        // 0x2b33c
        __stack_chk_fail();
        result = (int64_t)&g56;
    }
    // 0x2b341
    return result;
}

// Address range: 0x2b34a - 0x2b465
int64_t function_2b34a(int64_t a1, int64_t a2) {
    int64_t v1 = a1 + 48; // 0x2b353
    int64_t v2 = __readfsqword(40); // 0x2b368
    int64_t v3; // bp-56, 0x2b34a
    function_729b6(&v3, v1);
    int64_t * v4 = (int64_t *)(a2 + 8); // 0x2b384
    *v4 = v1;
    if ((int32_t)function_2b60a() != 0) {
        // 0x2b39f
        if ((int32_t)function_2b60a() == 3) {
            goto lab_0x2b391;
        } else {
            goto lab_0x2b3ac;
        }
    } else {
        goto lab_0x2b391;
    }
  lab_0x2b391:;
    int64_t v5 = 0; // 0x2b39b
    if ((char)function_2b252(a1) != 0) {
        goto lab_0x2b3ac;
    } else {
        goto lab_0x2b43b;
    }
  lab_0x2b3ac:
    // 0x2b3ac
    if ((int32_t)function_2b60a() == 1) {
        goto lab_0x2b3c9;
    } else {
        // 0x2b3b8
        v5 = 0;
        if ((int32_t)function_2b60a() == 2) {
            goto lab_0x2b3c9;
        } else {
            goto lab_0x2b43b;
        }
    }
  lab_0x2b43b:;
    int64_t result = function_729ce(&v3) & -256 | v5; // 0x2b453
    if (v2 != __readfsqword(40)) {
        // 0x2b455
        __stack_chk_fail();
        result = (int64_t)&g56;
    }
    // 0x2b45a
    return result;
  lab_0x2b3c9:
    // 0x2b3c9
    *v4 = 0;
    int64_t * v6 = (int64_t *)(a2 + 16); // 0x2b3d1
    *v6 = 0;
    int64_t * v7 = (int64_t *)a2; // 0x2b3dd
    *v7 = 0;
    int64_t * v8 = (int64_t *)(a1 + 96); // 0x2b3e5
    *v7 = *v8;
    *v8 = 0;
    int64_t * v9 = (int64_t *)(a1 + 104); // 0x2b3f8
    *v4 = *v9;
    *v9 = *v4;
    int64_t * v10 = (int64_t *)(a1 + 112); // 0x2b408
    *v6 = *v10;
    *v10 = *v6;
    if (v1 != 0) {
        // 0x2b41a
        function_4eeb50(v1);
    }
    // 0x2b41f
    *v9 = *v8;
    *(int32_t *)(a1 + 120) = 3;
    __asm_mfence(a1);
    function_2b252(a1);
    v5 = 1;
    goto lab_0x2b43b;
}

// Address range: 0x2b466 - 0x2b4b6
int64_t function_2b466(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x2b46c
    char * v2 = (char *)(a1 + 88); // 0x2b483
    char v3 = *v2; // 0x2b483
    *v2 = v3 == 1 ? 0 : v3;
    if (v3 == 1) {
        // 0x2b490
        function_7260a(a1 + 136);
    }
    int64_t result = 0; // 0x2b4aa
    if (v1 != __readfsqword(40)) {
        // 0x2b4ac
        __stack_chk_fail();
        result = (int64_t)&g56;
    }
    // 0x2b4b1
    return result;
}

// Address range: 0x2b4b6 - 0x2b5a2
int64_t function_2b4b6(int64_t a1) {
    int64_t v1 = a1 + 48; // 0x2b4bd
    int64_t v2 = a1 + 136; // 0x2b4c5
    int64_t v3 = a1 + 8; // 0x2b4cf
    int64_t v4 = __readfsqword(40); // 0x2b4d7
    *(int64_t *)a1 = (int64_t)&g34;
    int64_t v5; // bp-56, 0x2b4b6
    function_729b6(&v5, v1);
    function_7260a(v2);
    char * v6 = (char *)(a1 + 89); // 0x2b504
    if (*v6 != 0) {
        // 0x2b50b
        function_2b64a(v3);
        *v6 = 0;
        __asm_mfence(v3);
    }
    // 0x2b51a
    function_2b130(a1, a1 + 128);
    function_2b130(a1, a1 + 124);
    int64_t * v7 = (int64_t *)(a1 + 96); // 0x2b535
    *(int64_t *)(a1 + 104) = *v7;
    *(int32_t *)(a1 + 120) = 0;
    __asm_mfence((int64_t)&v5);
    function_729ce(&v5);
    function_7259e(v2);
    int64_t v8 = *v7; // 0x2b557
    if (v8 != 0) {
        // 0x2b560
        function_4eeb50(v8);
    }
    // 0x2b565
    function_72994(v1);
    *(int64_t *)v3 = (int64_t)&g32;
    function_2b60e(v3);
    int64_t result = 0; // 0x2b58e
    if (v4 != __readfsqword(40)) {
        // 0x2b590
        __stack_chk_fail();
        result = (int64_t)&g56;
    }
    // 0x2b595
    return result;
}

// Address range: 0x2b5a2 - 0x2b5b9
int64_t function_2b5a2(int64_t a1) {
    // 0x2b5a2
    function_2b4b6(a1);
    return function_4eeb30(a1, &g9);
}

// Address range: 0x2b5ba - 0x2b5db
int64_t function_2b5ba(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = function_2b252(a1); // 0x2b5be
    int64_t v2 = v1; // 0x2b5c7
    int64_t v3 = 1; // 0x2b5c7
    if ((char)v1 != 0) {
        // 0x2b5c9
        v2 = function_72588(a1 + 136);
        v3 = 0;
    }
    // 0x2b5d7
    return v3 | v2 & -256;
}

// Address range: 0x2b5db - 0x2b5e0
int64_t function_2b5db(int64_t a1, int64_t a2) {
    // 0x2b5db
    int64_t v1; // 0x2b5db
    return function_2b5ba(a2, a2, v1);
}

// Address range: 0x2b5e0 - 0x2b5fd
int64_t function_2b5e0(int64_t a1) {
    uint64_t v1 = *(int64_t *)(a1 + 24); // 0x2b5e0
    int64_t result = v1; // 0x2b5ee
    if (v1 % 2 != 0) {
        int64_t v2 = *(int64_t *)(*(int64_t *)(a1 + 16) + *(int64_t *)(a1 + 32)); // 0x2b5f0
        result = *(int64_t *)(v1 - 1 + v2);
    }
    // 0x2b5f8
    return result;
}

// Address range: 0x2b5fe - 0x2b603
int64_t function_2b5fe(int64_t result) {
    // 0x2b5fe
    return result;
}

// Address range: 0x2b604 - 0x2b60a
int64_t function_2b604(void) {
    // 0x2b604
    return 8;
}

// Address range: 0x2b60a - 0x2b60d
int64_t function_2b60a(void) {
    // 0x2b60a
    int64_t v1; // 0x2b60a
    return v1 & 0xffffffff;
}

// Address range: 0x2b60e - 0x2b649
int64_t function_2b60e(int64_t a1) {
    // 0x2b60e
    *(int64_t *)a1 = (int64_t)&g38;
    if (*(char *)(a1 + 8) % 2 == 0) {
        // 0x2b640
        return (int64_t)&g38;
    }
    int64_t v1 = function_2b776(); // 0x2b622
    int64_t result = 0; // 0x2b62a
    if (v1 != 0) {
        // 0x2b62c
        result = function_6746a(v1, "SteamAPI_UnregisterCallback");
    }
    // 0x2b640
    return result;
}

// Address range: 0x2b64a - 0x2b674
int64_t function_2b64a(int64_t a1) {
    int64_t v1 = function_2b776(); // 0x2b64e
    int64_t result = 0; // 0x2b656
    if (v1 != 0) {
        // 0x2b658
        result = function_6746a(v1, "SteamAPI_UnregisterCallback");
    }
    // 0x2b66c
    return result;
}

// Address range: 0x2b674 - 0x2b768
int64_t function_2b674(int64_t result, int32_t * a2) {
    uint64_t v1 = (int64_t)a2;
    int64_t * v2 = (int64_t *)(result + 8); // 0x2b683
    int64_t v3 = *v2; // 0x2b683
    uint64_t v4 = v3 - result; // 0x2b68d
    if (v4 >= v1) {
        // 0x2b752
        if (v4 > v1) {
            // 0x2b754
            *v2 = v1 + result;
        }
        // 0x2b75b
        return result;
    }
    uint64_t v5 = v1 - v4; // 0x2b69c
    if (v5 == 0) {
        // 0x2b75b
        return result;
    }
    int64_t * v6 = (int64_t *)(result + 16); // 0x2b6a5
    if (v5 <= *v6 - v3) {
        // 0x2b6b1
        __asm_rep_stosb_memset((char *)v3, 0, v5);
        bool v7; // 0x2b674
        *v2 = v5 * (v7 ? -1 : 1) + v3;
        // 0x2b75b
        return 0;
    }
    if (v5 > -1 - v4) {
        // 0x2b6cf
        function_542590("vector::_M_default_append");
    }
    int64_t v8 = -1; // 0x2b6e8
    int64_t v9; // 0x2b674
    int64_t v10; // 0x2b674
    if (v8 < (v5 >= v4 ? v5 : v4)) {
        goto lab_0x2b6f8;
    } else {
        // 0x2b6ea
        v10 = v8;
        v9 = 0;
        if (v8 != 0) {
            goto lab_0x2b6f8;
        } else {
            goto lab_0x2b70d;
        }
    }
  lab_0x2b6f8:;
    int64_t v11 = function_4efd30(v8); // 0x2b700
    v10 = v8;
    v9 = v11;
    goto lab_0x2b70d;
  lab_0x2b70d:;
    int64_t v12 = v9 + v4; // 0x2b70d
    __asm_rep_stosb_memset((char *)v12, 0, v5);
    int64_t v13 = *v2 - v12; // 0x2b71e
    int64_t result2; // 0x2b674
    if (v13 == 0) {
        // 0x2b730
        result2 = 0;
        if (v12 == 0) {
            goto lab_0x2b73d;
        } else {
            // 0x2b735
            result2 = function_4eeb50(v12);
            goto lab_0x2b73d;
        }
    } else {
        // 0x2b723
        memmove((int64_t *)v9, (int64_t *)v12, (int32_t)v13);
        // 0x2b735
        result2 = function_4eeb50(v12);
        goto lab_0x2b73d;
    }
  lab_0x2b73d:
    // 0x2b73d
    *(int64_t *)result = v9;
    *v6 = v9 + v10;
    *v2 = v9 + v1;
    // 0x2b75b
    return result2;
}

// Address range: 0x2b768 - 0x2b769
int64_t function_2b768(void) {
    // 0x2b768
    int64_t result; // 0x2b768
    return result;
}

// Address range: 0x2b76a - 0x2b76b
int64_t function_2b76a(void) {
    // 0x2b76a
    int64_t result; // 0x2b76a
    return result;
}

// Address range: 0x2b76c - 0x2b770
int64_t function_2b76c(int64_t result) {
    // 0x2b76c
    return result;
}

// Address range: 0x2b770 - 0x2b771
int64_t function_2b770(void) {
    // 0x2b770
    int64_t result; // 0x2b770
    return result;
}

// Address range: 0x2b772 - 0x2b775
int64_t function_2b772(void) {
    // 0x2b772
    return 0;
}

// Address range: 0x2b776 - 0x2b79a
int64_t function_2b776(void) {
    int64_t result = function_6747c("libsteam_api64.so"); // 0x2b781
    if (result != 0) {
        // 0x2b798
        return result;
    }
    // 0x2b78b
    return function_6747c("libsteam_api.so");
}

// Address range: 0x2b79a - 0x2b858
int64_t function_2b79a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = function_2b776(); // 0x2b7a4
    if (v1 == 0) {
        // 0x2b84d
        return 0;
    }
    // 0x2b7b7
    if (function_6746a(v1, "SteamClient") != 0) {
        // 0x2b7ce
        if (function_6746a(v1, "SteamAPI_GetHSteamPipe") != 0) {
            int64_t result = function_6746a(v1, "SteamAPI_GetHSteamUser"); // 0x2b7ef
            if (result != 0) {
                // 0x2b7fc
                if ((int32_t)result != 0 && (int32_t)result != 0) {
                    // 0x2b835
                    function_6745f(v1);
                    // 0x2b84d
                    return result;
                }
            }
        }
    }
    // 0x2b835
    function_6745f(v1);
    // 0x2b84d
    return 0;
}

// Address range: 0x2b858 - 0x2b88e
int64_t function_2b858(int64_t a1, int64_t a2, int32_t * a3) {
    // 0x2b858
    int64_t v1; // 0x2b858
    return function_2b79a(a1, a2, (int64_t)a3, v1);
}

// Address range: 0x2b88e - 0x2b8af
int64_t function_2b88e(int32_t a1) {
    // 0x2b88e
    int64_t v1; // 0x2b88e
    return function_2b79a((int64_t)a1, v1, v1, v1);
}

// Address range: 0x2b8b0 - 0x2b8e7
int64_t function_2b8b0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2b8b0
    __readfsqword(40);
    return function_10e519();
}

// Address range: 0x2b93d - 0x2b958
int64_t function_2b93d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2b93d
    int64_t v1; // 0x2b93d
    uint64_t result = v1;
    char * v2 = (char *)(result + 58); // 0x2b93d
    *v2 = *v2 + (char)(result / 256);
    __asm_out((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x2b961 - 0x2b964
int64_t function_2b961(void) {
    // 0x2b961
    int64_t result; // 0x2b961
    return result;
}

// Address range: 0x2b97e - 0x2b994
int64_t function_2b97e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2b97e
    int64_t v1; // 0x2b97e
    *(char *)a4 = (char)(v1 ^ v1);
    unknown_ffffffffdee3dc3d();
    bool v2; // 0x2b97e
    int64_t v3 = v2 ? -4 : 4; // 0x2b98d
    return function_ffffffff9e60ee95(v3 + a1, v3 + a2);
}

// Address range: 0x2b9a6 - 0x2b9a7
int64_t function_2b9a6(int64_t a1) {
    // 0x2b9a6
    int64_t result; // 0x2b9a6
    return result;
}

// Address range: 0x3ff6e - 0x4096a
int64_t function_3ff6e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    if (a1 == 0) {
        if (a3 != 0) {
            // 0x3ff78
            *(int64_t *)a3 = 0;
        }
        // 0x3ff7f
        if (a5 == 0) {
            // 0x4095a
            return 0xfffffffe;
        }
        // 0x3ff8d
        *(int64_t *)a5 = 0;
        return 0xfffffffe;
    }
    // 0x3ff95
    *(int64_t *)(a1 + 136) = a2;
    *(int64_t *)(a1 + 152) = a3;
    *(int64_t *)(a1 + 144) = a4;
    *(int64_t *)(a1 + 160) = a5;
    int64_t * v1 = (int64_t *)(a1 + 176); // 0x3ffc4
    *v1 = a2;
    int64_t * v2 = (int64_t *)(a1 + 184); // 0x3ffd4
    *v2 = a3;
    *(int64_t *)(a1 + 192) = 0;
    int32_t v3 = a6; // 0x3ffe6
    *(int32_t *)(a1 + 168) = v3;
    int64_t v4; // 0x3ff6e
    int32_t v5; // 0x3ff6e
    int32_t v6; // 0x3ff6e
    int32_t v7; // 0x3ff6e
    int32_t v8; // 0x3ff6e
    int64_t v9; // 0x3ff6e
    int64_t v10; // 0x3ff6e
    int64_t v11; // 0x3ff6e
    int64_t v12; // 0x3ff6e
    int64_t v13; // 0x3ff6e
    int64_t v14; // 0x3ff6e
    int64_t v15; // 0x3ff6e
    int64_t v16; // 0x3ff6e
    int64_t v17; // 0x3ff6e
    int64_t v18; // 0x3ff6e
    int64_t v19; // 0x3ff6e
    int64_t v20; // 0x3ff6e
    int64_t v21; // 0x3ff6e
    int64_t v22; // 0x3ff6e
    int64_t v23; // 0x3ff6e
    int64_t v24; // 0x3ff6e
    int64_t v25; // 0x3ff6e
    int64_t v26; // 0x3ff6e
    int64_t v27; // 0x3ff6e
    int64_t v28; // 0x3ff6e
    int64_t v29; // 0x3ff6e
    int64_t v30; // 0x3ff6e
    int64_t v31; // 0x3ff6e
    int64_t result; // 0x4092a
    int32_t * v32; // 0x4009b
    int32_t * v33; // 0x3ff6e
    int32_t * v34; // 0x3ff6e
    int32_t * v35; // 0x3ff6e
    int64_t v36; // 0x3ff6e
    int64_t v37; // 0x3ff6e
    int64_t v38; // 0x3ff6e
    int32_t * v39; // 0x3ff6e
    int32_t * v40; // 0x3ff6e
    int64_t * v41; // 0x3ff6e
    int32_t * v42; // 0x3ff6e
    int32_t * v43; // 0x3ff6e
    int64_t * v44; // 0x3ff6e
    int32_t * v45; // 0x3ff6e
    int64_t v46; // 0x3ff6e
    int64_t v47; // 0x3ff6e
    int32_t * v48; // 0x3ff6e
    int32_t * v49; // 0x40006
    uint32_t v50; // 0x40277
    int64_t v51; // 0x40277
    int32_t v52; // 0x4027b
    uint32_t v53; // 0x40297
    int64_t v54; // 0x40297
    int32_t v55; // 0x40085
    int32_t * v56; // 0x40087
    int32_t v57; // 0x3ff6e
    if ((a5 || a4) == 0) {
        // 0x40006
        v49 = (int32_t *)(a1 + 132);
        if (*v49 != 0) {
            goto lab_0x40044;
        } else {
            int32_t * v58 = (int32_t *)(a1 + 128); // 0x40013
            int32_t v59 = *v58; // 0x40013
            if (v3 != 4 == (v59 != 0)) {
                goto lab_0x40044;
            } else {
                if (a2 == 0 == (a3 != 0)) {
                    // 0x40049
                    *(int64_t *)a3 = 0;
                    goto lab_0x40050;
                } else {
                    if (a5 == 0 || a4 != 0) {
                        // 0x40070
                        v55 = v3 == 4;
                        v56 = (int32_t *)(a1 + 116);
                        *v58 = v59 | v55;
                        if (*v56 != 0) {
                            // 0x40927
                            result = function_3dcac(a1);
                            *v49 = (int32_t)result;
                            // 0x4095a
                            return result;
                        }
                        // 0x4009b
                        v32 = (int32_t *)(a1 + 120);
                        if (*v32 != 0) {
                            // 0x40927
                            result = function_3dcac(a1);
                            *v49 = (int32_t)result;
                            // 0x4095a
                            return result;
                        }
                        // 0x400aa
                        v33 = (int32_t *)(a1 + 40);
                        v34 = (int32_t *)(a1 + 44);
                        v35 = (int32_t *)(a1 + 36);
                        v36 = a1 + 200;
                        v37 = a1 + (int64_t)"D$(";
                        v38 = a1 + (int64_t)&g2;
                        v39 = (int32_t *)(a1 + 104);
                        v40 = (int32_t *)(a1 + 16);
                        v41 = (int64_t *)(a1 + 48);
                        v42 = (int32_t *)(a1 + 84);
                        v43 = (int32_t *)(a1 + 108);
                        v44 = (int64_t *)(a1 + 56);
                        v45 = (int32_t *)(a1 + 80);
                        v46 = a1 + (int64_t)&g31;
                        v47 = a1 + (int64_t)&g36;
                        v48 = (int32_t *)(a1 + 100);
                        v4 = -(int64_t)&g53 - a1;
                        v27 = a3;
                        v18 = a3;
                        v10 = a2;
                        while (true) {
                          lab_0x400aa_2:;
                            int64_t v60 = v10;
                            int64_t v61 = v18;
                            int32_t v62; // 0x3ff6e
                            if (v61 != 0) {
                                // 0x400aa
                                v62 = *v33;
                            } else {
                                // 0x400af
                                if (v3 == 0) {
                                    // break -> 0x40882
                                    break;
                                }
                                int32_t v63 = *v33; // 0x400b8
                                v62 = v63;
                                v31 = v27;
                                v20 = v61;
                                v12 = v60;
                                if (v63 == 0) {
                                    // break -> 0x40882
                                    break;
                                }
                            }
                            int32_t v64 = v62; // 0x400c2
                            uint32_t v65 = *v34; // 0x400c6
                            int32_t v66; // 0x3ff6e
                            int64_t v67; // 0x3ff6e
                            int64_t v68; // 0x3ff6e
                            if (v65 + v64 < 2) {
                                int32_t v69 = v64; // 0x40247
                                int64_t v70 = v60; // 0x40247
                                int64_t v71 = v61; // 0x40247
                                v66 = v64;
                                v68 = v61;
                                v67 = v60;
                                if (v61 != 0 == v64 < 258) {
                                    uint32_t v72 = *v35; // 0x401a9
                                    unsigned char v73 = *(char *)v70; // 0x401af
                                    uint32_t v74 = v72 + v69 & (int32_t)&g29; // 0x401bb
                                    int64_t v75 = v74; // 0x401bb
                                    *(char *)(v36 + v75) = v73;
                                    if (v74 < 257) {
                                        // 0x401d2
                                        *(char *)((v75 + (int64_t)(int32_t)&g30 & 0xfffffffc) + v36) = v73;
                                    }
                                    int32_t v76 = v69 + 1; // 0x401df
                                    *v33 = v76;
                                    int32_t v77 = v76; // 0x401eb
                                    int64_t v78; // 0x401ed
                                    int64_t v79; // 0x401ef
                                    unsigned char v80; // 0x401fb
                                    int64_t v81; // 0x40205
                                    unsigned char v82; // 0x4020b
                                    int16_t * v83; // 0x4022b
                                    if (v76 + v65 >= 3) {
                                        // 0x401ed
                                        v78 = (int64_t)v72 + (int64_t)v76;
                                        v79 = v78 + 0xfffffffd;
                                        v80 = *(char *)((v78 + 0xfffffffe & (int64_t)(int32_t)&g29) + v36);
                                        v81 = v79 & (int64_t)(int32_t)&g29;
                                        v82 = *(char *)(v81 + v36);
                                        v83 = (int16_t *)(2 * ((32 * (int64_t)v80 ^ (int64_t)v73 ^ 1024 * (int64_t)v82) & (int64_t)(int32_t)&g29) + v37);
                                        *(int16_t *)(2 * v81 + v38) = *v83;
                                        *v83 = (int16_t)v79;
                                        v77 = *v33;
                                    }
                                    int64_t v84 = v70 + 1; // 0x401ac
                                    int64_t v85 = v71 - 1; // 0x401b5
                                    v69 = v77;
                                    v70 = v84;
                                    v71 = v85;
                                    v66 = v77;
                                    v68 = v85;
                                    v67 = v84;
                                    while (v85 != 0 == v77 < 258) {
                                        // 0x401a9
                                        v72 = *v35;
                                        v73 = *(char *)v70;
                                        v74 = v72 + v69 & (int32_t)&g29;
                                        v75 = v74;
                                        *(char *)(v36 + v75) = v73;
                                        if (v74 < 257) {
                                            // 0x401d2
                                            *(char *)((v75 + (int64_t)(int32_t)&g30 & 0xfffffffc) + v36) = v73;
                                        }
                                        // 0x401df
                                        v76 = v69 + 1;
                                        *v33 = v76;
                                        v77 = v76;
                                        if (v76 + v65 >= 3) {
                                            // 0x401ed
                                            v78 = (int64_t)v72 + (int64_t)v76;
                                            v79 = v78 + 0xfffffffd;
                                            v80 = *(char *)((v78 + 0xfffffffe & (int64_t)(int32_t)&g29) + v36);
                                            v81 = v79 & (int64_t)(int32_t)&g29;
                                            v82 = *(char *)(v81 + v36);
                                            v83 = (int16_t *)(2 * ((32 * (int64_t)v80 ^ (int64_t)v73 ^ 1024 * (int64_t)v82) & (int64_t)(int32_t)&g29) + v37);
                                            *(int16_t *)(2 * v81 + v38) = *v83;
                                            *v83 = (int16_t)v79;
                                            v77 = *v33;
                                        }
                                        // 0x40241
                                        v84 = v70 + 1;
                                        v85 = v71 - 1;
                                        v69 = v77;
                                        v70 = v84;
                                        v71 = v85;
                                        v66 = v77;
                                        v68 = v85;
                                        v67 = v84;
                                    }
                                }
                            } else {
                                int32_t v86 = *v35 + v64; // 0x400d9
                                uint32_t v87 = v86 - 2; // 0x400dc
                                unsigned char v88 = *(char *)(v36 + (int64_t)(v86 - 1 & (int32_t)&g29)); // 0x400f1
                                unsigned char v89 = *(char *)(v36 + (int64_t)(v87 & (int32_t)&g29)); // 0x400fe
                                uint64_t v90 = (int64_t)(258 - v64); // 0x40110
                                int64_t v91 = v61 < v90 ? v61 : v90; // 0x40116
                                int64_t v92 = v61 - v91; // 0x4011e
                                int32_t v93 = v64 + (int32_t)v91; // 0x40121
                                *v33 = v93;
                                v66 = v93;
                                v68 = v92;
                                v67 = v60;
                                if (v91 != 0) {
                                    int64_t v94 = v91 + v60; // 0x4011a
                                    int64_t v95 = v60; // 0x40130
                                    int64_t v96 = v87; // 0x3ff6e
                                    int64_t v97 = 32 * (int64_t)v89 ^ (int64_t)v88; // 0x40174
                                    uint64_t v98 = (int64_t)(v86 & (int32_t)&g29);
                                    unsigned char v99 = *(char *)v95; // 0x40133
                                    *(char *)(v98 + v36) = v99;
                                    if (v98 < 257) {
                                        // 0x4014c
                                        *(char *)((v98 + (int64_t)(int32_t)&g30 & 0xffffffff) + v36) = v99;
                                    }
                                    // 0x4015b
                                    v95++;
                                    v97 = (32 * v97 ^ (int64_t)v99) & (int64_t)(int32_t)&g29;
                                    int16_t * v100 = (int16_t *)(2 * v97 + v37); // 0x40181
                                    int16_t v101 = *v100; // 0x40181
                                    *(int16_t *)(2 * (v96 & (int64_t)(int32_t)&g29) + v38) = v101;
                                    *v100 = (int16_t)v96;
                                    v96 = v96 + 1 & 0xffffffff;
                                    int64_t v102 = v98 + 1 & (int64_t)(int32_t)&g29; // 0x4012a
                                    while (v94 != v95) {
                                        // 0x40130
                                        v98 = v102;
                                        v99 = *(char *)v95;
                                        *(char *)(v98 + v36) = v99;
                                        if (v98 < 257) {
                                            // 0x4014c
                                            *(char *)((v98 + (int64_t)(int32_t)&g30 & 0xffffffff) + v36) = v99;
                                        }
                                        // 0x4015b
                                        v95++;
                                        v97 = (32 * v97 ^ (int64_t)v99) & (int64_t)(int32_t)&g29;
                                        v100 = (int16_t *)(2 * v97 + v37);
                                        v101 = *v100;
                                        *(int16_t *)(2 * (v96 & (int64_t)(int32_t)&g29) + v38) = v101;
                                        *v100 = (int16_t)v96;
                                        v96 = v96 + 1 & 0xffffffff;
                                        v102 = v98 + 1 & (int64_t)(int32_t)&g29;
                                    }
                                    // 0x40127
                                    v66 = *v33;
                                    v68 = v92;
                                    v67 = v94;
                                }
                            }
                            // 0x4024d
                            v11 = v67;
                            v19 = v68;
                            uint32_t v103 = v66; // 0x4024d
                            uint32_t v104 = (int32_t)&g30 - v103; // 0x40256
                            uint32_t v105 = v104 > v65 ? v65 : v104; // 0x4025b
                            *v34 = v105;
                            if (v103 <= 257 && v3 == 0) {
                                // 0x40882
                                v31 = v105;
                                v20 = v19;
                                v12 = v11;
                                goto lab_0x40882_2;
                            }
                            // 0x40277
                            v50 = *v39;
                            v51 = v50;
                            v52 = *v40;
                            int32_t v106 = *v35; // 0x40283
                            int64_t v107 = v50 != 0 ? v51 : 2; // 0x4028f
                            v53 = v106 & (int32_t)&g29;
                            v54 = v53;
                            if ((v52 & 0x90000) == 0) {
                                uint32_t v108 = (int32_t)v107; // 0x402f9
                                v17 = v107;
                                v25 = 0;
                                if (v103 > v108) {
                                    int32_t v109 = *(int32_t *)(a1 + 4 + (v108 < 32 ? 16 : 20)) - 1; // 0x40350
                                    v17 = v107;
                                    v25 = 0;
                                    if (v109 == 0) {
                                        goto lab_0x404e9;
                                    } else {
                                        int64_t v110 = v103; // 0x4024d
                                        int64_t v111 = v36 + v54; // 0x4031f
                                        char * v112 = (char *)v111;
                                        v6 = v109;
                                        v28 = v54;
                                        v21 = 0;
                                        v13 = v107;
                                        while (true) {
                                          lab_0x4035a_2:
                                            // 0x4035a
                                            v14 = v13;
                                            v22 = v21;
                                            int64_t v113 = v14 + v54;
                                            char v114 = *(char *)((v113 & 0xffffffff) + v36);
                                            char v115 = *(char *)((v113 + 0xffffffff & 0xffffffff) + v36);
                                            v57 = v14;
                                            v7 = v6;
                                            v29 = v28;
                                            uint32_t v116; // 0x3ff6e
                                            uint32_t v117; // 0x3ff6e
                                            while (true) {
                                              lab_0x4035a:;
                                                int32_t v118 = v7; // 0x40350
                                                int64_t v119 = v29; // 0x3ff6e
                                                int32_t v120; // 0x3ff6e
                                                int64_t v121; // 0x3ff6e
                                                while (true) {
                                                    int64_t v122 = v119;
                                                    uint16_t v123 = *(int16_t *)(2 * v122 + v38); // 0x4035a
                                                    v5 = v57;
                                                    v16 = v14;
                                                    v24 = v22;
                                                    if (v123 == 0) {
                                                        // break (via goto) -> 0x404d4
                                                        goto lab_0x404d4_9;
                                                    }
                                                    uint32_t v124 = (v106 - (int32_t)v123) % 0x10000;
                                                    v5 = v57;
                                                    v16 = v14;
                                                    v24 = v22;
                                                    if (v105 < v124) {
                                                        // break (via goto) -> 0x404d4
                                                        goto lab_0x404d4_9;
                                                    }
                                                    // 0x4037e
                                                    v8 = v118;
                                                    int64_t v125 = (v122 & 0xffff0000 | (int64_t)v123) & (int64_t)(int32_t)&g29; // 0x4037e
                                                    int64_t v126 = v125 + v14; // 0x40389
                                                    if (*(char *)((v126 & 0xffffffff) + v36) == v114) {
                                                        // 0x4039a
                                                        v121 = v125;
                                                        v120 = v124;
                                                        if (*(char *)((v126 + 0xffffffff & 0xffffffff) + v36) == v115) {
                                                            // break -> 0x4045c
                                                            break;
                                                        }
                                                    }
                                                    uint16_t v127 = *(int16_t *)(2 * v125 + v38); // 0x403b0
                                                    v5 = v57;
                                                    v16 = v14;
                                                    v24 = v22;
                                                    if (v127 == 0) {
                                                        // break (via goto) -> 0x404d4
                                                        goto lab_0x404d4_9;
                                                    }
                                                    uint32_t v128 = (v106 - (int32_t)v127) % 0x10000;
                                                    v5 = v57;
                                                    v16 = v14;
                                                    v24 = v22;
                                                    if (v105 < v128) {
                                                        // break (via goto) -> 0x404d4
                                                        goto lab_0x404d4_9;
                                                    }
                                                    int64_t v129 = (v122 & (int64_t)(int32_t)&g29 & -0x10000 | (int64_t)v127) & (int64_t)(int32_t)&g29; // 0x403d4
                                                    int64_t v130 = v129 + v14; // 0x403df
                                                    if (v114 == *(char *)((v130 & 0xffffffff) + v36)) {
                                                        // 0x403f0
                                                        v121 = v129;
                                                        v120 = v128;
                                                        if (v115 == *(char *)((v130 + 0xffffffff & 0xffffffff) + v36)) {
                                                            // break -> 0x4045c
                                                            break;
                                                        }
                                                    }
                                                    uint16_t v131 = *(int16_t *)(2 * v129 + v38); // 0x40402
                                                    v5 = v57;
                                                    v16 = v14;
                                                    v24 = v22;
                                                    if (v131 == 0) {
                                                        // break (via goto) -> 0x404d4
                                                        goto lab_0x404d4_9;
                                                    }
                                                    int64_t v132 = v122 & (int64_t)(int32_t)&g29 & -0x10000 & (int64_t)(int32_t)&g29 & -0x10000 | (int64_t)v131; // 0x40402
                                                    uint32_t v133 = (v106 - (int32_t)v132) % 0x10000;
                                                    v5 = v57;
                                                    v16 = v14;
                                                    v24 = v22;
                                                    if (v105 < v133) {
                                                        // break (via goto) -> 0x404d4
                                                        goto lab_0x404d4_9;
                                                    }
                                                    int64_t v134 = v132 & (int64_t)(int32_t)&g29; // 0x40426
                                                    int64_t v135 = v134 + v14; // 0x40431
                                                    if (v114 == *(char *)((v135 & 0xffffffff) + v36)) {
                                                        // 0x40446
                                                        v121 = v134;
                                                        v120 = v133;
                                                        if (v115 == *(char *)((v135 + 0xffffffff & 0xffffffff) + v36)) {
                                                            // break -> 0x4045c
                                                            break;
                                                        }
                                                    }
                                                    // 0x40350
                                                    v118 = v8 - 1;
                                                    v119 = v134;
                                                    v5 = v57;
                                                    v16 = v14;
                                                    v24 = v22;
                                                    if (v118 == 0) {
                                                        // break (via goto) -> 0x404d4
                                                        goto lab_0x404d4_9;
                                                    }
                                                }
                                                // 0x4045c
                                                v116 = v120;
                                                v5 = v57;
                                                v16 = v14;
                                                v24 = v22;
                                                if (v116 == 0) {
                                                    // break (via goto) -> 0x404d4
                                                    goto lab_0x404d4_9;
                                                }
                                                // 0x40460
                                                v30 = v121;
                                                int64_t v136 = v30 & 0xffffffff; // 0x40460
                                                if (*v112 == *(char *)(v36 + v136)) {
                                                    v9 = 1;
                                                    v117 = (int32_t)v9;
                                                    while (v103 > v117) {
                                                        int64_t v137 = v9 + 1; // 0x40491
                                                        if (*(char *)(v111 + v9) != *(char *)(v9 + v36 + v136)) {
                                                            if (v117 > v57) {
                                                                // 0x404a6
                                                                v26 = v116;
                                                                goto lab_0x404a6;
                                                            } else {
                                                                goto lab_0x40350;
                                                            }
                                                        }
                                                        v9 = v137;
                                                        v117 = (int32_t)v9;
                                                    }
                                                    if (v117 > v57) {
                                                        // break -> 0x404a1
                                                        break;
                                                    }
                                                }
                                                goto lab_0x40350;
                                            }
                                            int64_t v138 = v116;
                                            v26 = v138;
                                            v15 = v110;
                                            v23 = v138;
                                            if (v103 == v117) {
                                                goto lab_0x404d4_11;
                                            }
                                            goto lab_0x404a6;
                                        }
                                        goto lab_0x404d4_9;
                                    }
                                } else {
                                    goto lab_0x404e9;
                                }
                            } else {
                                // 0x402a5
                                v17 = v107;
                                v25 = 0;
                                if (v105 != 0) {
                                    int32_t v139 = v52 & 0x80000; // 0x402b4
                                    v17 = v107;
                                    v25 = 0;
                                    if (v139 == 0) {
                                        char v140 = *(char *)((v54 + 0xffffffff & (int64_t)(int32_t)&g29) + v36); // 0x402c8
                                        if (v103 != 0) {
                                            // 0x402d6
                                            if (*(char *)(v36 + v54) == v140) {
                                                int64_t v141; // 0x3ff6e
                                                int64_t v142 = v141;
                                                int64_t v143 = v142 + 1; // 0x402e2
                                                int64_t v144 = v143 & 0xffffffff; // 0x402e2
                                                int32_t v145 = v143;
                                                while (v103 != v145) {
                                                    char v146 = *(char *)((v143 + v54 & 0xffffffff) + v36); // 0x402d9
                                                    v141 = v144;
                                                    if (v146 != v140) {
                                                        // break -> 0x402e6
                                                        break;
                                                    }
                                                    v142 = v141;
                                                    v143 = v142 + 1;
                                                    v144 = v143 & 0xffffffff;
                                                    v145 = v143;
                                                }
                                            }
                                        }
                                        uint32_t v147 = 0;
                                        v17 = v147 < 3 ? 0 : 0;
                                        v25 = v147 < 3 ? v139 : 1;
                                    }
                                }
                                goto lab_0x404e9;
                            }
                        }
                        goto lab_0x40882_2;
                    } else {
                        if (a3 == 0) {
                            // 0x40055
                            *(int64_t *)a5 = 0;
                            // 0x4005c
                            *(int32_t *)(a1 + 132) = -2;
                            // 0x4095a
                            return 0xfffffffe;
                        }
                        // 0x40049
                        *(int64_t *)a3 = 0;
                        goto lab_0x40050;
                    }
                }
            }
        }
    } else {
        goto lab_0x40044;
    }
  lab_0x404d4_9:
    // 0x404d4
    v17 = v16;
    v25 = v24;
    if (v5 != 3 || (int32_t)v24 < 0x2000) {
        goto lab_0x404e9;
    } else {
        goto lab_0x4061a;
    }
  lab_0x404d4_11:
    // 0x404d4
    v5 = v15;
    v16 = v15;
    v24 = v23;
    goto lab_0x404d4_9;
  lab_0x40350:;
    int32_t v148 = v8 - 1; // 0x40350
    v7 = v148;
    v29 = v30;
    v5 = v57;
    v16 = v14;
    v24 = v22;
    if (v148 == 0) {
        // break (via goto) -> 0x404d4
        goto lab_0x404d4_9;
    }
    goto lab_0x4035a;
  lab_0x404a6:;
    int32_t v149 = v8 - 1; // 0x40350
    v6 = v149;
    v28 = v30;
    v21 = v26;
    v13 = v9;
    if (v149 == 0) {
        goto lab_0x404d4_11;
    }
    goto lab_0x4035a_2;
  lab_0x404e9:;
    int64_t v150 = v25;
    int32_t v151 = v150; // 0x404e9
    int64_t v152; // 0x3ff6e
    int64_t v153; // 0x3ff6e
    int64_t v154; // 0x3ff6e
    int64_t v155; // 0x3ff6e
    uint32_t v156; // 0x404fb
    if (v53 == v151) {
        goto lab_0x4061a;
    } else {
        int64_t v157 = v17;
        v156 = (int32_t)v157;
        if ((v52 & 0x20000) != 0 == v156 < 6) {
            goto lab_0x4061a;
        } else {
            int64_t v158 = *v41; // 0x40507
            if (v50 == 0) {
                // 0x406df
                v153 = v158;
                if (v151 != 0) {
                    // 0x40732
                    if (v156 < 128 == (*(int32_t *)(a1 + 28) || v52 & 0x10000) == 0) {
                        goto lab_0x407ef;
                    } else {
                        // 0x4074b
                        *v42 = *v42 + v156;
                        uint64_t v159 = v150 + 0xffffffff; // 0x40751
                        *(char *)v158 = (char)v157 - 3;
                        uint64_t v160 = v159 / 256; // 0x4075b
                        *(char *)(*v41 + 1) = (char)v159;
                        *(char *)(*v41 + 2) = (char)v160;
                        *v41 = *v41 + 3;
                        char * v161 = (char *)*v44; // 0x40772
                        *v161 = *v161 / 2 | -128;
                        int32_t v162 = *v45 - 1; // 0x4077f
                        if (v162 == 0) {
                            int64_t v163 = *v41; // 0x40788
                            *v45 = 8;
                            *v44 = v163;
                            *v41 = v163 + 1;
                        } else {
                            // 0x40783
                            *v45 = v162;
                        }
                        char v164 = *(char *)(v159 % 512 + (int64_t)&g16); // 0x407b7
                        char v165 = *(char *)(v160 % 128 + (int64_t)&g15); // 0x407c2
                        unsigned char v166 = (int32_t)v159 < 512 ? v164 : v165;
                        int16_t * v167 = (int16_t *)(2 * (int64_t)v166 + v47); // 0x407ca
                        *v167 = *v167 + 1;
                        v155 = v157;
                        if (v156 >= 3) {
                            uint16_t v168 = *(int16_t *)((2 * v157 + 0x1fffffffa & 0x1fffffffe) + (int64_t)&g17); // 0x407e1
                            int16_t * v169 = (int16_t *)(2 * (int64_t)v168 + v46); // 0x407e5
                            *v169 = *v169 + 1;
                            v155 = v157;
                        }
                        goto lab_0x40805;
                    }
                } else {
                    goto lab_0x406e3;
                }
            } else {
                // 0x40511
                v152 = v158;
                if (v50 >= v156) {
                    goto lab_0x40623;
                } else {
                    int32_t v170 = *v43; // 0x40522
                    *v42 = *v42 + 1;
                    *v41 = v158 + 1;
                    *(char *)v158 = (char)v170;
                    char * v171 = (char *)*v44; // 0x4053d
                    *v171 = *v171 / 2;
                    int32_t v172 = *v45 - 1; // 0x40542
                    if (v172 == 0) {
                        int64_t v173 = *v41; // 0x4054b
                        *v45 = 8;
                        *v44 = v173;
                        *v41 = v173 + 1;
                    } else {
                        // 0x40546
                        *v45 = v172;
                    }
                    int16_t * v174 = (int16_t *)(v46 + (int64_t)(2 * v170 & 510)); // 0x40562
                    *v174 = *v174 + 1;
                    if (v156 < 128) {
                        goto lab_0x407ef;
                    } else {
                        // 0x40573
                        *v42 = *v42 + v156;
                        uint64_t v175 = v150 + 0xffffffff; // 0x4057d
                        *(char *)*v41 = (char)v157 - 3;
                        uint64_t v176 = v175 / 256; // 0x40588
                        *(char *)(*v41 + 1) = (char)v175;
                        *(char *)(*v41 + 2) = (char)v176;
                        *v41 = *v41 + 3;
                        char * v177 = (char *)*v44; // 0x4059f
                        *v177 = *v177 / 2 | -128;
                        int32_t v178 = *v45 - 1; // 0x405ac
                        if (v178 == 0) {
                            int64_t v179 = *v41; // 0x405b5
                            *v45 = 8;
                            *v44 = v179;
                            *v41 = v179 + 1;
                        } else {
                            // 0x405b0
                            *v45 = v178;
                        }
                        char v180 = *(char *)(v175 % 512 + (int64_t)&g16); // 0x405eb
                        char v181 = *(char *)(v176 % 128 + (int64_t)&g15); // 0x405f6
                        unsigned char v182 = (int32_t)v175 < 512 ? v180 : v181;
                        int16_t * v183 = (int16_t *)(2 * (int64_t)v182 + v47); // 0x405fe
                        *v183 = *v183 + 1;
                        uint16_t v184 = *(int16_t *)((2 * v157 + 0x1fffffffa & 0x1fffffffe) + (int64_t)&g17); // 0x40609
                        int16_t * v185 = (int16_t *)(2 * (int64_t)v184 + v46); // 0x4060d
                        *v185 = *v185 + 1;
                        v154 = v157;
                        goto lab_0x406d3;
                    }
                }
            }
        }
    }
  lab_0x4061a:;
    int64_t v186 = *v41;
    v152 = v186;
    v153 = v186;
    if (v50 == 0) {
        goto lab_0x406e3;
    } else {
        goto lab_0x40623;
    }
  lab_0x406e3:;
    unsigned char v187 = *(char *)(v36 + v54); // 0x406e7
    *v42 = *v42 + 1;
    *v41 = v153 + 1;
    *(char *)v153 = v187;
    char * v188 = (char *)*v44; // 0x40700
    *v188 = *v188 / 2;
    int32_t v189 = *v45 - 1; // 0x40705
    if (v189 == 0) {
        int64_t v190 = *v41; // 0x4070e
        *v45 = 8;
        *v44 = v190;
        *v41 = v190 + 1;
    } else {
        // 0x40709
        *v45 = v189;
    }
    int16_t * v191 = (int16_t *)(2 * (int64_t)v187 + v46); // 0x40725
    *v191 = *v191 + 1;
    v155 = 1;
    goto lab_0x40805;
  lab_0x40623:
    // 0x40623
    *v42 = *v42 + v50;
    *(char *)v152 = (char)v50 - 3;
    uint32_t v205 = *v48 - 1; // 0x40638
    uint32_t v206 = v205 / 256; // 0x4063c
    *(char *)(*v41 + 1) = (char)v205;
    *(char *)(*v41 + 2) = (char)v206;
    *v41 = *v41 + 3;
    char * v207 = (char *)*v44; // 0x40652
    *v207 = *v207 / 2 | -128;
    int32_t v208 = *v45 - 1; // 0x4065f
    if (v208 == 0) {
        int64_t v209 = *v41; // 0x40668
        *v45 = 8;
        *v44 = v209;
        *v41 = v209 + 1;
    } else {
        // 0x40663
        *v45 = v208;
    }
    char v210 = *(char *)((int64_t)(v205 % 512) + (int64_t)&g16); // 0x40696
    char v211 = *(char *)((int64_t)(v206 % 128) + (int64_t)&g15); // 0x406a1
    int16_t * v212 = (int16_t *)(2 * (int64_t)(v205 < 512 ? v210 : v211) + v47); // 0x406a9
    *v212 = *v212 + 1;
    if (v50 >= 3) {
        uint16_t v213 = *(int16_t *)((2 * v51 + 0x1fffffffa & 0x1fffffffe) + (int64_t)&g17); // 0x406c2
        int16_t * v214 = (int16_t *)(2 * (int64_t)v213 + v46); // 0x406c6
        *v214 = *v214 + 1;
    }
    // 0x406ce
    v154 = (int64_t)(*v39 - 1);
    goto lab_0x406d3;
  lab_0x40805:;
    int32_t v192 = v155; // 0x40805
    *v34 = *v34 + v192;
    *v35 = *v35 + v192;
    *v33 = *v33 - v192;
    uint32_t v193 = *v34; // 0x40815
    int32_t v194 = v193 < (int32_t)&g30 ? v193 : (int32_t)&g30; // 0x40821
    *v34 = v194;
    uint64_t v195 = *v41; // 0x40828
    int64_t v196; // 0x3ff6e
    int64_t v197; // 0x40831
    if (v195 > a1 + (int64_t)&g1) {
        goto lab_0x4085e;
    } else {
        uint32_t v198 = *v42; // 0x40831
        v197 = v198;
        v196 = v197;
        if (v198 > (int32_t)&g28) {
            // 0x40840
            if (115 * (int32_t)(v4 + v195) / 128 < v198) {
                // 0x40854
                v196 = v197;
                if ((*(char *)(a1 + 18) & 8) == 0) {
                    goto lab_0x400aa;
                } else {
                    goto lab_0x4085e;
                }
            } else {
                goto lab_0x4085e;
            }
        } else {
            goto lab_0x400aa;
        }
    }
  lab_0x406d3:
    // 0x406d3
    *v39 = 0;
    v155 = v154;
    goto lab_0x40805;
  lab_0x4085e:;
    int64_t v199 = v197;
    *v1 = v11;
    *v2 = v19;
    int32_t v200 = function_3d788(a1, 0, (int32_t)v199);
    v196 = v199;
    int64_t v201; // 0x3ff6e
    if (v200 != 0) {
        // 0x4087e
        v201 = v199;
        if (v200 < 0) {
            goto lab_0x408e7;
        } else {
            goto lab_0x40890;
        }
    }
    goto lab_0x400aa;
  lab_0x400aa:
    // 0x400aa
    v27 = v196;
    v18 = v19;
    v10 = v11;
    goto lab_0x400aa_2;
  lab_0x407ef:
    // 0x407ef
    *v48 = v151;
    *v39 = v156;
    *v43 = (int32_t)*(char *)(v36 + v54);
    v155 = 1;
    goto lab_0x40805;
  lab_0x40044:
    if (a3 == 0) {
        goto lab_0x40050;
    } else {
        // 0x40049
        *(int64_t *)a3 = 0;
        goto lab_0x40050;
    }
  lab_0x40050:
    if (a5 == 0) {
        // 0x4005c
        *(int32_t *)(a1 + 132) = -2;
        // 0x4095a
        return 0xfffffffe;
    }
    // 0x40055
    *(int64_t *)a5 = 0;
    // 0x4005c
    *(int32_t *)(a1 + 132) = -2;
    // 0x4095a
    return 0xfffffffe;
  lab_0x40882_2:
    // 0x40882
    *v1 = v12;
    *v2 = v20;
    v201 = v31;
    goto lab_0x40890;
  lab_0x40890:;
    int64_t v202 = v201; // 0x40897
    if (!((a2 == 0 | (*v40 & (int32_t)"MCloneTable") == 0))) {
        int32_t * v203 = (int32_t *)(a1 + 32); // 0x408a1
        int64_t v204 = *v1 - a2; // 0x408ab
        *v203 = (int32_t)function_3df27(*v203, a2, v204);
        v202 = v204;
    }
    if (v3 == 0 || *v33 != 0 || *v2 != 0 || *v56 != 0) {
        // 0x40927
        result = function_3dcac(a1);
        *v49 = (int32_t)result;
        // 0x4095a
        return result;
    }
    // 0x408d8
    if ((int32_t)function_3d788(a1, v3, (int32_t)v202) < 0) {
      lab_0x408e7:
        // 0x4095a
        return (int64_t)*v49;
    }
    // 0x408ef
    *v32 = v55;
    if (v3 == 3) {
        // 0x408fc
        __asm_rep_stosd_memset((char *)v37, 0, (int64_t)"le");
        __asm_rep_stosd_memset((char *)v38, 0, (int64_t)"le");
        *v34 = 0;
    }
    // 0x40927
    result = function_3dcac(a1);
    *v49 = (int32_t)result;
    // 0x4095a
    return result;
}

// Address range: 0x4b2d10 - 0x4b369e
int64_t function_4b2d10(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5) {
    // 0x4b2d10
    if ((int32_t)function_4b1680(a4, 0) < 0) {
        // 0x4b2e95
        return 0xfffffffc;
    }
    int64_t * v1 = (int64_t *)(a4 + 16); // 0x4b2d4a
    if (*(char *)*v1 % 2 == 0 || (int32_t)function_4b1680(a3, 0) < 0) {
        // 0x4b2e95
        return 0xfffffffc;
    }
    int64_t v2 = *(int64_t *)*v1; // 0x4b2d76
    int64_t v3 = 2 * v2 + 4 & 8; // 0x4b2d83
    int64_t v4 = v3 + v2; // 0x4b2d87
    for (int32_t i = 4; i > 0; i--) {
        int64_t v5 = v4;
        v4 = (2 - v5 * v2) * v5;
    }
    // 0x4b2da1
    int64_t v6; // bp-3256, 0x4b2d10
    function_4b0870(&v6);
    int64_t v7; // bp-3224, 0x4b2d10
    function_4b0870(&v7);
    int64_t v8; // bp-3192, 0x4b2d10
    function_4b0870(&v8);
    int64_t v9; // bp-3128, 0x4b2d10
    __asm_rep_stosq_memset((char *)&v9, 0, 384);
    uint64_t v10 = function_4b0f10(a3); // 0x4b2de7
    int64_t * v11 = (int64_t *)6; // 0x4b2df2
    int64_t v12 = 6; // 0x4b2df2
    int64_t v13 = 64; // 0x4b2df2
    int64_t v14 = 32; // 0x4b2df2
    if (v10 <= (int64_t)&g10) {
        // 0x4b2eb0
        v11 = (int64_t *)5;
        v12 = 5;
        v13 = 32;
        v14 = 16;
        if (v10 < 240) {
            // 0x4b2ebc
            v11 = (int64_t *)4;
            v12 = 4;
            v13 = 16;
            v14 = 8;
            if (v10 < 80) {
                int64_t v15 = v10 < 24 ? 1 : 3; // 0x4b2eed
                v11 = (int64_t *)v15;
                v12 = v15;
                v13 = v10 < 24 ? 2 : 8;
                v14 = v10 < 24 ? 1 : 4;
            }
        }
    }
    int64_t v16 = (int64_t)&v9; // 0x4b2da9
    int64_t * v17 = (int64_t *)(a4 + 8); // 0x4b2e14
    int64_t v18 = *v17 + 1; // 0x4b2e1e
    int64_t v19 = function_4b08f0(a1, v18); // 0x4b2e27
    int64_t v20 = v19; // 0x4b2e31
    int64_t v21; // bp-3104, 0x4b2d10
    int64_t v22; // 0x4b2d10
    int64_t v23; // 0x4b2f12
    if ((int32_t)v19 != 0) {
        goto lab_0x4b2e51_3;
    } else {
        // 0x4b2f0d
        v23 = (int64_t)&v21;
        int64_t v24 = function_4b08f0(v23, v18); // 0x4b2f16
        v20 = v24;
        if ((int32_t)v24 != 0) {
            goto lab_0x4b2e51_3;
        } else {
            int64_t v25 = function_4b08f0((int64_t)&v7, 2 * v18); // 0x4b2f36
            v20 = v25;
            if ((int32_t)v25 != 0) {
                goto lab_0x4b2e51_3;
            } else {
                // 0x4b2f46
                v22 = a2;
                if ((int32_t)a2 == -1) {
                    int64_t v26 = (int64_t)&v8; // 0x4b323b
                    int64_t v27 = function_4b0ac0(v26, (int64_t *)a2); // 0x4b3243
                    v20 = v27;
                    if ((int32_t)v27 != 0) {
                        goto lab_0x4b2e51_3;
                    } else {
                        // 0x4b3253
                        v8 = 1;
                        v22 = v26;
                        goto lab_0x4b2f5e;
                    }
                } else {
                    goto lab_0x4b2f5e;
                }
            }
        }
    }
  lab_0x4b2e51_3:
    // 0x4b2e51
    if (v14 < v13) {
        int64_t v28 = v14 + 1; // 0x4b2e44
        function_4b0890(24 * v14 + v16);
        int64_t v29 = v28; // 0x4b2e54
        while (v28 != v13) {
            // 0x4b2e40
            v28 = v29 + 1;
            function_4b0890(24 * v29 + v16);
            v29 = v28;
        }
    }
    int64_t result = v20 & 0xffffffff;
    function_4b0890((int64_t)&v21);
    function_4b0890((int64_t)&v7);
    function_4b0890((int64_t)&v8);
    if (a5 == 0 || *(int64_t *)(a5 + 16) == 0) {
        // 0x4b3218
        function_4b0890((int64_t)&v6);
        // 0x4b2e95
        return result;
    }
    // 0x4b2e95
    return result;
  lab_0x4b2f5e:;
    // 0x4b2f5e
    int64_t v30; // bp-3240, 0x4b2d10
    int64_t v31; // bp-3248, 0x4b2d10
    if (a5 == 0) {
        goto lab_0x4b3270;
    } else {
        int64_t * v32 = (int64_t *)(a5 + 16); // 0x4b2f6f
        if (*v32 == 0) {
            goto lab_0x4b3270;
        } else {
            // 0x4b2f7a
            v6 = v3;
            v31 = *(int64_t *)(a5 + 8);
            v30 = *v32;
            goto lab_0x4b2fa2;
        }
    }
  lab_0x4b3270:;
    int64_t v33 = function_4b0d80(&v6, 1); // 0x4b327d
    v20 = v33;
    if ((int32_t)v33 != 0) {
        goto lab_0x4b2e51_3;
    } else {
        int64_t v34 = function_4b1100(&v6, 128 * *v17); // 0x4b329e
        v20 = v34;
        if ((int32_t)v34 != 0) {
            goto lab_0x4b2e51_3;
        } else {
            int64_t v35 = (int64_t)&v6; // 0x4b32ae
            int64_t v36 = function_4b26c0(&v6, v35, a4); // 0x4b32bc
            v20 = v36;
            if ((int32_t)v36 != 0) {
                goto lab_0x4b2e51_3;
            } else {
                if (a5 != 0) {
                    int64_t v37 = v35; // 0x4b32ee
                    int64_t v38 = 24; // 0x4b32ee
                    int64_t v39 = a5; // 0x4b32ee
                    bool v40; // 0x4b2d10
                    if (a5 % 2 != 0) {
                        // 0x4b32f0
                        *(char *)a5 = *(char *)&v6;
                        int64_t v41 = v40 ? -1 : 1; // 0x4b32f7
                        v37 = v41 + v35;
                        v38 = 23;
                        v39 = v41 + a5;
                    }
                    int64_t v42 = v37; // 0x4b32fc
                    int64_t v43 = v38; // 0x4b32fc
                    int64_t v44 = v39; // 0x4b32fc
                    if ((v39 & 2) != 0) {
                        // 0x4b32fe
                        *(int16_t *)v39 = *(int16_t *)v37;
                        int64_t v45 = v40 ? -2 : 2; // 0x4b32fe
                        v42 = v37 + v45;
                        v43 = (v38 + 30) % 32;
                        v44 = v39 + v45;
                    }
                    // 0x4b3303
                    __asm_rep_movsd_memcpy((char *)v44, (char *)v42, v43 / 4 % 0x40000000);
                }
                goto lab_0x4b2fa2;
            }
        }
    }
  lab_0x4b2fa2:
    // 0x4b2fa2
    if ((int32_t)function_4b1590(v22, a4) < 0) {
        int64_t v46 = function_4b0ac0(v23, (int64_t *)v22); // 0x4b3335
        v20 = v46;
        if ((int32_t)v46 != 0) {
            goto lab_0x4b2e51_3;
        } else {
            goto lab_0x4b2fd3;
        }
    } else {
        int64_t v47 = function_4b26c0(&v21, v22, a4); // 0x4b2fc3
        v20 = v47;
        if ((int32_t)v47 != 0) {
            goto lab_0x4b2e51_3;
        } else {
            goto lab_0x4b2fd3;
        }
    }
  lab_0x4b2fd3:;
    int64_t v48 = -v4; // 0x4b2fe7
    int64_t v49; // bp-3208, 0x4b2d10
    int64_t v50; // 0x4b2d10
    int64_t v51 = function_4b13e0(&v21, &v31, &v30, a4, v48, v50, &v49); // 0x4b3016
    v20 = v51;
    if ((int32_t)v51 == 0) {
        int64_t v52 = function_4b0ac0(a1, &v6); // 0x4b3033
        v20 = v52;
        if ((int32_t)v52 == 0) {
            // 0x4b3043
            int64_t v53; // bp-3264, 0x4b2d10
            int64_t v54 = (int64_t)&v53; // 0x4b3068
            int64_t v55 = v54; // bp-3144, 0x4b3068
            v53 = 1;
            int64_t v56 = 1; // bp-3152, 0x4b3098
            int64_t * v57 = (int64_t *)a1; // 0x4b30a4
            int64_t v58 = function_4b13e0(v57, &v56, &v55, a4, v48, v50, &v49); // 0x4b30a4
            v20 = v58;
            if ((int32_t)v58 == 0) {
                int64_t v59; // bp-3088, 0x4b2d10
                int64_t v60; // bp-3096, 0x4b2d10
                if (v12 != 1) {
                    int64_t v61 = 24 * v14 + v16; // 0x4b3384
                    int64_t v62 = function_4b08f0(v61, *v17 + 1); // 0x4b338b
                    v20 = v62;
                    if ((int32_t)v62 == 0) {
                        int64_t v63 = function_4b0ac0(v61, &v21); // 0x4b33a3
                        v20 = v63;
                        if ((int32_t)v63 == 0) {
                            uint64_t v64 = v12 - 1; // 0x4b33d2
                            if (v64 == 0) {
                              lab_0x4b34e6:;
                                int64_t v65 = v14 + 1;
                                if (v65 >= v13) {
                                    // 0x4b2e95
                                    return (int64_t)&v60;
                                }
                                int64_t v66 = v65; // 0x4b350f
                                int64_t v67 = 24 * v66 + v16;
                                int64_t v68 = function_4b08f0(v67, *v17 + 1); // 0x4b3528
                                v20 = v68;
                                while ((int32_t)v68 == 0) {
                                    int64_t v69 = function_4b0ac0(v67, (int64_t *)(v67 - 24)); // 0x4b3543
                                    v20 = v69;
                                    if ((int32_t)v69 != 0) {
                                        // break -> 0x4b2e51
                                        break;
                                    }
                                    int64_t v70 = function_4b13e0((int64_t *)v67, &v60, &v59, a4, v48, v50, &v49); // 0x4b3576
                                    v20 = v70;
                                    if ((int32_t)v70 != 0) {
                                        // break -> 0x4b2e51
                                        break;
                                    }
                                    // 0x4b350c
                                    v66++;
                                    int64_t result2 = v70; // 0x4b350f
                                    if (v66 >= v13) {
                                        // 0x4b2e95
                                        return result2;
                                    }
                                    v67 = 24 * v66 + v16;
                                    v68 = function_4b08f0(v67, *v17 + 1);
                                    v20 = v68;
                                }
                            } else {
                                int64_t * v71 = (int64_t *)(v61 + 8); // 0x4b340c
                                int64_t * v72 = (int64_t *)(v61 + 16); // 0x4b340c
                                int64_t v73 = 0; // 0x4b341e
                                int64_t v74 = function_4b13e0((int64_t *)v61, v71, v72, a4, v48, v50, &v49); // 0x4b340c
                                v20 = v74;
                                while ((int32_t)v74 == 0) {
                                    // 0x4b33db
                                    v73++;
                                    if (v73 >= v64) {
                                        goto lab_0x4b34e6;
                                    }
                                    v74 = function_4b13e0((int64_t *)v61, v71, v72, a4, v48, v50, &v49);
                                    v20 = v74;
                                }
                            }
                        }
                    }
                } else {
                    int64_t v75 = a1 + 8; // 0x4b3104
                    int64_t * v76 = (int64_t *)v75;
                    int64_t * v77 = (int64_t *)(a1 + 16);
                    int64_t v78 = *(int64_t *)(a3 + 8); // 0x4b3108
                    int64_t v79 = 0; // 0x4b3108
                    int64_t v80 = 0; // 0x4b3108
                    int64_t v81 = 0; // 0x4b3108
                    int64_t v82 = 0; // 0x4b3108
                    int64_t v83; // 0x4b2d10
                    int64_t v84; // 0x4b2d10
                    while (true) {
                        // 0x4b310d
                        v83 = v81;
                        v84 = v80;
                        int64_t v85 = v78; // 0x4b2d10
                        int64_t v86 = v79; // 0x4b2d10
                        int64_t v87 = v82; // 0x4b2d10
                        int64_t v88; // 0x4b2d10
                        int64_t v89; // 0x4b2d10
                        uint64_t v90; // 0x4b3132
                        while (true) {
                            int64_t v91 = v87;
                            int64_t v92 = v86;
                            int64_t v93 = v85;
                            int64_t v94; // 0x4b2d10
                            int64_t v95; // 0x4b2d10
                            int64_t v96; // 0x4b2d10
                            if (v91 == 0) {
                                if (v93 == 0) {
                                    // break (via goto) -> 0x4b3424
                                    goto lab_0x4b3424;
                                }
                                // 0x4b3361
                                v96 = v93 - 1;
                                v95 = 63;
                                v94 = 63;
                            } else {
                                int64_t v97 = v91 - 1; // 0x4b3116
                                v96 = v93;
                                v95 = v97 & 0xffffffff;
                                v94 = v97;
                            }
                            // 0x4b311d
                            v88 = v94;
                            v89 = v96;
                            uint64_t v98 = *(int64_t *)(*(int64_t *)(a3 + 16) + 8 * v89); // 0x4b312b
                            v90 = (v98 >> v95 % 64) % 2;
                            int64_t v99 = 0; // 0x4b313b
                            if ((v90 || v92) != 0) {
                                if (v92 != 1 || v90 != 0) {
                                    // break -> 0x4b314a
                                    break;
                                }
                                int64_t v100 = function_4b13e0(v57, v76, v77, a4, v48, v50, &v49); // 0x4b35c0
                                v20 = v100;
                                v99 = 1;
                                if ((int32_t)v100 != 0) {
                                    goto lab_0x4b2e51_3;
                                }
                            }
                            // 0x4b310d
                            v85 = v89;
                            v86 = v99;
                            v87 = v88;
                        }
                        int64_t v101 = v84 + 1; // 0x4b314e
                        int64_t v102 = v90 << ((int64_t)v11 - v101) % 64 | v83; // 0x4b315c
                        int64_t v103 = 2; // 0x4b3164
                        int64_t v104 = v101; // 0x4b3164
                        int64_t v105 = v102; // 0x4b3164
                        if (v12 == v101) {
                            int64_t v106 = function_4b13e0(v57, v76, v77, a4, v48, v50, &v49); // 0x4b31ac
                            v20 = v106;
                            if ((int32_t)v106 != 0) {
                                goto lab_0x4b2e51_3;
                            }
                            int64_t v107 = 1; // 0x4b3170
                            int64_t v108 = v107; // 0x4b3179
                            while (v12 > v107) {
                                // 0x4b317f
                                v106 = function_4b13e0(v57, v76, v77, a4, v48, v50, &v49);
                                v20 = v106;
                                if ((int32_t)v106 != 0) {
                                    goto lab_0x4b2e51_3;
                                }
                                // 0x4b3170
                                v107 = v108 + 1;
                                v108 = v107;
                            }
                            int64_t v109 = 24 * v102 + v16; // 0x4b35f5
                            int64_t v110 = function_4b13e0(v57, (int64_t *)(v109 + 8), (int64_t *)(v109 + 16), a4, v48, v50, &v49); // 0x4b3609
                            v20 = v110;
                            v103 = 1;
                            v104 = 0;
                            v105 = 0;
                            if ((int32_t)v110 != 0) {
                                goto lab_0x4b2e51_3;
                            }
                        }
                        // 0x4b310d
                        v78 = v89;
                        v79 = v103;
                        v80 = v104;
                        v81 = v105;
                        v82 = v88;
                    }
                  lab_0x4b3424:;
                    int64_t * v111 = (int64_t *)(v75 & 0xffffffff); // 0x4b345f
                    int64_t v112 = v83; // 0x4b3469
                    int64_t v113 = 0; // 0x4b3469
                    if (v84 == 0) {
                      lab_0x4b3625:
                        // 0x4b3625
                        v55 = v54;
                        v53 = 1;
                        v56 = 1;
                        int64_t result3 = function_4b13e0(v57, &v56, &v55, a4, v48, v50, &v49); // 0x4b3689
                        v20 = result3;
                        if ((int32_t)result3 == 0) {
                            // 0x4b2e95
                            return result3;
                        }
                    } else {
                        int64_t v114 = function_4b13e0(v57, v111, v77, a4, v48, v50, &v49); // 0x4b3497
                        v20 = v114;
                        while ((int32_t)v114 == 0) {
                            int64_t v115 = 2 * v112; // 0x4b34a0
                            if ((v115 & v13) != 0) {
                                int64_t v116 = function_4b13e0(v57, &v60, &v59, a4, v48, v50, &v49); // 0x4b34d5
                                v20 = v116;
                                if ((int32_t)v116 != 0) {
                                    // break -> 0x4b2e51
                                    break;
                                }
                            }
                            int64_t v117 = v113 + 1; // 0x4b34a8
                            v112 = v115;
                            v113 = v117;
                            if (v117 == v84) {
                                goto lab_0x4b3625;
                            }
                            v114 = function_4b13e0(v57, v111, v77, a4, v48, v50, &v49);
                            v20 = v114;
                        }
                    }
                }
            }
        }
    }
    goto lab_0x4b2e51_3;
}

// Address range: 0x4bbff0 - 0x4bc981
int64_t function_4bbff0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = function_4b1680(a4 + 48, 1); // 0x4bc030
    if ((int32_t)v1 != 0) {
        // 0x4bc04f
        return 0xffffb080;
    }
    int64_t result = function_4bbf40(a1, a3, v1 & 0xffffffff); // 0x4bc046
    if ((int32_t)result != 0) {
        // 0x4bc04f
        return result;
    }
    int64_t result2 = function_4bbc70(a1, a4); // 0x4bc096
    if ((int32_t)result2 != 0) {
        // 0x4bc04f
        return result2;
    }
    // 0x4bc09f
    if (*(int64_t *)(a1 + 96) == 0) {
        // 0x4bc04f
        return 0xffffb080;
    }
    // 0x4bc0ab
    if (*(int64_t *)(a1 + 120) != 0) {
        // 0x4bc04f
        return function_4baf40(a1, a2, a3, a4, a5, a6);
    }
    // 0x4bc0d0
    int64_t v2; // bp-136, 0x4bbff0
    function_4ba580(&v2);
    int64_t v3; // bp-456, 0x4bbff0
    function_4b0870(&v3);
    int64_t v4 = (int64_t)&v3; // 0x4bc0e7
    int64_t v5 = function_4b0ac0(v4, (int64_t *)a4); // 0x4bc0ef
    int64_t v6 = v5; // 0x4bc0f6
    int64_t * v7; // 0x4bbff0
    int64_t v8; // 0x4bbff0
    int64_t v9; // 0x4bbff0
    int64_t v10; // bp-168, 0x4bbff0
    int32_t v11; // bp-88, 0x4bbff0
    int64_t * v12; // 0x4bc138
    int64_t v13; // 0x4bc141
    int64_t * v14; // 0x4bc150
    int64_t v15; // 0x4bc15e
    int64_t v16; // 0x4bbff0
    int64_t v17; // 0x4bbff0
    if ((int32_t)v5 == 0) {
        int64_t v18 = function_4ba7d0(&v2, a4); // 0x4bc127
        v6 = v18;
        if ((int32_t)v18 != 0) {
            goto lab_0x4bc0f8_6;
        } else {
            // 0x4bc130
            v12 = (int64_t *)a2;
            int64_t v19 = function_4b0d80(v12, 1); // 0x4bc138
            v6 = v19;
            if ((int32_t)v19 != 0) {
                goto lab_0x4bc0f8_6;
            } else {
                // 0x4bc141
                v13 = a2 + 48;
                v14 = (int64_t *)v13;
                int64_t v20 = function_4b0d80(v14, 0); // 0x4bc150
                v6 = v20;
                if ((int32_t)v20 != 0) {
                    goto lab_0x4bc0f8_6;
                } else {
                    // 0x4bc159
                    v15 = a1 + 8;
                    function_4b0890(a2 + 24);
                    v16 = (int64_t)&v2;
                    while ((int32_t)function_4b1590(v16, v15) >= 0) {
                        int64_t v21 = function_4b1820(&v2, &v2, v15); // 0x4bc177
                        v6 = v21;
                        if ((int32_t)v21 != 0) {
                            goto lab_0x4bc0f8_6;
                        }
                    }
                    if (a5 == 0) {
                        // 0x4bc198
                        v8 = (int64_t)&v10;
                        v7 = (int64_t *)&v11;
                        goto lab_0x4bc2ba;
                    } else {
                        // 0x4bc1a1
                        v17 = (int64_t)&v10;
                        function_4b0870(&v10);
                        int32_t v22 = 12; // 0x4bc1ca
                        function_4b38b0(v17, 0x20000000 * *(int64_t *)(a1 + 176) + 0xe0000000 >> 32, a5, a6);
                        int64_t v23; // 0x4bc202
                        while ((int32_t)function_4b1590(v17, v15) >= 0) {
                            // 0x4bc1f8
                            v23 = function_4b1220(v17, 1);
                            v9 = v23;
                            if ((int32_t)v23 != 0) {
                                goto lab_0x4bc20b;
                            }
                        }
                        // 0x4bc222
                        v22--;
                        v6 = 0xffffb300;
                        while (v22 != 0) {
                            // 0x4bc22d
                            if ((int32_t)function_4b1680(v17, 1) >= 1) {
                                // 0x4bc240
                                if ((int32_t)function_4b1ac0(&v2, &v2, v17) != 0) {
                                    goto lab_0x4bc20b;
                                } else {
                                    // 0x4bc259
                                    if ((int32_t)function_4b95a0(&v2, a1) != 0) {
                                        goto lab_0x4bc20b;
                                    } else {
                                        // 0x4bc26d
                                        g50++;
                                        int64_t v24 = function_4b1ac0((int64_t *)&v11, (int64_t *)&v11, v17); // 0x4bc288
                                        v9 = v24;
                                        if ((int32_t)v24 != 0) {
                                            goto lab_0x4bc20b;
                                        } else {
                                            int64_t v25 = function_4b95a0((int64_t *)&v11, a1); // 0x4bc29b
                                            v9 = v25;
                                            if ((int32_t)v25 != 0) {
                                                goto lab_0x4bc20b;
                                            } else {
                                                // 0x4bc2a8
                                                g50++;
                                                function_4b0890(v17);
                                                v8 = v17;
                                                v7 = (int64_t *)&v11;
                                                goto lab_0x4bc2ba;
                                            }
                                        }
                                    }
                                }
                            }
                            function_4b38b0(v17, 0x20000000 * *(int64_t *)(a1 + 176) + 0xe0000000 >> 32, a5, a6);
                            while ((int32_t)function_4b1590(v17, v15) >= 0) {
                                // 0x4bc1f8
                                v23 = function_4b1220(v17, 1);
                                v9 = v23;
                                if ((int32_t)v23 != 0) {
                                    goto lab_0x4bc20b;
                                }
                            }
                            // 0x4bc222
                            v22--;
                            v6 = 0xffffb300;
                        }
                        goto lab_0x4bc0f8_6;
                    }
                }
            }
        }
    } else {
        goto lab_0x4bc0f8_6;
    }
  lab_0x4bc0f8_6:
    // 0x4bc0f8
    function_4ba6b0(&v2);
    function_4b0890(v4);
    // 0x4bc04f
    return v6 & 0xffffffff;
  lab_0x4bc20b:
    // 0x4bc20b
    function_4b0890(v17);
    v6 = v9 & 0xffffffff;
    goto lab_0x4bc0f8_6;
  lab_0x4bc2ba:;
    int64_t * v26 = v7;
    int64_t v27 = function_4b0f10(a3); // 0x4bc2bd
    int64_t v28; // bp-424, 0x4bbff0
    int64_t v29 = (int64_t)&v28;
    int32_t v30; // bp-360, 0x4bbff0
    int64_t v31 = (int64_t)&v30;
    int64_t v32; // bp-328, 0x4bbff0
    int64_t v33 = (int64_t)&v32;
    int64_t v34; // bp-392, 0x4bbff0
    int64_t v35 = (int64_t)&v34;
    int32_t v36; // bp-296, 0x4bbff0
    int64_t v37 = (int64_t)&v36;
    int64_t v38 = (int64_t)&v11;
    int64_t v39; // bp-264, 0x4bbff0
    int64_t v40 = (int64_t)&v39;
    int32_t v41; // bp-232, 0x4bbff0
    int64_t v42 = (int64_t)&v41;
    int64_t v43; // bp-200, 0x4bbff0
    int64_t v44 = (int64_t)&v43;
    int64_t v45 = v27; // 0x4bc2c2
    while (true) {
        // 0x4bc2c6
        if (v45 == 0) {
            // break -> 0x4bc5c1
            break;
        }
        int64_t v46 = v45 - 1;
        uint64_t v47 = function_4b0df0(a3, v46) % 256; // 0x4bc2e3
        int64_t v48 = function_4b0c90(a2, &v2, v47); // 0x4bc2f1
        v6 = v48;
        if ((int32_t)v48 != 0) {
            goto lab_0x4bc0f8_6;
        }
        int64_t v49 = function_4b0c90(v13, v26, v47); // 0x4bc30f
        v6 = v49;
        if ((int32_t)v49 != 0) {
            goto lab_0x4bc0f8_6;
        }
        // 0x4bc31c
        function_4b0870(&v28);
        function_4b0870(&v34);
        function_4b0870((int64_t *)&v30);
        function_4b0870(&v32);
        function_4b0870((int64_t *)&v36);
        function_4b0870(&v39);
        function_4b0870((int64_t *)&v41);
        function_4b0870(&v43);
        function_4b0870(&v10);
        int64_t v50 = function_4b1900(&v28, a2, v13); // 0x4bc3a0
        int32_t v51 = v50;
        int32_t v52 = v51; // 0x4bc3a7
        int64_t v53 = v50; // 0x4bc3a7
        if (v51 == 0) {
            while ((int32_t)function_4b1590(v29, v15) >= 0) {
                int64_t v54 = function_4b1820(&v28, &v28, v15); // 0x4bc3c9
                int32_t v55 = v54;
                v52 = v55;
                v53 = v54;
                if (v55 != 0) {
                    goto lab_0x4bc3d2_7;
                }
            }
            int64_t v56 = function_4b1ac0(&v34, &v28, v29); // 0x4bc49e
            int32_t v57 = v56;
            v52 = v57;
            v53 = v56;
            if (v57 == 0) {
                int64_t v58 = function_4b95a0(&v34, a1); // 0x4bc4b3
                int32_t v59 = v58;
                v52 = v59;
                v53 = v58;
                if (v59 == 0) {
                    // 0x4bc4c0
                    g50++;
                    int64_t v60 = function_4b19a0((int64_t *)&v30, a2, v13); // 0x4bc4d8
                    int32_t v61 = v60;
                    v52 = v61;
                    v53 = v60;
                    if (v61 == 0) {
                        while (v30 < 0) {
                            // 0x4bc4e6
                            if ((int32_t)function_4b1680(v31, 0) == 0) {
                                // break -> 0x4bc51e
                                break;
                            }
                            int64_t v62 = function_4b1900((int64_t *)&v30, v31, v15); // 0x4bc507
                            int32_t v63 = v62;
                            v52 = v63;
                            v53 = v62;
                            if (v63 != 0) {
                                goto lab_0x4bc3d2_7;
                            }
                        }
                        int64_t v64 = function_4b1ac0(&v32, (int64_t *)&v30, v31); // 0x4bc531
                        int32_t v65 = v64;
                        v52 = v65;
                        v53 = v64;
                        if (v65 == 0) {
                            int64_t v66 = function_4b95a0(&v32, a1); // 0x4bc549
                            int32_t v67 = v66;
                            v52 = v67;
                            v53 = v66;
                            if (v67 == 0) {
                                // 0x4bc556
                                g50++;
                                int64_t v68 = function_4b19a0((int64_t *)&v36, v35, v33); // 0x4bc573
                                int32_t v69 = v68;
                                v52 = v69;
                                v53 = v68;
                                if (v69 == 0) {
                                    while (v36 < 0) {
                                        // 0x4bc58e
                                        if ((int32_t)function_4b1680(v37, 0) == 0) {
                                            // break -> 0x4bc62a
                                            break;
                                        }
                                        int64_t v70 = function_4b1900((int64_t *)&v36, v37, v15); // 0x4bc5b3
                                        int32_t v71 = v70;
                                        v52 = v71;
                                        v53 = v70;
                                        if (v71 != 0) {
                                            goto lab_0x4bc3d2_7;
                                        }
                                    }
                                    int64_t v72 = function_4b1900(&v39, v16, v38); // 0x4bc642
                                    int32_t v73 = v72;
                                    v52 = v73;
                                    v53 = v72;
                                    if (v73 == 0) {
                                        while ((int32_t)function_4b1590(v40, v15) >= 0) {
                                            int64_t v74 = function_4b1820(&v39, &v39, v15); // 0x4bc671
                                            int32_t v75 = v74;
                                            v52 = v75;
                                            v53 = v74;
                                            if (v75 != 0) {
                                                goto lab_0x4bc3d2_7;
                                            }
                                        }
                                        int64_t v76 = function_4b19a0((int64_t *)&v41, v16, v38); // 0x4bc697
                                        int32_t v77 = v76;
                                        v52 = v77;
                                        v53 = v76;
                                        if (v77 == 0) {
                                            while (v41 < 0) {
                                                // 0x4bc6ae
                                                if ((int32_t)function_4b1680(v42, 0) == 0) {
                                                    // break -> 0x4bc6dd
                                                    break;
                                                }
                                                int64_t v78 = function_4b1900((int64_t *)&v41, v42, v15); // 0x4bc6cf
                                                int32_t v79 = v78;
                                                v52 = v79;
                                                v53 = v78;
                                                if (v79 != 0) {
                                                    goto lab_0x4bc3d2_7;
                                                }
                                            }
                                            int64_t v80 = function_4b1ac0(&v43, (int64_t *)&v41, v29); // 0x4bc6f2
                                            int32_t v81 = v80;
                                            v52 = v81;
                                            v53 = v80;
                                            if (v81 == 0) {
                                                int64_t v82 = function_4b95a0(&v43, a1); // 0x4bc70a
                                                int32_t v83 = v82;
                                                v52 = v83;
                                                v53 = v82;
                                                if (v83 == 0) {
                                                    // 0x4bc717
                                                    g50++;
                                                    int64_t v84 = function_4b1ac0(&v10, &v39, v31); // 0x4bc734
                                                    int32_t v85 = v84;
                                                    v52 = v85;
                                                    v53 = v84;
                                                    if (v85 == 0) {
                                                        int64_t v86 = function_4b95a0(&v10, a1); // 0x4bc749
                                                        int32_t v87 = v86;
                                                        v52 = v87;
                                                        v53 = v86;
                                                        if (v87 == 0) {
                                                            // 0x4bc756
                                                            g50++;
                                                            int64_t v88 = function_4b1900(&v2, v44, v8); // 0x4bc773
                                                            int32_t v89 = v88;
                                                            v52 = v89;
                                                            v53 = v88;
                                                            if (v89 == 0) {
                                                                int64_t v90 = function_4b95a0(&v2, a1); // 0x4bc78b
                                                                int32_t v91 = v90;
                                                                v52 = v91;
                                                                v53 = v90;
                                                                if (v91 == 0) {
                                                                    // 0x4bc798
                                                                    g50++;
                                                                    int64_t v92 = function_4b1ac0(&v2, &v2, v16); // 0x4bc7ae
                                                                    int32_t v93 = v92;
                                                                    v52 = v93;
                                                                    v53 = v92;
                                                                    if (v93 == 0) {
                                                                        int64_t v94 = function_4b95a0(&v2, a1); // 0x4bc7c6
                                                                        int32_t v95 = v94;
                                                                        v52 = v95;
                                                                        v53 = v94;
                                                                        if (v95 == 0) {
                                                                            // 0x4bc7d3
                                                                            g50++;
                                                                            int64_t v96 = function_4b19a0(v26, v44, v8); // 0x4bc7f3
                                                                            int32_t v97 = v96;
                                                                            v52 = v97;
                                                                            v53 = v96;
                                                                            if (v97 == 0) {
                                                                                while (v11 < 0) {
                                                                                    // 0x4bc80a
                                                                                    if ((int32_t)function_4b1680(v38, 0) == 0) {
                                                                                        // break -> 0x4bc82f
                                                                                        break;
                                                                                    }
                                                                                    int64_t v98 = function_4b1900(v26, v38, v15); // 0x4bc821
                                                                                    int32_t v99 = v98;
                                                                                    v52 = v99;
                                                                                    v53 = v98;
                                                                                    if (v99 != 0) {
                                                                                        goto lab_0x4bc3d2_7;
                                                                                    }
                                                                                }
                                                                                int64_t v100 = function_4b1ac0(v26, v26, v38); // 0x4bc840
                                                                                int32_t v101 = v100;
                                                                                v52 = v101;
                                                                                v53 = v100;
                                                                                if (v101 == 0) {
                                                                                    int64_t v102 = function_4b95a0(v26, a1); // 0x4bc853
                                                                                    int32_t v103 = v102;
                                                                                    v52 = v103;
                                                                                    v53 = v102;
                                                                                    if (v103 == 0) {
                                                                                        // 0x4bc860
                                                                                        g50++;
                                                                                        int64_t v104 = function_4b1ac0(v26, &v3, v38); // 0x4bc873
                                                                                        int32_t v105 = v104;
                                                                                        v52 = v105;
                                                                                        v53 = v104;
                                                                                        if (v105 == 0) {
                                                                                            int64_t v106 = function_4b95a0(v26, a1); // 0x4bc886
                                                                                            int32_t v107 = v106;
                                                                                            v52 = v107;
                                                                                            v53 = v106;
                                                                                            if (v107 == 0) {
                                                                                                // 0x4bc893
                                                                                                g50++;
                                                                                                int64_t v108 = function_4b1ac0(v12, &v34, v33); // 0x4bc8ab
                                                                                                int32_t v109 = v108;
                                                                                                v52 = v109;
                                                                                                v53 = v108;
                                                                                                if (v109 == 0) {
                                                                                                    int64_t v110 = function_4b95a0(v12, a1); // 0x4bc8be
                                                                                                    int32_t v111 = v110;
                                                                                                    v52 = v111;
                                                                                                    v53 = v110;
                                                                                                    if (v111 == 0) {
                                                                                                        // 0x4bc8cb
                                                                                                        g50++;
                                                                                                        int64_t v112 = function_4b1ac0(v14, (int64_t *)(a1 + 32), v37); // 0x4bc8e4
                                                                                                        int32_t v113 = v112;
                                                                                                        v52 = v113;
                                                                                                        v53 = v112;
                                                                                                        if (v113 == 0) {
                                                                                                            int64_t v114 = function_4b95a0(v14, a1); // 0x4bc8f9
                                                                                                            int32_t v115 = v114;
                                                                                                            v52 = v115;
                                                                                                            v53 = v114;
                                                                                                            if (v115 == 0) {
                                                                                                                // 0x4bc906
                                                                                                                g50++;
                                                                                                                int64_t v116 = function_4b1900(v14, v33, v13); // 0x4bc91e
                                                                                                                int32_t v117 = v116;
                                                                                                                v52 = v117;
                                                                                                                v53 = v116;
                                                                                                                if (v117 == 0) {
                                                                                                                    while ((int32_t)function_4b1590(v13, v15) >= 0) {
                                                                                                                        int64_t v118 = function_4b1820(v14, v14, v15); // 0x4bc947
                                                                                                                        int32_t v119 = v118;
                                                                                                                        v52 = v119;
                                                                                                                        v53 = v118;
                                                                                                                        if (v119 != 0) {
                                                                                                                            goto lab_0x4bc3d2_7;
                                                                                                                        }
                                                                                                                    }
                                                                                                                    int64_t v120 = function_4b1ac0(v14, (int64_t *)&v36, v13); // 0x4bc965
                                                                                                                    int32_t v121 = v120;
                                                                                                                    v52 = v121;
                                                                                                                    v53 = v120;
                                                                                                                    if (v121 == 0) {
                                                                                                                        // 0x4bc972
                                                                                                                        return function_4b95a0(v14, a1);
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
      lab_0x4bc3d2_7:;
        int64_t v122 = v53;
        function_4b0890(v29);
        function_4b0890(v35);
        function_4b0890(v31);
        function_4b0890(v33);
        function_4b0890(v37);
        function_4b0890(v40);
        function_4b0890(v42);
        function_4b0890(v44);
        function_4b0890(v8);
        if (v52 != 0) {
            // 0x4bc0f8
            v6 = v122 & 0xffffffff;
            goto lab_0x4bc0f8_6;
        }
        int64_t v123 = function_4b0c90(a2, &v2, v47); // 0x4bc45d
        v6 = v123;
        if ((int32_t)v123 != 0) {
            goto lab_0x4bc0f8_6;
        }
        int64_t v124 = function_4b0c90(v13, v26, v47); // 0x4bc47f
        v6 = v124;
        v45 = v46;
        if ((int32_t)v124 != 0) {
            goto lab_0x4bc0f8_6;
        }
    }
    int64_t v125 = function_4b3cf0(v13); // 0x4bc5cc
    v6 = v125;
    if ((int32_t)v125 == 0) {
        int64_t v126 = function_4b1ac0(v12, v12, v13); // 0x4bc5e4
        v6 = v126;
        if ((int32_t)v126 == 0) {
            int64_t v127 = function_4b95a0(v12, a1); // 0x4bc5f7
            v6 = v127;
            if ((int32_t)v127 == 0) {
                // 0x4bc604
                g50++;
                v6 = function_4b0d80(v14, 1);
            }
        }
    }
    goto lab_0x4bc0f8_6;
}

// Address range: 0x4c1ea0 - 0x4c28e6
int64_t function_4c1ea0(int64_t a1, int64_t a2) {
    unsigned char v1 = *(char *)(a2 + 1); // 0x4c1eaa
    unsigned char v2 = *(char *)(a2 + 2); // 0x4c1eae
    unsigned char v3 = *(char *)(a2 + 5); // 0x4c1eb2
    unsigned char v4 = *(char *)(a2 + 13); // 0x4c1eb6
    unsigned char v5 = *(char *)(a2 + 17); // 0x4c1ebb
    unsigned char v6 = *(char *)(a2 + 3); // 0x4c1ed6
    int64_t v7; // 0x4c1ea0
    int32_t v8 = 256 * (int32_t)v1 | (int32_t)v7 % 256 | 0x10000 * (int32_t)v2 | 0x1000000 * (int32_t)v6; // 0x4c1edd
    unsigned char v9 = *(char *)(a2 + 6); // 0x4c1edf
    unsigned char v10 = *(char *)(a2 + 4); // 0x4c1ee8
    unsigned char v11 = *(char *)(a2 + 7); // 0x4c1eee
    int32_t v12 = 0x10000 * (int32_t)v9 | 256 * (int32_t)v3 | (int32_t)v10 | 0x1000000 * (int32_t)v11; // 0x4c1ef5
    unsigned char v13 = *(char *)(a2 + 9); // 0x4c1ef7
    unsigned char v14 = *(char *)(a2 + 10); // 0x4c1f02
    unsigned char v15 = *(char *)(a2 + 8); // 0x4c1f0d
    unsigned char v16 = *(char *)(a2 + 11); // 0x4c1f15
    int32_t v17 = 0x10000 * (int32_t)v14 | 256 * (int32_t)v13 | (int32_t)v15 | 0x1000000 * (int32_t)v16; // 0x4c1f1c
    unsigned char v18 = *(char *)(a2 + 14); // 0x4c1f20
    unsigned char v19 = *(char *)(a2 + 12); // 0x4c1f2a
    unsigned char v20 = *(char *)(a2 + 15); // 0x4c1f31
    int32_t v21 = 0x10000 * (int32_t)v18 | 256 * (int32_t)v4 | (int32_t)v19 | 0x1000000 * (int32_t)v20; // 0x4c1f38
    unsigned char v22 = *(char *)(a2 + 18); // 0x4c1f3b
    unsigned char v23 = *(char *)(a2 + 16); // 0x4c1f44
    unsigned char v24 = *(char *)(a2 + 19); // 0x4c1f4a
    int32_t v25 = 0x10000 * (int32_t)v22 | 256 * (int32_t)v5 | (int32_t)v23 | 0x1000000 * (int32_t)v24; // 0x4c1f51
    unsigned char v26 = *(char *)(a2 + 21); // 0x4c1f57
    unsigned char v27 = *(char *)(a2 + 22); // 0x4c1f5c
    unsigned char v28 = *(char *)(a2 + 25); // 0x4c1f60
    unsigned char v29 = *(char *)(a2 + 29); // 0x4c1f65
    unsigned char v30 = *(char *)(a2 + 34); // 0x4c1f6a
    unsigned char v31 = *(char *)(a2 + 37); // 0x4c1f6e
    unsigned char v32 = *(char *)(a2 + 45); // 0x4c1f73
    unsigned char v33 = *(char *)(a2 + 50); // 0x4c1f7c
    unsigned char v34 = *(char *)(a2 + 53); // 0x4c1f80
    unsigned char v35 = *(char *)(a2 + 20); // 0x4c1f8b
    unsigned char v36 = *(char *)(a2 + 23); // 0x4c1f92
    int32_t v37 = 0x10000 * (int32_t)v27 | 256 * (int32_t)v26 | (int32_t)v35 | 0x1000000 * (int32_t)v36; // 0x4c1fa8
    unsigned char v38 = *(char *)(a2 + 26); // 0x4c1fab
    unsigned char v39 = *(char *)(a2 + 24); // 0x4c1fb5
    unsigned char v40 = *(char *)(a2 + 27); // 0x4c1fbc
    int32_t v41 = 0x10000 * (int32_t)v38 | 256 * (int32_t)v28 | (int32_t)v39 | 0x1000000 * (int32_t)v40; // 0x4c1fc3
    unsigned char v42 = *(char *)(a2 + 30); // 0x4c1fc6
    unsigned char v43 = *(char *)(a2 + 42); // 0x4c1fcf
    unsigned char v44 = *(char *)(a2 + 28); // 0x4c1fda
    unsigned char v45 = *(char *)(a2 + 31); // 0x4c1fe5
    int32_t v46 = 0x10000 * (int32_t)v42 | 256 * (int32_t)v29 | (int32_t)v44 | 0x1000000 * (int32_t)v45; // 0x4c1fec
    unsigned char v47 = *(char *)(a2 + 33); // 0x4c1fef
    unsigned char v48 = *(char *)(a2 + 32); // 0x4c1ff8
    unsigned char v49 = *(char *)(a2 + 35); // 0x4c1ffe
    int32_t v50 = 256 * (int32_t)v47 | 0x10000 * (int32_t)v30 | (int32_t)v48 | 0x1000000 * (int32_t)v49; // 0x4c2005
    unsigned char v51 = *(char *)(a2 + 38); // 0x4c2007
    unsigned char v52 = *(char *)(a2 + 36); // 0x4c2011
    unsigned char v53 = *(char *)(a2 + 39); // 0x4c2018
    int32_t v54 = 0x10000 * (int32_t)v51 | 256 * (int32_t)v31 | (int32_t)v52 | 0x1000000 * (int32_t)v53; // 0x4c201f
    unsigned char v55 = *(char *)(a2 + 41); // 0x4c2022
    unsigned char v56 = *(char *)(a2 + 40); // 0x4c202c
    unsigned char v57 = *(char *)(a2 + 43); // 0x4c2034
    int32_t v58 = 256 * (int32_t)v55 | 0x10000 * (int32_t)v43 | (int32_t)v56 | 0x1000000 * (int32_t)v57; // 0x4c203d
    unsigned char v59 = *(char *)(a2 + 46); // 0x4c2040
    unsigned char v60 = *(char *)(a2 + 44); // 0x4c2057
    unsigned char v61 = *(char *)(a2 + 47); // 0x4c205f
    int32_t v62 = 0x10000 * (int32_t)v59 | 256 * (int32_t)v32 | (int32_t)v60 | 0x1000000 * (int32_t)v61; // 0x4c2068
    unsigned char v63 = *(char *)(a2 + 49); // 0x4c206b
    unsigned char v64 = *(char *)(a2 + 48); // 0x4c207c
    unsigned char v65 = *(char *)(a2 + 51); // 0x4c2083
    int32_t v66 = 256 * (int32_t)v63 | 0x10000 * (int32_t)v33 | (int32_t)v64 | 0x1000000 * (int32_t)v65; // 0x4c208a
    unsigned char v67 = *(char *)(a2 + 54); // 0x4c208d
    unsigned char v68 = *(char *)(a2 + 52); // 0x4c2097
    unsigned char v69 = *(char *)(a2 + 55); // 0x4c209e
    int32_t v70 = 0x10000 * (int32_t)v67 | 256 * (int32_t)v34 | (int32_t)v68 | 0x1000000 * (int32_t)v69; // 0x4c20a5
    unsigned char v71 = *(char *)(a2 + 57); // 0x4c20ad
    unsigned char v72 = *(char *)(a2 + 58); // 0x4c20b2
    int32_t * v73 = (int32_t *)(a1 + 8); // 0x4c20b6
    int32_t v74 = *v73; // 0x4c20b6
    int32_t * v75 = (int32_t *)(a1 + 20); // 0x4c20ba
    int32_t v76 = *v75; // 0x4c20ba
    unsigned char v77 = *(char *)(a2 + 56); // 0x4c20c8
    unsigned char v78 = *(char *)(a2 + 59); // 0x4c20cf
    int32_t v79 = 0x10000 * (int32_t)v72 | 256 * (int32_t)v71 | (int32_t)v77 | 0x1000000 * (int32_t)v78; // 0x4c20d6
    unsigned char v80 = *(char *)(a2 + 61); // 0x4c20d9
    int32_t * v81 = (int32_t *)(a1 + 16); // 0x4c20e2
    int32_t v82 = *v81; // 0x4c20e2
    unsigned char v83 = *(char *)(a2 + 62); // 0x4c20ed
    unsigned char v84 = *(char *)(a2 + 60); // 0x4c20f8
    unsigned char v85 = *(char *)(a2 + 63); // 0x4c20fc
    int32_t v86 = 0x10000 * (int32_t)v83 | 256 * (int32_t)v80 | (int32_t)v84 | 0x1000000 * (int32_t)v85; // 0x4c210a
    int32_t * v87 = (int32_t *)(a1 + 12); // 0x4c2114
    int32_t v88 = *v87; // 0x4c2114
    uint32_t v89 = v8 - 0x28955b88 + v74 + (v88 & (v82 ^ v76) ^ v76); // 0x4c212a
    int32_t v90 = (v89 / 0x2000000 | 128 * v89) + v88; // 0x4c2132
    uint32_t v91 = v12 - 0x173848aa + v76 + (v90 & (v88 ^ v82) ^ v82); // 0x4c213a
    int32_t v92 = (v91 / 0x100000 | 0x1000 * v91) + v90; // 0x4c2145
    uint32_t v93 = v17 + 0x242070db + v82 + (v92 & (v90 ^ v88) ^ v88); // 0x4c215d
    int32_t v94 = (v93 / 0x8000 | 0x20000 * v93) + v92; // 0x4c2168
    uint32_t v95 = v21 - 0x3e423112 + v88 + (v94 & (v92 ^ v90) ^ v90); // 0x4c217f
    int32_t v96 = (v95 / 1024 | 0x400000 * v95) + v94; // 0x4c218b
    uint32_t v97 = v25 - 0xa83f051 + v90 + (v96 & (v94 ^ v92) ^ v92); // 0x4c21ac
    int32_t v98 = (v97 / 0x2000000 | 128 * v97) + v96; // 0x4c21b9
    uint32_t v99 = v37 + 0x4787c62a + v92 + (v98 & (v96 ^ v94) ^ v94); // 0x4c21c1
    int32_t v100 = (v99 / 0x100000 | 0x1000 * v99) + v98; // 0x4c21cc
    uint32_t v101 = v41 - 0x57cfb9ed + v94 + (v100 & (v98 ^ v96) ^ v96); // 0x4c21ef
    int32_t v102 = (v101 / 0x8000 | 0x20000 * v101) + v100; // 0x4c21fe
    uint32_t v103 = v46 - 0x2b96aff + v96 + (v102 & (v100 ^ v98) ^ v98); // 0x4c2207
    int32_t v104 = (v103 / 1024 | 0x400000 * v103) + v102; // 0x4c221b
    uint32_t v105 = v50 + 0x698098d8 + v98 + (v104 & (v102 ^ v100) ^ v100); // 0x4c2223
    int32_t v106 = (v105 / 0x2000000 | 128 * v105) + v104; // 0x4c2237
    uint32_t v107 = v54 - 0x74bb0851 + v100 + (v106 & (v104 ^ v102) ^ v102); // 0x4c223f
    int32_t v108 = (v107 / 0x100000 | 0x1000 * v107) + v106; // 0x4c2253
    uint32_t v109 = v58 - 0xa44f + v102 + (v108 & (v106 ^ v104) ^ v104); // 0x4c225b
    int32_t v110 = (v109 / 0x8000 | 0x20000 * v109) + v108; // 0x4c2267
    uint32_t v111 = v62 - 0x76a32842 + v104 + (v110 & (v108 ^ v106) ^ v106); // 0x4c228b
    int32_t v112 = (v111 / 1024 | 0x400000 * v111) + v110; // 0x4c2299
    uint32_t v113 = v66 + 0x6b901122 + v106 + (v112 & (v110 ^ v108) ^ v108); // 0x4c22a1
    int32_t v114 = (v113 / 0x2000000 | 128 * v113) + v112; // 0x4c22ac
    uint32_t v115 = v70 - 0x2678e6d + v108 + (v114 & (v112 ^ v110) ^ v110); // 0x4c22cb
    int32_t v116 = (v115 / 0x100000 | 0x1000 * v115) + v114; // 0x4c22ea
    uint32_t v117 = v79 - 0x5986bc72 + v110 + (v116 & (v114 ^ v112) ^ v112); // 0x4c22f2
    int32_t v118 = (v117 / 0x8000 | 0x20000 * v117) + v116; // 0x4c2316
    uint32_t v119 = v86 + 0x49b40821 + v112 + (v118 & (v116 ^ v114) ^ v114); // 0x4c231f
    int32_t v120 = (v119 / 1024 | 0x400000 * v119) + v118; // 0x4c2328
    uint32_t v121 = v12 - 0x9e1da9e + v114 + ((v120 ^ v118) & v116 ^ v118); // 0x4c2336
    int32_t v122 = (v121 / 0x8000000 | 32 * v121) + v120; // 0x4c2341
    uint32_t v123 = v41 - 0x3fbf4cc0 + v116 + ((v122 ^ v120) & v118 ^ v120); // 0x4c2370
    int32_t v124 = (v123 / 0x800000 | 512 * v123) + v122; // 0x4c237c
    uint32_t v125 = v62 + 0x265e5a51 + v118 + ((v124 ^ v122) & v120 ^ v122); // 0x4c238a
    int32_t v126 = (v125 / 0x40000 | 0x4000 * v125) + v124; // 0x4c2393
    uint32_t v127 = v8 - 0x16493856 + v120 + ((v126 ^ v124) & v122 ^ v124); // 0x4c23a2
    int32_t v128 = (v127 / 0x1000 | 0x100000 * v127) + v126; // 0x4c23b1
    uint32_t v129 = v37 - 0x29d0efa3 + v122 + ((v128 ^ v126) & v124 ^ v126); // 0x4c23bf
    int32_t v130 = (v129 / 0x8000000 | 32 * v129) + v128; // 0x4c23cd
    uint32_t v131 = v58 + 0x2441453 + v124 + ((v130 ^ v128) & v126 ^ v128); // 0x4c23db
    int32_t v132 = (v131 / 0x800000 | 512 * v131) + v130; // 0x4c23e6
    uint32_t v133 = v86 - 0x275e197f + v126 + ((v132 ^ v130) & v128 ^ v130); // 0x4c2416
    int32_t v134 = (v133 / 0x40000 | 0x4000 * v133) + v132; // 0x4c2424
    uint32_t v135 = v25 - 0x182c0438 + v128 + ((v134 ^ v132) & v130 ^ v132); // 0x4c2433
    int32_t v136 = (v135 / 0x1000 | 0x100000 * v135) + v134; // 0x4c243c
    uint32_t v137 = v54 + 0x21e1cde6 + v130 + ((v136 ^ v134) & v132 ^ v134); // 0x4c244a
    int32_t v138 = (v137 / 0x8000000 | 32 * v137) + v136; // 0x4c2455
    uint32_t v139 = v79 - 0x3cc8f82a + v132 + ((v138 ^ v136) & v134 ^ v136); // 0x4c2477
    int32_t v140 = (v139 / 0x800000 | 512 * v139) + v138; // 0x4c247e
    uint32_t v141 = v21 - 0xb2af279 + v134 + ((v140 ^ v138) & v136 ^ v138); // 0x4c248c
    int32_t v142 = (v141 / 0x40000 | 0x4000 * v141) + v140; // 0x4c249b
    uint32_t v143 = v50 + 0x455a14ed + v136 + ((v142 ^ v140) & v138 ^ v140); // 0x4c24aa
    int32_t v144 = (v143 / 0x1000 | 0x100000 * v143) + v142; // 0x4c24b6
    uint32_t v145 = v70 - 0x561c16fb + v138 + ((v144 ^ v142) & v140 ^ v142); // 0x4c24e5
    int32_t v146 = (v145 / 0x8000000 | 32 * v145) + v144; // 0x4c24f0
    uint32_t v147 = v17 - 0x3105c08 + v140 + ((v146 ^ v144) & v142 ^ v144); // 0x4c24fe
    int32_t v148 = (v147 / 0x800000 | 512 * v147) + v146; // 0x4c2505
    uint32_t v149 = v46 + 0x676f02d9 + v142 + ((v148 ^ v146) & v144 ^ v146); // 0x4c251b
    int32_t v150 = (v149 / 0x40000 | 0x4000 * v149) + v148; // 0x4c2527
    int32_t v151 = v150 ^ v148; // 0x4c252d
    uint32_t v152 = v66 - 0x72d5b376 + v144 + (v151 & v146 ^ v148); // 0x4c2541
    int32_t v153 = (v152 / 0x1000 | 0x100000 * v152) + v150; // 0x4c2551
    uint32_t v154 = v37 - 0x5c6be + v146 + (v153 ^ v151); // 0x4c2557
    int32_t v155 = (v154 / 0x10000000 | 16 * v154) + v153; // 0x4c2564
    int32_t v156 = v155 ^ v153;
    uint32_t v157 = v50 - 0x788e097f + v148 + (v156 ^ v150); // 0x4c256a
    int32_t v158 = (v157 / 0x200000 | 2048 * v157) + v155; // 0x4c2573
    uint32_t v159 = v62 + 0x6d9d6122 + v150 + (v158 ^ v156); // 0x4c2586
    int32_t v160 = (v159 / 0x10000 | 0x10000 * v159) + v158; // 0x4c2591
    int32_t v161 = v160 ^ v158;
    uint32_t v162 = v79 - 0x21ac7f4 + v153 + (v161 ^ v155); // 0x4c25ac
    int32_t v163 = (v162 / 512 | 0x800000 * v162) + v160; // 0x4c25b9
    uint32_t v164 = v12 - 0x5b4115bc + v155 + (v161 ^ v163); // 0x4c25bf
    int32_t v165 = (v164 / 0x10000000 | 16 * v164) + v163; // 0x4c25cb
    uint32_t v166 = v25 + 0x4bdecfa9 + v158 + (v163 ^ v160 ^ v165); // 0x4c25ed
    int32_t v167 = (v166 / 0x200000 | 2048 * v166) + v165; // 0x4c25ff
    uint32_t v168 = v46 - 0x944b4a0 + v160 + (v165 ^ v163 ^ v167); // 0x4c2604
    int32_t v169 = (v168 / 0x10000 | 0x10000 * v168) + v167; // 0x4c2610
    uint32_t v170 = v58 - 0x41404390 + v163 + (v167 ^ v165 ^ v169); // 0x4c2616
    int32_t v171 = (v170 / 512 | 0x800000 * v170) + v169; // 0x4c2621
    uint32_t v172 = v70 + 0x289b7ec6 + v165 + (v169 ^ v167 ^ v171); // 0x4c2634
    int32_t v173 = (v172 / 0x10000000 | 16 * v172) + v171; // 0x4c2650
    uint32_t v174 = v8 - 0x155ed806 + v167 + (v171 ^ v169 ^ v173); // 0x4c2655
    int32_t v175 = (v174 / 0x200000 | 2048 * v174) + v173; // 0x4c2661
    uint32_t v176 = v21 - 0x2b10cf7b + v169 + (v173 ^ v171 ^ v175); // 0x4c2667
    int32_t v177 = (v176 / 0x10000 | 0x10000 * v176) + v175; // 0x4c2672
    uint32_t v178 = v41 + 0x4881d05 + v171 + (v175 ^ v173 ^ v177); // 0x4c2685
    int32_t v179 = (v178 / 512 | 0x800000 * v178) + v177; // 0x4c26a1
    uint32_t v180 = v54 - 0x262b2fc7 + v173 + (v177 ^ v175 ^ v179); // 0x4c26a6
    int32_t v181 = (v180 / 0x10000000 | 16 * v180) + v179; // 0x4c26b2
    uint32_t v182 = v66 - 0x1924661b + v175 + (v179 ^ v177 ^ v181); // 0x4c26b8
    int32_t v183 = (v182 / 0x200000 | 2048 * v182) + v181; // 0x4c26c3
    uint32_t v184 = v86 + 0x1fa27cf8 + v177 + (v181 ^ v179 ^ v183); // 0x4c26d6
    int32_t v185 = (v184 / 0x10000 | 0x10000 * v184) + v183; // 0x4c26e1
    uint32_t v186 = v17 - 0x3b53a99b + v179 + (v183 ^ v181 ^ v185); // 0x4c2708
    int32_t v187 = (v186 / 512 | 0x800000 * v186) + v185; // 0x4c2711
    uint32_t v188 = v8 - 0xbd6ddbc + v181 + ((v187 | -1 - v183) ^ v185); // 0x4c2717
    int32_t v189 = (v188 / 0x4000000 | 64 * v188) + v187; // 0x4c2730
    uint32_t v190 = v46 + 0x432aff97 + v183 + ((v189 | -1 - v185) ^ v187); // 0x4c2738
    int32_t v191 = (v190 / 0x400000 | 1024 * v190) + v189; // 0x4c2753
    uint32_t v192 = v79 - 0x546bdc59 + v185 + ((v191 | -1 - v187) ^ v189); // 0x4c2771
    int32_t v193 = (v192 / 0x20000 | 0x8000 * v192) + v191; // 0x4c277f
    uint32_t v194 = v37 - 0x36c5fc7 + v187 + ((v193 | -1 - v189) ^ v191); // 0x4c2793
    int32_t v195 = (v194 / 2048 | 0x200000 * v194) + v193; // 0x4c27a1
    uint32_t v196 = v66 + 0x655b59c3 + v189 + ((v195 | -1 - v191) ^ v193); // 0x4c27b4
    int32_t v197 = (v196 / 0x4000000 | 64 * v196) + v195; // 0x4c27bd
    uint32_t v198 = v21 - 0x70f3336e + v191 + ((v197 | -1 - v193) ^ v195); // 0x4c27c6
    int32_t v199 = (v198 / 0x400000 | 1024 * v198) + v197; // 0x4c27cd
    uint32_t v200 = v58 - 0x100b83 + v193 + ((v199 | -1 - v195) ^ v197); // 0x4c27d6
    int32_t v201 = (v200 / 0x20000 | 0x8000 * v200) + v199; // 0x4c27e8
    uint32_t v202 = v12 - 0x7a7ba22f + v195 + ((v201 | -1 - v197) ^ v199); // 0x4c27f0
    int32_t v203 = (v202 / 2048 | 0x200000 * v202) + v201; // 0x4c280a
    uint32_t v204 = v50 + 0x6fa87e4f + v197 + ((v203 | -1 - v199) ^ v201); // 0x4c281a
    int32_t v205 = (v204 / 0x4000000 | 64 * v204) + v203; // 0x4c2823
    uint32_t v206 = v86 - 0x1d31920 + v199 + ((v205 | -1 - v201) ^ v203); // 0x4c2829
    int32_t v207 = (v206 / 0x400000 | 1024 * v206) + v205; // 0x4c283b
    uint32_t v208 = v41 - 0x5cfebcec + v201 + ((v207 | -1 - v203) ^ v205); // 0x4c2841
    int32_t v209 = (v208 / 0x20000 | 0x8000 * v208) + v207; // 0x4c2853
    uint32_t v210 = v70 + 0x4e0811a1 + v203 + ((v209 | -1 - v205) ^ v207); // 0x4c2859
    int32_t v211 = (v210 / 2048 | 0x200000 * v210) + v209; // 0x4c286b
    uint32_t v212 = v25 - 0x8ac817e + v205 + ((v211 | -1 - v207) ^ v209); // 0x4c2871
    int32_t v213 = (v212 / 0x4000000 | 64 * v212) + v211; // 0x4c2883
    uint32_t v214 = v62 - 0x42c50dcb + v207 + ((v213 | -1 - v209) ^ v211); // 0x4c2889
    int32_t v215 = (v214 / 0x400000 | 1024 * v214) + v213; // 0x4c289b
    uint32_t v216 = v17 + 0x2ad7d2bb + v209 + ((v215 | -1 - v211) ^ v213); // 0x4c28a1
    int32_t v217 = (v216 / 0x20000 | 0x8000 * v216) + v215; // 0x4c28b2
    *v73 = v213 + v74;
    uint32_t v218 = v54 - 0x14792c6f + v211 + ((v217 | -1 - v213) ^ v215); // 0x4c28cc
    *v81 = v217 + *v81;
    uint32_t result = v217 + *v87 + (v218 / 2048 | 0x200000 * v218); // 0x4c28d9
    *v75 = v215 + *v75;
    *v87 = result;
    return result;
}

// Address range: 0x4ccde0 - 0x4cd7c5
// Used cryptographic patterns:
//  - SHA256_Hash_constant_words_K__0x428a2f98_ (32-bit, little endian)
int64_t function_4ccde0(int64_t a1, int64_t a2) {
    // 0x4ccde0
    int64_t v1; // bp-256, 0x4ccde0
    int64_t v2 = (int64_t)&v1; // 0x4ccdef
    int64_t v3 = a1 + 8; // 0x4cce00
    int64_t v4 = v2 - 88; // 0x4cce04
    for (int64_t i = 0; i < 29; i += 4) {
        // 0x4cce00
        *(int32_t *)(i + v4) = *(int32_t *)(i + v3);
    }
    int64_t v5 = v2 - 56; // 0x4cce3a
    for (int64_t i = 0; i < 61; i += 4) {
        int64_t v6 = i + a2;
        unsigned char v7 = *(char *)v6; // 0x4cce18
        unsigned char v8 = *(char *)(v6 + 1); // 0x4cce1c
        unsigned char v9 = *(char *)(v6 + 3); // 0x4cce29
        unsigned char v10 = *(char *)(v6 + 2); // 0x4cce30
        *(int32_t *)(v5 + i) = 0x10000 * (int32_t)v8 | 0x1000000 * (int32_t)v7 | (int32_t)v9 | 256 * (int32_t)v10;
    }
    // 0x4cce48
    int64_t v11; // bp-312, 0x4ccde0
    int64_t v12 = (int64_t)&v11; // 0x4cce5f
    int32_t v13; // 0x4ccde0
    int64_t v14 = v13; // 0x4cce82
    int64_t v15 = v13; // 0x4cce82
    int64_t v16 = v12; // 0x4cce82
    int64_t v17 = (uint32_t)v13; // 0x4cce82
    int64_t v18 = (int64_t)&SHA256_Hash_constant_words_K__0x428a2f98__at_598520; // 0x4cce82
    int64_t v19 = v13;
    int64_t v20 = v13;
    int64_t v21 = v13;
    uint32_t v22 = (int32_t)v14; // 0x4cce84
    int32_t v23 = *(int32_t *)v16; // 0x4cce89
    int32_t v24 = *(int32_t *)v18; // 0x4cce91
    uint32_t v25 = (int32_t)v20; // 0x4ccea4
    int32_t v26 = *(int32_t *)(v18 | 4); // 0x4cceb6
    int32_t v27 = *(int32_t *)(v16 | 4); // 0x4ccec0
    int32_t v28; // 0x4ccde0
    int32_t v29 = ((v22 / 2048 | 0x200000 * v22) ^ (v22 / 64 | 0x4000000 * v22) ^ (v22 / 0x2000000 | 128 * v22)) + v28 + (int32_t)((v15 ^ v21) & v14 ^ v21) + v23 + v24; // 0x4ccec3
    int32_t v30; // 0x4ccde0
    uint32_t v31 = v29 + v30; // 0x4cced1
    uint32_t v32 = v29 + (int32_t)((v19 | v20) & v17 | v19 & v20) + ((v25 / 0x2000 | 0x80000 * v25) ^ (v25 / 4 | 0x40000000 * v25) ^ (v25 / 0x400000 | 1024 * v25)); // 0x4ccef0
    int32_t v33 = v15; // 0x4ccf00
    int32_t v34 = *(int32_t *)(v18 | 8); // 0x4ccf18
    int32_t v35 = *(int32_t *)(v16 + 8); // 0x4ccf22
    int32_t v36 = v26 + (int32_t)v21 + v27 + (v31 & (int32_t)(v15 ^ v14) ^ v33) + ((v31 / 2048 | 0x200000 * v31) ^ (v31 / 64 | 0x4000000 * v31) ^ (v31 / 0x2000000 | 128 * v31)); // 0x4ccf25
    int32_t v37 = v19; // 0x4ccf2f
    uint32_t v38 = v36 + (int32_t)v17; // 0x4ccf32
    uint32_t v39 = v36 + ((v32 | v25) & v37 | v32 & v25) + ((v32 / 0x2000 | 0x80000 * v32) ^ (v32 / 4 | 0x40000000 * v32) ^ (v32 / 0x400000 | 1024 * v32)); // 0x4ccf50
    int32_t v40 = v34 + v33 + v35 + (v38 & (v31 ^ v22) ^ v22) + ((v38 / 2048 | 0x200000 * v38) ^ (v38 / 64 | 0x4000000 * v38) ^ (v38 / 0x2000000 | 128 * v38)); // 0x4ccf7f
    int32_t v41 = *(int32_t *)(v18 | 12); // 0x4ccf99
    uint32_t v42 = v40 + v37; // 0x4ccfa1
    int32_t v43 = *(int32_t *)(v16 + 12); // 0x4ccfa4
    uint32_t v44 = v40 + ((v39 | v32) & v25 | v39 & v32) + ((v39 / 0x2000 | 0x80000 * v39) ^ (v39 / 4 | 0x40000000 * v39) ^ (v39 / 0x400000 | 1024 * v39)); // 0x4ccfb0
    int32_t v45 = *(int32_t *)(v16 + 16); // 0x4ccfc9
    int32_t v46 = *(int32_t *)(v18 + 16); // 0x4ccfd2
    int32_t v47 = v41 + v22 + v43 + (v42 & (v38 ^ v31) ^ v31) + ((v42 / 2048 | 0x200000 * v42) ^ (v42 / 64 | 0x4000000 * v42) ^ (v42 / 0x2000000 | 128 * v42)); // 0x4ccfe9
    uint32_t v48 = v47 + v25; // 0x4ccff5
    uint32_t v49 = v47 + ((v44 | v39) & v32 | v44 & v39) + ((v44 / 0x2000 | 0x80000 * v44) ^ (v44 / 4 | 0x40000000 * v44) ^ (v44 / 0x400000 | 1024 * v44)); // 0x4cd013
    int32_t v50 = *(int32_t *)(v16 + 20); // 0x4cd02c
    int32_t v51 = *(int32_t *)(v18 + 20); // 0x4cd036
    int32_t v52 = v45 + v31 + v46 + (v48 & (v42 ^ v38) ^ v38) + ((v48 / 2048 | 0x200000 * v48) ^ (v48 / 64 | 0x4000000 * v48) ^ (v48 / 0x2000000 | 128 * v48)); // 0x4cd04d
    uint32_t v53 = v52 + v32; // 0x4cd05a
    uint32_t v54 = v52 + ((v49 | v44) & v39 | v49 & v44) + ((v49 / 0x2000 | 0x80000 * v49) ^ (v49 / 4 | 0x40000000 * v49) ^ (v49 / 0x400000 | 1024 * v49)); // 0x4cd078
    int32_t v55 = v50 + v38 + v51 + (v53 & (v48 ^ v42) ^ v42) + ((v53 / 2048 | 0x200000 * v53) ^ (v53 / 64 | 0x4000000 * v53) ^ (v53 / 0x2000000 | 128 * v53)); // 0x4cd0a5
    int32_t v56 = *(int32_t *)(v16 + 24); // 0x4cd0bd
    uint32_t v57 = v55 + v39; // 0x4cd0c4
    int64_t v58 = v57; // 0x4cd0c4
    int32_t v59 = *(int32_t *)(v18 + 24); // 0x4cd0c7
    uint32_t v60 = v55 + ((v54 | v49) & v44 | v54 & v49) + ((v54 / 0x2000 | 0x80000 * v54) ^ (v54 / 4 | 0x40000000 * v54) ^ (v54 / 0x400000 | 1024 * v54)); // 0x4cd0de
    v17 = v60;
    int32_t v61 = v59 + v56 + v42 + (v57 & (v53 ^ v48) ^ v48) + ((v57 / 2048 | 0x200000 * v57) ^ (v57 / 64 | 0x4000000 * v57) ^ (v57 / 0x2000000 | 128 * v57)); // 0x4cd10e
    int32_t v62 = *(int32_t *)(v16 + 28); // 0x4cd136
    uint32_t v63 = v61 + v44; // 0x4cd13a
    v15 = v63;
    int32_t v64 = *(int32_t *)(v18 + 28); // 0x4cd13d
    uint32_t v65 = v61 + ((v60 | v54) & v49 | v60 & v54) + ((v60 / 0x2000 | 0x80000 * v60) ^ (v60 / 4 | 0x40000000 * v60) ^ (v60 / 0x400000 | 1024 * v60)); // 0x4cd141
    int64_t v66 = v65; // 0x4cd141
    v18 += 32;
    int32_t v67 = v64 + v62 + v48 + (v63 & (v57 ^ v53) ^ v53) + ((v63 / 2048 | 0x200000 * v63) ^ (v63 / 64 | 0x4000000 * v63) ^ (v63 / 0x2000000 | 128 * v63)); // 0x4cd17a
    v14 = v67 + v49;
    int64_t v68 = v67 + ((v65 | v60) & v54 | v65 & v60) + ((v65 / 0x2000 | 0x80000 * v65) ^ (v65 / 4 | 0x40000000 * v65) ^ (v65 / 0x400000 | 1024 * v65)); // 0x4cd1a5
    v16 += 32;
    int64_t v69 = (int64_t)&SHA256_Hash_constant_words_K__0x428a2f98__at_598520; // 0x4cd1ab
    int64_t v70 = v15; // 0x4cd1ab
    int64_t v71 = v14; // 0x4cd1ab
    int64_t v72 = v17; // 0x4cd1ab
    while (v18 != (int64_t)&g19) {
        // 0x4cce84
        v19 = v66;
        v20 = v68;
        v21 = v58;
        v22 = (int32_t)v14;
        v23 = *(int32_t *)v16;
        v24 = *(int32_t *)v18;
        v25 = (int32_t)v20;
        v26 = *(int32_t *)(v18 | 4);
        v27 = *(int32_t *)(v16 | 4);
        v29 = ((v22 / 2048 | 0x200000 * v22) ^ (v22 / 64 | 0x4000000 * v22) ^ (v22 / 0x2000000 | 128 * v22)) + v53 + (int32_t)((v15 ^ v21) & v14 ^ v21) + v23 + v24;
        v31 = v29 + v54;
        v32 = v29 + (int32_t)((v19 | v20) & v17 | v19 & v20) + ((v25 / 0x2000 | 0x80000 * v25) ^ (v25 / 4 | 0x40000000 * v25) ^ (v25 / 0x400000 | 1024 * v25));
        v33 = v15;
        v34 = *(int32_t *)(v18 | 8);
        v35 = *(int32_t *)(v16 + 8);
        v36 = v26 + (int32_t)v21 + v27 + (v31 & (int32_t)(v15 ^ v14) ^ v33) + ((v31 / 2048 | 0x200000 * v31) ^ (v31 / 64 | 0x4000000 * v31) ^ (v31 / 0x2000000 | 128 * v31));
        v37 = v19;
        v38 = v36 + (int32_t)v17;
        v39 = v36 + ((v32 | v25) & v37 | v32 & v25) + ((v32 / 0x2000 | 0x80000 * v32) ^ (v32 / 4 | 0x40000000 * v32) ^ (v32 / 0x400000 | 1024 * v32));
        v40 = v34 + v33 + v35 + (v38 & (v31 ^ v22) ^ v22) + ((v38 / 2048 | 0x200000 * v38) ^ (v38 / 64 | 0x4000000 * v38) ^ (v38 / 0x2000000 | 128 * v38));
        v41 = *(int32_t *)(v18 | 12);
        v42 = v40 + v37;
        v43 = *(int32_t *)(v16 + 12);
        v44 = v40 + ((v39 | v32) & v25 | v39 & v32) + ((v39 / 0x2000 | 0x80000 * v39) ^ (v39 / 4 | 0x40000000 * v39) ^ (v39 / 0x400000 | 1024 * v39));
        v45 = *(int32_t *)(v16 + 16);
        v46 = *(int32_t *)(v18 + 16);
        v47 = v41 + v22 + v43 + (v42 & (v38 ^ v31) ^ v31) + ((v42 / 2048 | 0x200000 * v42) ^ (v42 / 64 | 0x4000000 * v42) ^ (v42 / 0x2000000 | 128 * v42));
        v48 = v47 + v25;
        v49 = v47 + ((v44 | v39) & v32 | v44 & v39) + ((v44 / 0x2000 | 0x80000 * v44) ^ (v44 / 4 | 0x40000000 * v44) ^ (v44 / 0x400000 | 1024 * v44));
        v50 = *(int32_t *)(v16 + 20);
        v51 = *(int32_t *)(v18 + 20);
        v52 = v45 + v31 + v46 + (v48 & (v42 ^ v38) ^ v38) + ((v48 / 2048 | 0x200000 * v48) ^ (v48 / 64 | 0x4000000 * v48) ^ (v48 / 0x2000000 | 128 * v48));
        v53 = v52 + v32;
        v54 = v52 + ((v49 | v44) & v39 | v49 & v44) + ((v49 / 0x2000 | 0x80000 * v49) ^ (v49 / 4 | 0x40000000 * v49) ^ (v49 / 0x400000 | 1024 * v49));
        v55 = v50 + v38 + v51 + (v53 & (v48 ^ v42) ^ v42) + ((v53 / 2048 | 0x200000 * v53) ^ (v53 / 64 | 0x4000000 * v53) ^ (v53 / 0x2000000 | 128 * v53));
        v56 = *(int32_t *)(v16 + 24);
        v57 = v55 + v39;
        v58 = v57;
        v59 = *(int32_t *)(v18 + 24);
        v60 = v55 + ((v54 | v49) & v44 | v54 & v49) + ((v54 / 0x2000 | 0x80000 * v54) ^ (v54 / 4 | 0x40000000 * v54) ^ (v54 / 0x400000 | 1024 * v54));
        v17 = v60;
        v61 = v59 + v56 + v42 + (v57 & (v53 ^ v48) ^ v48) + ((v57 / 2048 | 0x200000 * v57) ^ (v57 / 64 | 0x4000000 * v57) ^ (v57 / 0x2000000 | 128 * v57));
        v62 = *(int32_t *)(v16 + 28);
        v63 = v61 + v44;
        v15 = v63;
        v64 = *(int32_t *)(v18 + 28);
        v65 = v61 + ((v60 | v54) & v49 | v60 & v54) + ((v60 / 0x2000 | 0x80000 * v60) ^ (v60 / 4 | 0x40000000 * v60) ^ (v60 / 0x400000 | 1024 * v60));
        v66 = v65;
        v18 += 32;
        v67 = v64 + v62 + v48 + (v63 & (v57 ^ v53) ^ v53) + ((v63 / 2048 | 0x200000 * v63) ^ (v63 / 64 | 0x4000000 * v63) ^ (v63 / 0x2000000 | 128 * v63));
        v14 = v67 + v49;
        v68 = v67 + ((v65 | v60) & v54 | v65 & v60) + ((v65 / 0x2000 | 0x80000 * v65) ^ (v65 / 4 | 0x40000000 * v65) ^ (v65 / 0x400000 | 1024 * v65));
        v16 += 32;
        v69 = (int64_t)&SHA256_Hash_constant_words_K__0x428a2f98__at_598520;
        v70 = v15;
        v71 = v14;
        v72 = v17;
    }
    int64_t v73 = v66;
    int64_t v74 = v68;
    int64_t v75 = v58;
    int32_t * v76 = (int32_t *)(v12 + 56); // 0x4cd1f0
    uint32_t v77 = *v76; // 0x4cd1f0
    uint32_t v78 = (int32_t)v74; // 0x4cd1f8
    int32_t v79 = *(int32_t *)v12; // 0x4cd1fb
    int32_t v80 = *(int32_t *)(v12 + 36); // 0x4cd1ff
    uint32_t v81 = *(int32_t *)(v12 | 4); // 0x4cd206
    uint32_t v82 = (int32_t)v71; // 0x4cd23e
    uint32_t v83 = v80 + v79 + ((v77 / 0x20000 | 0x8000 * v77) ^ v77 / 1024 ^ (v77 / 0x80000 | 0x2000 * v77)) + ((v81 / 128 | 0x2000000 * v81) ^ v81 / 8 ^ (v81 / 0x40000 | 0x4000 * v81)); // 0x4cd241
    *(int32_t *)(v12 + 64) = v83;
    int32_t v84 = *(int32_t *)(v69 + 64); // 0x4cd274
    int32_t v85 = v53 + (int32_t)((v70 ^ v75) & v71 ^ v75) + ((v82 / 2048 | 0x200000 * v82) ^ (v82 / 64 | 0x4000000 * v82) ^ (v82 / 0x2000000 | 128 * v82)) + v84 + v83; // 0x4cd286
    uint32_t v86 = v85 + v54; // 0x4cd28f
    int32_t v87 = *(int32_t *)(v12 + 40); // 0x4cd2aa
    int32_t v88 = *(int32_t *)(v69 + 68); // 0x4cd2ae
    int32_t * v89 = (int32_t *)(v12 + 60); // 0x4cd2b4
    uint32_t v90 = *v89; // 0x4cd2b4
    uint32_t v91 = ((v78 / 0x2000 | 0x80000 * v78) ^ (v78 / 4 | 0x40000000 * v78) ^ (v78 / 0x400000 | 1024 * v78)) + (int32_t)((v73 | v74) & v72 | v73 & v74) + v85; // 0x4cd2bf
    uint32_t v92 = *(int32_t *)(v12 + 8); // 0x4cd2c2
    uint32_t v93 = v87 + v81 + ((v90 / 0x20000 | 0x8000 * v90) ^ v90 / 1024 ^ (v90 / 0x80000 | 0x2000 * v90)) + ((v92 / 128 | 0x2000000 * v92) ^ v92 / 8 ^ (v92 / 0x40000 | 0x4000 * v92)); // 0x4cd2fb
    *(int32_t *)(v12 + 68) = v93;
    int32_t v94 = v70; // 0x4cd311
    int32_t v95 = *(int32_t *)(v69 + 72); // 0x4cd324
    int32_t v96 = v88 + (int32_t)v75 + (v86 & (int32_t)(v71 ^ v70) ^ v94) + v93 + ((v86 / 2048 | 0x200000 * v86) ^ (v86 / 64 | 0x4000000 * v86) ^ (v86 / 0x2000000 | 128 * v86)); // 0x4cd330
    int32_t v97 = v73; // 0x4cd33c
    int32_t v98 = *(int32_t *)(v12 + 44); // 0x4cd34c
    uint32_t v99 = v96 + (int32_t)v72; // 0x4cd355
    uint32_t v100 = ((v91 / 0x2000 | 0x80000 * v91) ^ (v91 / 4 | 0x40000000 * v91) ^ (v91 / 0x400000 | 1024 * v91)) + ((v91 | v78) & v97 | v91 & v78) + v96; // 0x4cd372
    uint32_t v101 = *(int32_t *)(v12 + 12); // 0x4cd375
    uint32_t v102 = v98 + v92 + ((v83 / 0x20000 | 0x8000 * v83) ^ v83 / 1024 ^ (v83 / 0x80000 | 0x2000 * v83)) + ((v101 / 128 | 0x2000000 * v101) ^ v101 / 8 ^ (v101 / 0x40000 | 0x4000 * v101)); // 0x4cd3a5
    *(int32_t *)(v12 + 72) = v102;
    int32_t v103 = v95 + v94 + v102 + (v99 & (v86 ^ v82) ^ v82) + ((v99 / 2048 | 0x200000 * v99) ^ (v99 / 64 | 0x4000000 * v99) ^ (v99 / 0x2000000 | 128 * v99)); // 0x4cd3cf
    int32_t v104 = *(int32_t *)(v12 + 48); // 0x4cd3db
    int32_t v105 = *(int32_t *)(v69 + 76); // 0x4cd3e9
    uint32_t v106 = v103 + v97; // 0x4cd3f5
    uint32_t v107 = *(int32_t *)(v12 + 20); // 0x4cd3f9
    uint32_t v108 = ((v100 / 0x2000 | 0x80000 * v100) ^ (v100 / 4 | 0x40000000 * v100) ^ (v100 / 0x400000 | 1024 * v100)) + ((v100 | v91) & v78 | v100 & v91) + v103; // 0x4cd402
    uint32_t v109 = *(int32_t *)(v12 + 16); // 0x4cd413
    uint32_t v110 = v104 + v101 + ((v93 / 0x20000 | 0x8000 * v93) ^ v93 / 1024 ^ (v93 / 0x80000 | 0x2000 * v93)) + ((v109 / 128 | 0x2000000 * v109) ^ v109 / 8 ^ (v109 / 0x40000 | 0x4000 * v109)); // 0x4cd442
    *(int32_t *)(v12 + 76) = v110;
    int32_t v111 = *(int32_t *)(v12 + 52); // 0x4cd475
    int32_t v112 = v105 + v82 + v110 + (v106 & (v99 ^ v86) ^ v86) + ((v106 / 2048 | 0x200000 * v106) ^ (v106 / 64 | 0x4000000 * v106) ^ (v106 / 0x2000000 | 128 * v106)); // 0x4cd480
    uint32_t v113 = v112 + v78; // 0x4cd4b0
    uint32_t v114 = ((v108 / 0x2000 | 0x80000 * v108) ^ (v108 / 4 | 0x40000000 * v108) ^ (v108 / 0x400000 | 1024 * v108)) + ((v108 | v100) & v91 | v108 & v100) + v112; // 0x4cd4b8
    uint32_t v115 = v111 + v109 + ((v107 / 128 | 0x2000000 * v107) ^ v107 / 8 ^ (v107 / 0x40000 | 0x4000 * v107)) + ((v102 / 0x20000 | 0x8000 * v102) ^ v102 / 1024 ^ (v102 / 0x80000 | 0x2000 * v102)); // 0x4cd4eb
    *(int32_t *)(v12 + 80) = v115;
    int32_t v116 = *(int32_t *)(v69 + 80); // 0x4cd4f5
    int32_t v117 = *v76; // 0x4cd521
    int32_t v118 = v116 + v86 + v115 + (v113 & (v106 ^ v99) ^ v99) + ((v113 / 2048 | 0x200000 * v113) ^ (v113 / 64 | 0x4000000 * v113) ^ (v113 / 0x2000000 | 128 * v113)); // 0x4cd52f
    uint32_t v119 = v118 + v91; // 0x4cd537
    uint32_t v120 = ((v114 / 0x2000 | 0x80000 * v114) ^ (v114 / 4 | 0x40000000 * v114) ^ (v114 / 0x400000 | 1024 * v114)) + ((v114 | v108) & v100 | v114 & v108) + v118; // 0x4cd55e
    int32_t * v121 = (int32_t *)(v12 + 24); // 0x4cd575
    uint32_t v122 = *v121; // 0x4cd575
    uint32_t v123 = v117 + v107 + ((v110 / 0x20000 | 0x8000 * v110) ^ v110 / 1024 ^ (v110 / 0x80000 | 0x2000 * v110)) + ((v122 / 128 | 0x2000000 * v122) ^ v122 / 8 ^ (v122 / 0x40000 | 0x4000 * v122)); // 0x4cd59b
    int32_t v124 = *(int32_t *)(v69 + 84); // 0x4cd59f
    *(int32_t *)(v12 + 84) = v123;
    int32_t v125 = v124 + v99 + v123 + (v119 & (v113 ^ v106) ^ v106) + ((v119 / 2048 | 0x200000 * v119) ^ (v119 / 64 | 0x4000000 * v119) ^ (v119 / 0x2000000 | 128 * v119)); // 0x4cd5e5
    uint32_t v126 = v125 + v100; // 0x4cd5eb
    int32_t v127 = *v121; // 0x4cd608
    int32_t v128 = *v89; // 0x4cd60c
    uint32_t v129 = *(int32_t *)(v12 + 28); // 0x4cd613
    uint32_t v130 = ((v120 / 0x2000 | 0x80000 * v120) ^ (v120 / 4 | 0x40000000 * v120) ^ (v120 / 0x400000 | 1024 * v120)) + ((v120 | v114) & v108 | v120 & v114) + v125; // 0x4cd617
    int32_t v131 = ((v115 / 0x20000 | 0x8000 * v115) ^ v115 / 1024 ^ (v115 / 0x80000 | 0x2000 * v115)) + v127 + v128 + ((v129 / 128 | 0x2000000 * v129) ^ v129 / 8 ^ (v129 / 0x40000 | 0x4000 * v129)); // 0x4cd649
    *(int32_t *)(v12 + 88) = v131;
    int32_t v132 = *(int32_t *)(v69 + 88); // 0x4cd656
    int32_t v133 = v132 + v106 + v131 + (v126 & (v119 ^ v113) ^ v113) + ((v126 / 2048 | 0x200000 * v126) ^ (v126 / 64 | 0x4000000 * v126) ^ (v126 / 0x2000000 | 128 * v126)); // 0x4cd68d
    int64_t v134 = v12 + 32; // 0x4cd6b6
    uint32_t v135 = *(int32_t *)v134; // 0x4cd6b6
    uint32_t v136 = ((v130 / 0x2000 | 0x80000 * v130) ^ (v130 / 4 | 0x40000000 * v130) ^ (v130 / 0x400000 | 1024 * v130)) + ((v130 | v120) & v114 | v130 & v120) + v133; // 0x4cd6be
    uint32_t v137 = v133 + v108; // 0x4cd6c1
    int32_t v138 = v129 + v83 + ((v123 / 0x20000 | 0x8000 * v123) ^ v123 / 1024 ^ (v123 / 0x80000 | 0x2000 * v123)) + ((v135 / 128 | 0x2000000 * v135) ^ v135 / 8 ^ (v135 / 0x40000 | 0x4000 * v135)); // 0x4cd6f9
    *(int32_t *)(v12 + 92) = v138;
    int32_t v139 = *(int32_t *)(v69 + 92); // 0x4cd703
    int32_t v140 = v139 + v113 + v138 + (v137 & (v126 ^ v119) ^ v119) + ((v137 / 2048 | 0x200000 * v137) ^ (v137 / 64 | 0x4000000 * v137) ^ (v137 / 0x2000000 | 128 * v137)); // 0x4cd738
    uint32_t v141 = ((v136 / 0x2000 | 0x80000 * v136) ^ (v136 / 4 | 0x40000000 * v136) ^ (v136 / 0x400000 | 1024 * v136)) + ((v136 | v130) & v120 | v136 & v130) + v140; // 0x4cd764
    int32_t v142 = 5; // 0x4cd767
    int32_t v143 = v142; // 0x4cd76c
    v69 += 32;
    v70 = v137;
    v71 = v140 + v114;
    v72 = v130;
    int64_t v144 = v134; // 0x4cd76c
    while (v142 != 0) {
        // 0x4cd1f0
        v73 = v136;
        v74 = v141;
        v75 = v126;
        v76 = (int32_t *)(v144 + 56);
        v77 = *v76;
        v78 = (int32_t)v74;
        v79 = *(int32_t *)v144;
        v80 = *(int32_t *)(v144 + 36);
        v81 = *(int32_t *)(v144 | 4);
        v82 = (int32_t)v71;
        v83 = v80 + v79 + ((v77 / 0x20000 | 0x8000 * v77) ^ v77 / 1024 ^ (v77 / 0x80000 | 0x2000 * v77)) + ((v81 / 128 | 0x2000000 * v81) ^ v81 / 8 ^ (v81 / 0x40000 | 0x4000 * v81));
        *(int32_t *)(v144 + 64) = v83;
        v84 = *(int32_t *)(v69 + 64);
        v85 = v119 + (int32_t)((v70 ^ v75) & v71 ^ v75) + ((v82 / 2048 | 0x200000 * v82) ^ (v82 / 64 | 0x4000000 * v82) ^ (v82 / 0x2000000 | 128 * v82)) + v84 + v83;
        v86 = v85 + v120;
        v87 = *(int32_t *)(v144 + 40);
        v88 = *(int32_t *)(v69 + 68);
        v89 = (int32_t *)(v144 + 60);
        v90 = *v89;
        v91 = ((v78 / 0x2000 | 0x80000 * v78) ^ (v78 / 4 | 0x40000000 * v78) ^ (v78 / 0x400000 | 1024 * v78)) + (int32_t)((v73 | v74) & v72 | v73 & v74) + v85;
        v92 = *(int32_t *)(v144 + 8);
        v93 = v87 + v81 + ((v90 / 0x20000 | 0x8000 * v90) ^ v90 / 1024 ^ (v90 / 0x80000 | 0x2000 * v90)) + ((v92 / 128 | 0x2000000 * v92) ^ v92 / 8 ^ (v92 / 0x40000 | 0x4000 * v92));
        *(int32_t *)(v144 + 68) = v93;
        v94 = v70;
        v95 = *(int32_t *)(v69 + 72);
        v96 = v88 + (int32_t)v75 + (v86 & (int32_t)(v71 ^ v70) ^ v94) + v93 + ((v86 / 2048 | 0x200000 * v86) ^ (v86 / 64 | 0x4000000 * v86) ^ (v86 / 0x2000000 | 128 * v86));
        v97 = v73;
        v98 = *(int32_t *)(v144 + 44);
        v99 = v96 + (int32_t)v72;
        v100 = ((v91 / 0x2000 | 0x80000 * v91) ^ (v91 / 4 | 0x40000000 * v91) ^ (v91 / 0x400000 | 1024 * v91)) + ((v91 | v78) & v97 | v91 & v78) + v96;
        v101 = *(int32_t *)(v144 + 12);
        v102 = v98 + v92 + ((v83 / 0x20000 | 0x8000 * v83) ^ v83 / 1024 ^ (v83 / 0x80000 | 0x2000 * v83)) + ((v101 / 128 | 0x2000000 * v101) ^ v101 / 8 ^ (v101 / 0x40000 | 0x4000 * v101));
        *(int32_t *)(v144 + 72) = v102;
        v103 = v95 + v94 + v102 + (v99 & (v86 ^ v82) ^ v82) + ((v99 / 2048 | 0x200000 * v99) ^ (v99 / 64 | 0x4000000 * v99) ^ (v99 / 0x2000000 | 128 * v99));
        v104 = *(int32_t *)(v144 + 48);
        v105 = *(int32_t *)(v69 + 76);
        v106 = v103 + v97;
        v107 = *(int32_t *)(v144 + 20);
        v108 = ((v100 / 0x2000 | 0x80000 * v100) ^ (v100 / 4 | 0x40000000 * v100) ^ (v100 / 0x400000 | 1024 * v100)) + ((v100 | v91) & v78 | v100 & v91) + v103;
        v109 = *(int32_t *)(v144 + 16);
        v110 = v104 + v101 + ((v93 / 0x20000 | 0x8000 * v93) ^ v93 / 1024 ^ (v93 / 0x80000 | 0x2000 * v93)) + ((v109 / 128 | 0x2000000 * v109) ^ v109 / 8 ^ (v109 / 0x40000 | 0x4000 * v109));
        *(int32_t *)(v144 + 76) = v110;
        v111 = *(int32_t *)(v144 + 52);
        v112 = v105 + v82 + v110 + (v106 & (v99 ^ v86) ^ v86) + ((v106 / 2048 | 0x200000 * v106) ^ (v106 / 64 | 0x4000000 * v106) ^ (v106 / 0x2000000 | 128 * v106));
        v113 = v112 + v78;
        v114 = ((v108 / 0x2000 | 0x80000 * v108) ^ (v108 / 4 | 0x40000000 * v108) ^ (v108 / 0x400000 | 1024 * v108)) + ((v108 | v100) & v91 | v108 & v100) + v112;
        v115 = v111 + v109 + ((v107 / 128 | 0x2000000 * v107) ^ v107 / 8 ^ (v107 / 0x40000 | 0x4000 * v107)) + ((v102 / 0x20000 | 0x8000 * v102) ^ v102 / 1024 ^ (v102 / 0x80000 | 0x2000 * v102));
        *(int32_t *)(v144 + 80) = v115;
        v116 = *(int32_t *)(v69 + 80);
        v117 = *v76;
        v118 = v116 + v86 + v115 + (v113 & (v106 ^ v99) ^ v99) + ((v113 / 2048 | 0x200000 * v113) ^ (v113 / 64 | 0x4000000 * v113) ^ (v113 / 0x2000000 | 128 * v113));
        v119 = v118 + v91;
        v120 = ((v114 / 0x2000 | 0x80000 * v114) ^ (v114 / 4 | 0x40000000 * v114) ^ (v114 / 0x400000 | 1024 * v114)) + ((v114 | v108) & v100 | v114 & v108) + v118;
        v121 = (int32_t *)(v144 + 24);
        v122 = *v121;
        v123 = v117 + v107 + ((v110 / 0x20000 | 0x8000 * v110) ^ v110 / 1024 ^ (v110 / 0x80000 | 0x2000 * v110)) + ((v122 / 128 | 0x2000000 * v122) ^ v122 / 8 ^ (v122 / 0x40000 | 0x4000 * v122));
        v124 = *(int32_t *)(v69 + 84);
        *(int32_t *)(v144 + 84) = v123;
        v125 = v124 + v99 + v123 + (v119 & (v113 ^ v106) ^ v106) + ((v119 / 2048 | 0x200000 * v119) ^ (v119 / 64 | 0x4000000 * v119) ^ (v119 / 0x2000000 | 128 * v119));
        v126 = v125 + v100;
        v127 = *v121;
        v128 = *v89;
        v129 = *(int32_t *)(v144 + 28);
        v130 = ((v120 / 0x2000 | 0x80000 * v120) ^ (v120 / 4 | 0x40000000 * v120) ^ (v120 / 0x400000 | 1024 * v120)) + ((v120 | v114) & v108 | v120 & v114) + v125;
        v131 = ((v115 / 0x20000 | 0x8000 * v115) ^ v115 / 1024 ^ (v115 / 0x80000 | 0x2000 * v115)) + v127 + v128 + ((v129 / 128 | 0x2000000 * v129) ^ v129 / 8 ^ (v129 / 0x40000 | 0x4000 * v129));
        *(int32_t *)(v144 + 88) = v131;
        v132 = *(int32_t *)(v69 + 88);
        v133 = v132 + v106 + v131 + (v126 & (v119 ^ v113) ^ v113) + ((v126 / 2048 | 0x200000 * v126) ^ (v126 / 64 | 0x4000000 * v126) ^ (v126 / 0x2000000 | 128 * v126));
        v134 = v144 + 32;
        v135 = *(int32_t *)v134;
        v136 = ((v130 / 0x2000 | 0x80000 * v130) ^ (v130 / 4 | 0x40000000 * v130) ^ (v130 / 0x400000 | 1024 * v130)) + ((v130 | v120) & v114 | v130 & v120) + v133;
        v137 = v133 + v108;
        v138 = v129 + v83 + ((v123 / 0x20000 | 0x8000 * v123) ^ v123 / 1024 ^ (v123 / 0x80000 | 0x2000 * v123)) + ((v135 / 128 | 0x2000000 * v135) ^ v135 / 8 ^ (v135 / 0x40000 | 0x4000 * v135));
        *(int32_t *)(v144 + 92) = v138;
        v139 = *(int32_t *)(v69 + 92);
        v140 = v139 + v113 + v138 + (v137 & (v126 ^ v119) ^ v119) + ((v137 / 2048 | 0x200000 * v137) ^ (v137 / 64 | 0x4000000 * v137) ^ (v137 / 0x2000000 | 128 * v137));
        v141 = ((v136 / 0x2000 | 0x80000 * v136) ^ (v136 / 4 | 0x40000000 * v136) ^ (v136 / 0x400000 | 1024 * v136)) + ((v136 | v130) & v120 | v136 & v130) + v140;
        v142 = v143 - 1;
        v143 = v142;
        v69 += 32;
        v70 = v137;
        v71 = v140 + v114;
        v72 = v130;
        v144 = v134;
    }
    int32_t * v145 = (int32_t *)v3; // 0x4cd7a5
    *v145 = *v145 + v141;
    for (int64_t i = 4; i < 29; i += 4) {
        int32_t * v146 = (int32_t *)(i + v3); // 0x4cd7a5
        *v146 = *v146 + *(int32_t *)(i + v4);
    }
    // 0x4cd7b4
    return 32;
}

// Address range: 0x512ca0 - 0x5136b8
int64_t function_512ca0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13) {
    int64_t result = a2; // bp-120, 0x512cc3
    int64_t v1 = a4; // bp-136, 0x512cd3
    __readfsqword(40);
    function_50ab00();
    int64_t v2; // bp-90, 0x512ca0
    int64_t v3 = function_50d0c0(&v2, a6 + 208); // 0x512d1c
    char v4 = (int64_t)&g52; // bp-88, 0x512d56
    if (*(char *)(v3 + 32) != 0) {
        // 0x512d60
        function_259ce((int64_t *)&v4, 32);
    }
    char v5 = (int64_t)&g52; // bp-80, 0x512d82
    int64_t v6 = (int64_t)&v5; // 0x512d95
    function_259ce((int64_t *)&v5, 32);
    int32_t v7 = *(int32_t *)(v3 + 104); // 0x512dba
    int32_t v8 = v7; // bp-68, 0x512dcd
    int64_t v9 = (int64_t)&v8; // 0x512ddc
    int64_t v10 = 0; // 0x512e02
    unsigned char v11; // 0x512e08
    uint32_t v12; // 0x512e14
    if ((char)v7 < 5) {
        // 0x512e08
        v11 = *(char *)v9;
        v12 = *(int32_t *)(4 * (int64_t)v11 + (int64_t)&g20);
        return (int64_t)v12 + (int64_t)&g20;
    }
    while ((int32_t)v10 <= 2) {
        // 0x512e94
        v10++;
        int64_t v13 = v10; // 0x512ea2
        if (*(char *)(v10 + v9) < 5) {
            // 0x512e08
            v11 = *(char *)(v13 + v9);
            v12 = *(int32_t *)(4 * (int64_t)v11 + (int64_t)&g20);
            return (int64_t)v12 + (int64_t)&g20;
        }
    }
    int64_t v14 = a3; // 0x513666
    if (g51 >= 2) {
        int64_t v15 = function_547990(v6, 48, 0); // 0x51357f
        v14 = 0;
        if (v15 != 0) {
            uint64_t v16 = g51; // 0x51359c
            uint64_t v17 = v15 == -1 ? v16 - 1 : v15; // 0x5135a4
            v14 = v17 > v16 ? v16 : v17;
            function_25e90(v6, 0, v14, 0);
        }
    }
    // 0x513199
    if (g51 != 0) {
        // 0x5131a8
        function_451f2((int64_t *)&v4, 0, v14);
        int64_t v18 = *(int64_t *)(v3 + 16); // 0x5131ce
        int64_t v19 = function_569070(v18, *(int64_t *)(v3 + 24), (int64_t *)&v4); // 0x5131d6
        if ((char)v19 == 0) {
            int32_t * v20 = (int32_t *)a8; // 0x5131e4
            *v20 = *v20 | 4;
        }
    }
    // 0x5131f2
    function_256ba(a9, v6);
    int64_t v21 = function_50f6f0((int64_t)&result, (int64_t)&v1); // 0x512f2d
    if ((char)v21 != 0) {
        int32_t * v22 = (int32_t *)a8; // 0x512f3b
        *v22 = *v22 | 2;
    }
    // 0x512f3e
    if (g41 != &g51) {
        // 0x513704
        return result;
    }
    // 0x512f80
    __readfsqword(40);
    return result;
}

// Address range: 0x5137b0 - 0x5141c8
int64_t function_5137b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13) {
    int64_t result = a2; // bp-120, 0x5137d3
    int64_t v1 = a4; // bp-136, 0x5137e3
    __readfsqword(40);
    function_50ab00();
    int64_t v2; // bp-90, 0x5137b0
    int64_t v3 = function_50d7e0(&v2, a6 + 208); // 0x51382c
    char v4 = (int64_t)&g52; // bp-88, 0x513866
    if (*(char *)(v3 + 32) != 0) {
        // 0x513870
        function_259ce((int64_t *)&v4, 32);
    }
    char v5 = (int64_t)&g52; // bp-80, 0x513892
    int64_t v6 = (int64_t)&v5; // 0x5138a5
    function_259ce((int64_t *)&v5, 32);
    int32_t v7 = *(int32_t *)(v3 + 104); // 0x5138ca
    int32_t v8 = v7; // bp-68, 0x5138dd
    int64_t v9 = (int64_t)&v8; // 0x5138ec
    int64_t v10 = 0; // 0x513912
    unsigned char v11; // 0x513918
    uint32_t v12; // 0x513924
    if ((char)v7 < 5) {
        // 0x513918
        v11 = *(char *)v9;
        v12 = *(int32_t *)(4 * (int64_t)v11 + (int64_t)&g21);
        return (int64_t)v12 + (int64_t)&g21;
    }
    while ((int32_t)v10 <= 2) {
        // 0x5139a4
        v10++;
        int64_t v13 = v10; // 0x5139b2
        if (*(char *)(v10 + v9) < 5) {
            // 0x513918
            v11 = *(char *)(v13 + v9);
            v12 = *(int32_t *)(4 * (int64_t)v11 + (int64_t)&g21);
            return (int64_t)v12 + (int64_t)&g21;
        }
    }
    int64_t v14 = a3; // 0x514176
    if (g51 >= 2) {
        int64_t v15 = function_547990(v6, 48, 0); // 0x51408f
        v14 = 0;
        if (v15 != 0) {
            uint64_t v16 = g51; // 0x5140ac
            uint64_t v17 = v15 == -1 ? v16 - 1 : v15; // 0x5140b4
            v14 = v17 > v16 ? v16 : v17;
            function_25e90(v6, 0, v14, 0);
        }
    }
    // 0x513ca9
    if (g51 != 0) {
        // 0x513cb8
        function_451f2((int64_t *)&v4, 0, v14);
        int64_t v18 = *(int64_t *)(v3 + 16); // 0x513cde
        int64_t v19 = function_569070(v18, *(int64_t *)(v3 + 24), (int64_t *)&v4); // 0x513ce6
        if ((char)v19 == 0) {
            int32_t * v20 = (int32_t *)a8; // 0x513cf4
            *v20 = *v20 | 4;
        }
    }
    // 0x513d02
    function_256ba(a9, v6);
    int64_t v21 = function_50f6f0((int64_t)&result, (int64_t)&v1); // 0x513a3d
    if ((char)v21 != 0) {
        int32_t * v22 = (int32_t *)a8; // 0x513a4b
        *v22 = *v22 | 2;
    }
    // 0x513a4e
    if (g41 != &g51) {
        // 0x514214
        return result;
    }
    // 0x513a90
    __readfsqword(40);
    return result;
}

// Address range: 0x55d470 - 0x55de39
int64_t function_55d470(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13) {
    int64_t result = a2; // bp-120, 0x55d493
    int64_t v1 = a4; // bp-136, 0x55d4a3
    __readfsqword(40);
    function_554b00();
    int64_t v2; // bp-90, 0x55d470
    int64_t v3 = function_557390(&v2, a6 + 208); // 0x55d4ec
    char v4 = (int64_t)&g52; // bp-88, 0x55d526
    if (*(char *)(v3 + 32) != 0) {
        // 0x55d530
        function_259ce((int64_t *)&v4, 32);
    }
    char v5 = (int64_t)&g52; // bp-80, 0x55d552
    int64_t v6 = (int64_t)&v5; // 0x55d565
    function_259ce((int64_t *)&v5, 32);
    int32_t v7 = *(int32_t *)(v3 + 96); // 0x55d58a
    int32_t v8 = v7; // bp-68, 0x55d59d
    int64_t v9 = (int64_t)&v8; // 0x55d5ac
    int64_t v10 = 0; // 0x55d5d2
    unsigned char v11; // 0x55d5d8
    uint32_t v12; // 0x55d5e4
    if ((char)v7 < 5) {
        // 0x55d5d8
        v11 = *(char *)v9;
        v12 = *(int32_t *)(4 * (int64_t)v11 + (int64_t)&g22);
        return (int64_t)v12 + (int64_t)&g22;
    }
    while ((int32_t)v10 <= 2) {
        // 0x55d6a9
        v10++;
        int64_t v13 = v10; // 0x55d6b7
        if (*(char *)(v10 + v9) < 5) {
            // 0x55d5d8
            v11 = *(char *)(v13 + v9);
            v12 = *(int32_t *)(4 * (int64_t)v11 + (int64_t)&g22);
            return (int64_t)v12 + (int64_t)&g22;
        }
    }
    int64_t v14 = a3; // 0x55ddd6
    if (g51 >= 2) {
        int64_t v15 = function_547990(v6, 48, 0); // 0x55dcfc
        v14 = 0;
        if (v15 != 0) {
            // 0x55dd0a
            v14 = v15 != -1 ? v15 : g51 - 1;
            function_3aeea(v6, 0, v14);
        }
    }
    // 0x55d999
    if (g51 != 0) {
        // 0x55d9a8
        function_451f2((int64_t *)&v4, 0, v14);
        int64_t v16 = *(int64_t *)(v3 + 16); // 0x55d9ce
        int64_t v17 = function_569070(v16, *(int64_t *)(v3 + 24), (int64_t *)&v4); // 0x55d9d6
        if ((char)v17 == 0) {
            int32_t * v18 = (int32_t *)a8; // 0x55d9e4
            *v18 = *v18 | 4;
        }
    }
    // 0x55d9f2
    function_256ba(a9, v6);
    if ((char)function_524600(&result, (int64_t)&v1) != 0) {
        int32_t * v19 = (int32_t *)a8; // 0x55d754
        *v19 = *v19 | 2;
    }
    // 0x55d757
    if (g41 != &g51) {
        // 0x55de5d
        return result;
    }
    // 0x55d799
    __readfsqword(40);
    return result;
}

// Address range: 0x55df10 - 0x55e8d9
int64_t function_55df10(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13) {
    int64_t result = a2; // bp-120, 0x55df33
    int64_t v1 = a4; // bp-136, 0x55df43
    __readfsqword(40);
    function_554b00();
    int64_t v2; // bp-90, 0x55df10
    int64_t v3 = function_557a40(&v2, a6 + 208); // 0x55df8c
    char v4 = (int64_t)&g52; // bp-88, 0x55dfc6
    if (*(char *)(v3 + 32) != 0) {
        // 0x55dfd0
        function_259ce((int64_t *)&v4, 32);
    }
    char v5 = (int64_t)&g52; // bp-80, 0x55dff2
    int64_t v6 = (int64_t)&v5; // 0x55e005
    function_259ce((int64_t *)&v5, 32);
    int32_t v7 = *(int32_t *)(v3 + 96); // 0x55e02a
    int32_t v8 = v7; // bp-68, 0x55e03d
    int64_t v9 = (int64_t)&v8; // 0x55e04c
    int64_t v10 = 0; // 0x55e072
    unsigned char v11; // 0x55e078
    uint32_t v12; // 0x55e084
    if ((char)v7 < 5) {
        // 0x55e078
        v11 = *(char *)v9;
        v12 = *(int32_t *)(4 * (int64_t)v11 + (int64_t)&g23);
        return (int64_t)v12 + (int64_t)&g23;
    }
    while ((int32_t)v10 <= 2) {
        // 0x55e149
        v10++;
        int64_t v13 = v10; // 0x55e157
        if (*(char *)(v10 + v9) < 5) {
            // 0x55e078
            v11 = *(char *)(v13 + v9);
            v12 = *(int32_t *)(4 * (int64_t)v11 + (int64_t)&g23);
            return (int64_t)v12 + (int64_t)&g23;
        }
    }
    int64_t v14 = a3; // 0x55e876
    if (g51 >= 2) {
        int64_t v15 = function_547990(v6, 48, 0); // 0x55e79c
        v14 = 0;
        if (v15 != 0) {
            // 0x55e7aa
            v14 = v15 != -1 ? v15 : g51 - 1;
            function_3aeea(v6, 0, v14);
        }
    }
    // 0x55e439
    if (g51 != 0) {
        // 0x55e448
        function_451f2((int64_t *)&v4, 0, v14);
        int64_t v16 = *(int64_t *)(v3 + 16); // 0x55e46e
        int64_t v17 = function_569070(v16, *(int64_t *)(v3 + 24), (int64_t *)&v4); // 0x55e476
        if ((char)v17 == 0) {
            int32_t * v18 = (int32_t *)a8; // 0x55e484
            *v18 = *v18 | 4;
        }
    }
    // 0x55e492
    function_256ba(a9, v6);
    if ((char)function_524600(&result, (int64_t)&v1) != 0) {
        int32_t * v19 = (int32_t *)a8; // 0x55e1f4
        *v19 = *v19 | 2;
    }
    // 0x55e1f7
    if (g41 != &g51) {
        // 0x55e8fd
        return result;
    }
    // 0x55e239
    __readfsqword(40);
    return result;
}

// Address range: 0x562030 - 0x562035
// From class:    std::num_get<char, std::istreambuf_iterator<char, std::char_traits<char> > >
// Type:          virtual member function
int64_t function_562030(void) {
    // 0x562030
    return function_5615d0();
}

// Address range: 0x562040 - 0x56205a
int64_t function_562040(int64_t a1) {
    int64_t result = *(int64_t *)(a1 + 56); // 0x562043
    if (result != g40) {
        // 0x562058
        return result;
    }
    // 0x562050
    return function_5615d0();
}

// Address range: 0x562060 - 0x562a1b
int64_t function_562060(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    int64_t result4 = a2; // bp-104, 0x56207c
    int64_t v1 = a4; // bp-120, 0x562095
    __readfsqword(40);
    int64_t v2 = function_558300(); // 0x5620c4
    int32_t v3 = *(int32_t *)(a6 + 24) & 74; // 0x5620d0
    int64_t v4 = 10; // 0x562060
    int64_t v5; // 0x562060
    int64_t v6; // 0x562060
    int64_t v7; // 0x562060
    int64_t v8; // 0x562060
    int64_t v9; // 0x562060
    int64_t v10; // 0x562060
    int64_t result5; // 0x562060
    int64_t v11; // 0x562060
    int64_t v12; // 0x562060
    int64_t v13; // 0x562060
    int64_t v14; // 0x562060
    int64_t v15; // 0x562060
    char v16; // 0x562060
    char v17; // 0x562060
    int32_t v18; // 0x562060
    int32_t v19; // 0x562060
    int64_t v20; // 0x562060
    int64_t v21; // 0x562060
    int64_t v22; // 0x562060
    int32_t n; // 0x562060
    int32_t v23; // 0x562060
    int64_t v24; // 0x562060
    int64_t v25; // 0x562060
    int64_t v26; // 0x562060
    char v27; // bp-72, 0x562060
    int64_t v28; // 0x562060
    int64_t v29; // 0x562060
    switch (v3) {
        case 64: {
            // 0x5628a0
            v4 = 8;
            goto lab_0x5620ee;
        }
        case 8: {
            int64_t v30 = (int64_t)&result4; // 0x562450
            int64_t v31 = function_524600(&result4, (int64_t)&v1); // 0x562454
            v24 = v30;
            v8 = 16;
            if ((char)v31 == 0) {
                goto lab_0x562113;
            } else {
                unsigned char v32 = *(char *)(v2 + 32); // 0x562463
                v27 = (int64_t)&g52;
                if (v32 != 0) {
                    // 0x5628ab
                    v29 = a3;
                    v14 = a5;
                    v26 = v30;
                    v18 = v32;
                    v17 = 0;
                    v23 = 22;
                    v12 = 0;
                    v5 = 0;
                    v7 = 16;
                    v10 = 0;
                    goto lab_0x5628d0;
                } else {
                    char v33 = *(char *)(v2 + 136); // 0x562489
                    if (v33 == 0) {
                        // 0x562a1b
                        return 0;
                    }
                    // 0x5624a1
                    v28 = a3;
                    v15 = a5;
                    v25 = v30;
                    v19 = v33;
                    v16 = 0;
                    n = 22;
                    v22 = 16;
                    v21 = 0x7fffffffffffffff;
                    v20 = -1;
                    result5 = 0x7fffffffffffffff;
                    v13 = a3;
                    v11 = 0;
                    v6 = v32;
                    v9 = 0;
                    goto lab_0x5624e0;
                }
            }
        }
        default: {
            goto lab_0x5620ee;
        }
    }
  lab_0x5622cb_2:;
    int64_t v34 = v27; // 0x5622d0
    int64_t v35; // 0x562060
    int64_t v36 = v35; // 0x5622dd
    int32_t v37; // 0x562060
    int32_t v38 = v37; // 0x5622dd
    char v39; // 0x562060
    char v40 = v39; // 0x5622dd
    int64_t v41 = 1; // 0x5622dd
    int64_t v42 = v34; // 0x5622dd
    int64_t v43; // 0x562060
    int64_t v44 = v43; // 0x5622dd
    int64_t v45; // 0x562060
    int64_t v46 = v45; // 0x5622dd
    int64_t v47; // 0x562060
    int64_t v48 = v47; // 0x5622dd
    int64_t v49; // 0x562060
    int64_t v50 = v49; // 0x5622dd
    int64_t v51 = v35; // 0x5622dd
    int32_t v52 = v37; // 0x5622dd
    char v53 = v39; // 0x5622dd
    int64_t v54; // 0x562060
    int64_t v55 = v54; // 0x5622dd
    int64_t v56 = 1; // 0x5622dd
    int64_t v57 = v43; // 0x5622dd
    int64_t v58 = v45; // 0x5622dd
    int64_t v59 = v47; // 0x5622dd
    int64_t v60 = v49; // 0x5622dd
    if (*(int64_t *)(v34 - 24) != 0) {
        goto lab_0x5626d5;
    } else {
        goto lab_0x5622e3;
    }
  lab_0x56223a:;
    // 0x56223a
    int64_t v61; // 0x562060
    int64_t v62 = v61; // 0x56223a
    int64_t v63; // 0x56221e
    int64_t v64 = v63 + 0xffffffd0; // 0x56223a
    goto lab_0x56223d;
  lab_0x56223d:;
    int64_t v65 = v62; // 0x562240
    int64_t v66; // 0x562060
    int64_t v67 = v66; // 0x562240
    int32_t v68; // 0x562060
    int32_t v69 = v68; // 0x562240
    char v70; // 0x562060
    char v71 = v70; // 0x562240
    int64_t v72 = v62; // 0x562240
    int64_t v73; // 0x562060
    int64_t v74 = v73; // 0x562240
    int64_t v75; // 0x562060
    int64_t v76 = v75; // 0x562240
    int64_t v77; // 0x562060
    int64_t v78 = v77; // 0x562240
    int64_t v79; // 0x562060
    int64_t v80 = v79; // 0x562240
    if ((int32_t)v64 == -1) {
        // break -> 0x5626c0
        goto lab_0x5626c0_2;
    }
    goto lab_0x562246;
  lab_0x562246:;
    // 0x562246
    int64_t v81; // 0x5621e3
    if (v81 >= v79) {
        // branch -> 0x562271
    }
    int64_t v82 = 1;
    int64_t v83 = v79;
    int64_t v84 = v77;
    int64_t v85 = v65;
    int64_t v86 = v66; // 0x562279
    if (result4 != 0) {
        int64_t * v87 = (int64_t *)(result4 + 16); // 0x56227b
        uint64_t v88 = *v87; // 0x56227b
        v86 = -1;
        if (v88 < *(int64_t *)(result4 + 24)) {
            // 0x562289
            *v87 = v88 + 1;
            v86 = -1;
        }
    }
    // 0x562299
    int64_t v89; // 0x562060
    int64_t v90 = function_5246d0(v89); // 0x56229d
    int64_t result = v90; // 0x5622b0
    if (v1 == 0) {
        // 0x562a1b
        return result;
    }
    int64_t v91 = v86;
    char v92 = 0; // 0x5622bd
    int64_t v93; // 0x562060
    int64_t v94; // 0x562060
    if ((int32_t)v94 == -1) {
        uint64_t v95 = *(int64_t *)(v1 + 16); // 0x562778
        if (v95 >= *(int64_t *)(v1 + 24)) {
            int64_t v96 = *(int64_t *)v1; // 0x562990
            v93 = v96;
            if ((int32_t)v96 != -1) {
                goto lab_0x562789;
            } else {
                // 0x56299f
                v1 = 0;
                v92 = 1;
                goto lab_0x5622c3;
            }
        } else {
            // 0x562786
            v93 = (int64_t)*(char *)v95;
            goto lab_0x562789;
        }
    } else {
        goto lab_0x5622c3;
    }
  lab_0x5622c3:
    // 0x5622c3
    v35 = v91;
    v37 = v68;
    v39 = v70;
    v54 = v85;
    v43 = v73;
    v45 = v82;
    v47 = v84;
    v49 = v83;
    int64_t v97 = v94; // 0x5622c5
    if (v92 == (char)((int32_t)v90 == -1)) {
        goto lab_0x5622cb_2;
    }
    goto lab_0x562797;
  lab_0x562797:;
    int64_t v98 = v91; // 0x5627a2
    int64_t v99 = v97; // 0x5627a2
    int64_t v100 = v85; // 0x5627a2
    int64_t v101 = function_5246d0(v89) & 0xffffffff; // 0x5627a2
    int64_t v102 = v82; // 0x5627a2
    int64_t v103 = v84; // 0x5627a2
    int64_t v104 = v83; // 0x5627a2
    goto lab_0x562218;
  lab_0x562789:
    // 0x562789
    v35 = v91;
    v37 = v68;
    v39 = v70;
    v54 = v85;
    v43 = v73;
    v45 = v82;
    v47 = v84;
    v49 = v83;
    v97 = 0x100000000 * v93 >> 32;
    if ((int32_t)v90 != -1) {
        goto lab_0x5622cb_2;
    }
    goto lab_0x562797;
  lab_0x562431_3:;
    // 0x562431
    int64_t v111; // 0x562060
    int64_t v112 = v111; // 0x56243a
    int64_t v113; // 0x562060
    int64_t v114 = v113; // 0x56243a
    int32_t v115 = 1; // 0x56243a
    char * v116; // 0x562122
    int64_t v117 = (int64_t)*v116; // 0x56243a
    int64_t v118; // 0x562060
    int64_t v119 = v118; // 0x56243a
    int64_t v120; // 0x562060
    int64_t v121 = v120; // 0x56243a
    int64_t v122; // 0x562060
    int64_t v123 = v122; // 0x56243a
    int64_t v124; // 0x562060
    int64_t v125 = v124; // 0x56243a
    goto lab_0x562178_3;
  lab_0x5623a8:;
    // 0x5623a8
    char v231; // 0x562060
    int64_t v232; // 0x562060
    int64_t v233; // 0x562060
    int64_t v234; // 0x562060
    int64_t v235; // 0x562060
    int64_t v236; // 0x562060
    if (*(char *)(v2 + 112) != v231) {
        // 0x5623ad
        v112 = v236;
        v114 = v235;
        v115 = 0;
        v117 = v234;
        v119 = v118;
        v121 = 1;
        v123 = v232;
        v125 = v233;
        if (*(char *)(v2 + 113) != v231) {
            // break -> 0x562178
            goto lab_0x562178_3;
        }
    }
    int32_t v237 = v232;
    int32_t v127 = v237; // 0x5623c5
    int64_t v128 = v236; // 0x5623c5
    int64_t v129 = v235; // 0x5623c5
    int32_t v130 = 0; // 0x5623c5
    int64_t v131 = v234; // 0x5623c5
    int64_t v132 = v118; // 0x5623c5
    int64_t v133 = 1; // 0x5623c5
    int64_t v134 = v232; // 0x5623c5
    int64_t v135 = v233; // 0x5623c5
    int64_t v238 = 0; // 0x5623c5
    int64_t v239 = 16; // 0x5623c5
    int64_t v240 = 0; // 0x5623c5
    if (v3 != 0 && v237 != 16) {
        goto lab_0x562187;
    }
    goto lab_0x5623d7;
  lab_0x5623d7:
    // 0x5623d7
    v124 = v240;
    v122 = v239;
    v120 = v238;
    int64_t v241 = v236; // 0x5623df
    int64_t v242; // 0x562060
    if (result4 == 0) {
        goto lab_0x5627cc;
    } else {
        int64_t * v243 = (int64_t *)(result4 + 16); // 0x5623e5
        uint64_t v244 = *v243; // 0x5623e5
        int64_t * v245 = (int64_t *)(result4 + 24); // 0x5623e9
        uint64_t v246 = *v245; // 0x5623e9
        int64_t v247 = v246; // 0x5623ed
        int64_t v248 = v244; // 0x5623ed
        if (v244 < v246) {
            // 0x5623f3
            v248 = v244 + 1;
            *v243 = v248;
            v247 = *v245;
        }
        uint64_t v249 = v248; // 0x562403
        if (v249 >= v247) {
            int64_t v250 = *(int64_t *)result4; // 0x562850
            v242 = v250;
            if ((int32_t)v250 != -1) {
                goto lab_0x562414;
            } else {
                // 0x56285f
                result4 = 0;
                v241 = -1;
                goto lab_0x5627cc;
            }
        } else {
            // 0x562411
            v242 = (int64_t)*(char *)v249;
            goto lab_0x562414;
        }
    }
  lab_0x5627cc:;
    int64_t v251 = v241;
    int64_t v252 = v1; // 0x5627cc
    v111 = v251;
    v113 = v235;
    if (v252 == 0) {
        goto lab_0x562431_3;
    }
    int64_t v253 = v251; // 0x5627e4
    char v254 = 1; // 0x5627e4
    int64_t v255 = v252; // 0x5627e4
    int64_t v256 = v251; // 0x5627e4
    int64_t v257 = v235; // 0x5627e4
    if ((int32_t)v235 != -1) {
        goto lab_0x562631;
    } else {
        goto lab_0x562612;
    }
  lab_0x562631:;
    // 0x562631
    int64_t v150; // 0x562060
    int64_t v258 = function_5246d0(v150) & 0xffffffff; // 0x56263d
    int64_t v259 = (int64_t)*v116;
    v112 = v256;
    v114 = v257;
    v115 = 0;
    v117 = v259;
    v119 = v258;
    v121 = 0;
    v123 = v122;
    v125 = v124;
    int64_t v260 = v256; // 0x56263f
    int64_t v261 = v257; // 0x56263f
    int64_t v262 = v259; // 0x56263f
    int64_t v263 = v258; // 0x56263f
    int64_t v264 = v120; // 0x56263f
    int64_t v265 = v122; // 0x56263f
    int64_t v266 = v124; // 0x56263f
    if (v120 == 0) {
        // break -> 0x562178
        goto lab_0x562178_3;
    }
    goto lab_0x562380;
  lab_0x562612:;
    int64_t v272 = v255;
    uint64_t v273 = *(int64_t *)(v272 + 16); // 0x562612
    int64_t v274; // 0x562060
    int64_t v275; // 0x562060
    char v276; // 0x562060
    if (v273 >= *(int64_t *)(v272 + 24)) {
        int64_t v277 = *(int64_t *)v272; // 0x562870
        v274 = v277;
        if ((int32_t)v277 != -1) {
            goto lab_0x562623;
        } else {
            // 0x562888
            v1 = 0;
            v275 = v235;
            v276 = 1;
            goto lab_0x562629;
        }
    } else {
        // 0x562620
        v274 = (int64_t)*(char *)v273;
        goto lab_0x562623;
    }
  lab_0x562414:;
    int64_t v278 = v1; // 0x562414
    int64_t v279 = 0x100000000 * v242 >> 32; // 0x562419
    v256 = v279;
    v257 = v235;
    if (v278 == 0) {
        goto lab_0x562631;
    } else {
        // 0x562426
        v253 = v279;
        v254 = 0;
        v255 = v278;
        if ((int32_t)v235 != -1) {
            goto lab_0x562431_3;
        }
        goto lab_0x562612;
    }
  lab_0x562623:
    // 0x562623
    v275 = 0x100000000 * v274 >> 32;
    v276 = 0;
    goto lab_0x562629;
  lab_0x562629:
    // 0x562629
    v111 = v253;
    v113 = v275;
    v256 = v253;
    v257 = v275;
    if (v276 == v254) {
        goto lab_0x562431_3;
    }
    goto lab_0x562631;
  lab_0x5620ee:;
    int64_t v280 = function_524600(&result4, (int64_t)&v1); // 0x562102
    v24 = (int64_t)&result4;
    v8 = v4;
    result = v280;
    if ((char)v280 != 0) {
        // 0x562a1b
        return result;
    }
    goto lab_0x562113;
  lab_0x562113:;
    int64_t v281 = v8;
    v150 = v24;
    int64_t v282 = function_5246d0(v150); // 0x562117
    char v146 = *(char *)(v2 + 110); // 0x56211c
    int64_t v283 = v282 & 0xffffffff; // 0x562120
    v116 = (char *)(v2 + 32);
    unsigned char v284 = *v116; // 0x562122
    int64_t v285 = v284; // 0x562122
    char v147 = v282; // 0x562126
    int64_t v286; // 0x562060
    int64_t v287; // 0x562060
    if (v146 == v147) {
        goto lab_0x562138;
    } else {
        // 0x56212f
        v287 = v285;
        v286 = v283;
        if (*(char *)(v2 + 111) != v147) {
            goto lab_0x562370;
        } else {
            goto lab_0x562138;
        }
    }
  lab_0x562138:
    if (v284 != 0) {
        // 0x562360
        v287 = v285;
        v286 = v283;
        if (*(char *)(v2 + 73) != v147) {
            goto lab_0x562140;
        } else {
            goto lab_0x562370;
        }
    } else {
        goto lab_0x562140;
    }
  lab_0x562140:
    // 0x562140
    v287 = v285;
    v286 = v283;
    if (*(char *)(v2 + 72) == v147) {
        goto lab_0x562370;
    } else {
        int64_t v288 = function_5245c0(v150); // 0x56214d
        int64_t v289 = function_524600((int64_t *)v288, (int64_t)&v1); // 0x562158
        if ((char)v289 == 0) {
            int64_t v290 = function_5246d0(v150); // 0x562934
            v287 = (int64_t)*v116;
            v286 = v290 & 0xffffffff;
            goto lab_0x562370;
        } else {
            // 0x562169
            v112 = a3;
            v114 = a5;
            v115 = 0x1000000 * (int32_t)v289 >> 24;
            v117 = (int64_t)*v116;
            v119 = v283;
            v121 = 0;
            v123 = v281;
            v125 = 0;
            goto lab_0x562178_3;
        }
    }
  lab_0x562370:
    // 0x562370
    v260 = a3;
    v261 = a5;
    v262 = v287;
    v263 = v286;
    v264 = 0;
    v265 = v281;
    v266 = 0;
    while (true) {
      lab_0x562380:
        // 0x562380
        v233 = v266;
        v232 = v265;
        int64_t v267 = v264;
        v118 = v263;
        v234 = v262;
        v235 = v261;
        v236 = v260;
        char v268; // 0x562060
        if (v234 == 0) {
            // 0x562380
            v268 = v118;
        } else {
            char v269 = v118;
            v112 = v236;
            v114 = v235;
            v115 = 0;
            v117 = v234;
            v119 = v118;
            v121 = v267;
            v123 = v232;
            v125 = v233;
            v268 = v269;
            if (*(char *)(v2 + 73) == v269) {
                // break -> 0x562178
                break;
            }
        }
        // 0x56238d
        v231 = v268;
        v112 = v236;
        v114 = v235;
        v115 = 0;
        v117 = v234;
        v119 = v118;
        v121 = v267;
        v123 = v232;
        v125 = v233;
        if (*(char *)(v2 + 72) == v231) {
            // break -> 0x562178
            break;
        }
        // 0x562396
        if (*(char *)(v2 + 114) == v231) {
            int32_t v270 = v232; // 0x562654
            unsigned char v271 = (char)v267 ^ 1 | (char)(v270 == 10); // 0x56265b
            if (v271 == 0) {
                goto lab_0x5623a8;
            } else {
                // 0x562664
                v238 = 1;
                v239 = 8;
                v240 = 0;
                if (v3 != 0 && v270 != 8) {
                    // 0x5627f0
                    v238 = v271;
                    v239 = v232;
                    v240 = v233 + 1 & 0xffffffff;
                }
                goto lab_0x5623d7;
            }
        } else {
            // 0x56239f
            v112 = v236;
            v114 = v235;
            v115 = 0;
            v117 = v234;
            v119 = v118;
            v121 = 0;
            v123 = v232;
            v125 = v233;
            if (v267 == 0) {
                // break -> 0x562178
                break;
            }
            goto lab_0x5623a8;
        }
    }
    goto lab_0x562178_3;
  lab_0x5628d0:
    // 0x5628d0
    function_259ce((int64_t *)&v27, 32);
    int64_t v148 = v29; // 0x5628e2
    int64_t v149 = v14; // 0x5628e2
    v89 = v26;
    v68 = v18;
    v70 = v17;
    int32_t v106 = v23; // 0x5628e2
    int64_t v151 = v12; // 0x5628e2
    v73 = v5;
    int64_t v152 = v7; // 0x5628e2
    int64_t v153 = v10; // 0x5628e2
    goto lab_0x5621af;
  lab_0x5624e0:
    // 0x5624e0
    if ((char)v19 != 0) {
        // 0x562a1b
        return result5;
    }
    char * v226 = (char *)(v2 + 32); // 0x562507
    char v291 = *v226; // 0x562507
    int64_t v164 = v28; // 0x56250d
    int64_t v174 = v15; // 0x56250d
    int64_t v165 = v13; // 0x56250d
    int64_t v172 = v11; // 0x56250d
    int64_t v162 = 0; // 0x56250d
    int64_t v160 = v9; // 0x56250d
    int64_t v158 = 0; // 0x56250d
    int64_t v188; // 0x562060
    int64_t v184; // 0x562060
    int64_t v189; // 0x562060
    char result3; // 0x562060
    int64_t v185; // 0x562060
    int64_t v187; // 0x562060
    int64_t v186; // 0x562060
    if (v291 == 0) {
        goto lab_0x562518;
    } else {
        // 0x56250f
        v164 = v28;
        v174 = v15;
        v165 = v13;
        v172 = v11;
        v162 = 0;
        v160 = v9;
        v158 = 0;
        v186 = v28;
        v187 = v15;
        result3 = v291;
        v185 = v13;
        v188 = 0;
        v184 = v9;
        v189 = 0;
        if (*(char *)(v2 + 73) == (char)v11) {
            goto lab_0x5625f0;
        } else {
            goto lab_0x562518;
        }
    }
  lab_0x562178_3:;
    int32_t v126 = v123;
    v127 = v126;
    v128 = v112;
    v129 = v114;
    v130 = v115;
    v131 = v117;
    v132 = v119;
    v133 = v121;
    v134 = v123;
    v135 = v125;
    int64_t v136 = v112; // 0x562185
    int64_t v137 = v114; // 0x562185
    int32_t v138 = v115; // 0x562185
    int32_t v139 = 22; // 0x562185
    int64_t v140 = v117; // 0x562185
    int64_t v141 = v119; // 0x562185
    int64_t v142 = v121; // 0x562185
    int64_t v143 = v123; // 0x562185
    int64_t v144 = v125; // 0x562185
    if (v126 != 16) {
      lab_0x562187:
        // 0x562187
        v136 = v128;
        v137 = v129;
        v138 = v130;
        v139 = v127;
        v140 = v131;
        v141 = v132;
        v142 = v133;
        v143 = v134;
        v144 = v135;
    }
    char v145 = v146 == v147; // 0x562128
    v27 = (int64_t)&g52;
    v148 = v136;
    v149 = v137;
    v89 = v150;
    v68 = v138;
    v70 = v145;
    v106 = v139;
    v151 = v141;
    v73 = v142;
    v152 = v143;
    v153 = v144;
    v29 = v136;
    v14 = v137;
    v26 = v150;
    v18 = v138;
    v17 = v145;
    v23 = v139;
    v12 = v141;
    v5 = v142;
    v7 = v143;
    v10 = v144;
    if ((char)v140 != 0) {
        goto lab_0x5628d0;
    } else {
        goto lab_0x5621af;
    }
  lab_0x5621af:;
    uint64_t v154 = 0x100000000 * v152 >> 32; // 0x5621c8
    uint64_t v155 = v70 == 0 ? 0x7fffffffffffffff : -0x8000000000000000; // 0x5621d8
    v81 = v155 / v154;
    int64_t v156 = v155 % v154;
    v28 = v148;
    v15 = v149;
    v25 = v89;
    v19 = v68;
    v16 = v70;
    n = v106;
    v22 = v154;
    v21 = v155;
    v20 = v81;
    result5 = v81;
    v13 = v156;
    v11 = v151;
    v6 = v73;
    v9 = v153;
    if (*(char *)(v2 + 136) != 0) {
        goto lab_0x5624e0;
    } else {
        int64_t result2 = v68 % 256; // 0x5621f9
        if ((char)v68 != 0) {
            // 0x562a1b
            return result2;
        }
        int64_t v107 = 0x100000000000000 * (int64_t)v106 + 0x3000000000000000 >> 56;
        v98 = v148;
        v99 = v149;
        v100 = v156;
        v101 = v151;
        v102 = result2;
        v103 = v153;
        v104 = 0;
        while (true) {
          lab_0x562218:
            // 0x562218
            v79 = v104;
            v77 = v103;
            v75 = v102;
            int64_t v105 = v101;
            v94 = v99;
            v66 = v98;
            v63 = 0x100000000000000 * v105 >> 56;
            if (v106 < 11) {
                // 0x562227
                v61 = v100;
                v67 = v66;
                v69 = v68;
                v71 = v70;
                v72 = v100;
                v74 = v73;
                v76 = v75;
                v78 = v77;
                v80 = v79;
                if (v105 < v107 != (char)v105 > 47) {
                    // break -> 0x5626c0
                    break;
                }
                goto lab_0x56223a;
            } else {
                int64_t v108 = v105 + 0xffffffd0; // 0x562690
                v61 = v108 & 0xffffffff;
                if ((char)v108 < 10) {
                    goto lab_0x56223a;
                } else {
                    int64_t v109 = v105 + 0xffffff9f; // 0x56269c
                    int64_t v110 = v109 & 0xffffffff; // 0x56269c
                    if ((char)v109 < 6) {
                        // 0x562800
                        v62 = v110;
                        v64 = v63 + 0xffffffa9;
                        goto lab_0x56223d;
                    } else {
                        // 0x5626a8
                        v67 = v66;
                        v69 = v68;
                        v71 = v70;
                        v72 = v110;
                        v74 = v73;
                        v76 = v75;
                        v78 = v77;
                        v80 = v79;
                        if ((char)v105 >= 71) {
                            // break -> 0x5626c0
                            break;
                        }
                        // 0x5626b0
                        v65 = v110;
                        v67 = v66;
                        v69 = v68;
                        v71 = v70;
                        v72 = v110;
                        v74 = v73;
                        v76 = v75;
                        v78 = v77;
                        v80 = v79;
                        if ((int32_t)(v63 + 0xffffffc9) == -1) {
                            // break -> 0x5626c0
                            break;
                        }
                        goto lab_0x562246;
                    }
                }
            }
        }
        goto lab_0x5626c0_2;
    }
  lab_0x562518:;
    int64_t v157 = v158;
    int64_t v159 = v160;
    int64_t v161 = v162;
    int64_t v163 = v164;
    v67 = v163;
    v69 = v19;
    v71 = v16;
    v72 = v165;
    v74 = v6;
    v76 = v161;
    v78 = v159;
    v80 = v157;
    int64_t v166; // 0x562060
    int64_t v167; // 0x562060
    int64_t v168; // 0x562060
    int64_t v169; // 0x562060
    int64_t v170; // 0x562060
    int64_t v171; // 0x562060
    if (*(char *)(v2 + 72) == (char)v172) {
        goto lab_0x5626c0_2;
    } else {
        int64_t str = v2 + 114; // 0x5624eb
        int64_t * found_byte_pos = memchr((int64_t *)str, 0x1000000 * (int32_t)v172 >> 24, n); // 0x562531
        v67 = v163;
        v69 = v19;
        v71 = v16;
        v72 = n;
        v74 = v6;
        v76 = v161;
        v78 = v159;
        v80 = v157;
        if (found_byte_pos == NULL) {
            goto lab_0x5626c0_2;
        } else {
            int64_t v173 = v174;
            int64_t v175 = (int64_t)found_byte_pos - str; // 0x56253f
            int64_t v176 = v175 + 0xfffffffa; // 0x562542
            if (v157 > 0x100000000000000 * v20 >> 56) {
                // 0x562820
                v171 = v163;
                v170 = v173;
                v169 = v176 & 0xffffffff;
                v166 = 1;
                v167 = v159;
                v168 = v157;
            } else {
                int32_t v177 = v175; // 0x562545
                int32_t v178 = v177 - 15; // 0x562545
                uint64_t v179 = v157 * v22; // 0x562556
                int64_t v180 = 0x100000000 * (v178 < 0 == (14 - v177 & v177) < 0 == (v178 != 0) ? v176 : v175) >> 32; // 0x562561
                uint64_t v181 = v21 - v180; // 0x562563
                int64_t v182 = v181 & -256 | (int64_t)(v181 < v179); // 0x562569
                v171 = v163;
                v170 = v173;
                v169 = v182;
                v166 = (v182 | v161) & 0xffffffff;
                v167 = v159 + 1 & 0xffffffff;
                v168 = v180 + v179;
            }
            goto lab_0x562576;
        }
    }
  lab_0x5626c0_2:
    // 0x5626c0
    v36 = v67;
    v38 = v69;
    v40 = v71;
    v41 = 0;
    v42 = v27;
    v44 = v74;
    v46 = v76;
    v48 = v78;
    v50 = v80;
    v51 = v67;
    v52 = v69;
    v53 = v71;
    v55 = v72;
    v56 = 0;
    v57 = v74;
    v58 = v76;
    v59 = v78;
    v60 = v80;
    if (g51 == 0) {
        goto lab_0x5622e3;
    } else {
        goto lab_0x5626d5;
    }
  lab_0x5625f0:;
    int32_t v183 = v184; // 0x5625f0
    if (v183 == 0) {
        // 0x562a2f
        return result3;
    }
    // 0x5625f9
    function_451f2((int64_t *)&v27, 0x1000000 * v183 >> 24, v185);
    v171 = v186;
    v170 = v187;
    v169 = v185;
    v166 = v188;
    v167 = 0;
    v168 = v189;
    goto lab_0x562576;
  lab_0x5622e3:;
    int64_t v205 = v36; // 0x5622e6
    int64_t v207 = v41; // 0x5622e6
    int64_t v209 = v42; // 0x5622e6
    int64_t v206 = v36; // 0x5622e6
    int32_t v214 = v38; // 0x5622e6
    char v218 = v40; // 0x5622e6
    int64_t v208 = v41; // 0x5622e6
    int64_t v210 = v42; // 0x5622e6
    int64_t v215 = v46; // 0x5622e6
    int64_t v217 = v50; // 0x5622e6
    if ((char)v44 == 1 || (int32_t)v48 != 0) {
        goto lab_0x562724;
    } else {
        goto lab_0x5622f6;
    }
  lab_0x5626d5:;
    int32_t v227 = v59; // 0x5626dd
    function_451f2((int64_t *)&v27, 0x1000000 * v227 >> 24, v55);
    int64_t v228 = *(int64_t *)(v2 + 16); // 0x5626f1
    int64_t v229 = function_569070(v228, *(int64_t *)(v2 + 24), (int64_t *)&v27); // 0x5626f9
    if ((char)v229 == 0) {
        // 0x562948
        *(int32_t *)a7 = 4;
    }
    int64_t v230 = v27; // 0x562709
    v206 = v51;
    v214 = v52;
    v218 = v53;
    v208 = v56;
    v210 = v230;
    v215 = v58;
    v217 = v60;
    if (v227 != 0) {
        goto lab_0x562724;
    } else {
        // 0x562713
        v205 = v51;
        v207 = v56;
        v209 = v230;
        v206 = v51;
        v214 = v52;
        v218 = v53;
        v208 = v56;
        v210 = v230;
        v215 = v58;
        v217 = v60;
        if ((char)v57 != 1 == g51 == 0) {
            goto lab_0x5622f6;
        } else {
            goto lab_0x562724;
        }
    }
  lab_0x562576:;
    int64_t v190 = v168;
    int64_t v191 = v167;
    int64_t v192 = v166;
    int64_t v193 = v169;
    int64_t v194 = v170;
    int64_t v195 = v171; // 0x56257e
    if (result4 != 0) {
        int64_t * v196 = (int64_t *)(result4 + 16); // 0x562580
        uint64_t v197 = *v196; // 0x562580
        v195 = -1;
        if (v197 < *(int64_t *)(result4 + 24)) {
            // 0x56258e
            *v196 = v197 + 1;
            v195 = -1;
        }
    }
    int64_t v198 = function_5246d0(v25); // 0x5625a2
    result = v198;
    if (v1 == 0) {
        // 0x562a1b
        return result;
    }
    int64_t v199 = v195;
    int64_t v200 = v194; // 0x5625c2
    char v201 = 0; // 0x5625c2
    int64_t v202; // 0x562060
    if ((int32_t)v194 == -1) {
        uint64_t v203 = *(int64_t *)(v1 + 16); // 0x562830
        if (v203 >= *(int64_t *)(v1 + 24)) {
            int64_t v204 = *(int64_t *)v1; // 0x562968
            v202 = v204;
            if ((int32_t)v204 != -1) {
                goto lab_0x562841;
            } else {
                // 0x562977
                v1 = 0;
                v200 = v194;
                v201 = 1;
                goto lab_0x5625c8;
            }
        } else {
            // 0x56283e
            v202 = (int64_t)*(char *)v203;
            goto lab_0x562841;
        }
    } else {
        goto lab_0x5625c8;
    }
  lab_0x562724:
    // 0x562724
    v205 = v206;
    v207 = v208;
    v209 = v210;
    int64_t v211; // 0x562060
    int64_t v212; // 0x562060
    int64_t v213; // 0x562060
    if ((char)v214 != 0) {
        goto lab_0x5622f6;
    } else {
        // 0x56272f
        if ((char)v215 == 0) {
            int64_t v216 = v217;
            *(int64_t *)a8 = v218 != 0 ? -v216 : v216;
            v213 = v206;
            v211 = v208;
            v212 = v210;
        } else {
            // 0x562738
            *(int64_t *)a8 = v218 == 0 ? 0x7fffffffffffffff : -0x8000000000000000;
            *(int32_t *)a7 = 4;
            v213 = v206;
            v211 = v208;
            v212 = v210;
        }
        goto lab_0x56230d;
    }
  lab_0x5622f6:
    // 0x5622f6
    *(int64_t *)a8 = 0;
    *(int32_t *)a7 = 4;
    v213 = v205;
    v211 = v207;
    v212 = v209;
    goto lab_0x56230d;
  lab_0x56230d:
    // 0x56230d
    if ((char)v211 != 0) {
        int32_t * v219 = (int32_t *)a7; // 0x562316
        *v219 = *v219 | 2;
    }
    int64_t v220 = v212 - 24; // 0x562319
    if (v220 != (int64_t)&g51) {
        // 0x5629c8
        int64_t v221; // bp-73, 0x562060
        function_552550(v220, &v221, v213);
    }
    // 0x562332
    __readfsqword(40);
    return result4;
  lab_0x5625c8:
    // 0x5625c8
    v35 = v199;
    v37 = v19;
    v39 = v16;
    v54 = v193;
    v43 = v6;
    v45 = v192;
    v47 = v191;
    v49 = v190;
    if (v201 == (char)((int32_t)v198 == -1)) {
        goto lab_0x5622cb_2;
    } else {
        int64_t v222 = v200;
        int64_t v223 = function_5246d0(v25); // 0x5625d4
        int64_t v224 = v223 & 0xffffffff; // 0x5625d9
        char v225 = *v226; // 0x5625db
        v164 = v199;
        v174 = v222;
        v165 = v193;
        v172 = v224;
        v162 = v192;
        v160 = v191;
        v158 = v190;
        if (v225 == 0) {
            goto lab_0x562518;
        } else {
            // 0x5625e7
            v164 = v199;
            v174 = v222;
            v165 = v193;
            v172 = v224;
            v162 = v192;
            v160 = v191;
            v158 = v190;
            v186 = v199;
            v187 = v222;
            result3 = v225;
            v185 = v193;
            v188 = v192;
            v184 = v191;
            v189 = v190;
            if (*(char *)(v2 + 73) != (char)v223) {
                goto lab_0x562518;
            } else {
                goto lab_0x5625f0;
            }
        }
    }
  lab_0x562841:
    // 0x562841
    v200 = 0x100000000 * v202 >> 32;
    v201 = 0;
    goto lab_0x5625c8;
}

// Address range: 0x56d3e0 - 0x56dd0f
// From class:    std::__timepunct_cache<char>
// Type:          constructor
int64_t function_56d3e0(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 16); // 0x56d3e9
    int64_t v2 = a2; // bp-32, 0x56d3ee
    if (*v1 == 0) {
        int64_t result = function_4efd30(400); // 0x56db25
        *(int32_t *)(result + 8) = 0;
        *(int64_t *)(result + 16) = 0;
        *(int64_t *)(result + 24) = 0;
        *(int64_t *)(result + 32) = 0;
        *(int64_t *)(result + 40) = 0;
        *(int64_t *)(result + 48) = 0;
        *(int64_t *)(result + 56) = 0;
        *(int64_t *)result = (int64_t)&g39;
        *(int64_t *)(result + 64) = 0;
        *(int64_t *)(result + 72) = 0;
        *(int64_t *)(result + 80) = 0;
        *(int64_t *)(result + 88) = 0;
        *(int64_t *)(result + 96) = 0;
        *(int64_t *)(result + 104) = 0;
        *(int64_t *)(result + 112) = 0;
        *(int64_t *)(result + 120) = 0;
        *(int64_t *)(result + 128) = 0;
        *(int64_t *)(result + 136) = 0;
        *(int64_t *)(result + 144) = 0;
        *(int64_t *)(result + 152) = 0;
        *(int64_t *)(result + 160) = 0;
        *(int64_t *)(result + 168) = 0;
        *(int64_t *)(result + 176) = 0;
        *(int64_t *)(result + 184) = 0;
        *(int64_t *)(result + 192) = 0;
        *(int64_t *)(result + 200) = 0;
        *(int64_t *)(result + 208) = 0;
        *(int64_t *)(result + 216) = 0;
        *(int64_t *)(result + 224) = 0;
        *(int64_t *)(result + 232) = 0;
        *(int64_t *)(result + 240) = 0;
        *(int64_t *)(result + 248) = 0;
        *(int64_t *)(result + 256) = 0;
        *(int64_t *)(result + 264) = 0;
        *(int64_t *)(result + 272) = 0;
        *(int64_t *)(result + 280) = 0;
        *(int64_t *)(result + 288) = 0;
        *(int64_t *)(result + 296) = 0;
        *(int64_t *)(result + 304) = 0;
        *(int64_t *)(result + 312) = 0;
        *(int64_t *)(result + 320) = 0;
        *(int64_t *)(result + 328) = 0;
        *(int64_t *)(result + 336) = 0;
        *(int64_t *)(result + 344) = 0;
        *(int64_t *)(result + 352) = 0;
        *(int64_t *)(result + 360) = 0;
        *(int64_t *)(result + 368) = 0;
        *(int64_t *)(result + 376) = 0;
        return result;
    }
    if (a2 == 0) {
        // 0x56d8c0
        *(int64_t *)(a1 + 24) = function_565f30();
        int64_t result2 = *v1; // 0x56d8c9
        *(int64_t *)(result2 + 64) = (int64_t)"AM";
        *(int64_t *)(result2 + 16) = (int64_t)"%m/%d/%y";
        *(int64_t *)(result2 + 24) = (int64_t)"%m/%d/%y";
        *(int64_t *)(result2 + 72) = (int64_t)"PM";
        *(int64_t *)(result2 + 32) = (int64_t)"%H:%M:%S";
        *(int64_t *)(result2 + 40) = (int64_t)"%H:%M:%S";
        *(int64_t *)(result2 + 88) = (int64_t)"Sunday";
        *(int64_t *)(result2 + 48) = (int64_t)&g18;
        *(int64_t *)(result2 + 56) = (int64_t)&g18;
        *(int64_t *)(result2 + 96) = (int64_t)"Monday";
        *(int64_t *)(result2 + 80) = (int64_t)&g18;
        *(int64_t *)(result2 + 104) = (int64_t)"Tuesday";
        *(int64_t *)(result2 + 136) = (int64_t)"Saturday";
        *(int64_t *)(result2 + 112) = (int64_t)"Wednesday";
        *(int64_t *)(result2 + 152) = (int64_t)"Mon";
        *(int64_t *)(result2 + 120) = (int64_t)"Thursday";
        *(int64_t *)(result2 + 168) = (int64_t)"Wed";
        *(int64_t *)(result2 + 128) = (int64_t)"Friday";
        *(int64_t *)(result2 + 184) = (int64_t)"Fri";
        *(int64_t *)(result2 + 144) = (int64_t)"Sun";
        *(int64_t *)(result2 + 200) = (int64_t)"January";
        *(int64_t *)(result2 + 160) = (int64_t)"Tue";
        *(int64_t *)(result2 + 216) = (int64_t)"March";
        *(int64_t *)(result2 + 176) = (int64_t)"Thu";
        *(int64_t *)(result2 + 232) = (int64_t)"May";
        *(int64_t *)(result2 + 192) = (int64_t)"Sat";
        *(int64_t *)(result2 + 208) = (int64_t)"February";
        *(int64_t *)(result2 + 224) = (int64_t)"April";
        *(int64_t *)(result2 + 240) = (int64_t)"June";
        *(int64_t *)(result2 + 248) = (int64_t)"July";
        *(int64_t *)(result2 + 256) = (int64_t)"August";
        *(int64_t *)(result2 + 328) = (int64_t)"May";
        *(int64_t *)(result2 + 264) = (int64_t)"September";
        *(int64_t *)(result2 + 336) = (int64_t)"Jun";
        *(int64_t *)(result2 + 272) = (int64_t)"October";
        *(int64_t *)(result2 + 344) = (int64_t)"Jul";
        *(int64_t *)(result2 + 280) = (int64_t)"November";
        *(int64_t *)(result2 + 352) = (int64_t)"Aug";
        *(int64_t *)(result2 + 288) = (int64_t)"December";
        *(int64_t *)(result2 + 360) = (int64_t)"Sep";
        *(int64_t *)(result2 + 296) = (int64_t)"Jan";
        *(int64_t *)(result2 + 368) = (int64_t)"Oct";
        *(int64_t *)(result2 + 304) = (int64_t)"Feb";
        *(int64_t *)(result2 + 376) = (int64_t)"Nov";
        *(int64_t *)(result2 + 312) = (int64_t)"Mar";
        *(int64_t *)(result2 + 384) = (int64_t)&g24;
        *(int64_t *)(result2 + 320) = (int64_t)"Apr";
        return result2;
    }
    // 0x56d405
    *(int64_t *)(a1 + 24) = function_567a10(&v2);
    char * v3 = __nl_langinfo_l(0x20029, (struct __locale_struct *)v2); // 0x56d421
    *(int64_t *)(*v1 + 16) = (int64_t)v3;
    char * v4 = __nl_langinfo_l(0x2002e, (struct __locale_struct *)v2); // 0x56d438
    *(int64_t *)(*v1 + 24) = (int64_t)v4;
    char * v5 = __nl_langinfo_l(0x2002a, (struct __locale_struct *)v2); // 0x56d44f
    *(int64_t *)(*v1 + 32) = (int64_t)v5;
    char * v6 = __nl_langinfo_l(0x20031, (struct __locale_struct *)v2); // 0x56d466
    *(int64_t *)(*v1 + 40) = (int64_t)v6;
    char * v7 = __nl_langinfo_l(0x20028, (struct __locale_struct *)v2); // 0x56d47d
    *(int64_t *)(*v1 + 48) = (int64_t)v7;
    char * v8 = __nl_langinfo_l(0x20030, (struct __locale_struct *)v2); // 0x56d494
    *(int64_t *)(*v1 + 56) = (int64_t)v8;
    char * v9 = __nl_langinfo_l((int32_t)&g7, (struct __locale_struct *)v2); // 0x56d4ab
    *(int64_t *)(*v1 + 64) = (int64_t)v9;
    char * v10 = __nl_langinfo_l((int32_t)&g8, (struct __locale_struct *)v2); // 0x56d4c2
    *(int64_t *)(*v1 + 72) = (int64_t)v10;
    char * v11 = __nl_langinfo_l(0x2002b, (struct __locale_struct *)v2); // 0x56d4d9
    *(int64_t *)(*v1 + 80) = (int64_t)v11;
    char * v12 = __nl_langinfo_l((int32_t)&g4, (struct __locale_struct *)v2); // 0x56d4f0
    *(int64_t *)(*v1 + 88) = (int64_t)v12;
    char * v13 = __nl_langinfo_l(0x20008, (struct __locale_struct *)v2); // 0x56d507
    *(int64_t *)(*v1 + 96) = (int64_t)v13;
    char * v14 = __nl_langinfo_l(0x20009, (struct __locale_struct *)v2); // 0x56d51e
    *(int64_t *)(*v1 + 104) = (int64_t)v14;
    char * v15 = __nl_langinfo_l(0x2000a, (struct __locale_struct *)v2); // 0x56d535
    *(int64_t *)(*v1 + 112) = (int64_t)v15;
    char * v16 = __nl_langinfo_l(0x2000b, (struct __locale_struct *)v2); // 0x56d54c
    *(int64_t *)(*v1 + 120) = (int64_t)v16;
    char * v17 = __nl_langinfo_l(0x2000c, (struct __locale_struct *)v2); // 0x56d563
    *(int64_t *)(*v1 + 128) = (int64_t)v17;
    char * v18 = __nl_langinfo_l(0x2000d, (struct __locale_struct *)v2); // 0x56d57d
    *(int64_t *)(*v1 + 136) = (int64_t)v18;
    char * v19 = __nl_langinfo_l(0x20000, (struct __locale_struct *)v2); // 0x56d597
    *(int64_t *)(*v1 + 144) = (int64_t)v19;
    char * v20 = __nl_langinfo_l(0x20001, (struct __locale_struct *)v2); // 0x56d5b1
    *(int64_t *)(*v1 + 152) = (int64_t)v20;
    char * v21 = __nl_langinfo_l(0x20002, (struct __locale_struct *)v2); // 0x56d5cb
    *(int64_t *)(*v1 + 160) = (int64_t)v21;
    char * v22 = __nl_langinfo_l(0x20003, (struct __locale_struct *)v2); // 0x56d5e5
    *(int64_t *)(*v1 + 168) = (int64_t)v22;
    char * v23 = __nl_langinfo_l(0x20004, (struct __locale_struct *)v2); // 0x56d5ff
    *(int64_t *)(*v1 + 176) = (int64_t)v23;
    char * v24 = __nl_langinfo_l(0x20005, (struct __locale_struct *)v2); // 0x56d619
    *(int64_t *)(*v1 + 184) = (int64_t)v24;
    char * v25 = __nl_langinfo_l((int32_t)&g3, (struct __locale_struct *)v2); // 0x56d633
    *(int64_t *)(*v1 + 192) = (int64_t)v25;
    char * v26 = __nl_langinfo_l(0x2001a, (struct __locale_struct *)v2); // 0x56d64d
    *(int64_t *)(*v1 + 200) = (int64_t)v26;
    char * v27 = __nl_langinfo_l(0x2001b, (struct __locale_struct *)v2); // 0x56d667
    *(int64_t *)(*v1 + 208) = (int64_t)v27;
    char * v28 = __nl_langinfo_l(0x2001c, (struct __locale_struct *)v2); // 0x56d681
    *(int64_t *)(*v1 + 216) = (int64_t)v28;
    char * v29 = __nl_langinfo_l(0x2001d, (struct __locale_struct *)v2); // 0x56d69b
    *(int64_t *)(*v1 + 224) = (int64_t)v29;
    char * v30 = __nl_langinfo_l(0x2001e, (struct __locale_struct *)v2); // 0x56d6b5
    *(int64_t *)(*v1 + 232) = (int64_t)v30;
    char * v31 = __nl_langinfo_l(0x2001f, (struct __locale_struct *)v2); // 0x56d6cf
    *(int64_t *)(*v1 + 240) = (int64_t)v31;
    char * v32 = __nl_langinfo_l(0x20020, (struct __locale_struct *)v2); // 0x56d6e9
    *(int64_t *)(*v1 + 248) = (int64_t)v32;
    char * v33 = __nl_langinfo_l(0x20021, (struct __locale_struct *)v2); // 0x56d703
    *(int64_t *)(*v1 + 256) = (int64_t)v33;
    char * v34 = __nl_langinfo_l(0x20022, (struct __locale_struct *)v2); // 0x56d71d
    *(int64_t *)(*v1 + 264) = (int64_t)v34;
    char * v35 = __nl_langinfo_l(0x20023, (struct __locale_struct *)v2); // 0x56d737
    *(int64_t *)(*v1 + 272) = (int64_t)v35;
    char * v36 = __nl_langinfo_l(0x20024, (struct __locale_struct *)v2); // 0x56d751
    *(int64_t *)(*v1 + 280) = (int64_t)v36;
    char * v37 = __nl_langinfo_l(0x20025, (struct __locale_struct *)v2); // 0x56d76b
    *(int64_t *)(*v1 + 288) = (int64_t)v37;
    char * v38 = __nl_langinfo_l(0x2000e, (struct __locale_struct *)v2); // 0x56d785
    *(int64_t *)(*v1 + 296) = (int64_t)v38;
    char * v39 = __nl_langinfo_l(0x2000f, (struct __locale_struct *)v2); // 0x56d79f
    *(int64_t *)(*v1 + 304) = (int64_t)v39;
    char * v40 = __nl_langinfo_l(0x20010, (struct __locale_struct *)v2); // 0x56d7b9
    *(int64_t *)(*v1 + 312) = (int64_t)v40;
    char * v41 = __nl_langinfo_l(0x20011, (struct __locale_struct *)v2); // 0x56d7d3
    *(int64_t *)(*v1 + 320) = (int64_t)v41;
    char * v42 = __nl_langinfo_l(0x20012, (struct __locale_struct *)v2); // 0x56d7ed
    *(int64_t *)(*v1 + 328) = (int64_t)v42;
    char * v43 = __nl_langinfo_l(0x20013, (struct __locale_struct *)v2); // 0x56d807
    *(int64_t *)(*v1 + 336) = (int64_t)v43;
    char * v44 = __nl_langinfo_l(0x20014, (struct __locale_struct *)v2); // 0x56d821
    *(int64_t *)(*v1 + 344) = (int64_t)v44;
    char * v45 = __nl_langinfo_l(0x20015, (struct __locale_struct *)v2); // 0x56d83b
    *(int64_t *)(*v1 + 352) = (int64_t)v45;
    char * v46 = __nl_langinfo_l((int32_t)&g5, (struct __locale_struct *)v2); // 0x56d855
    *(int64_t *)(*v1 + 360) = (int64_t)v46;
    char * v47 = __nl_langinfo_l((int32_t)&g6, (struct __locale_struct *)v2); // 0x56d86f
    *(int64_t *)(*v1 + 368) = (int64_t)v47;
    char * v48 = __nl_langinfo_l(0x20018, (struct __locale_struct *)v2); // 0x56d889
    *(int64_t *)(*v1 + 376) = (int64_t)v48;
    int64_t result3 = (int64_t)__nl_langinfo_l(0x20019, (struct __locale_struct *)v2); // 0x56d8a3
    *(int64_t *)(*v1 + 384) = result3;
    return result3;
}

// Address range: 0x57ba10 - 0x57bbd7
int64_t function_57ba10(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t * v1 = (int64_t *)(a1 + 24); // 0x57ba21
    int64_t v2 = *v1; // 0x57ba21
    __readfsqword(40);
    if ((int32_t)function_57a000(v2) == 0) {
        int64_t v3 = (int64_t)*(char *)v2 + 0xffffffd0; // 0x57ba44
        if ((char)v3 < 75) {
            int32_t v4 = *(int32_t *)((4 * v3 & 1020) + (int64_t)&g25); // 0x57ba59
            return (int64_t)v4 + (int64_t)&g25;
        }
        // 0x57baf3
        __readfsqword(40);
        return 0;
    }
    // 0x57ba68
    int64_t result; // bp-72, 0x57ba10
    int64_t v5 = function_57c770(a1, &result, 0); // 0x57ba70
    if (v5 == 0) {
        // 0x57baf3
        __readfsqword(40);
        return 0;
    }
    // 0x57ba81
    int64_t v6; // 0x57ba10
    if (*(char *)*v1 != 70) {
        int64_t v7 = function_57ba10(a1, (int64_t)&result, 0, a4, (int64_t)&g56); // 0x57bb20
        *(int64_t *)v5 = v7;
        v6 = v7;
    } else {
        int64_t v8 = function_57ca40(a1); // 0x57ba91
        *(int64_t *)v5 = v8;
        v6 = v8;
    }
    // 0x57ba9a
    if (v6 == 0) {
        // 0x57baf3
        __readfsqword(40);
        return 0;
    }
    int64_t v9 = result; // 0x57baa5
    result = v9;
    if (*(int32_t *)v6 < 33) {
        int64_t * v10 = (int64_t *)(v6 + 8); // 0x57bab1
        *v10 = v9;
        int64_t * v11 = (int64_t *)v5; // 0x57bab9
        result = *v11;
        *v11 = *v10;
    }
    int64_t v12 = result;
    if (v12 == 0) {
        // 0x57baf3
        __readfsqword(40);
        return 0;
    }
    int32_t * v13 = (int32_t *)(a1 + 56); // 0x57bad2
    uint32_t v14 = *v13; // 0x57bad2
    result = 0;
    if (v14 < *(int32_t *)(a1 + 60)) {
        int64_t v15 = *(int64_t *)(a1 + 48); // 0x57bade
        *(int64_t *)(v15 + (0x100000000 * (int64_t)v14 >> 29)) = v12;
        *v13 = v14 + 1;
    }
    // 0x57baf3
    __readfsqword(40);
    return result;
}

// Address range: 0x57bbe0 - 0x57bc08
int64_t function_57bbe0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x57bbe0
    int64_t v1; // 0x57bbe0
    int64_t v2 = v1;
    int64_t v3 = a2 + 1; // 0x57bbe0
    *(int64_t *)(v2 + 24) = v3;
    return function_5797e0(v2, 36, function_57ba10(v2, v3, a3, a4, (int64_t)&g56), 0);
}

// Address range: 0x57bc10 - 0x57bc3b
int64_t function_57bc10(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x57bc10
    int64_t v1; // 0x57bc10
    int64_t v2 = v1;
    int64_t v3 = a2 + 1; // 0x57bc10
    *(int64_t *)(v2 + 24) = v3;
    return function_5797e0(v2, 38, function_57ba10(v2, v3, a3, a4, (int64_t)&g56), 0);
}

// Address range: 0x57bc40 - 0x57bc51
int64_t function_57bc40(void) {
    // 0x57bc40
    int64_t v1; // 0x57bc40
    return function_57ca40(v1);
}

// Address range: 0x57bc58 - 0x57bc94
int64_t function_57bc58(int64_t a1, int64_t a2) {
    // 0x57bc58
    int64_t v1; // 0x57bc58
    *(int64_t *)(v1 + 24) = a2 + 2;
    char v2 = *(char *)(a2 + 1); // 0x57bc72
    int32_t v3 = *(int32_t *)(4 * (int64_t)(v2 - 70) + (int64_t)&g26); // 0x57bc8b
    return (int64_t)v3 + (int64_t)&g26;
}

// Address range: 0x57bc98 - 0x57bcc3
int64_t function_57bc98(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x57bc98
    int64_t v1; // 0x57bc98
    int64_t v2 = v1;
    int64_t v3 = a2 + 1; // 0x57bc98
    *(int64_t *)(v2 + 24) = v3;
    return function_5797e0(v2, 37, function_57ba10(v2, v3, a3, a4, (int64_t)&g56), 0);
}

// Address range: 0x57bcc8 - 0x57bcf3
int64_t function_57bcc8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x57bcc8
    int64_t v1; // 0x57bcc8
    int64_t v2 = v1;
    int64_t v3 = a2 + 1; // 0x57bcc8
    *(int64_t *)(v2 + 24) = v3;
    return function_5797e0(v2, 35, function_57ba10(v2, v3, a3, a4, (int64_t)&g56), 0);
}

// Address range: 0x57bcf8 - 0x57bd23
int64_t function_57bcf8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x57bcf8
    int64_t v1; // 0x57bcf8
    int64_t v2 = v1;
    int64_t v3 = a2 + 1; // 0x57bcf8
    *(int64_t *)(v2 + 24) = v3;
    return function_5797e0(v2, 34, function_57ba10(v2, v3, a3, a4, (int64_t)&g56), 0);
}

// Address range: 0x57bd28 - 0x57c43c
int64_t function_57bd28(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x57bd28
    int64_t v1; // 0x57bd28
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(v2 + 40); // 0x57bd32
    int32_t v4 = *v3; // 0x57bd32
    if (v4 >= *(int32_t *)(v2 + 44)) {
        // 0x57c330
        if ((1 << *(int64_t *)8 % 64 & 0x87fffffe03ff) == 0) {
            // 0x57be77
            return function_57b480(v2);
        }
        int64_t v5 = function_579d80(v2, 0, 0x87fffffe03ff); // 0x57c361
        int64_t * v6 = (int64_t *)(v2 + 24); // 0x57c366
        *v6 = *v6 + 1;
        return function_5797e0(v2, 4, v5, (int32_t)function_57b2f0(v2));
    }
    int64_t v7 = 32 * (int64_t)((0x1000000 * (int32_t)a4 >> 24) - 97); // 0x57bd3b
    int64_t v8 = *(int64_t *)(v2 + 32); // 0x57bd59
    int64_t result = v8 + 8 * ((0x100000000 * (int64_t)v4 >> 31) + (int64_t)v4); // 0x57bd5d
    *(int32_t *)(result + 4) = 0;
    *v3 = v4 + 1;
    *(int64_t *)(result + 8) = v7 + (int64_t)&g37;
    *(int32_t *)result = 39;
    *(int64_t *)(v2 + 24) = a2 + 1;
    int32_t * v9 = (int32_t *)(v2 + 80); // 0x57bd7c
    *v9 = *v9 + *(int32_t *)(v7 + (int64_t)&g37 + 8);
    return result;
}
