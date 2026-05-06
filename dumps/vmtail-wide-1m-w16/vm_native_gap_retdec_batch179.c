/*
 * Targeted RetDec C for native executable gap queue batch 179.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x5b526-0x5b7ba rank=79 name=fcn.0005b526 kind=r2_discovered bytes=660 uncovered=593
 *   0x4c5d50-0x4c5fa1 rank=80 name=fcn.004c5d50 kind=r2_discovered bytes=593 uncovered=593
 *   0x525e70-0x5260be rank=81 name=method.std::__cxx11::time_get_char__std::istreambuf_iterator_char__std::char_traits_char_____.virtual_64 kind=native_discovered bytes=590 uncovered=590
 *   0x495020-0x49526d rank=82 name=fcn.00495020 kind=r2_discovered bytes=589 uncovered=589
 *   0x4e9d80-0x4e9fcb rank=83 name=fcn.004e9d80 kind=r2_discovered bytes=587 uncovered=587
 *   0x56f16-0x5715f rank=84 name=fcn.00056f16 kind=r2_discovered bytes=585 uncovered=585
 *   0x57778-0x579c1 rank=85 name=fcn.00057778 kind=r2_discovered bytes=585 uncovered=585
 *   0x517200-0x517449 rank=86 name=fcn.00517200 kind=r2_discovered bytes=585 uncovered=585
 *   0x4c00c0-0x4c0306 rank=87 name=fcn.004c00c0 kind=r2_discovered bytes=582 uncovered=582
 *   0x56ba40-0x56bc82 rank=88 name=method.std::codecvt_wchar_t__char____mbstate_t_.virtual_16 kind=native_discovered bytes=578 uncovered=578
 *   0x4cf560-0x4cf79f rank=89 name=fcn.004cf560 kind=r2_discovered bytes=575 uncovered=575
 *   0x4a03f0-0x4a062e rank=90 name=fcn.004a03f0 kind=r2_discovered bytes=574 uncovered=574
 *   0x4c9480-0x4c96bd rank=91 name=fcn.004c9480 kind=r2_discovered bytes=573 uncovered=573
 *   0x501510-0x50174d rank=92 name=method.std::basic_filebuf_wchar_t__std::char_traits_wchar_t___.virtual_104 kind=native_discovered bytes=573 uncovered=573
 *   0x4fe020-0x4fe25a rank=93 name=method.std::basic_filebuf_wchar_t__std::char_traits_wchar_t___.virtual_64 kind=native_discovered bytes=570 uncovered=570
 *   0x4d09e0-0x4d0c18 rank=94 name=fcn.004d09e0 kind=r2_discovered bytes=568 uncovered=568
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
extern int g12;
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
int64_t entry_point();
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
int64_t __asm_iretd();
int64_t __asm_sti(int64_t value, ...);
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
int128_t __asm_punpckldq(int128_t left, int128_t right);
int128_t __asm_psllq(int128_t value, int count);
int128_t __asm_psrlq(int128_t value, int count);
int128_t __asm_por(int128_t left, int128_t right);
int128_t __asm_pxor(int128_t left, int128_t right);
int128_t __asm_xorps(int128_t left, int128_t right);
int128_t __asm_cmpnlesd(int128_t left, int128_t right);
int128_t __asm_cvtsi2sd(int64_t value);
int128_t __asm_cvtss2sd(int32_t value);
int128_t __asm_subsd(int128_t left, int128_t right);
int64_t __asm_cvttsd2si(int128_t value);
void __asm_ucomisd(int128_t left, int128_t right);
void __asm_ucomiss(int128_t left, int64_t right);
void __asm_ucomiss_134(int128_t left, int128_t right);
int128_t __asm_movups();
void __asm_movups_133();
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
int64_t memset2(void *s, int c, size_t n);
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

int64_t function_20160();
int64_t function_24ded();
int64_t function_2508e();
int64_t function_2537c();
int64_t function_29c3a();
int64_t function_29c46();
int64_t function_2aec0();
int64_t function_380a0();
int64_t function_48e723();
int64_t function_495020(int64_t a1, int64_t a2, int64_t a3, int64_t str, int64_t a5, int64_t a6, int64_t a7, uint64_t a8);
int64_t function_498d10();
int64_t function_49e770();
int64_t function_49e8b0();
int64_t function_4a03f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4a8c6();
int64_t function_4af830();
int64_t function_4af8d0();
int64_t function_4afe70();
int64_t function_4b01d0();
int64_t function_4c00c0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4c14d0();
int64_t function_4c1690();
int64_t function_4c16b0();
int64_t function_4c1770();
int64_t function_4c18b0();
int64_t function_4c19e0();
int64_t function_4c1af0();
int64_t function_4c1b30();
int64_t function_4c1bc0();
int64_t function_4c1d00();
int64_t function_4c35e0();
int64_t function_4c4450();
int64_t function_4c4660();
int64_t function_4c5bd0();
int64_t function_4c5d50(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4c8790();
int64_t function_4c8fa0();
int64_t function_4c9480(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, uint64_t a7, int64_t a8, int64_t a9);
int64_t function_4cf560(int64_t a1, uint64_t a2, int64_t a3, int64_t a4, uint64_t a5);
int64_t function_4cf79e(void);
int64_t function_4cfef0();
int64_t function_4d09e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4d3c90();
int64_t function_4d3f90();
int64_t function_4e9d80(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4efd30();
int64_t function_4f1770();
int64_t function_4fe020(int64_t a1, int64_t a2, int64_t a3);
int64_t function_5010e0();
int64_t function_501260();
int64_t function_501420();
int64_t function_501510(int64_t a1, int64_t a2, int64_t a3);
int64_t function_50d7a0();
int64_t function_50e0e0();
int64_t function_50f6f0();
int64_t function_50f7d0();
int64_t function_517200(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_524720();
int64_t function_525e70(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int32_t a9, int32_t a10);
int64_t function_53fbe0();
int64_t function_542590();
int64_t function_5425f0();
int64_t function_54d560();
int64_t function_554b00();
int64_t function_55f3a();
int64_t function_55f42();
int64_t function_56188();
int64_t function_561d2();
int64_t function_56482();
int64_t function_56ba40(int64_t a1, uint64_t ps, uint64_t a3, uint64_t a4, int64_t wstr3, int64_t a6, uint64_t a7, int64_t a8);
int64_t function_56ee4();
int64_t function_56f00();
int64_t function_56f16(int64_t a1, int64_t a2, int64_t a3);
int64_t function_575b2();
int64_t function_5763a();
int64_t function_57778(int64_t a1, int64_t a2, int64_t a3);
int64_t function_5b444();
int64_t function_5b526(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_5bff9();
int64_t function_5c046();
int64_t function_729b6();
int64_t function_729ce();

// Address range: 0x56f16 - 0x5715f
int64_t function_56f16(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x56f37
    int64_t v2 = 0; // bp-704, 0x56f4e
    int64_t v3 = 0; // bp-696, 0x56f5b
    int64_t v4 = (int64_t)&g24; // bp-688, 0x56f64
    int64_t wstr2 = *(int64_t *)function_55f3a(); // 0x56f6e
    int64_t v5 = (int64_t)&g24; // 0x56f76
    if (wstr2 != (int64_t)&g24) {
        int32_t * v6 = (int32_t *)(wstr2 - 8); // 0x56f7c
        int32_t v7 = *v6; // 0x56f7c
        int64_t v8 = wstr2 - 24;
        int64_t v9; // 0x56f16
        if (v7 < 0) {
            int64_t * v10 = (int64_t *)v8; // 0x56fae
            uint64_t v11 = *v10; // 0x56fae
            uint64_t v12 = *(int64_t *)(wstr2 - 16); // 0x56fbc
            if (v11 >= 0xfffffffffffffff) {
                // 0x56fc5
                function_542590("basic_string::_S_create");
            }
            int64_t v13 = v11; // 0x56fd4
            if (v11 > v12) {
                uint64_t v14 = 2 * v12; // 0x56fd6
                v13 = v11 < v14 ? v14 : v11;
            }
            int64_t v15 = 4 * v13; // 0x56fe1
            uint64_t v16 = v15 + 60; // 0x56fe9
            int64_t v17 = v13; // 0x56ff3
            int64_t v18 = v15; // 0x56ff3
            if (v12 < v13 && v16 > (int64_t)&g1) {
                uint64_t v19 = ((int64_t)&g1 - (v16 & (int64_t)(int32_t)&g25)) / 4 + v13; // 0x5700e
                v17 = v19 < 0xffffffffffffffe ? v19 : 0xffffffffffffffe;
                v18 = 4 * v17;
            }
            int64_t v20 = function_4efd30(v18 + 28); // 0x5702a
            int64_t n = *v10; // 0x5702f
            *(int64_t *)(v20 + 8) = v17;
            int32_t * v21 = (int32_t *)(v20 + 16); // 0x5703a
            *v21 = 0;
            int64_t wstr = v20 + 24; // 0x57041
            if (n != 0) {
                if (n != 1) {
                    // 0x5705a
                    wmemcpy((int32_t *)wstr, (int32_t *)wstr2, (int32_t)n);
                } else {
                    // 0x57050
                    *(int32_t *)wstr = *(int32_t *)wstr2;
                }
            }
            // 0x57065
            v9 = wstr;
            if (v20 != (int64_t)&g23) {
                int64_t v22 = *v10; // 0x5706a
                *v21 = 0;
                *(int64_t *)v20 = v22;
                *(int32_t *)(4 * v22 + wstr) = 0;
                v9 = wstr;
            }
        } else {
            // 0x56f8b
            v9 = wstr2;
            if (v8 != (int64_t)&g23) {
                // 0x56f94
                *v6 = v7 + 1;
                v9 = wstr2;
            }
        }
        // 0x5709a
        v5 = v9;
        v4 = v5;
    }
    int64_t v23 = 0; // 0x570ab
    if (*(int64_t *)(v5 - 24) != 0) {
        // 0x570ad
        int64_t v24; // bp-648, 0x56f16
        function_561d2(&v24, v5, &g6);
        int64_t v25 = function_56482(&v24, a2); // 0x570c7
        v23 = 0;
        if ((char)v25 != 0) {
            int64_t v26 = function_55f42(&v24, &v3, &v2); // 0x570e1
            v23 = 0;
            if ((char)v26 != 0) {
                // 0x570ea
                int64_t v27; // bp-680, 0x56f16
                int64_t v28 = function_56ee4(v2, v3, &v27); // 0x570fc
                v23 = 0;
                if ((char)v28 != 0) {
                    int64_t v29 = *(int64_t *)(a1 + (int64_t)&g2); // 0x57111
                    v23 = function_56f00(&v27, v29 + (0x100000000 * a3 >> 27)) % 256;
                }
            }
        }
        // 0x57120
        function_56188(&v24);
    }
    int64_t result = function_29c3a(&v4) & -256 | v23; // 0x57146
    if (v1 != __readfsqword(40)) {
        // 0x57148
        __stack_chk_fail();
        result = (int64_t)&g26;
    }
    // 0x5714d
    return result;
}

// Address range: 0x57778 - 0x579c1
int64_t function_57778(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x57799
    int64_t v2 = 0; // bp-704, 0x577b0
    int64_t v3 = 0; // bp-696, 0x577bd
    int64_t v4 = (int64_t)&g24; // bp-688, 0x577c6
    int64_t wstr2 = *(int64_t *)function_55f3a(); // 0x577d0
    int64_t v5 = (int64_t)&g24; // 0x577d8
    if (wstr2 != (int64_t)&g24) {
        int32_t * v6 = (int32_t *)(wstr2 - 8); // 0x577de
        int32_t v7 = *v6; // 0x577de
        int64_t v8 = wstr2 - 24;
        int64_t v9; // 0x57778
        if (v7 < 0) {
            int64_t * v10 = (int64_t *)v8; // 0x57810
            uint64_t v11 = *v10; // 0x57810
            uint64_t v12 = *(int64_t *)(wstr2 - 16); // 0x5781e
            if (v11 >= 0xfffffffffffffff) {
                // 0x57827
                function_542590("basic_string::_S_create");
            }
            int64_t v13 = v11; // 0x57836
            if (v11 > v12) {
                uint64_t v14 = 2 * v12; // 0x57838
                v13 = v11 < v14 ? v14 : v11;
            }
            int64_t v15 = 4 * v13; // 0x57843
            uint64_t v16 = v15 + 60; // 0x5784b
            int64_t v17 = v13; // 0x57855
            int64_t v18 = v15; // 0x57855
            if (v12 < v13 && v16 > (int64_t)&g1) {
                uint64_t v19 = ((int64_t)&g1 - (v16 & (int64_t)(int32_t)&g25)) / 4 + v13; // 0x57870
                v17 = v19 < 0xffffffffffffffe ? v19 : 0xffffffffffffffe;
                v18 = 4 * v17;
            }
            int64_t v20 = function_4efd30(v18 + 28); // 0x5788c
            int64_t n = *v10; // 0x57891
            *(int64_t *)(v20 + 8) = v17;
            int32_t * v21 = (int32_t *)(v20 + 16); // 0x5789c
            *v21 = 0;
            int64_t wstr = v20 + 24; // 0x578a3
            if (n != 0) {
                if (n != 1) {
                    // 0x578bc
                    wmemcpy((int32_t *)wstr, (int32_t *)wstr2, (int32_t)n);
                } else {
                    // 0x578b2
                    *(int32_t *)wstr = *(int32_t *)wstr2;
                }
            }
            // 0x578c7
            v9 = wstr;
            if (v20 != (int64_t)&g23) {
                int64_t v22 = *v10; // 0x578cc
                *v21 = 0;
                *(int64_t *)v20 = v22;
                *(int32_t *)(4 * v22 + wstr) = 0;
                v9 = wstr;
            }
        } else {
            // 0x577ed
            v9 = wstr2;
            if (v8 != (int64_t)&g23) {
                // 0x577f6
                *v6 = v7 + 1;
                v9 = wstr2;
            }
        }
        // 0x578fc
        v5 = v9;
        v4 = v5;
    }
    int64_t v23 = 0; // 0x5790d
    if (*(int64_t *)(v5 - 24) != 0) {
        // 0x5790f
        int64_t v24; // bp-648, 0x57778
        function_561d2(&v24, v5, &g7);
        int64_t v25 = function_56482(&v24, a2); // 0x57929
        v23 = 0;
        if ((char)v25 != 0) {
            int64_t v26 = function_55f42(&v24, &v3, &v2); // 0x57943
            v23 = 0;
            if ((char)v26 != 0) {
                // 0x5794c
                int64_t v27; // bp-680, 0x57778
                int64_t v28 = function_575b2(v2, v3, &v27); // 0x5795e
                v23 = 0;
                if ((char)v28 != 0) {
                    int64_t v29 = *(int64_t *)(a1 + (int64_t)&g3); // 0x57973
                    v23 = function_5763a(&v27, v29 + (0x100000000 * a3 >> 27)) % 256;
                }
            }
        }
        // 0x57982
        function_56188(&v24);
    }
    int64_t result = function_29c3a(&v4) & -256 | v23; // 0x579a8
    if (v1 != __readfsqword(40)) {
        // 0x579aa
        __stack_chk_fail();
        result = (int64_t)&g26;
    }
    // 0x579af
    return result;
}

// Address range: 0x5b526 - 0x5b7ba
int64_t function_5b526(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = __readfsqword(40); // 0x5b550
    int64_t v2 = function_5b444(&g9, function_24ded() + (int64_t)&g9); // 0x5b570
    int64_t v3 = v2; // bp-96, 0x5b57a
    int64_t v4; // bp-88, 0x5b526
    function_48e723(&v4, a2, &v3);
    function_2508e(&v3);
    int64_t v5; // 0x5b526
    int64_t v6; // 0x5b526
    int64_t v7; // 0x5b526
    int64_t v8; // 0x5b526
    int64_t v9; // 0x5b526
    int64_t v10; // 0x5b526
    int64_t v11; // 0x5b526
    uint64_t v12; // 0x5b620
    int64_t v13; // 0x5b526
    if (v13 - v4 == 16) {
        // 0x5b5c3
        function_729b6(&v3, a1 + 32);
        if (*(int64_t *)(a1 + 88) != 0) {
            while (true) {
                // continue -> 0x5b5e4
            }
        }
        // 0x5b610
        v10 = a4;
        if (true) {
            goto lab_0x5b6ee;
        } else {
            // 0x5b619
            v12 = function_5bff9(v4, 112 + a1);
            v10 = a4;
            if ((char)v12 == 0) {
                int64_t v14 = v4 + 8; // 0x5b725
                int64_t v15 = function_5c046(a1 + 72, v4); // 0x5b729
                int64_t v16 = *(int64_t *)(v15 + 16); // 0x5b72e
                int64_t v17 = v15 + 8; // 0x5b732
                v11 = a4;
                if (v16 != 0) {
                    int64_t v18 = v16;
                    int64_t v19; // 0x5b526
                    int64_t v20; // 0x5b741
                    while ((char)function_5bff9(v18 + 32, v14) != 0) {
                        // 0x5b741
                        v20 = *(int64_t *)(v18 + 24);
                        v19 = v17;
                        if (v20 == 0) {
                            // break (via goto) -> 0x5b669
                            goto lab_0x5b669;
                        }
                        v18 = v20;
                    }
                    int64_t v21 = *(int64_t *)(v18 + 16); // 0x5b660
                    v19 = v18;
                    while (v21 != 0) {
                        int64_t v22 = v18;
                        v18 = v21;
                        while ((char)function_5bff9(v18 + 32, v14) != 0) {
                            // 0x5b741
                            v20 = *(int64_t *)(v18 + 24);
                            v19 = v22;
                            if (v20 == 0) {
                                // break (via goto) -> 0x5b669
                                goto lab_0x5b669;
                            }
                            v18 = v20;
                        }
                        // 0x5b65d
                        v21 = *(int64_t *)(v18 + 16);
                        v19 = v18;
                    }
                  lab_0x5b669:
                    // 0x5b669
                    v11 = a4;
                    if (v17 == v19) {
                        goto lab_0x5b77b;
                    } else {
                        // 0x5b672
                        v11 = a4;
                        if ((char)function_5bff9(v14, v19 + 32) != 0) {
                            goto lab_0x5b77b;
                        } else {
                            int64_t v23 = v16;
                            int64_t v24; // 0x5b526
                            int64_t v25; // 0x5b766
                            while ((char)function_5bff9(v23 + 32, v14) != 0) {
                                // 0x5b766
                                v25 = *(int64_t *)(v23 + 24);
                                v24 = v17;
                                if (v25 == 0) {
                                    // break (via goto) -> 0x5b692
                                    goto lab_0x5b692;
                                }
                                v23 = v25;
                            }
                            int64_t v26 = *(int64_t *)(v23 + 16); // 0x5b75d
                            v24 = v23;
                            while (v26 != 0) {
                                int64_t v27 = v23;
                                v23 = v26;
                                while ((char)function_5bff9(v23 + 32, v14) != 0) {
                                    // 0x5b766
                                    v25 = *(int64_t *)(v23 + 24);
                                    v24 = v27;
                                    if (v25 == 0) {
                                        // break (via goto) -> 0x5b692
                                        goto lab_0x5b692;
                                    }
                                    v23 = v25;
                                }
                                // 0x5b75a
                                v26 = *(int64_t *)(v23 + 16);
                                v24 = v23;
                            }
                          lab_0x5b692:
                            // 0x5b692
                            v7 = v17;
                            if (v17 == v24) {
                                goto lab_0x5b76f;
                            } else {
                                int64_t v28 = function_5bff9(v14, v24 + 32); // 0x5b6a2
                                v7 = v24;
                                if ((char)v28 != 0) {
                                    goto lab_0x5b76f;
                                } else {
                                    // 0x5b6af
                                    function_380a0(a3, v24 + 40);
                                    v8 = v24;
                                    v5 = 1;
                                    goto lab_0x5b6c0;
                                }
                            }
                        }
                    }
                } else {
                    goto lab_0x5b77b;
                }
            } else {
                goto lab_0x5b6ee;
            }
        }
    } else {
        // 0x5b5ac
        function_2aec0(a4, "Identifier syntax error: expected \"<section>.<key>\"");
        v9 = a4;
        v6 = 0;
        goto lab_0x5b6c8;
    }
  lab_0x5b6ee:
    // 0x5b6ee
    function_2aec0(v10, "Section not found '");
    function_4a8c6(v10, a2);
    function_2537c(v10, &g5);
    v8 = v10;
    v5 = 0;
    goto lab_0x5b6c0;
  lab_0x5b6c8:;
    int64_t v29 = function_29c46((int64_t)&v4); // 0x5b6cd
    if (v1 == __readfsqword(40)) {
        // 0x5b7ab
        return v29 & -256 | v6;
    }
    // 0x5b6e9
    __stack_chk_fail();
    v10 = v9;
    goto lab_0x5b6ee;
  lab_0x5b6c0:
    // 0x5b6c0
    function_729ce(&v3);
    v9 = v8;
    v6 = v5;
    goto lab_0x5b6c8;
  lab_0x5b77b:
    // 0x5b77b
    function_2aec0(v11, "Key not found '");
    function_4a8c6(v11, a2);
    function_2537c(v11, &g5);
    v8 = v11;
    v5 = v12 % 256;
    goto lab_0x5b6c0;
  lab_0x5b76f:
    // 0x5b76f
    function_5425f0("map::at");
    v11 = v7;
    goto lab_0x5b77b;
}

// Address range: 0x495020 - 0x49526d
int64_t function_495020(int64_t a1, int64_t a2, int64_t a3, int64_t str, int64_t a5, int64_t a6, int64_t a7, uint64_t a8) {
    // 0x495020
    int64_t v1; // bp-280, 0x495020
    function_4c1690(&v1);
    int64_t v2 = function_4c14d0(a1 & 0xffffffff); // 0x49505c
    if (v2 == 0) {
        // 0x4950fa
        return 0xffff9400;
    }
    int64_t v3 = function_4c1d00(v2) % 256; // 0x49507e
    int32_t len = strlen((char *)str); // 0x495081
    int64_t v4 = len; // 0x495081
    int64_t v5 = v3 + v4; // 0x495086
    if (v5 + a6 >= 129) {
        // 0x4950fa
        return 0xffff8f00;
    }
    // 0x495099
    int64_t v6; // bp-184, 0x495020
    int64_t v7 = (int64_t)&v6; // 0x495099
    int64_t v8 = v3 + v7; // 0x4950b0
    memcpy((int64_t *)v8, (int64_t *)str, len);
    memcpy((int64_t *)(v5 + v7), (int64_t *)a5, (int32_t)a6);
    int64_t v9 = function_4c1770(&v1, v2, 1); // 0x4950ea
    int64_t result = v9 & 0xffffffff; // 0x4950f1
    if ((int32_t)v9 != 0) {
        // 0x4950fa
        return result;
    }
    int64_t v10 = v4 + a6; // 0x49511e
    function_4c19e0(&v1, a2, a3, v4);
    function_4c1af0(&v1, v8, v10);
    function_4c1b30(&v1, &v6);
    int64_t v11; // 0x495020
    int64_t v12; // bp-248, 0x495020
    if (a8 == 0) {
        // 0x495217
        v11 = (int64_t)&v12;
    } else {
        int64_t v13 = (int64_t)&v12; // 0x49515e
        int64_t v14 = v3; // 0x49516b
        int64_t v15 = a7;
        function_4c1bc0(&v1);
        function_4c1af0(&v1, v7, v10 + v3);
        function_4c1b30(&v1, &v12);
        function_4c1bc0(&v1);
        function_4c1af0(&v1, v7, v3);
        function_4c1b30(&v1, &v6);
        int64_t v16 = v3; // 0x4951d5
        if (v14 > a8) {
            // 0x4951d7
            v16 = a8 % v3;
        }
        int64_t v17 = v16;
        int64_t v18; // 0x495020
        int64_t v19; // 0x4951fa
        if (v17 != 0) {
            v18 = 0;
            *(char *)(v18 + v15) = *(char *)(v18 + v13);
            v19 = v18 + 1;
            while (v19 != v17) {
                // 0x4951f0
                v18 = v19;
                *(char *)(v18 + v15) = *(char *)(v18 + v13);
                v19 = v18 + 1;
            }
        }
        // 0x495203
        v11 = v13;
        while (v14 < a8) {
            // 0x49520f
            v14 += v3;
            v15 += v3;
            function_4c1bc0(&v1);
            function_4c1af0(&v1, v7, v10 + v3);
            function_4c1b30(&v1, &v12);
            function_4c1bc0(&v1);
            function_4c1af0(&v1, v7, v3);
            function_4c1b30(&v1, &v6);
            v16 = v3;
            if (v14 > a8) {
                // 0x4951d7
                v16 = a8 % v3;
            }
            // 0x4951df
            v17 = v16;
            if (v17 != 0) {
                v18 = 0;
                *(char *)(v18 + v15) = *(char *)(v18 + v13);
                v19 = v18 + 1;
                while (v19 != v17) {
                    // 0x4951f0
                    v18 = v19;
                    *(char *)(v18 + v15) = *(char *)(v18 + v13);
                    v19 = v18 + 1;
                }
            }
            // 0x495203
            v11 = v13;
        }
    }
    // 0x49521c
    function_4c16b0(&v1);
    int64_t v20 = v7; // 0x49522e
    *(char *)v20 = 0;
    v20++;
    int64_t v21; // bp-56, 0x495020
    while (v20 != (int64_t)&v21) {
        // 0x495230
        *(char *)v20 = 0;
        v20++;
    }
    *(char *)v11 = 0;
    int64_t v22 = v11 + 1; // 0x495254
    int64_t v23 = v22; // 0x49525b
    while (v22 != v7) {
        // 0x495250
        *(char *)v23 = 0;
        v22 = v23 + 1;
        v23 = v22;
    }
    // 0x4950fa
    return result;
}

// Address range: 0x4a03f0 - 0x4a062a
int64_t function_4a03f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t v1 = *(int32_t *)(a1 + 24); // 0x4a0418
    int64_t v2 = v1 == 0 ? 0 : 2; // 0x4a0432
    uint64_t v3 = v2 + a2; // 0x4a0435
    if (v3 > (int64_t)"le") {
        // 0x4a05c0
        function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_cli.c", &g17, "buffer too small for encrypted pms");
        // 0x4a0535
        return 0xffff9600;
    }
    int64_t * v4 = (int64_t *)(a1 + 96); // 0x4a041c
    int64_t v5 = a4 + (int64_t)&g16 + *v4; // 0x4a0420
    int64_t v6 = v5 + 8; // 0x4a042e
    char v7 = *(char *)(a1 + 369); // 0x4a0457
    unsigned char v8 = *(char *)(a1 + 368); // 0x4a045e
    int64_t v9 = v8; // 0x4a045e
    function_498d10(v8, v7, (int32_t)(*(char *)(a1 + 372) / 2 % 2), v6, v5);
    int64_t result = v9; // 0x4a049d
    int64_t v10 = (int64_t)&g18; // 0x4a049d
    int64_t v11 = (int64_t)"f_rng"; // 0x4a049d
    int64_t v12 = v9; // 0x4a049d
    if (v8 == 0) {
        // 0x4a04a3
        *(int64_t *)(*v4 + (int64_t)&g15) = 48;
        int64_t * v13 = (int64_t *)(a1 + 88); // 0x4a04b2
        int64_t v14 = *(int64_t *)(*v13 + 104); // 0x4a04b6
        if (v14 == 0) {
            // 0x4a0535
            return 0;
        }
        // 0x4a04c3
        if ((int32_t)function_4c4450(v14 + 328, 1, 46, &g18, "f_rng", v9) == 0) {
            // 0x4a05f0
            function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_cli.c", &g19, "certificate key type mismatch");
            // 0x4a0535
            return 0xffff9300;
        }
        int64_t * v15 = (int64_t *)(a1 + 328); // 0x4a04ed
        int64_t v16 = *v15; // 0x4a04ed
        int64_t v17 = *(int64_t *)(*v13 + 104); // 0x4a04fd
        int64_t v18 = *(int64_t *)(v14 + 384); // 0x4a0501
        uint64_t v19 = *(int64_t *)(*v4 + (int64_t)&g15); // 0x4a0505
        int64_t v20 = *(int64_t *)(v14 + 376); // 0x4a0514
        result = function_4c4660(v17 + 328, v6, v19, v16 + v3, a3, (int64_t)"le" - a2 - v2, v20, v18);
        if ((int32_t)result == 0) {
            // 0x4a052f
            if (v1 != 0) {
                // 0x4a0560
                *(char *)(*v15 + a2) = (char)(v19 / 256);
                int64_t v21 = *v15; // 0x4a0572
                *(char *)(a2 + 1 + v21) = (char)v21;
                *(int64_t *)a3 = v21 + 2;
            }
            // 0x4a0535
            return result;
        }
        // 0x4a0590
        v10 = (int64_t)&g20;
        v11 = (int64_t)"mbedtls_rsa_pkcs1_encrypt";
        v12 = result & 0xffffffff;
    }
    int64_t v22 = 0x100000000 * result >> 32; // 0x4a05ae
    function_49e8b0(a1, 1, "/home/richard/code/mbedtls/library/ssl_cli.c", (int64_t *)v10, (char *)v11, v12, v22);
    // 0x4a0535
    return v22 & 0xffffffff;
}

// Address range: 0x4c00c0 - 0x4c0305
int64_t function_4c00c0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4c00c0
    if ((int32_t)function_4af830(2) != 0) {
        int64_t v1 = *(int64_t *)(a1 + 280) >> 56; // bp-40, 0x4c0260
        return function_4af8d0(a3, a2, &v1);
    }
    char v2 = *(char *)(a2 + 15); // 0x4c00e3
    int64_t v3 = 8 * v2 & 120; // 0x4c0105
    int64_t v4 = a1 + 216; // 0x4c0105
    int64_t v5 = a1 + 88; // 0x4c010d
    int64_t v6 = *(int64_t *)(v4 + v3); // 0x4c0112
    int64_t v7 = a2 + 14; // 0x4c0112
    int64_t v8 = *(int64_t *)(v5 + v3); // 0x4c0112
    int64_t v9 = *(int64_t *)((8 * v8 & 120) + (int64_t)&g8); // 0x4c0174
    int64_t v10 = 8 * v2 / 16; // 0x4c017c
    uint64_t v11 = *(int64_t *)(v4 + v10) ^ v6 / 16; // 0x4c017c
    int64_t v12 = 0x10000000e; // 0x4c018c
    uint64_t result = *(int64_t *)(v5 + v10) ^ (v8 / 16 | 0x1000000000000000 * v6); // 0x4c0193
    uint64_t v13 = v11 ^ 0x1000000000000 * v9; // 0x4c019c
    while ((int32_t)v12 != -1) {
        char v14 = *(char *)v7; // 0x4c0118
        int64_t v15 = *(int64_t *)((8 * result & 120) + (int64_t)&g8); // 0x4c0142
        int64_t v16 = 8 * v14 & 120; // 0x4c0156
        v6 = *(int64_t *)(v4 + v16) ^ v13 / 16 ^ 0x1000000000000 * v15;
        v7--;
        v8 = *(int64_t *)(v5 + v16) ^ (result / 16 | 0x1000000000000000 * v11);
        v9 = *(int64_t *)((8 * v8 & 120) + (int64_t)&g8);
        v10 = 8 * v14 / 16;
        v11 = *(int64_t *)(v4 + v10) ^ v6 / 16;
        v12 = (v12 & 0xffffffff) + 0xffffffff;
        result = *(int64_t *)(v5 + v10) ^ (v8 / 16 | 0x1000000000000000 * v6);
        v13 = v11 ^ 0x1000000000000 * v9;
    }
    // 0x4c01a9
    *(char *)(a3 + 7) = (char)v11;
    *(char *)(a3 + 15) = (char)result;
    *(char *)a3 = (char)(v13 / 0x100000000000000);
    *(char *)(a3 + 1) = (char)(v13 / 0x1000000000000);
    *(char *)(a3 + 2) = (char)(v11 / 0x10000000000);
    *(char *)(a3 + 3) = (char)(v11 / 0x100000000);
    *(char *)(a3 + 4) = (char)(v11 / 0x1000000);
    *(char *)(a3 + 5) = (char)(v11 / 0x10000);
    *(char *)(a3 + 6) = (char)(v11 / 256);
    *(char *)(a3 + 8) = (char)(result / 0x100000000000000);
    *(char *)(a3 + 9) = (char)(result / 0x1000000000000);
    *(char *)(a3 + 10) = (char)(result / 0x10000000000);
    *(char *)(a3 + 11) = (char)(result / 0x100000000);
    *(char *)(a3 + 12) = (char)(result / 0x1000000);
    *(char *)(a3 + 13) = (char)(result / 0x10000);
    *(char *)(a3 + 14) = (char)(result / 256);
    return result;
}

// Address range: 0x4c5d50 - 0x4c5f9d
int64_t function_4c5d50(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result = a2; // bp-2176, 0x4c5d8a
    char v1; // bp-2104, 0x4c5d50
    __asm_rep_stosq_memset(&v1, 0, 256);
    if (a5 == 0) {
        // 0x4c5dc0
        return 0xffffc400;
    }
    // 0x4c5da5
    int64_t v2; // bp-2184, 0x4c5d50
    int64_t v3 = function_4afe70(&result, a3 + a2, &v2, 48); // 0x4c5db1
    if ((int32_t)v3 != 0) {
        // 0x4c5dc0
        return v3 + 0xffffc300 & 0xffffffff;
    }
    int64_t v4 = v2 + result; // 0x4c5e05
    int64_t v5; // bp-2136, 0x4c5d50
    int64_t v6; // bp-2168, 0x4c5d50
    int64_t v7 = function_4b01d0(&result, v4, &v6, &v5); // 0x4c5e1c
    if ((int32_t)v7 != 0) {
        // 0x4c5dc0
        return v7 + 0xffffc300 & 0xffffffff;
    }
    int64_t v8 = function_4afe70(&result, v4, &v2, 4); // 0x4c5e37
    if ((int32_t)v8 != 0) {
        // 0x4c5dc0
        return v8 + 0xffffc300 & 0xffffffff;
    }
    // 0x4c5e44
    if (v2 > (int64_t)L"\n2") {
        // 0x4c5dc0
        return 0xffffc180;
    }
    // 0x4c5e58
    int64_t v9; // bp-2188, 0x4c5d50
    int64_t v10; // bp-2192, 0x4c5d50
    if ((int32_t)function_4c35e0(&v6, &v9, &v10) == 0) {
        // 0x4c5f70
        return result;
    }
    int64_t str; // 0x4c5d50
    if (str == 10) {
        // 0x4c5ef0
        if (memcmp(&g10, (int64_t *)str, 10) != 0) {
            // 0x4c5dc0
            return 0xffffc680;
        }
        int64_t v11 = function_4d3c90(&v5, 0, a4, a5, result, v2, (int64_t *)&v1); // 0x4c5f2e
        if ((int32_t)v11 != 0) {
            // 0x4c5dc0
            return v11 & 0xffffffff;
        }
        // 0x4c5f3d
        if (v1 != 48) {
            // 0x4c5dc0
            return 0xffffc480;
        }
    } else {
        // 0x4c5e7f
        if (str != 9 || memcmp(&g11, (int64_t *)str, 9) != 0) {
            // 0x4c5dc0
            return 0xffffc680;
        }
        int64_t v12 = function_4d3f90(&v5, 0, a4, a5, result, v2, (int64_t *)&v1); // 0x4c5ec7
        int32_t v13 = v12; // 0x4c5ecc
        if (v13 != 0) {
            // 0x4c5ed2
            return v13 != -0x2e00 ? v12 & 0xffffffff : 0xffffc480;
        }
    }
    // 0x4c5dc0
    return function_4c5bd0(a1, (int64_t *)&v1, v2) & 0xffffffff;
}

// Address range: 0x4c9480 - 0x4c96b5
int64_t function_4c9480(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, uint64_t a7, int64_t a8, int64_t a9) {
    if ((int32_t)a4 == 1) {
        // 0x4c9680
        if (a2 == 0 | *(int32_t *)(a1 + 328) != 1) {
            // 0x4c955f
            return 0xffffbf80;
        }
    } else {
        // 0x4c94c7
        if (a2 == 0) {
            // 0x4c955f
            return 0xffffbf80;
        }
    }
    int64_t v1 = function_4c14d0((int64_t)*(int32_t *)(a1 + 332)); // 0x4c94d6
    if (v1 == 0) {
        // 0x4c955f
        return 0xffffbf80;
    }
    uint64_t v2 = *(int64_t *)(a1 + 8); // 0x4c94ea
    uint64_t v3 = function_4c1d00(v1) % 256; // 0x4c94f3
    int64_t v4 = 2 * v3; // 0x4c9504
    uint64_t v5 = a7 + 2 + v4; // 0x4c950b
    if (v5 <= a7 || v2 < v5) {
        // 0x4c955f
        return 0xffffbf80;
    }
    // 0x4c9522
    memset((void *)(int64_t)((int64_t *)a9), 0, (int32_t)v2);
    *(char *)a9 = 0;
    int64_t v6 = a9 + 1; // 0x4c9547
    if ((int32_t)v6 != 0) {
        // 0x4c955f
        return v6 - (int64_t)(int32_t)&g4 & 0xffffffff;
    }
    int64_t v7 = v3 + v6; // 0x4c95a2
    function_4c18b0(v1, a5, a6, v7);
    int64_t v8 = -2 - a7 + v2 + v3 - v4 + (0x100000000 * v7 >> 32); // 0x4c95d8
    *(char *)v8 = 1;
    memcpy((int64_t *)(v8 + 1), (int64_t *)a8, (int32_t)a7);
    int64_t v9; // bp-88, 0x4c9480
    function_4c1690(&v9);
    int64_t v10 = function_4c1770(&v9, v1, 0); // 0x4c95fb
    if ((int32_t)v10 != 0) {
        // 0x4c96a0
        function_4c16b0(&v9);
        // 0x4c955f
        return v10 & 0xffffffff;
    }
    int64_t v11 = 0x100000000 * a4 >> 32; // 0x4c94b3
    int64_t v12 = v2 + -1 - v3; // 0x4c9619
    function_4c8790(v7, v12, v6, v3, &v9);
    function_4c8790(v6, v3, v7, v12, &v9);
    function_4c16b0(&v9);
    if ((int32_t)v11 != 0) {
        // 0x4c96b8
        return v11 & 0xffffffff;
    }
    // 0x4c955f
    return function_4c8fa0(a1, a9);
}

// Address range: 0x4cf560 - 0x4cf79c
int64_t function_4cf560(int64_t a1, uint64_t a2, int64_t a3, int64_t a4, uint64_t a5) {
    int64_t v1 = 0; // 0x4cf564
    int64_t v2 = 0; // 0x4cf564
    int64_t result; // 0x4cf560
    if (a5 == 0) {
        // 0x4cf755
        return result;
    }
    int64_t v3 = 0; // 0x4cf564
    int64_t v4; // 0x4cf560
    char v5; // 0x4cf560
    int64_t v6; // 0x4cf560
    int64_t v7; // 0x4cf560
    int64_t v8; // 0x4cf560
    int64_t v9; // 0x4cf560
    int64_t v10; // 0x4cf560
    while (true) {
      lab_0x4cf60b:;
        int64_t v11 = v3;
        v9 = v2;
        v10 = v1;
        int64_t v12 = v11; // 0x4cf613
        int64_t v13 = 0; // 0x4cf613
        int64_t v14 = v11; // 0x4cf613
        if (*(char *)(v11 + a4) == 32) {
            int64_t v15 = v14 + 1; // 0x4cf620
            while (v15 < a5) {
                int64_t v16 = v15 + a4;
                char v17 = *(char *)v16; // 0x4cf633
                v14 = v15;
                if (v17 != 32) {
                    // 0x4cf639
                    v5 = v17;
                    v4 = v16;
                    v7 = v15;
                    v6 = v15 - v11 & 0xffffffff;
                    v8 = v15;
                    if (v15 != a5) {
                        goto lab_0x4cf599;
                    } else {
                        goto lab_0x4cf642;
                    }
                }
                v15 = v14 + 1;
            }
            // 0x4cf590
            v12 = v15;
            v13 = v15 - v11 & 0xffffffff;
        }
        int64_t v18 = v12;
        v8 = a5;
        if (v18 == a5) {
            // break -> 0x4cf642
            break;
        }
        int64_t v19 = v18 + a4;
        v5 = *(char *)v19;
        v4 = v19;
        v7 = v18;
        v6 = v13;
        goto lab_0x4cf599;
    }
    goto lab_0x4cf642;
  lab_0x4cf690:;
    // 0x4cf690
    int64_t v34; // 0x4cf560
    int64_t v47 = v34 + 1; // 0x4cf690
    int64_t v48 = v47; // 0x4cf697
    int64_t v36; // 0x4cf560
    int64_t v49 = v36; // 0x4cf697
    int64_t v37; // 0x4cf560
    int64_t v50 = v37; // 0x4cf697
    int64_t v38; // 0x4cf560
    int64_t v51 = v38; // 0x4cf697
    int64_t v39; // 0x4cf560
    int64_t v52 = v39; // 0x4cf697
    int64_t v46 = v36; // 0x4cf697
    int64_t v24; // 0x4cf678
    if (v47 == v24) {
        // break -> 0x4cf729
        goto lab_0x4cf729_2;
    }
    goto lab_0x4cf69d;
  lab_0x4cf69d:;
    int64_t v25 = v48; // 0x4cf560
    int64_t v26 = v49; // 0x4cf560
    int64_t v27 = v50; // 0x4cf560
    int64_t v28 = v51; // 0x4cf560
    int64_t v29 = v52; // 0x4cf560
    goto lab_0x4cf69d_2;
  lab_0x4cf719:;
    int64_t v53 = v34 + 1; // 0x4cf719
    v48 = v53;
    int64_t v45; // 0x4cf560
    v49 = v45;
    int64_t v43; // 0x4cf6e0
    v50 = v43;
    v51 = 0;
    int64_t v42; // 0x4cf6cd
    v52 = v42;
    v46 = v45;
    if (v53 == v24) {
        // break -> 0x4cf729
        goto lab_0x4cf729_2;
    }
    goto lab_0x4cf69d;
  lab_0x4cf599:;
    int64_t v54 = v6;
    char v55 = v5; // 0x4cf59c
    int64_t v56; // 0x4cf560
    int64_t v57; // 0x4cf560
    int64_t v58; // 0x4cf560
    int64_t result2; // 0x4cf560
    if (a5 - v7 > 1 == v55 == 13) {
        // 0x4cf738
        v58 = v10;
        v57 = v9;
        if (*(char *)(v4 + 1) == 10) {
            goto lab_0x4cf602;
        } else {
            // 0x4cf747
            v56 = v9;
            if ((int32_t)v54 != 0) {
                // 0x4cf755
                return 0xffffffd4;
            }
            goto lab_0x4cf5d6;
        }
    } else {
        // 0x4cf5b4
        v58 = v10;
        v57 = v9;
        if (v55 == 10) {
            goto lab_0x4cf602;
        } else {
            // 0x4cf5ba
            if ((int32_t)v54 != 0) {
                // 0x4cf755
                result2 = result;
                return result2;
            }
            if (v55 == 61) {
                int64_t v59 = v9 + 1; // 0x4cf760
                v56 = v59 & 0xffffffff;
                if ((int32_t)v59 >= 3) {
                    // 0x4cf755
                    return 0xffffffd4;
                }
            } else {
                // 0x4cf5cd
                v56 = v9;
                if (v55 < 0) {
                    // 0x4cf755
                    return 0xffffffd4;
                }
            }
            goto lab_0x4cf5d6;
        }
    }
  lab_0x4cf602:;
    int64_t v60 = v57;
    int64_t v61 = v58;
    int64_t v62 = v7 + 1;
    v1 = v61;
    v2 = v60;
    v3 = v62;
    int64_t v20; // 0x4cf560
    int64_t v22; // 0x4cf560
    int64_t v21; // 0x4cf560
    if (v62 >= a5) {
        // 0x4cf76e
        v20 = v62;
        v21 = v61;
        v22 = v60;
        if (v61 != 0) {
            goto lab_0x4cf64b;
        } else {
            goto lab_0x4cf77a;
        }
    }
    goto lab_0x4cf60b;
  lab_0x4cf5d6:;
    unsigned char v63 = *(char *)((int64_t)v55 + (int64_t)&g12); // 0x4cf5dd
    if (v63 == 127) {
        // 0x4cf755
        return 0xffffffd4;
    }
    int64_t v64 = v56;
    if (v63 < 64) {
        // 0x4cf5f2
        if ((int32_t)v64 != 0) {
            // 0x4cf755
            return 0xffffffd4;
        }
    }
    // 0x4cf5fa
    v58 = v10 + 1;
    v57 = v64;
    goto lab_0x4cf602;
  lab_0x4cf642:
    // 0x4cf642
    v20 = v8;
    v21 = v10;
    v22 = v9;
    if (v10 == 0) {
      lab_0x4cf77a:
        // 0x4cf77a
        *(int64_t *)a3 = 0;
        return 0;
    }
    goto lab_0x4cf64b;
  lab_0x4cf64b:;
    uint64_t v23 = (6 * v21 + 7) / 8 - v22; // 0x4cf658
    if (a1 == 0 || v23 > a2) {
        // 0x4cf792
        *(int64_t *)a3 = v23;
        // 0x4cf755
        return 0xffffffd6;
    }
    // 0x4cf66d
    if (v20 == 0) {
        // 0x4cf72c
        *(int64_t *)a3 = 0;
        return 0;
    }
    // 0x4cf678
    v24 = v20 + a4;
    v25 = a4;
    v26 = a1;
    v27 = 0;
    v28 = 0;
    v29 = 3;
    while (true) {
      lab_0x4cf69d_2:;
        int64_t v30 = v29;
        int64_t v31 = v28;
        int64_t v32 = v27;
        int64_t v33 = v26;
        v34 = v25;
        unsigned char v35 = *(char *)v34; // 0x4cf69d
        v36 = v33;
        v37 = v32;
        v38 = v31;
        v39 = v30;
        switch (v35) {
            case 10: {
                goto lab_0x4cf690;
            }
            case 13: {
                goto lab_0x4cf690;
            }
            case 32: {
                goto lab_0x4cf690;
            }
            default: {
                unsigned char v40 = *(char *)((int64_t)v35 + (int64_t)&g12); // 0x4cf6b9
                int64_t v41 = v30 - ((int64_t)(v40 == 64) | (int64_t)(((int32_t)&g12 ^ (int32_t)&g12) & -256)); // 0x4cf6cd
                v42 = v41 & 0xffffffff;
                v43 = 64 * v32 & 0xffffffc0 | (int64_t)(v40 % 64);
                v36 = v33;
                v37 = v43;
                v38 = v31 + 1;
                v39 = v42;
                if (v31 != 3) {
                    goto lab_0x4cf690;
                } else {
                    int32_t v44 = v41; // 0x4cf6e9
                    v45 = v33;
                    if (v44 == 0) {
                        goto lab_0x4cf719;
                    } else {
                        // 0x4cf6ee
                        *(char *)v33 = (char)(v32 / 1024);
                        if (v44 == 1) {
                            // 0x4cf755
                            result2 = result;
                            return result2;
                        }
                        // 0x4cf701
                        *(char *)(v33 + 1) = (char)(v32 / 4);
                        if (v44 == 2) {
                            // 0x4cf786
                            v36 = v33 + 2;
                            v37 = v43;
                            v38 = 0;
                            v39 = v42;
                            goto lab_0x4cf690;
                        } else {
                            // 0x4cf711
                            *(char *)(v33 + 2) = (char)v43;
                            v45 = v33 + 3;
                            goto lab_0x4cf719;
                        }
                    }
                }
            }
        }
    }
  lab_0x4cf729_2:
    // 0x4cf72c
    *(int64_t *)a3 = v46 - a1;
    return 0;
}

// Address range: 0x4cf79e - 0x4cf79f
int64_t function_4cf79e(void) {
    // 0x4cf79e
    int64_t result; // 0x4cf79e
    return result;
}

// Address range: 0x4d09e0 - 0x4d0c16
int64_t function_4d09e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a1 + 20; // 0x4d09e9
    unsigned char v2 = *(char *)(a3 + 4); // 0x4d09f5
    unsigned char v3 = *(char *)(a3 + 5); // 0x4d09f9
    unsigned char v4 = *(char *)(a3 + 8); // 0x4d09fd
    unsigned char v5 = *(char *)(a3 + 12); // 0x4d0a02
    unsigned char v6 = *(char *)(a3 + 1); // 0x4d0a06
    int64_t v7; // 0x4d09e0
    int32_t v8 = v7;
    unsigned char v9 = *(char *)(a3 + 7); // 0x4d0a16
    unsigned char v10 = *(char *)(a3 + 6); // 0x4d0a27
    unsigned char v11 = *(char *)(a3 + 9); // 0x4d0a30
    int32_t v12 = *(int32_t *)(a1 + 8); // 0x4d0a34
    int32_t v13 = (0x10000 * (int32_t)v3 | 0x1000000 * (int32_t)v2 | (int32_t)v9 | 256 * (int32_t)v10) ^ v12; // 0x4d0a34
    unsigned char v14 = *(char *)(a3 + 11); // 0x4d0a41
    unsigned char v15 = *(char *)(a3 + 10); // 0x4d0a48
    unsigned char v16 = *(char *)(a3 + 13); // 0x4d0a52
    int32_t v17 = *(int32_t *)(a1 + 12); // 0x4d0a56
    int32_t v18 = (0x10000 * (int32_t)v11 | 0x1000000 * (int32_t)v4 | (int32_t)v14 | 256 * (int32_t)v15) ^ v17; // 0x4d0a56
    int32_t v19 = v18; // bp-64, 0x4d0a5d
    unsigned char v20 = *(char *)(a3 + 15); // 0x4d0a64
    unsigned char v21 = *(char *)(a3 + 14); // 0x4d0a6a
    int64_t v22; // 0x4d09e0
    unsigned char v23 = *(char *)&v22; // 0x4d0a73
    int32_t v24 = *(int32_t *)(a1 + 16); // 0x4d0a76
    int32_t v25 = (0x10000 * (int32_t)v16 | 0x1000000 * (int32_t)v5 | (int32_t)v20 | 256 * (int32_t)v21) ^ v24; // 0x4d0a76
    unsigned char v26 = *(char *)(a3 + 3); // 0x4d0a83
    unsigned char v27 = *(char *)(a3 + 2); // 0x4d0a88
    int32_t v28 = *(int32_t *)(a1 + 4); // 0x4d0a94
    int32_t v29 = (0x1000000 * (int32_t)v23 | 0x10000 * (int32_t)v6 | (int32_t)v26 | 256 * (int32_t)v27) ^ v28; // 0x4d0a94
    int32_t v30 = v29; // bp-72, 0x4d0a9a
    v30 = v29;
    v19 = v18;
    int64_t v31 = v1; // 0x4d0a9d
    if (v8 != 0) {
        // 0x4d0aa3
        function_4cfef0((int64_t *)&v30, v1, &v19, v29, v18, v26);
        function_4cfef0((int64_t *)&v19, a1 + 28, &v30, v29, v18, v26);
        function_4cfef0((int64_t *)&v30, a1 + 36, &v19, v29, v18, v26);
        function_4cfef0((int64_t *)&v19, a1 + 44, &v30, v29, v18, v26);
        function_4cfef0((int64_t *)&v30, a1 + 52, &v19, v29, v18, v26);
        function_4cfef0((int64_t *)&v19, a1 + 60, &v30, v29, v18, v26);
        if (v8 != 1) {
            int32_t v32 = v30 & *(int32_t *)(a1 + 68); // 0x4d0be6
            int32_t v33 = *(int32_t *)(a1 + 72); // 0x4d0bf2
            v30 ^= ((2 * v32 | (int32_t)(v32 < 0)) ^ v13 | v33);
            int32_t v34 = (*(int32_t *)(a1 + 80) | v25) ^ v19; // 0x4d0c03
            v19 = v34;
            int32_t v35 = *(int32_t *)(a1 + 76) & v34; // 0x4d0c0b
            return (2 * v35 | (int32_t)(v35 < 0)) ^ v25;
        }
        // 0x4d0b14
        v31 = a1 + 68 + (64 * v7 + 0x3fffffffc0 & 0x3fffffffc0);
    }
    uint32_t v36 = *(int32_t *)v31 ^ v19; // 0x4d0b31
    v19 = v36;
    uint32_t v37 = *(int32_t *)(v31 + 4) ^ v25; // 0x4d0b3a
    uint32_t v38 = *(int32_t *)(v31 + 12) ^ v13; // 0x4d0b48
    uint32_t v39 = *(int32_t *)(v31 + 8) ^ v30; // 0x4d0b4c
    *(char *)a4 = (char)(v36 / 0x1000000);
    *(char *)(a4 + 3) = (char)v36;
    *(char *)(a4 + 7) = (char)v37;
    *(char *)(a4 + 1) = (char)(v36 / 0x10000);
    *(char *)(a4 + 15) = (char)v38;
    *(char *)(a4 + 2) = (char)(v36 / 256);
    *(char *)(a4 + 11) = (char)v39;
    *(char *)(a4 + 4) = (char)(v37 / 0x1000000);
    *(char *)(a4 + 5) = (char)(v37 / 0x10000);
    *(char *)(a4 + 6) = (char)(v37 / 256);
    *(char *)(a4 + 8) = (char)(v39 / 0x1000000);
    *(char *)(a4 + 9) = (char)(v39 / 0x10000);
    *(char *)(a4 + 10) = (char)(v39 / 256);
    *(char *)(a4 + 12) = (char)(v38 / 0x1000000);
    *(char *)(a4 + 13) = (char)(v38 / 0x10000);
    *(char *)(a4 + 14) = (char)(v38 / 256);
    return 0;
}

// Address range: 0x4e9d80 - 0x4e9fc7
int64_t function_4e9d80(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4e9d80
    *(int32_t *)(a3 + 32) = 2;
    *(int32_t *)(a3 + 40) = 1;
    char v1 = *(char *)(a2 + 23); // 0x4e9d98
    unsigned char v2 = *(char *)(a2 + 257); // 0x4e9d9c
    char v3; // 0x4e9d80
    char v4; // 0x4e9d80
    int32_t * v5; // 0x4e9dba
    char * v6; // 0x4e9d80
    char v7; // 0x4e9dbd
    int32_t * v8; // 0x4e9e5f
    char * v9; // 0x4e9d80
    char v10; // 0x4e9e62
    if (v1 == 32) {
        int64_t v11 = a3 + 48; // 0x4e9e5f
        v8 = (int32_t *)v11;
        *v8 = (int32_t)*(char *)(a1 + 24) + 37;
        v9 = (char *)(a2 + 255);
        v10 = *v9;
        if (v10 == 1) {
            // 0x4e9f90
            v3 = 8;
            if (v2 != 4) {
                // 0x4e9de6
                *(int32_t *)(a3 + 52) = 0;
                *(char *)(a3 + 56) = 0;
                goto lab_0x4e9df1;
            } else {
                goto lab_0x4e9e83;
            }
        } else {
            if (v10 != 2) {
                if (v2 == 5) {
                    // 0x4e9fb0
                    if ((int32_t)a2 != 0) {
                        // 0x4e9e01
                        return 5;
                    }
                    // 0x4e9fb6
                    *(int64_t *)v11 = 196;
                    *(char *)(a3 + 56) = 0;
                    goto lab_0x4e9df1;
                } else {
                    // 0x4e9f10
                    v3 = 0;
                    if (v2 != 4) {
                        // 0x4e9ef3
                        *(int32_t *)(a3 + 52) = 0;
                        *(char *)(a3 + 56) = 0;
                        // 0x4e9e01
                        return 0x100000;
                    }
                    goto lab_0x4e9e83;
                }
            } else {
                // 0x4e9e7b
                v3 = 32;
                if (v2 != 4) {
                    // 0x4e9de6
                    *(int32_t *)(a3 + 52) = 0;
                    *(char *)(a3 + 56) = 0;
                    goto lab_0x4e9df1;
                } else {
                    goto lab_0x4e9e83;
                }
            }
        }
    } else {
        uint64_t v12 = (int64_t)v2; // 0x4e9d9c
        if (v1 != 64) {
            int64_t v13 = 4 * v12; // 0x4e9e21
            int32_t v14 = *(int32_t *)(v13 + (int64_t)&g13); // 0x4e9e21
            int128_t v15 = __asm_movd(*(int32_t *)(v13 + (int64_t)&g14)); // 0x4e9e24
            int128_t v16 = __asm_punpckldq(v15, __asm_movd(v14)); // 0x4e9e2f
            *(char *)(a3 + 56) = (char)(v14 != 0);
            int64_t v17 = a3 + 48;
            __asm_movq(*(int64_t *)v17, v16);
            if (*(char *)(a2 + 255) != 0) {
                goto lab_0x4e9df1;
            } else {
                // 0x4e9e47
                if (v2 != 6) {
                    // 0x4e9e01
                    return 0x100000;
                }
                // 0x4e9e4b
                *(int32_t *)v17 = 0;
                goto lab_0x4e9df1;
            }
        } else {
            // 0x4e9db3
            v5 = (int32_t *)(a3 + 48);
            *v5 = (int32_t)*(char *)(a1 + 24) + 53;
            v6 = (char *)(a2 + 255);
            v7 = *v6;
            if (v7 == 1) {
                // 0x4e9f20
                v4 = 8;
                if (v12 % 8 != 4) {
                    // 0x4e9de6
                    *(int32_t *)(a3 + 52) = 0;
                    *(char *)(a3 + 56) = 0;
                    goto lab_0x4e9df1;
                } else {
                    goto lab_0x4e9f30;
                }
            } else {
                if (v7 != 2) {
                    // 0x4e9ee0
                    if (v2 == 5) {
                        // 0x4e9e01
                        return 5;
                    }
                    // 0x4e9ee8
                    v4 = 0;
                    if (v12 % 8 != 4) {
                        // 0x4e9ef3
                        *(int32_t *)(a3 + 52) = 0;
                        *(char *)(a3 + 56) = 0;
                        // 0x4e9e01
                        return 0x100000;
                    }
                    goto lab_0x4e9f30;
                } else {
                    // 0x4e9dd6
                    v4 = 32;
                    if (v12 % 8 == 4) {
                        goto lab_0x4e9f30;
                    } else {
                        // 0x4e9de6
                        *(int32_t *)(a3 + 52) = 0;
                        *(char *)(a3 + 56) = 0;
                        goto lab_0x4e9df1;
                    }
                }
            }
        }
    }
  lab_0x4e9e83:;
    char v18 = *(char *)(a1 + 25); // 0x4e9e8a
    int64_t v19 = (int32_t)a4 == 0 ? 3 : a4 & 0xffffffff; // 0x4e9e8e
    int32_t v20 = function_20160(v19, v18, v10, (int32_t)v19); // 0x4e9e9d
    int32_t * v21 = (int32_t *)(a3 + 52); // 0x4e9e9d
    *v21 = v20;
    unsigned char v22 = *(char *)(a2 + 259) % 32;
    char * v23 = (char *)(a3 + 56); // 0x4e9eab
    *v23 = v22 == 0 ? 1 : (char)(1 << (int32_t)v22);
    if (v20 == 41) {
        // 0x4e9eb3
        *v21 = 0;
        *v23 = 0;
    }
    char v24 = v3; // 0x4e9ec2
    char * v25 = v9; // 0x4e9ec2
    if (*v8 == 42) {
        goto lab_0x4e9f7a;
    } else {
        goto lab_0x4e9ec8;
    }
  lab_0x4e9df1:
    // 0x4e9df1
    *(char *)(a3 + 64) = 1;
    *(int64_t *)(a3 + 72) = *(int64_t *)(a2 + 264);
    // 0x4e9e01
    return 0x100000;
  lab_0x4e9f7a:
    // 0x4e9f7a
    if (*v25 == 0) {
        // 0x4e9e4b
        *(int32_t *)(a3 + 48) = 0;
        goto lab_0x4e9df1;
    } else {
        goto lab_0x4e9df1;
    }
  lab_0x4e9ec8:
    // 0x4e9ec8
    if (v24 == 0) {
        // 0x4e9e01
        return 0x100000;
    }
    goto lab_0x4e9df1;
  lab_0x4e9f30:;
    char v26 = *(char *)(a1 + 25); // 0x4e9f37
    int64_t v27 = (int32_t)a4 == 0 ? 4 : a4 & 0xffffffff; // 0x4e9f3b
    int32_t v28 = function_20160(v27, v26, v7, (int32_t)v27); // 0x4e9f4a
    int32_t * v29 = (int32_t *)(a3 + 52); // 0x4e9f4a
    *v29 = v28;
    unsigned char v30 = *(char *)(a2 + 259) % 32;
    char * v31 = (char *)(a3 + 56); // 0x4e9f58
    *v31 = v30 == 0 ? 1 : (char)(1 << (int32_t)v30);
    if (v28 == 57) {
        // 0x4e9f60
        *v29 = 0;
        *v31 = 0;
    }
    // 0x4e9f6b
    v24 = v4;
    v25 = v6;
    if ((*v5 - 58 & -9) != 0) {
        goto lab_0x4e9ec8;
    } else {
        goto lab_0x4e9f7a;
    }
}

// Address range: 0x4fe020 - 0x4fe257
// From class:    __gnu_cxx::stdio_filebuf<wchar_t, std::char_traits<wchar_t> >
// Type:          virtual member function
int64_t function_4fe020(int64_t a1, int64_t a2, int64_t a3) {
    char * v1 = (char *)(a1 + 192); // 0x4fe037
    int64_t wstr; // 0x4fe020
    int64_t v2; // 0x4fe020
    int64_t v3; // 0x4fe020
    if (*v1 == 0) {
        char * v4 = (char *)(a1 + 170); // 0x4fe0a0
        if (*v4 != 0) {
            // 0x4fe118
            if ((int32_t)a1 == -1) {
                // 0x4fe103
                return 0;
            }
            int64_t v5 = *(int64_t *)(a1 + 152); // 0x4fe128
            *(int64_t *)(a1 + 40) = 0;
            *(int64_t *)(a1 + 32) = 0;
            *(int64_t *)(a1 + 48) = 0;
            *v4 = 0;
            *(int64_t *)(a1 + 8) = v5;
            *(int64_t *)(a1 + 16) = v5;
            *(int64_t *)(a1 + 24) = v5;
            v3 = a3;
            wstr = a2;
            v2 = 0;
        } else {
            // 0x4fe0a9
            v3 = a3;
            wstr = a2;
            v2 = 0;
        }
    } else {
        int64_t * v6 = (int64_t *)(a1 + 16); // 0x4fe046
        int64_t result = *v6; // 0x4fe046
        int64_t * v7 = (int64_t *)(a1 + 8); // 0x4fe04a
        int64_t v8 = *v7; // 0x4fe04a
        if (a3 > 0 == v8 == result) {
            // 0x4fe1f0
            *(int32_t *)a2 = *(int32_t *)result;
            *v6 = result + 4;
            if (*v1 != 0) {
                // 0x4fe103
                return result;
            }
            // 0x4fe20d
            v3 = a3 - 1;
            wstr = a2 + 4;
            v2 = 1;
        } else {
            int64_t * v9 = (int64_t *)(a1 + 176); // 0x4fe05c
            *v1 = 0;
            int64_t v10 = *v9 + 4 * (int64_t)(v8 != result); // 0x4fe07b
            *v7 = *(int64_t *)(a1 + 152);
            *v9 = v10;
            *v6 = v10;
            *(int64_t *)(a1 + 24) = *(int64_t *)(a1 + 184);
            v3 = a3;
            wstr = a2;
            v2 = 0;
        }
    }
    uint64_t v11 = *(int64_t *)(a1 + 160); // 0x4fe0b0
    int64_t result2 = v11 >= 2 ? v11 - 1 : 1; // 0x4fe0c5
    if (v3 <= result2) {
        // 0x4fe103
        return function_53fbe0(a1, wstr, v3) + v2;
    }
    int64_t v12 = *(int64_t *)(a1 + 200); // 0x4fe0ce
    if (v12 == 0) {
        // 0x4fe103
        return result2;
    }
    // 0x4fe0de
    if ((*(int32_t *)(a1 + 120) & 8) == 0 || (char)*(int64_t *)v12 == 0) {
        // 0x4fe103
        return function_53fbe0(a1, wstr, v3) + v2;
    }
    int64_t * v13 = (int64_t *)(a1 + 24); // 0x4fe178
    int64_t v14 = *v13; // 0x4fe178
    int64_t * v15 = (int64_t *)(a1 + 16); // 0x4fe17c
    int64_t wstr2 = *v15; // 0x4fe17c
    int64_t v16 = v3; // 0x4fe183
    int64_t v17 = wstr; // 0x4fe183
    int64_t v18 = v2; // 0x4fe183
    if (v14 != wstr2) {
        int64_t v19 = v14 - wstr2; // 0x4fe185
        int64_t n = v19 >> 2; // 0x4fe191
        wmemcpy((int32_t *)wstr, (int32_t *)wstr2, (int32_t)n);
        *v15 = *v15 + v19;
        v16 = v3 - n;
        v17 = v19 + wstr;
        v18 = n + v2;
    }
    int64_t v20 = a1 + 104; // 0x4fe1aa
    int64_t v21 = function_4f1770(v20, v17, v16); // 0x4fe1c5
    int64_t v22 = v21; // 0x4fe1ce
    int64_t v23 = v17; // 0x4fe1ce
    if (v21 == -1) {
        // 0x4fe103
        return -1;
    }
    int64_t v24 = v16;
    int64_t v25 = v18;
    int64_t v26; // 0x4fe020
    while (v22 != 0) {
        int64_t v27 = v25 + v22; // 0x4fe1b0
        int64_t v28 = v24 - v22; // 0x4fe1b3
        v26 = v27;
        if (v28 == 0) {
            goto lab_0x4fe1de;
        }
        // 0x4fe1b8
        v23 += 4 * v22;
        v22 = function_4f1770(v20, v23, v28);
        if (v22 == -1) {
            // 0x4fe103
            return -1;
        }
        v24 = v28;
        v25 = v27;
    }
    // 0x4fe1d9
    v26 = v25;
    int64_t result3; // 0x4fe020
    if (v24 != 0) {
        int64_t v29 = *(int64_t *)(a1 + 152); // 0x4fe220
        *(int64_t *)(a1 + 40) = 0;
        *(int64_t *)(a1 + 32) = 0;
        *(int64_t *)(a1 + 48) = 0;
        *(char *)(a1 + 169) = 0;
        *(int64_t *)(a1 + 8) = v29;
        *v15 = v29;
        *v13 = v29;
        result3 = v25;
    } else {
      lab_0x4fe1de:
        // 0x4fe1de
        *(char *)(a1 + 169) = 1;
        result3 = v26;
    }
    // 0x4fe103
    return result3;
}

// Address range: 0x501510 - 0x501749
// From class:    __gnu_cxx::stdio_filebuf<wchar_t, std::char_traits<wchar_t> >
// Type:          virtual member function
int64_t function_501510(int64_t a1, int64_t a2, int64_t a3) {
    // 0x501510
    __readfsqword(40);
    int64_t v1 = a1 + 120; // 0x501526
    if ((*(char *)v1 & 17) == 0) {
        // 0x50164d
        __readfsqword(40);
        return 0xffffffff;
    }
    // 0x501530
    if (*(char *)(a1 + 169) != 0) {
        char * v2 = (char *)(a1 + 192); // 0x50153e
        if (*v2 != 0) {
            int64_t * v3 = (int64_t *)(a1 + 8); // 0x5016e8
            int64_t * v4 = (int64_t *)(a1 + 16); // 0x5016ee
            int64_t * v5 = (int64_t *)(a1 + 176); // 0x5016f2
            *v2 = 0;
            *v3 = *(int64_t *)(a1 + 152);
            int64_t v6 = 4 * (int64_t)(*v4 != *v3) + *v5; // 0x50170e
            *v5 = v6;
            *v4 = v6;
            *(int64_t *)(a1 + 24) = *(int64_t *)(a1 + 184);
        }
        int64_t v7 = a1 + 140; // 0x50154b
        int64_t v8 = function_501260(a1, v7); // 0x501555
        if (function_501420(a1, 0x100000000 * v8 >> 32, 1, *(int64_t *)v7) == -1) {
            // 0x50164d
            __readfsqword(40);
            return 0xffffffff;
        }
    }
    int64_t result = a2 & 0xffffffff; // 0x50153a
    int64_t * v9 = (int64_t *)(a1 + 32); // 0x50157b
    uint64_t v10 = *v9; // 0x50157b
    int64_t * v11 = (int64_t *)(a1 + 40); // 0x50157f
    uint64_t v12 = *v11; // 0x50157f
    if (v10 < v12) {
        int32_t v13 = a2; // 0x501588
        int64_t v14 = v12; // 0x50158b
        if (v13 != -1) {
            // 0x50158d
            *(int32_t *)v12 = v13;
            v14 = v12 + 4;
            *v11 = v14;
        }
        // 0x501597
        if ((char)function_5010e0(a1, v10, (v14 - v10) / 4) == 0) {
            // 0x50164d
            __readfsqword(40);
            return 0xffffffff;
        }
        int64_t v15 = *(int64_t *)(a1 + 152); // 0x5015b1
        *(int64_t *)(a1 + 8) = v15;
        *(int64_t *)(a1 + 16) = v15;
        *(int64_t *)(a1 + 24) = v15;
        if ((*(int32_t *)v1 & 17) == 0) {
            goto lab_0x5016c8;
        } else {
            uint64_t v16 = *(int64_t *)(a1 + 160); // 0x5015d2
            if (v16 < 2) {
                goto lab_0x5016c8;
            } else {
                // 0x5015e3
                *v11 = v15;
                *v9 = v15;
                *(int64_t *)(a1 + 48) = v15 - 4 + 4 * v16;
                goto lab_0x5015f4;
            }
        }
      lab_0x5016c8:
        // 0x5016c8
        *v11 = 0;
        *v9 = 0;
        *(int64_t *)(a1 + 48) = 0;
        goto lab_0x5015f4;
      lab_0x5015f4:
        // 0x5015f4
        if (v13 != -1) {
            // 0x50164d
            __readfsqword(40);
            return result;
        }
        // 0x50164d
        __readfsqword(40);
        return 0;
    }
    uint64_t v17 = *(int64_t *)(a1 + 160); // 0x501600
    if (v17 < 2) {
        int64_t v18 = 0x100000000 * a2 >> 32; // bp-36, 0x501610
        if ((int32_t)a2 == -1) {
            // 0x501616
            *(char *)(a1 + 170) = 1;
            // 0x50164d
            __readfsqword(40);
            return 0;
        }
        int64_t result2 = function_5010e0(a1, (int64_t)&v18, 1); // 0x501635
        if ((char)result2 != 0) {
            // 0x501760
            return result2;
        }
        // 0x50164d
        __readfsqword(40);
        return 0xffffffff;
    }
    uint32_t v19 = *(int32_t *)v1; // 0x501670
    int64_t result3 = *(int64_t *)(a1 + 152); // 0x501673
    *(int64_t *)(a1 + 8) = result3;
    *(int64_t *)(a1 + 16) = result3;
    *(int64_t *)(a1 + 24) = result3;
    if ((v19 & 16) == 0) {
        if (v19 % 2 == 0) {
            // 0x501739
            *v11 = 0;
            *v9 = 0;
            return result3;
        }
    }
    // 0x50168f
    *v11 = result3;
    *v9 = result3;
    *(int64_t *)(a1 + 48) = 4 * v17 - 4 + result3;
    int32_t v20 = a2; // 0x5016a0
    *(char *)(a1 + 170) = 1;
    if (v20 == -1) {
        // 0x50164d
        __readfsqword(40);
        return 0;
    }
    int64_t v21 = *v11; // 0x5016b0
    *(int32_t *)v21 = v20;
    *v11 = v21 + 4;
    // 0x50164d
    __readfsqword(40);
    return result;
}

// Address range: 0x517200 - 0x517446
int64_t function_517200(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    int64_t v1 = a2; // bp-104, 0x51721c
    int64_t v2 = a4; // bp-120, 0x517235
    __readfsqword(40);
    int64_t result = function_50e0e0(); // 0x517264
    int32_t v3; // 0x517269
    switch (v3 & 74) {
        case 64: {
        }
        case 8: {
            // 0x5174b8
            return result;
        }
    }
    int64_t result2 = function_50f6f0(&v1, &v2); // 0x5172a4
    if ((char)result2 != 0) {
        // 0x5174b8
        return result2;
    }
    int64_t v4 = (int64_t)&v1; // 0x5172a0
    int64_t v5 = function_50f7d0(v4); // 0x5172b9
    uint32_t v6 = *(int32_t *)(result + 224); // 0x5172c0
    int64_t result3 = v6; // 0x5172c0
    char * v7 = (char *)(result + 32); // 0x5172c6
    int32_t v8 = v5; // 0x5172ca
    if (v6 != v8) {
        // 0x5172d3
        if (*(int32_t *)(result + 228) != v8) {
            // 0x5174b8
            return result3;
        }
    }
    // 0x5172df
    if (*v7 != 0 || *(int32_t *)(result + 72) == v8) {
        // 0x5174b8
        return result3;
    }
    int64_t result4 = function_50f6f0((int64_t *)function_50d7a0(v4), &v2); // 0x517301
    if ((char)result4 == 0) {
        // 0x5174b8
        return result4;
    }
    // 0x517312
    if (*v7 != 0) {
        // 0x5174b8
        return (int64_t)&g22;
    }
    // 0x517357
    if (*(char *)(result + 328) == 0) {
        // 0x517b2e
        return result4 % 256;
    }
    // 0x5174b8
    return 0xccccccccccccccc;
}

// Address range: 0x525e70 - 0x5260be
// From class:    *NSt13__facet_shims12_GLOBAL__N_113time_get_shimIcEE
// Type:          virtual member function
int64_t function_525e70(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int32_t a9, int32_t a10) {
    // 0x525e70
    __readfsqword(40);
    int64_t v1 = function_554b00(); // 0x525ed3
    int32_t * v2 = (int32_t *)a7; // 0x525ed8
    *v2 = 0;
    int64_t v3; // 0x525e70
    if (*(char *)(v1 + 56) == 0) {
        // 0x526020
        function_54d560(v1);
        int64_t v4 = *(int64_t *)(*(int64_t *)v1 + 48); // 0x526049
        v3 = v4 == g21 ? 37 : v1 & 0xffffffff;
    } else {
        // 0x525ef2
        v3 = (int64_t)*(char *)(v1 + 94);
    }
    char v5 = v3; // bp-68, 0x525ef9
    int64_t result2 = function_524720(a1, a2, a3, a4, a5, a6, a7, a8, &v5); // 0x525f45
    if (result2 == 0) {
        goto lab_0x5260a0;
    } else {
        if ((int32_t)a3 == -1) {
            // 0x525fd8
            if (*(int64_t *)(result2 + 16) >= *(int64_t *)(result2 + 24)) {
                // 0x526088
                if ((int32_t)*(int64_t *)result2 == -1) {
                    goto lab_0x5260a0;
                } else {
                    goto lab_0x525f71;
                }
            } else {
                goto lab_0x525f71;
            }
        } else {
            goto lab_0x525f71;
        }
    }
  lab_0x5260a0:;
    int64_t result = 0; // 0x5260a6
    if (a4 != 0) {
        // 0x5260ac
        if ((int32_t)a5 == -1) {
            // 0x5260b6
            return *(int64_t *)(a4 + 24);
        }
        // 0x525f7f
        __readfsqword(40);
        return 0;
    }
    goto lab_0x525f7c;
  lab_0x525f7c:
    // 0x525f7c
    *v2 = *v2 | 2;
    // 0x525f7f
    __readfsqword(40);
    return result;
  lab_0x525f71:
    // 0x525f71
    if (a4 == 0) {
        // 0x525f7f
        __readfsqword(40);
        return result2;
    }
    // 0x525f76
    result = result2;
    if ((int32_t)a5 == -1) {
        uint64_t v6 = *(int64_t *)(a4 + 24); // 0x525ff7
        result = result2;
        if ((int32_t)a3 == -1 == v6 <= *(int64_t *)(a4 + 16)) {
            // 0x525f7f
            __readfsqword(40);
            return result2;
        }
    }
    goto lab_0x525f7c;
}

// Address range: 0x56ba40 - 0x56bc81
// From class:    std::codecvt_byname<wchar_t, char, __mbstate_t>
// Type:          virtual member function
int64_t function_56ba40(int64_t a1, uint64_t ps, uint64_t a3, uint64_t a4, int64_t wstr3, int64_t a6, uint64_t a7, int64_t a8) {
    // 0x56ba40
    __readfsqword(40);
    int64_t ps2 = ps; // bp-96, 0x56ba8c
    struct __locale_struct * v1 = __uselocale((struct __locale_struct *)*(int64_t *)(a1 + 16)); // 0x56ba91
    int64_t * v2 = (int64_t *)wstr3; // 0x56baa5
    *v2 = a3;
    int64_t * wstr5 = (int64_t *)a8; // 0x56bab5
    *wstr5 = a6;
    if (a3 >= a4) {
        // 0x56bb60
        __uselocale(v1);
        __readfsqword(40);
        return 0;
    }
    int64_t * v3 = (int64_t *)ps;
    int64_t v4 = a6; // 0x56ba40
    int64_t v5 = a3;
    int64_t v6 = 0;
    int64_t v7; // 0x56ba40
    int64_t v8; // 0x56ba40
    int64_t v9; // 0x56ba40
    while (true) {
      lab_0x56bac7:;
        uint64_t wstr2 = v4; // 0x56bac7
        v9 = v6;
        if (wstr2 < a7 != (v6 == 0)) {
            // break (via goto) -> 0x56bb60
            goto lab_0x56bb60_3;
        }
        int64_t wstr = v5;
        int64_t n = (a4 - wstr) / 4; // 0x56bae8
        int32_t * v10 = wmemchr((int32_t *)wstr, 0, (int32_t)n); // 0x56baf4
        int64_t v11 = (int64_t)v10; // 0x56baf4
        int64_t nwc = v10 == NULL ? n : (v11 - wstr) / 4;
        int32_t v12 = wcsnrtombs((char *)wstr2, (int32_t **)wstr3, (int32_t)nwc, (int32_t)(a7 - wstr2), (struct _TYPEDEF___mbstate_t *)ps); // 0x56bb29
        while (v12 != -1) {
            uint64_t v13 = v10 == NULL ? a4 : v11;
            int64_t v14 = *wstr5 + (int64_t)v12; // 0x56bb3c
            if (ps == 0 || v13 <= ps) {
                // 0x56bb98
                *v2 = v13;
                *wstr5 = v14;
                v8 = 0;
                v7 = v13;
                if (v13 >= a4) {
                    goto lab_0x56babe;
                } else {
                    // 0x56bba5
                    ps2 = wstr3;
                    int32_t wc = *(int32_t *)v13; // 0x56bbbc
                    int64_t wstr4; // bp-88, 0x56ba40
                    int32_t v15 = wcrtomb((char *)&wstr4, wc, (struct _TYPEDEF___mbstate_t *)&ps2); // 0x56bbbf
                    uint64_t v16 = (int64_t)v15; // 0x56bbbf
                    int64_t v17 = *wstr5; // 0x56bbc4
                    v9 = 1;
                    if (a7 - v17 >= v16) {
                        // 0x56bc50
                        memcpy((int64_t *)v17, &wstr4, v15);
                        *v3 = ps2;
                        *wstr5 = *wstr5 + v16;
                        *v2 = ps + 4;
                        return ps;
                    }
                    goto lab_0x56bb60_3;
                }
            }
            // 0x56bb4a
            *wstr5 = v14;
            int64_t v18 = 1; // 0x56bb56
            v9 = 1;
            if (a4 <= ps) {
                // break (via goto) -> 0x56bb60
                goto lab_0x56bb60_3;
            }
            wstr2 = v14;
            v9 = v18;
            if (wstr2 < a7 != (v18 == 0)) {
                // break (via goto) -> 0x56bb60
                goto lab_0x56bb60_3;
            }
            // 0x56badd
            wstr = ps;
            n = (a4 - wstr) / 4;
            v10 = wmemchr((int32_t *)wstr, 0, (int32_t)n);
            v11 = (int64_t)v10;
            nwc = v10 == NULL ? n : (v11 - wstr) / 4;
            v12 = wcsnrtombs((char *)wstr2, (int32_t **)wstr3, (int32_t)nwc, (int32_t)(a7 - wstr2), (struct _TYPEDEF___mbstate_t *)ps);
        }
        if (wstr < ps) {
            int64_t v19 = wstr; // 0x56bc0a
            int32_t wc2 = *(int32_t *)v19; // 0x56bc10
            v19 += 4;
            int32_t v20 = wcrtomb((char *)*wstr5, wc2, (struct _TYPEDEF___mbstate_t *)&ps2); // 0x56bc1b
            int64_t wstr6 = *wstr5 + (int64_t)v20; // 0x56bc20
            *wstr5 = wstr6;
            while (v19 < ps) {
                // 0x56bc10
                wc2 = *(int32_t *)v19;
                v19 += 4;
                v20 = wcrtomb((char *)wstr6, wc2, (struct _TYPEDEF___mbstate_t *)&ps2);
                wstr6 = *wstr5 + (int64_t)v20;
                *wstr5 = wstr6;
            }
        }
        // 0x56bc31
        *v3 = ps2;
        v8 = 2;
        v7 = ps;
        goto lab_0x56babe;
    }
  lab_0x56bb60_3:
    // 0x56bb60
    __uselocale(v1);
    __readfsqword(40);
    return v9 & 0xffffffff;
  lab_0x56babe:
    // 0x56babe
    v5 = v7;
    v6 = v8;
    v9 = v6;
    if (v5 >= a4) {
        // break -> 0x56bb60
        goto lab_0x56bb60_3;
    }
    // 0x56babe
    v4 = *wstr5;
    goto lab_0x56bac7;
}
