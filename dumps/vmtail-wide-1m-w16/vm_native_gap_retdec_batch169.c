/*
 * Targeted RetDec C for native executable gap queue batch 169.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x522e70-0x523463 rank=41 name=fcn.00522e70 kind=r2_discovered bytes=1523 uncovered=1523
 *   0x28e50-0x29432 rank=42 name=fcn.00028e50 kind=r2_discovered bytes=1506 uncovered=1506
 *   0x49b4a0-0x49ba82 rank=43 name=fcn.0049b4a0 kind=r2_discovered bytes=1506 uncovered=1506
 *   0x4ca380-0x4ca955 rank=44 name=fcn.004ca380 kind=r2_discovered bytes=1493 uncovered=1493
 *   0x5227ab-0x522dc0 rank=45 name=fcn.005227ab kind=r2_discovered bytes=1557 uncovered=1465
 *   0x3ce78-0x3d42c rank=46 name=fcn.0003ce78 kind=r2_discovered bytes=1460 uncovered=1460
 *   0x4f5b50-0x4f60fc rank=47 name=fcn.004f5b50 kind=r2_discovered bytes=1452 uncovered=1452
 *   0x4f4170-0x4f470d rank=48 name=fcn.004f4170 kind=r2_discovered bytes=1437 uncovered=1437
 *   0x4f47e0-0x4f4d7d rank=49 name=fcn.004f47e0 kind=r2_discovered bytes=1437 uncovered=1437
 *   0x56a0d0-0x56a66d rank=50 name=fcn.0056a0d0 kind=r2_discovered bytes=1437 uncovered=1437
 *   0x56a740-0x56acdd rank=51 name=fcn.0056a740 kind=r2_discovered bytes=1437 uncovered=1437
 *   0x4f8cc0-0x4f924e rank=53 name=fcn.004f8cc0 kind=r2_discovered bytes=1422 uncovered=1422
 *   0x582e90-0x58341c rank=54 name=fcn.00582e90 kind=r2_discovered bytes=1420 uncovered=1420
 *   0x50d1e0-0x50d73e rank=55 name=fcn.0050d1e0 kind=r2_discovered bytes=1374 uncovered=1374
 *   0x50d900-0x50de5e rank=56 name=fcn.0050d900 kind=r2_discovered bytes=1374 uncovered=1374
 *   0x49d320-0x49d878 rank=57 name=fcn.0049d320 kind=r2_discovered bytes=1368 uncovered=1368
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
extern int g27;
extern int g28;
extern int g29;
extern int g30;
extern int g31;
extern int g32;
extern int g33;
extern int g34;
extern int g35;
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
extern int g57;
extern int g58;
extern int g59;
extern int g60;
extern int g61;
extern int g62;
extern int g63;
extern int g64;
extern int g65;
extern int g66;
extern int g69;
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
int64_t _Unwind_GetLanguageSpecificData(int64_t context);
int64_t _Unwind_GetIPInfo(int64_t context, void *ip_before_insn, int64_t extra);
int64_t _Unwind_GetRegionStart();
int64_t _Unwind_RaiseException(int64_t exception);
void _Unwind_SetGR(int64_t context, int index, int64_t value);
void _Unwind_SetIP(int64_t context, int64_t value);
void _Unwind_Resume(struct _Unwind_Exception *exception);
void _Unwind_Resume_or_Rethrow(int64_t exception);

int64_t function_1fd40();
int64_t function_20540();
int64_t function_20a50();
int64_t function_24ded();
int64_t function_2508e();
int64_t function_256ba();
int64_t function_25c34();
int64_t function_28e50(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_29c46();
int64_t function_29f0e();
int64_t function_36cda();
int64_t function_36ff8();
int64_t function_3c9ec();
int64_t function_3ce78(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_48d3d1();
int64_t function_48d452();
int64_t function_48d50f();
int64_t function_4945c0();
int64_t function_4956b0();
int64_t function_496540();
int64_t function_4976c0();
int64_t function_497d70();
int64_t function_499c70();
int64_t function_499dd0();
int64_t function_49a730();
int64_t function_49a910();
int64_t function_49b4a0(int64_t a1, uint64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_49d220();
int64_t function_49d320(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_49e770();
int64_t function_49e8b0();
int64_t function_4afe70();
int64_t function_4b0f10();
int64_t function_4c14d0();
int64_t function_4c1690();
int64_t function_4c16b0();
int64_t function_4c1770();
int64_t function_4c1820();
int64_t function_4c1850();
int64_t function_4c1880();
int64_t function_4c1d00();
int64_t function_4c3510();
int64_t function_4c8790();
int64_t function_4c8fa0();
int64_t function_4c9080();
int64_t function_4c9db0();
int64_t function_4ca080();
int64_t function_4ca380(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4ca3d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int32_t a9, int64_t a10);
int64_t function_4ca730(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_4ca770(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_4eec00();
int64_t function_4efd30();
int64_t function_4f3230();
int64_t function_4f4170(int64_t a1, int64_t a2);
int64_t function_4f47e0(int64_t a1, int64_t a2);
int64_t function_4f5b50(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4f8cc0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4fc010();
int64_t function_4fca70();
int64_t function_508450();
int64_t function_50ab00();
int64_t function_50cac0();
int64_t function_50d0c0();
int64_t function_50d1e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_50d7e0();
int64_t function_50d900(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_5227ab(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_522e70(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, uint64_t a8, int64_t a9, int64_t a10);
int64_t function_527a4();
int64_t function_5289c();
int64_t function_5423f0();
int64_t function_542c40();
int64_t function_545160();
int64_t function_550a60();
int64_t function_550d00();
int64_t function_5512a0();
int64_t function_554b00();
int64_t function_569140();
int64_t function_569250();
int64_t function_56a0d0(int64_t a1, int64_t a2);
int64_t function_56a740(int64_t a1, int64_t a2);
int64_t function_5797e0();
int64_t function_5798c0();
int64_t function_57ba10();
int64_t function_57cf40();
int64_t function_581610();
int64_t function_582e90(int64_t str, int64_t a2, int64_t a3);
int64_t function_5a470();

// Address range: 0x28e50 - 0x29432
int64_t function_28e50(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = __readfsqword(40); // 0x28e5e
    int64_t v2; // 0x28e50
    int64_t v3; // 0x28e50
    int64_t v4; // 0x28e50
    int64_t v5; // 0x28e50
    int64_t v6; // 0x28e50
    int64_t v7; // 0x28e50
    int64_t v8; // 0x28e50
    int64_t v9; // 0x28e50
    int64_t v10; // bp-104, 0x28e50
    int64_t v11; // bp-112, 0x28e50
    int64_t v12; // bp-136, 0x28e50
    if (a4 == 0 || a5 == 0) {
        goto lab_0x2940e;
    } else {
        uint32_t v13 = (int32_t)a2; // 0x28e94
        v12 = (int64_t)&g37;
        if (v13 == 7) {
            // 0x2911c
            v10 = 0;
            v6 = (int64_t)"Untrusted system file";
            v8 = (int64_t)"game_error.error_system_version";
            goto lab_0x292bd;
        } else {
            if (v13 < 8) {
                if (v13 == 3) {
                    // 0x29058
                    v10 = 0;
                    v5 = (int64_t)"EAC index certificate revoked";
                    v7 = (int64_t)"game_error.error_certificate_revoked";
                    v4 = (int64_t)&v11;
                    v9 = a1 + (int64_t)&g2;
                    v3 = (int64_t)&v10;
                    goto lab_0x29095;
                } else {
                    if (v13 < 4) {
                        // 0x28eb5
                        v2 = (int64_t)&g37;
                        switch (v13) {
                            case 1: {
                                // 0x29019
                                v10 = 0;
                                v5 = (int64_t)"Easy Anti-Cheat Hash Catalogue not found";
                                v7 = (int64_t)"game_error.error_catalogue_not_found";
                                v4 = (int64_t)&v11;
                                v9 = a1 + (int64_t)&g2;
                                v3 = (int64_t)&v10;
                                goto lab_0x29095;
                            }
                            case 0: {
                                goto lab_0x293ba;
                            }
                            default: {
                                // 0x28ec4
                                v10 = 0;
                                v5 = (int64_t)"Corrupt Easy Anti-Cheat Hash Catalogue";
                                v7 = (int64_t)"game_error.error_catalogue_corrupted";
                                v4 = (int64_t)&v11;
                                v9 = a1 + (int64_t)&g2;
                                v3 = (int64_t)&v10;
                                goto lab_0x29095;
                            }
                        }
                    } else {
                        int64_t v14 = (int64_t)&v11; // 0x28f09
                        int64_t v15 = (int64_t)&v10; // 0x28f0e
                        int64_t v16 = a1 + (int64_t)&g2; // 0x28f13
                        if (v13 == 5) {
                            // 0x290bd
                            v10 = 0;
                            v5 = (int64_t)"Missing required file";
                            v7 = (int64_t)"game_error.error_file_not_found";
                            v4 = v14;
                            v9 = v16;
                            v3 = v15;
                        } else {
                            // 0x28f20
                            v10 = 0;
                            int64_t v17 = v13 < 6 ? (int64_t)"Unknown file version" : (int64_t)"Unknown game file";
                            int64_t v18 = v13 < 6 ? (int64_t)"game_error.error_file_version" : (int64_t)"game_error.error_file_forbidden";
                            v5 = v17;
                            v7 = v18;
                            v4 = v14;
                            v9 = v16;
                            v3 = v15;
                        }
                        goto lab_0x29095;
                    }
                }
            } else {
                if (v13 == 11) {
                    // 0x291c0
                    v10 = 0;
                    v6 = (int64_t)"Internal anti-cheat error";
                    v8 = (int64_t)"game_error.error_violation";
                    goto lab_0x292bd;
                } else {
                    if (v13 < 12) {
                        int64_t v19 = (int64_t)&v11; // 0x28f65
                        int64_t v20 = (int64_t)&v10; // 0x28f6a
                        int64_t v21 = a1 + (int64_t)&g2; // 0x28f6f
                        if (v13 == 9) {
                            // 0x2915e
                            v10 = 0;
                            v5 = (int64_t)"Corrupted memory";
                            v7 = (int64_t)"game_error.error_corrupted_memory";
                            v4 = v19;
                            v9 = v21;
                            v3 = v20;
                        } else {
                            // 0x28f7f
                            v10 = 0;
                            int64_t v22 = v13 < 10 ? (int64_t)"Forbidden module" : (int64_t)"Forbidden tool";
                            int64_t v23 = v13 < 10 ? (int64_t)"game_error.error_module_forbidden" : (int64_t)"game_error.error_tool_forbidden";
                            v5 = v22;
                            v7 = v23;
                            v4 = v19;
                            v9 = v21;
                            v3 = v20;
                        }
                        goto lab_0x29095;
                    } else {
                        if (v13 == 13) {
                            // 0x29241
                            v10 = 0;
                            v6 = (int64_t)"Cannot run under Virtual Machine.";
                            v8 = (int64_t)"game_error.error_virtual";
                            goto lab_0x292bd;
                        } else {
                            if (v13 < 13) {
                                // 0x29202
                                v10 = 0;
                                v6 = (int64_t)"Corrupted packet flow";
                                v8 = (int64_t)"game_error.error_corrupted_network";
                                goto lab_0x292bd;
                            } else {
                                if (v13 == 14) {
                                    // 0x29280
                                    v10 = 0;
                                    v6 = (int64_t)"Forbidden system configuration";
                                    v8 = (int64_t)"game_error.error_system_configuration";
                                    goto lab_0x292bd;
                                } else {
                                    if (v13 != 15) {
                                        if (a3 == 0) {
                                            int64_t v24 = 0; // bp-74, 0x292fe
                                            int64_t v25 = (int64_t)&v24; // 0x2931d
                                            int64_t v26 = 0; // 0x29354
                                            int32_t v27 = 0x73e31b11;
                                            int32_t v28 = *(int32_t *)(v26 + (int64_t)&g23); // 0x29349
                                            *(int32_t *)(v26 + v25) = v28 ^ v27;
                                            v26 += 4;
                                            uint32_t v29 = 0x2000 * v27 ^ v27; // 0x29327
                                            int32_t v30 = v29 / 128 ^ v29; // 0x2932e
                                            while (v26 != 8) {
                                                // 0x2933f
                                                v27 = 0x20000 * v30 ^ -1 - v30;
                                                v28 = *(int32_t *)(v26 + (int64_t)&g23);
                                                *(int32_t *)(v26 + v25) = v28 ^ v27;
                                                v26 += 4;
                                                v29 = 0x2000 * v27 ^ v27;
                                                v30 = v29 / 128 ^ v29;
                                            }
                                            // 0x2935a
                                            v11 = (int64_t)&g23;
                                            v10 = v25;
                                            *(char *)(v25 + 8) = *(char *)&g24 ^ -22;
                                            *(char *)(v10 + 9) = 0;
                                            function_48d50f(a4, a5, &v24, "Internal anti-cheat error", a2 & 0xffffffff);
                                            memset((void *)(int64_t)(&v24), 0, 10);
                                        } else {
                                            // 0x293ba
                                            function_25c34(&v12, a3, function_24ded(a3));
                                            function_48d3d1(a4, v12, a5);
                                        }
                                        // 0x29406
                                        function_2508e((int64_t)&v12);
                                        goto lab_0x2940e;
                                    } else {
                                        // 0x28fd7
                                        v10 = 0;
                                        v6 = (int64_t)"Could not locate game executable entry in the catalogue.";
                                        v8 = (int64_t)"game_error.executable_not_hashed";
                                        goto lab_0x292bd;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
  lab_0x2940e:;
    int64_t result = 0; // 0x2941c
    if (v1 != __readfsqword(40)) {
        // 0x2941e
        __stack_chk_fail();
        result = (int64_t)&g69;
    }
    // 0x29423
    return result;
  lab_0x292bd:;
    int64_t v31 = (int64_t)&v11;
    function_5a470(v31, a1 + (int64_t)&g2, (char *)v8, (char *)v6, &v10);
    int64_t v32 = v31; // 0x292cb
    int64_t v33 = (int64_t)&v10; // 0x292cb
    goto lab_0x290a3;
  lab_0x290a3:
    // 0x290a3
    function_256ba(&v12, v32);
    function_2508e(v32);
    function_29c46(v33);
    v2 = v12;
    goto lab_0x293ba;
  lab_0x293ba:
    // 0x293ba
    function_48d3d1(a4, v2, a5);
    if (a3 != 0) {
        char * v34 = (char *)a3; // 0x293ce
        if (*v34 != 0) {
            // 0x293d4
            function_48d452(a4, " (", a5);
            function_48d452(a4, v34, a5);
            function_48d452(a4, ")", a5);
        }
    }
    // 0x29406
    function_2508e((int64_t)&v12);
    goto lab_0x2940e;
  lab_0x29095:
    // 0x29095
    function_5a470(v4, v9, (char *)v7, (char *)v5, (int64_t *)v3);
    v32 = v4;
    v33 = v3;
    goto lab_0x290a3;
}

// Address range: 0x3ce78 - 0x3d42c
int64_t function_3ce78(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3ce78
    *(int16_t *)(a1 + (int64_t)&g32) = 1;
    int64_t v1 = __readfsqword(40); // 0x3cea2
    function_3c9ec(a1, 0, 288, 15, 0);
    function_3c9ec(a1, 1, 32, 15, 0);
    int64_t v2 = 286;
    int64_t v3; // 0x3ce78
    while (*(char *)(a1 + (int64_t)"\\K" + v2) == 0) {
        // 0x3cee5
        v3 = 257;
        if (v2 == 258) {
            goto lab_0x3cef5;
        }
        v2--;
    }
    // 0x3cef5
    v3 = v2 & 0xffffffff;
  lab_0x3cef5:;
    int64_t v4 = 30;
    int64_t v5; // 0x3ce78
    while (*(char *)(a1 + (int64_t)"\\K" + v4) == 0) {
        // 0x3cf07
        v5 = 1;
        if (v4 == 2) {
            goto lab_0x3cf16;
        }
        v4--;
    }
    // 0x3cf16
    v5 = v4 & 0xffffffff;
  lab_0x3cf16:;
    // 0x3cf16
    int64_t v6; // bp-688, 0x3ce78
    int64_t v7 = (int64_t)&v6; // 0x3cf16
    int64_t v8 = a1 + (int64_t)&g41; // 0x3cf1b
    __asm_rep_movsb_memcpy((char *)&v6, (char *)(a1 + (int64_t)&g55), v3);
    __asm_rep_movsb_memcpy((char *)((0x100000000 * v3 >> 32) + v7), (char *)(a1 + (int64_t)&g57), v5);
    __asm_rep_stosb_memset((char *)v8, 0, 38);
    int16_t * v9 = (int16_t *)(a1 + (int64_t)&g42);
    int64_t v10; // bp-696, 0x3ce78
    int64_t v11 = (int64_t)&v10 + 328;
    int16_t * v12 = (int16_t *)(a1 + (int64_t)&g44);
    int16_t * v13 = (int16_t *)(a1 + (int64_t)&g43);
    int16_t * v14 = (int16_t *)v8;
    int64_t v15 = 0; // 0x3cf5e
    int64_t v16 = 0; // 0x3cf5e
    int64_t v17 = 0; // 0x3cf5e
    int64_t v18 = 255; // 0x3cf5e
    int64_t v19 = 0; // 0x3cf5e
    int64_t v20; // 0x3ce78
    int64_t v21; // 0x3ce78
    int64_t v22; // 0x3ce78
    int64_t v23; // 0x3ce78
    int64_t v24; // 0x3ce78
    unsigned char v25; // 0x3cf60
    int64_t v26; // 0x3cf60
    while (true) {
      lab_0x3cf60:;
        int64_t v27 = v18;
        int64_t v28 = v17;
        uint64_t v29 = v16;
        int64_t v30 = v15;
        v25 = *(char *)(v19 + v7);
        v26 = v25;
        if (v25 != 0) {
            int64_t v31 = v30; // 0x3cff1
            if (v29 != 0) {
                if (v29 < 3) {
                    // 0x3cff8
                    *v14 = *v14 + (int16_t)v29;
                    int64_t v32 = v29 + v30; // 0x3cfff
                    int32_t v33 = v32; // 0x3d002
                    int64_t v34 = v30; // 0x3d004
                    v31 = v32;
                    if ((int32_t)v30 != v33) {
                        int64_t v35 = v34 + 1; // 0x3d008
                        *(char *)((v34 & 0xffffffff) + v11) = 0;
                        v34 = v35 & 0xffffffff;
                        v31 = v32;
                        while ((int32_t)v35 != v33) {
                            // 0x3d006
                            v35 = v34 + 1;
                            *(char *)((v34 & 0xffffffff) + v11) = 0;
                            v34 = v35 & 0xffffffff;
                            v31 = v32;
                        }
                    }
                } else {
                    int64_t v36 = v30 & 0xffffffff; // 0x3d01a
                    int64_t v37; // 0x3ce78
                    if (v29 < 11) {
                        // 0x3d023
                        *v13 = *v13 + 1;
                        *(char *)(v36 + v11) = 17;
                        v37 = v29 + 0xfffffffd;
                    } else {
                        // 0x3d038
                        *v12 = *v12 + 1;
                        *(char *)(v36 + v11) = 18;
                        v37 = v29 + 0xfffffff5;
                    }
                    // 0x3d04b
                    *(char *)((v30 + 1 & 0xffffffff) + v11) = (char)v37;
                    v31 = v30 + 2;
                }
            }
            int64_t v38 = v31;
            int64_t v39 = v38 & 0xffffffff;
            char v40 = v27; // 0x3d053
            if (v25 == v40) {
                int64_t v41 = v28 + 1; // 0x3d0bb
                v20 = v39;
                v23 = v41 & 0xffffffff;
                if ((int32_t)v41 == 6) {
                    // 0x3d0c4
                    *v9 = *v9 + 1;
                    *(char *)(v39 + v11) = 16;
                    *(char *)((v38 + 1 & 0xffffffff) + v11) = 3;
                    v20 = v39 + 2;
                    v23 = 0;
                }
            } else {
                uint32_t v42 = (int32_t)v28; // 0x3d058
                int64_t v43 = v39; // 0x3d05a
                if (v42 != 0) {
                    if (v42 < 3) {
                        int16_t * v44 = (int16_t *)(2 * v27 + v8); // 0x3d065
                        *v44 = *v44 + (int16_t)v28;
                        int32_t v45 = v38 + v28; // 0x3d06f
                        int64_t v46 = v39; // 0x3d071
                        v43 = v39;
                        if ((int32_t)v38 != v45) {
                            int64_t v47 = v46 + 1; // 0x3d075
                            int64_t v48 = v47 & 0xffffffff; // 0x3d075
                            *(char *)(v46 + v11) = v40;
                            v46 = v48;
                            v43 = v48;
                            while ((int32_t)v47 != v45) {
                                // 0x3d073
                                v47 = v46 + 1;
                                v48 = v47 & 0xffffffff;
                                *(char *)(v46 + v11) = v40;
                                v46 = v48;
                                v43 = v48;
                            }
                        }
                    } else {
                        // 0x3d081
                        *v9 = *v9 + 1;
                        *(char *)(v39 + v11) = 16;
                        *(char *)((v38 + 1 & 0xffffffff) + v11) = (char)v28 - 3;
                        v43 = v38 + 2 & 0xffffffff;
                    }
                }
                // 0x3d0a2
                *(char *)(v43 + v11) = v25;
                int16_t * v49 = (int16_t *)(2 * v26 + v8); // 0x3d0ae
                *v49 = *v49 + 1;
                v20 = v43 + 1;
                v23 = 0;
            }
            goto lab_0x3d0e5;
        } else {
            uint32_t v50 = (int32_t)v28; // 0x3cf6d
            int64_t v51 = v30; // 0x3cf6f
            if (v50 != 0) {
                if (v50 < 3) {
                    int16_t * v52 = (int16_t *)(2 * v27 + v8); // 0x3cf7a
                    *v52 = *v52 + (int16_t)v28;
                    int32_t v53 = v28 + v30; // 0x3cf84
                    v51 = v30;
                    if ((int32_t)v30 != v53) {
                        int64_t v54 = v30 + 1; // 0x3cf8a
                        int64_t v55 = v54 & 0xffffffff; // 0x3cf8a
                        *(char *)((v30 & 0xffffffff) + v11) = (char)v27;
                        v51 = v55;
                        while ((int32_t)v54 != v53) {
                            int64_t v56 = v55;
                            v54 = v56 + 1;
                            v55 = v54 & 0xffffffff;
                            *(char *)((v56 & 0xffffffff) + v11) = (char)v27;
                            v51 = v55;
                        }
                    }
                } else {
                    // 0x3cf96
                    *v9 = *v9 + 1;
                    *(char *)((v30 & 0xffffffff) + v11) = 16;
                    *(char *)((v30 + 1 & 0xffffffff) + v11) = (char)v28 - 3;
                    v51 = v30 + 2 & 0xffffffff;
                }
            }
            int64_t v57 = v51;
            int64_t v58 = v29 + 1; // 0x3cfb9
            v21 = v57;
            v22 = v58 & 0xffffffff;
            v24 = 0;
            if ((int32_t)v58 != 138) {
                goto lab_0x3d0e7;
            } else {
                // 0x3cfc9
                *v12 = *v12 + 1;
                *(char *)((v57 & 0xffffffff) + v11) = 18;
                *(char *)((v57 + 1 & 0xffffffff) + v11) = 127;
                v20 = v57 + 2;
                v23 = 0;
                goto lab_0x3d0e5;
            }
        }
    }
  lab_0x3d0f6:;
    // 0x3d0f6
    int64_t v59; // 0x3ce78
    uint32_t v60 = (int32_t)v59; // 0x3d0f6
    int64_t v61; // 0x3ce78
    int64_t v62; // 0x3ce78
    int64_t v63; // 0x3ce78
    if (v60 == 0) {
        // 0x3d149
        v61 = v62;
        if (v63 != 0) {
            uint32_t v64 = (int32_t)v63; // 0x3d150
            if (v64 < 3) {
                // 0x3d155
                *v14 = *v14 + (int16_t)v63;
                int64_t v65 = v63 + v62; // 0x3d15c
                int32_t v66 = v65; // 0x3d160
                v61 = v65;
                if ((int32_t)v62 != v66) {
                    int64_t v67 = v62 + 1; // 0x3d167
                    *(char *)((v62 & 0xffffffff) + v11) = 0;
                    int64_t v68 = v67 & 0xffffffff; // 0x3d163
                    v61 = v65;
                    while ((int32_t)v67 != v66) {
                        // 0x3d165
                        v67 = v68 + 1;
                        *(char *)((v68 & 0xffffffff) + v11) = 0;
                        v68 = v67 & 0xffffffff;
                        v61 = v65;
                    }
                }
            } else {
                int64_t v69; // 0x3ce78
                if (v64 < 11) {
                    // 0x3d17f
                    *(char *)(v62 + v11) = 17;
                    *v13 = *v13 + 1;
                    v69 = v63 + 0xfffffffd;
                } else {
                    // 0x3d193
                    *v12 = *v12 + 1;
                    *(char *)(v62 + v11) = 18;
                    v69 = v63 + 0xfffffff5;
                }
                // 0x3d1a5
                *(char *)((v62 + 1 & 0xffffffff) + v11) = (char)v69;
                v61 = v62 + 2;
            }
        }
    } else {
        if (v60 < 3) {
            int64_t v70 = v59 + v62; // 0x3d103
            int16_t * v71 = (int16_t *)(2 * v26 + v8); // 0x3d107
            *v71 = *v71 + (int16_t)v59;
            int32_t v72 = v70; // 0x3d10f
            v61 = v70;
            if ((int32_t)v62 != v72) {
                int64_t v73 = v62 + 1; // 0x3d11a
                *(char *)((v62 & 0xffffffff) + v11) = v25;
                int64_t v74 = v73 & 0xffffffff; // 0x3d112
                v61 = v70;
                while ((int32_t)v73 != v72) {
                    // 0x3d118
                    v73 = v74 + 1;
                    *(char *)((v74 & 0xffffffff) + v11) = v25;
                    v74 = v73 & 0xffffffff;
                    v61 = v70;
                }
            }
        } else {
            // 0x3d126
            *(char *)((v62 & 0xffffffff) + v11) = 16;
            *v9 = *v9 + 1;
            *(char *)((v62 + 1 & 0xffffffff) + v11) = (char)v59 - 3;
            v61 = v62 + 2;
        }
    }
    // 0x3d1ac
    function_3c9ec(a1, 2, 19, 7, 0);
    int32_t * v75 = (int32_t *)(a1 + 92); // 0x3d1c6
    uint32_t v76 = *v75; // 0x3d1c6
    int32_t * v77 = (int32_t *)(a1 + 96); // 0x3d1d0
    *v77 = 2 << v76 % 32 | *v77;
    int32_t v78 = v76 + 2; // 0x3d1d3
    *v75 = v78;
    int32_t v79 = *v77; // 0x3d1dc
    int32_t v80 = v78; // 0x3d1e2
    int32_t v81 = v79; // 0x3d1e2
    if (v78 >= 8) {
        int64_t * v82 = (int64_t *)(a1 + 64); // 0x3d1e4
        uint64_t v83 = *v82; // 0x3d1e4
        int32_t v84 = v79; // 0x3d1ec
        if (v83 < *(int64_t *)(a1 + 72)) {
            // 0x3d1ee
            *v82 = v83 + 1;
            *(char *)v83 = (char)v79;
            v84 = *v77;
        }
        // 0x3d1f8
        *v77 = v84 / 256;
        int32_t v85 = *v75 - 8; // 0x3d1fc
        *v75 = v85;
        int32_t v86 = *v77; // 0x3d1dc
        v80 = v85;
        v81 = v86;
        while (v85 >= 8) {
            int32_t v87 = v86;
            v83 = *v82;
            v84 = v87;
            if (v83 < *(int64_t *)(a1 + 72)) {
                // 0x3d1ee
                *v82 = v83 + 1;
                *(char *)v83 = (char)v87;
                v84 = *v77;
            }
            // 0x3d1f8
            *v77 = v84 / 256;
            v85 = *v75 - 8;
            *v75 = v85;
            v86 = *v77;
            v80 = v85;
            v81 = v86;
        }
    }
    int64_t v88 = v3 + 0xfffffeff; // 0x3d202
    uint32_t v89 = v80 % 32; // 0x3d208
    int64_t v90 = v89 == 0 ? v88 : (int64_t)((int32_t)v88 << v89);
    int32_t v91 = v81 | (int32_t)v90; // 0x3d20d
    *v75 = v80 + 5;
    *v77 = v91;
    uint32_t v92 = *v75;
    int32_t v93 = v92; // 0x3d21e
    int32_t v94 = v91; // 0x3d21e
    if (v92 >= 8) {
        int64_t * v95 = (int64_t *)(a1 + 64); // 0x3d220
        uint64_t v96 = *v95; // 0x3d220
        int32_t v97 = v91; // 0x3d228
        if (v96 < *(int64_t *)(a1 + 72)) {
            // 0x3d22a
            *v95 = v96 + 1;
            *(char *)v96 = (char)v91;
            v97 = *v77;
        }
        // 0x3d234
        *v77 = v97 / 256;
        int32_t v98 = *v75 - 8; // 0x3d238
        *v75 = v98;
        int32_t v99 = *v77; // 0x3d218
        v93 = v98;
        v94 = v99;
        while (v98 >= 8) {
            int32_t v100 = v99;
            v96 = *v95;
            v97 = v100;
            if (v96 < *(int64_t *)(a1 + 72)) {
                // 0x3d22a
                *v95 = v96 + 1;
                *(char *)v96 = (char)v100;
                v97 = *v77;
            }
            // 0x3d234
            *v77 = v97 / 256;
            v98 = *v75 - 8;
            *v75 = v98;
            v99 = *v77;
            v93 = v98;
            v94 = v99;
        }
    }
    int64_t v101 = v5 + 0xffffffff; // 0x3d23e
    uint32_t v102 = v93 % 32; // 0x3d241
    int64_t v103 = v102 == 0 ? v101 : (int64_t)((int32_t)v101 << v102);
    int32_t v104 = v94 | (int32_t)v103; // 0x3d247
    *v75 = v93 + 5;
    *v77 = v104;
    uint32_t v105 = *v75;
    int32_t v106 = v105; // 0x3d25a
    int32_t v107 = v104; // 0x3d25a
    if (v105 >= 8) {
        int64_t * v108 = (int64_t *)(a1 + 64); // 0x3d25c
        uint64_t v109 = *v108; // 0x3d25c
        int32_t v110 = v104; // 0x3d264
        if (v109 < *(int64_t *)(a1 + 72)) {
            // 0x3d266
            *v108 = v109 + 1;
            *(char *)v109 = (char)v104;
            v110 = *v77;
        }
        // 0x3d271
        *v77 = v110 / 256;
        int32_t v111 = *v75 - 8; // 0x3d275
        *v75 = v111;
        int32_t v112 = *v77; // 0x3d254
        v106 = v111;
        v107 = v112;
        while (v111 >= 8) {
            int32_t v113 = v112;
            v109 = *v108;
            v110 = v113;
            if (v109 < *(int64_t *)(a1 + 72)) {
                // 0x3d266
                *v108 = v109 + 1;
                *(char *)v109 = (char)v113;
                v110 = *v77;
            }
            // 0x3d271
            *v77 = v110 / 256;
            v111 = *v75 - 8;
            *v75 = v111;
            v112 = *v77;
            v106 = v111;
            v107 = v112;
        }
    }
    int64_t v114 = a1 + (int64_t)&g60; // 0x3d291
    int64_t v115 = 18;
    unsigned char v116 = *(char *)(v115 + (int64_t)&g26); // 0x3d28a
    int64_t v117 = v115; // 0x3d29a
    while (*(char *)(v114 + (int64_t)v116) == 0) {
        int64_t v118 = v115 - 1; // 0x3d29c
        v117 = v118;
        if (v115 == 0) {
            // break -> 0x3d2a7
            break;
        }
        v115 = v118;
        v116 = *(char *)(v115 + (int64_t)&g26);
        v117 = v115;
    }
    int32_t v119 = v117; // 0x3d2a7
    int64_t v120 = v119 < 3 == (2 - v119 & v119) < 0 ? v117 & 0xffffffff : 3; // 0x3d2af
    int64_t v121 = v120 + 0xfffffffd; // 0x3d2b2
    uint32_t v122 = v106 % 32; // 0x3d2b5
    int64_t v123 = v122 == 0 ? v121 : (int64_t)((int32_t)v121 << v122);
    *v75 = v106 + 4;
    *v77 = v107 | (int32_t)v123;
    uint32_t v124 = *v75;
    int64_t * v125 = (int64_t *)(a1 + 64);
    int64_t * v126 = (int64_t *)(a1 + 72);
    int32_t v127 = v124; // 0x3d2c6
    if (v124 >= 8) {
        uint64_t v128 = *v125; // 0x3d2c8
        if (v128 < *v126) {
            // 0x3d2d2
            *v125 = v128 + 1;
            *(char *)v128 = (char)*v77;
        }
        // 0x3d2df
        *v77 = *v77 / 256;
        int32_t v129 = *v75 - 8; // 0x3d2e3
        *v75 = v129;
        v127 = v129;
        while (v129 >= 8) {
            // 0x3d2c8
            v128 = *v125;
            if (v128 < *v126) {
                // 0x3d2d2
                *v125 = v128 + 1;
                *(char *)v128 = (char)*v77;
            }
            // 0x3d2df
            *v77 = *v77 / 256;
            v129 = *v75 - 8;
            *v75 = v129;
            v127 = v129;
        }
    }
    int64_t v130 = 0;
    unsigned char v131 = *(char *)(v130 + (int64_t)&g26); // 0x3d2ef
    unsigned char v132 = *(char *)(v114 + (int64_t)v131); // 0x3d2f6
    *v77 = (int32_t)v132 << v127 % 32 | *v77;
    int32_t v133 = v127 + 3; // 0x3d303
    *v75 = v133;
    int32_t v134 = v133; // 0x3d30d
    uint64_t v135; // 0x3d30f
    int32_t v136; // 0x3d32b
    if (v133 >= 8) {
        v135 = *v125;
        if (v135 < *v126) {
            // 0x3d319
            *v125 = v135 + 1;
            *(char *)v135 = (char)*v77;
        }
        // 0x3d327
        *v77 = *v77 / 256;
        v136 = *v75 - 8;
        *v75 = v136;
        v134 = v136;
        while (v136 >= 8) {
            // 0x3d30f
            v135 = *v125;
            if (v135 < *v126) {
                // 0x3d319
                *v125 = v135 + 1;
                *(char *)v135 = (char)*v77;
            }
            // 0x3d327
            *v77 = *v77 / 256;
            v136 = *v75 - 8;
            *v75 = v136;
            v134 = v136;
        }
    }
    int32_t v137 = v134;
    int32_t v138 = v137; // 0x3d2ed
    int64_t v139 = v130 + 1; // 0x3d2ed
    while (v130 != v120) {
        // 0x3d2ef
        v130 = v139;
        v131 = *(char *)(v130 + (int64_t)&g26);
        v132 = *(char *)(v114 + (int64_t)v131);
        *v77 = (int32_t)v132 << v138 % 32 | *v77;
        v133 = v138 + 3;
        *v75 = v133;
        v134 = v133;
        if (v133 >= 8) {
            v135 = *v125;
            if (v135 < *v126) {
                // 0x3d319
                *v125 = v135 + 1;
                *(char *)v135 = (char)*v77;
            }
            // 0x3d327
            *v77 = *v77 / 256;
            v136 = *v75 - 8;
            *v75 = v136;
            v134 = v136;
            while (v136 >= 8) {
                // 0x3d30f
                v135 = *v125;
                if (v135 < *v126) {
                    // 0x3d319
                    *v125 = v135 + 1;
                    *(char *)v135 = (char)*v77;
                }
                // 0x3d327
                *v77 = *v77 / 256;
                v136 = *v75 - 8;
                *v75 = v136;
                v134 = v136;
            }
        }
        // 0x3d331
        v137 = v134;
        v138 = v137;
        v139 = v130 + 1;
    }
    uint32_t v140 = (int32_t)v61; // 0x3d350
    if (v140 != 0) {
        // 0x3d359
        int64_t v141; // bp-368, 0x3ce78
        int64_t v142 = (int64_t)&v141; // 0x3d336
        int64_t v143 = 0;
        int64_t v144 = 0;
        unsigned char v145 = *(char *)(v144 + v142); // 0x3d359
        int64_t v146 = v145; // 0x3d359
        uint16_t v147 = *(int16_t *)(a1 + (int64_t)&g50 + 2 * v146); // 0x3d370
        *v77 = (int32_t)v147 << v137 % 32 | *v77;
        int32_t v148 = v137 + (int32_t)*(char *)(v114 + v146); // 0x3d380
        *v75 = v148;
        int32_t v149 = v148; // 0x3d38b
        uint64_t v150; // 0x3d38d
        int32_t v151; // 0x3d3aa
        if (v148 >= 8) {
            v150 = *v125;
            if (v150 < *v126) {
                // 0x3d397
                *v125 = v150 + 1;
                *(char *)v150 = (char)*v77;
            }
            // 0x3d3a6
            *v77 = *v77 / 256;
            v151 = *v75 - 8;
            *v75 = v151;
            v149 = v151;
            while (v151 >= 8) {
                // 0x3d38d
                v150 = *v125;
                if (v150 < *v126) {
                    // 0x3d397
                    *v125 = v150 + 1;
                    *(char *)v150 = (char)*v77;
                }
                // 0x3d3a6
                *v77 = *v77 / 256;
                v151 = *v75 - 8;
                *v75 = v151;
                v149 = v151;
            }
        }
        int64_t v152 = v143 + 1; // 0x3d361
        int64_t v153 = v152 & 0xffffffff; // 0x3d361
        int32_t v154 = v149;
        while (v145 < 16) {
            // 0x3d350
            if (v140 <= (int32_t)v152) {
                // break (via goto) -> 0x3d404
                goto lab_0x3d404;
            }
            v143 = v153;
            v144++;
            v145 = *(char *)(v144 + v142);
            v146 = v145;
            v147 = *(int16_t *)(a1 + (int64_t)&g50 + 2 * v146);
            *v77 = (int32_t)v147 << v154 % 32 | *v77;
            v148 = v154 + (int32_t)*(char *)(v114 + v146);
            *v75 = v148;
            v149 = v148;
            if (v148 >= 8) {
                v150 = *v125;
                if (v150 < *v126) {
                    // 0x3d397
                    *v125 = v150 + 1;
                    *(char *)v150 = (char)*v77;
                }
                // 0x3d3a6
                *v77 = *v77 / 256;
                v151 = *v75 - 8;
                *v75 = v151;
                v149 = v151;
                while (v151 >= 8) {
                    // 0x3d38d
                    v150 = *v125;
                    if (v150 < *v126) {
                        // 0x3d397
                        *v125 = v150 + 1;
                        *(char *)v150 = (char)*v77;
                    }
                    // 0x3d3a6
                    *v77 = *v77 / 256;
                    v151 = *v75 - 8;
                    *v75 = v151;
                    v149 = v151;
                }
            }
            // 0x3d3b0
            v152 = v143 + 1;
            v153 = v152 & 0xffffffff;
            v154 = v149;
        }
        // 0x3d3bc
        *v77 = (int32_t)*(char *)(v153 + v11) << v154 % 32 | *v77;
        char v155 = *(char *)((v146 + 0xfffffff0 & 0xffffffff) + (int64_t)&g25); // 0x3d3cf
        int32_t v156 = v154 + (int32_t)v155; // 0x3d3d4
        *v75 = v156;
        int32_t v157 = v156; // 0x3d3dd
        uint64_t v158; // 0x3d3e3
        int32_t v159; // 0x3d3fe
        if (v156 >= 8) {
            v158 = *v125;
            if (v158 < *v126) {
                // 0x3d3ed
                *v125 = v158 + 1;
                *(char *)v158 = (char)*v77;
            }
            // 0x3d3fa
            *v77 = *v77 / 256;
            v159 = *v75 - 8;
            *v75 = v159;
            v157 = v159;
            while (v159 >= 8) {
                // 0x3d3e3
                v158 = *v125;
                if (v158 < *v126) {
                    // 0x3d3ed
                    *v125 = v158 + 1;
                    *(char *)v158 = (char)*v77;
                }
                // 0x3d3fa
                *v77 = *v77 / 256;
                v159 = *v75 - 8;
                *v75 = v159;
                v157 = v159;
            }
        }
        int64_t v160 = v143 + 2; // 0x3d3c4
        int64_t v161 = v160 & 0xffffffff; // 0x3d3c4
        int64_t v162 = v161 + v142; // 0x3d353
        while (v140 > (int32_t)v160) {
            // 0x3d359
            v143 = v161;
            v144 = 0;
            v145 = *(char *)(v144 + v162);
            v146 = v145;
            v147 = *(int16_t *)(a1 + (int64_t)&g50 + 2 * v146);
            *v77 = (int32_t)v147 << v157 % 32 | *v77;
            v148 = v157 + (int32_t)*(char *)(v114 + v146);
            *v75 = v148;
            v149 = v148;
            if (v148 >= 8) {
                v150 = *v125;
                if (v150 < *v126) {
                    // 0x3d397
                    *v125 = v150 + 1;
                    *(char *)v150 = (char)*v77;
                }
                // 0x3d3a6
                *v77 = *v77 / 256;
                v151 = *v75 - 8;
                *v75 = v151;
                v149 = v151;
                while (v151 >= 8) {
                    // 0x3d38d
                    v150 = *v125;
                    if (v150 < *v126) {
                        // 0x3d397
                        *v125 = v150 + 1;
                        *(char *)v150 = (char)*v77;
                    }
                    // 0x3d3a6
                    *v77 = *v77 / 256;
                    v151 = *v75 - 8;
                    *v75 = v151;
                    v149 = v151;
                }
            }
            // 0x3d3b0
            v152 = v143 + 1;
            v153 = v152 & 0xffffffff;
            v154 = v149;
            while (v145 < 16) {
                // 0x3d350
                if (v140 <= (int32_t)v152) {
                    // break (via goto) -> 0x3d404
                    goto lab_0x3d404;
                }
                v143 = v153;
                v144++;
                v145 = *(char *)(v144 + v162);
                v146 = v145;
                v147 = *(int16_t *)(a1 + (int64_t)&g50 + 2 * v146);
                *v77 = (int32_t)v147 << v154 % 32 | *v77;
                v148 = v154 + (int32_t)*(char *)(v114 + v146);
                *v75 = v148;
                v149 = v148;
                if (v148 >= 8) {
                    v150 = *v125;
                    if (v150 < *v126) {
                        // 0x3d397
                        *v125 = v150 + 1;
                        *(char *)v150 = (char)*v77;
                    }
                    // 0x3d3a6
                    *v77 = *v77 / 256;
                    v151 = *v75 - 8;
                    *v75 = v151;
                    v149 = v151;
                    while (v151 >= 8) {
                        // 0x3d38d
                        v150 = *v125;
                        if (v150 < *v126) {
                            // 0x3d397
                            *v125 = v150 + 1;
                            *(char *)v150 = (char)*v77;
                        }
                        // 0x3d3a6
                        *v77 = *v77 / 256;
                        v151 = *v75 - 8;
                        *v75 = v151;
                        v149 = v151;
                    }
                }
                // 0x3d3b0
                v152 = v143 + 1;
                v153 = v152 & 0xffffffff;
                v154 = v149;
            }
            // 0x3d3bc
            *v77 = (int32_t)*(char *)(v153 + v11) << v154 % 32 | *v77;
            v155 = *(char *)((v146 + 0xfffffff0 & 0xffffffff) + (int64_t)&g25);
            v156 = v154 + (int32_t)v155;
            *v75 = v156;
            v157 = v156;
            if (v156 >= 8) {
                v158 = *v125;
                if (v158 < *v126) {
                    // 0x3d3ed
                    *v125 = v158 + 1;
                    *(char *)v158 = (char)*v77;
                }
                // 0x3d3fa
                *v77 = *v77 / 256;
                v159 = *v75 - 8;
                *v75 = v159;
                v157 = v159;
                while (v159 >= 8) {
                    // 0x3d3e3
                    v158 = *v125;
                    if (v158 < *v126) {
                        // 0x3d3ed
                        *v125 = v158 + 1;
                        *(char *)v158 = (char)*v77;
                    }
                    // 0x3d3fa
                    *v77 = *v77 / 256;
                    v159 = *v75 - 8;
                    *v75 = v159;
                    v157 = v159;
                }
            }
            // 0x3d347
            v160 = v143 + 2;
            v161 = v160 & 0xffffffff;
            v162 = v161 + v142;
        }
    }
  lab_0x3d404:;
    int64_t result = 0; // 0x3d415
    if (v1 != __readfsqword(40)) {
        // 0x3d417
        __stack_chk_fail();
        result = (int64_t)&g69;
    }
    // 0x3d41c
    return result;
  lab_0x3d0e5:
    // 0x3d0e5
    v21 = v20 & 0xffffffff;
    v22 = 0;
    v24 = v23;
    goto lab_0x3d0e7;
  lab_0x3d0e7:
    // 0x3d0e7
    v59 = v24;
    v63 = v22;
    v62 = v21;
    int64_t v163 = v19 + 1; // 0x3d0e7
    v15 = v62;
    v16 = v63;
    v17 = v59;
    v18 = v26;
    v19 = v163;
    if (v163 == (v5 + v3 & 0xffffffff)) {
        // break -> 0x3d0f6
        goto lab_0x3d0f6;
    }
    goto lab_0x3cf60;
}

// Address range: 0x49b4a0 - 0x49ba7f
int64_t function_49b4a0(int64_t a1, uint64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x49b4a0
    function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g45, "=> fetch input", a6);
    int64_t v1; // 0x49b4a0
    int64_t v2; // 0x49b4a0
    if (*(int64_t *)(a1 + 40) == 0) {
        // 0x49b910
        v2 = (int64_t)&g46;
        v1 = (int64_t)"Bad usage of mbedtls_ssl_set_bio() or mbedtls_ssl_set_bio()";
        if (*(int64_t *)(a1 + 48) != 0) {
            goto lab_0x49b4d8;
        } else {
            goto lab_0x49b927;
        }
    } else {
        goto lab_0x49b4d8;
    }
  lab_0x49b756:;
    // 0x49b756
    int64_t v3; // 0x49b4a0
    int64_t v4; // 0x49b4a0
    function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", (int64_t *)v4, "<= fetch input", v3);
    // 0x49b76e
    return 0;
  lab_0x49b4d8:;
    int64_t * v5 = (int64_t *)(a1 + 176); // 0x49b4df
    v2 = (int64_t)&g47;
    v1 = (int64_t)"requesting more data than fits";
    int64_t v6; // 0x49b4a0
    int64_t v7; // 0x49b4a0
    int64_t v8; // 0x49b4a0
    int64_t * v9; // 0x49b4a0
    char * v10; // 0x49b4f8
    if (*(int64_t *)(a1 + 160) + (int64_t)&g22 - *v5 < a2) {
        goto lab_0x49b927;
    } else {
        // 0x49b4f5
        v10 = (char *)(a1 + 372);
        if ((*v10 & 2) == 0) {
            int64_t * v11 = (int64_t *)(a1 + 232); // 0x49b780
            int64_t v12 = *v11; // 0x49b780
            function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g63, "in_left: %d, nb_want: %d", v12);
            v4 = (int64_t)&g66;
            v3 = v12;
            if (*v11 < a2) {
                // 0x49b869
                while ((int32_t)function_4956b0(a1) == 0) {
                    int64_t v13 = 0x100000000 * *(int64_t *)(a1 + 48) >> 32;
                    int64_t v14 = *v11; // 0x49b7f3
                    function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g64, "in_left: %d, nb_want: %d", v14);
                    int64_t v15 = v13 & 0xffffffff; // 0x49b82e
                    function_49e8b0(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g65, "ssl->f_recv(_timeout)", v15);
                    int32_t v16 = v13; // 0x49b843
                    if (v16 == 0) {
                        // 0x49b9a0
                        return 0xffff8d80;
                    }
                    int64_t v17 = v13; // 0x49b84c
                    if (v16 < 0) {
                        // 0x49b76e
                        return v17 & 0xffffffff;
                    }
                    uint64_t v18 = *v11 + v13; // 0x49b852
                    *v11 = v18;
                    v4 = (int64_t)&g66;
                    v3 = v15;
                    if (v18 >= a2) {
                        goto lab_0x49b756;
                    }
                }
                int64_t v19 = *v11; // 0x49b879
                function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g64, "in_left: %d, nb_want: %d", v19);
                function_49e8b0(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g65, "ssl->f_recv(_timeout)", 0xffff9800);
                return 0xffff9800;
            }
            goto lab_0x49b756;
        } else {
            // 0x49b505
            v2 = (int64_t)&g48;
            v1 = (int64_t)"You must use mbedtls_ssl_set_timer_cb() for DTLS";
            if (*(int64_t *)(a1 + 144) == 0) {
                goto lab_0x49b927;
            } else {
                // 0x49b513
                v2 = (int64_t)&g48;
                v1 = (int64_t)"You must use mbedtls_ssl_set_timer_cb() for DTLS";
                if (*(int64_t *)(a1 + 152) == 0) {
                    goto lab_0x49b927;
                } else {
                    int64_t * v20 = (int64_t *)(a1 + 248); // 0x49b521
                    uint64_t v21 = *v20; // 0x49b521
                    v9 = (int64_t *)(a1 + 232);
                    uint64_t v22 = *v9;
                    v6 = v22;
                    if (v21 == 0) {
                        goto lab_0x49b562;
                    } else {
                        // 0x49b531
                        v7 = a6;
                        v8 = (int64_t)&g49;
                        if (v22 < v21) {
                            goto lab_0x49ba2a;
                        } else {
                            int64_t v23 = v22 - v21; // 0x49b541
                            *v9 = v23;
                            int64_t v24 = 0; // 0x49b551
                            if (v23 != 0) {
                                // 0x49b950
                                function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g51, "next record in same datagram, offset: %d", v21);
                                int64_t v25 = *v5; // 0x49b975
                                memmove((int64_t *)v25, (int64_t *)(*v20 + v25), (int32_t)*v9);
                                v24 = *v9;
                            }
                            // 0x49b557
                            *v20 = 0;
                            v6 = v24;
                            goto lab_0x49b562;
                        }
                    }
                }
            }
        }
    }
  lab_0x49b927:
    // 0x49b927
    function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", (int64_t *)v2, (char *)v1, a6);
    // 0x49b76e
    return 0xffff8f00;
  lab_0x49b562:
    // 0x49b562
    function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g52, "in_left: %d, nb_want: %d", v6);
    uint64_t v26 = *v9; // 0x49b588
    v4 = (int64_t)&g53;
    v3 = v6;
    int64_t result; // 0x49b4a0
    int64_t v27; // 0x49b4a0
    int32_t * v28; // 0x49b4a0
    if (v26 < a2) {
        // 0x49b5a4
        v7 = v6;
        v8 = (int64_t)&g54;
        if (v26 != 0) {
            goto lab_0x49ba2a;
        } else {
            int64_t v29 = function_4956b0(a1); // 0x49b5b0
            v28 = (int32_t *)(a1 + 8);
            v27 = v6;
            if ((int32_t)v29 == 0) {
                // 0x49b698
                int64_t v30; // 0x49b4a0
                if (*v28 == 16) {
                    // 0x49b900
                    v30 = a1 + 336;
                } else {
                    // 0x49b6b7
                    v30 = *(int64_t *)(a1 + 96) + (int64_t)&g19;
                }
                uint32_t v31 = *(int32_t *)v30;
                function_49e770(a1, 3, "/home/richard/code/mbedtls/library/ssl_tls.c", (int64_t *)&g56, "f_recv_timeout: %u ms", (int64_t)v31);
                int64_t v32 = 0x100000000 * *(int64_t *)(a1 + 48) >> 32;
                int64_t v33 = v32 & 0xffffffff; // 0x49b716
                function_49e8b0(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g58, "ssl->f_recv(_timeout)", v33);
                int32_t v34 = v32; // 0x49b72b
                v27 = v33;
                result = 0xffff8d80;
                switch (v34) {
                    case 0: {
                        return result;
                    }
                    case -0x6800: {
                        goto lab_0x49b5bd;
                    }
                    default: {
                        // 0x49b73f
                        if (v34 < 0) {
                            // 0x49b76e
                            return v32 & 0xffffffff;
                        }
                        // 0x49b743
                        *v9 = v32;
                        v4 = (int64_t)&g66;
                        v3 = v33;
                        goto lab_0x49b756;
                    }
                }
            } else {
                goto lab_0x49b5bd;
            }
        }
    } else {
        goto lab_0x49b756;
    }
  lab_0x49ba2a:
    // 0x49ba2a
    function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", (int64_t *)v8, "should never happen", v7);
    // 0x49b76e
    return 0xffff9400;
  lab_0x49b5bd:
    // 0x49b5bd
    function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g59, "timeout", v27);
    function_4945c0(a1, 0);
    if (*v28 == 16) {
        // 0x49b9b0
        if (*v10 % 2 == 0 || *(int32_t *)(a1 + 12) != 3) {
            // 0x49b76e
            return 0xffff9800;
        }
        int64_t result2 = function_499c70(a1); // 0x49b9d2
        if ((int32_t)result2 == 0) {
            // 0x49b9a0
            return result2;
        }
        int64_t v35 = result2 & 0xffffffff; // 0x49b9d9
        function_49e8b0(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g62, "ssl_resend_hello_request", v35);
        // 0x49b76e
        return v35 & 0xffffffff;
    }
    int32_t * v36 = (int32_t *)(*(int64_t *)(a1 + 96) + (int64_t)&g19); // 0x49b5fa
    uint32_t v37 = *v36; // 0x49b5fa
    int64_t result3 = v37; // 0x49b5fa
    uint32_t v38 = *(int32_t *)(a1 + 344); // 0x49b600
    if (v37 >= v38) {
        // 0x49b9a0
        return result3;
    }
    int64_t v39 = v38; // 0x49b600
    int64_t v40 = 2 * result3; // 0x49b610
    uint32_t v41 = (int32_t)v40; // 0x49b613
    int64_t v42 = v39; // 0x49b615
    if (v37 <= v41) {
        // 0x49b617
        v42 = (v38 > v41 ? v40 : v39) & 0xffffffff;
    }
    // 0x49b61e
    *v36 = (int32_t)v42;
    function_49e770(a1, 3, "/home/richard/code/mbedtls/library/ssl_tls.c", (int64_t *)126, "update timeout value to %d millisecs", v42);
    int64_t v43 = function_49a910(a1); // 0x49b64a
    result = v43;
    if ((int32_t)v43 == 0) {
        // 0x49b9a0
        return result;
    }
    int64_t v44 = v43 & 0xffffffff; // 0x49b651
    function_49e8b0(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g61, "mbedtls_ssl_resend", v44);
    // 0x49b76e
    return v44 & 0xffffffff;
}

// Address range: 0x49d320 - 0x49d875
int64_t function_49d320(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x49d320
    if (a1 == 0) {
        // 0x49d450
        return 0xffff8f00;
    }
    // 0x49d353
    int64_t v1; // 0x49d320
    function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g3, "=> read", v1);
    char * v2 = (char *)(a1 + 372);
    if ((*v2 & 2) != 0) {
        int64_t v3 = function_496540(a1); // 0x49d387
        if ((int32_t)v3 != 0) {
            // 0x49d450
            return v3 & 0xffffffff & 0xffffffff;
        }
        int64_t v4 = *(int64_t *)(a1 + 96); // 0x49d396
        if (v4 != 0) {
            // 0x49d39f
            if (*(char *)(v4 + (int64_t)&g20) == 1) {
                int64_t v5 = function_49a910(a1); // 0x49d5a3
                if ((int32_t)v5 != 0) {
                    // 0x49d450
                    return v5 & 0xffffffff & 0xffffffff;
                }
            }
        }
    }
    int64_t v6 = function_499dd0(a1); // 0x49d3af
    int64_t v7 = v6 & 0xffffffff; // 0x49d3b6
    if ((int32_t)v6 != 0) {
        // 0x49d568
        function_49e8b0(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g4, "ssl_check_ctr_renegotiate", v7);
        // 0x49d450
        return v7 & 0xffffffff;
    }
    int32_t * v8 = (int32_t *)(a1 + 8); // 0x49d3be
    int32_t v9 = 0; // 0x49d3c2
    int64_t v10; // 0x49d320
    int64_t v11; // 0x49d320
    int64_t v12; // 0x49d320
    int64_t v13; // 0x49d320
    if (*v8 == 16) {
        goto lab_0x49d3f1;
    } else {
        int64_t v14 = function_4976c0(a1); // 0x49d3c7
        int32_t v15 = v14; // 0x49d3cc
        v9 = 1;
        if (v15 == -0x6b00) {
            goto lab_0x49d3f1;
        } else {
            int64_t v16 = v14 & 0xffffffff;
            v12 = v16;
            v9 = 0;
            v10 = v16;
            v13 = (int64_t)&g5;
            v11 = (int64_t)"mbedtls_ssl_handshake";
            if (v15 != 0) {
                goto lab_0x49d4a2;
            } else {
                goto lab_0x49d3f1;
            }
        }
    }
  lab_0x49d3f1:;
    int64_t v17 = v12;
    int64_t * v18 = (int64_t *)(a1 + 208); // 0x49d3f1
    int64_t v19 = *v18; // 0x49d3f1
    int64_t * v20; // 0x49d320
    int64_t v21; // 0x49d320
    int64_t v22; // 0x49d320
    int64_t v23; // 0x49d320
    if (v19 == 0) {
        int64_t v24 = *(int64_t *)(a1 + 152); // 0x49d4c8
        int64_t v25 = a1; // 0x49d4d2
        if (v24 != 0) {
            int64_t v26 = *(int64_t *)(a1 + 136); // 0x49d4d4
            v25 = v26;
            if ((int32_t)v24 == -1) {
                // 0x49d6b0
                function_4945c0(a1, *(int32_t *)(v26 + 336));
                v25 = a1;
            }
        }
        // 0x49d4e6
        v22 = v25;
        if (v9 == 0) {
            int64_t v27 = function_49d220(a1); // 0x49d483
            v21 = v7;
            v22 = a1;
            switch ((int32_t)v27) {
                case 0: {
                    goto lab_0x49d4eb;
                }
                case -0x7280: {
                    return v21 & 0xffffffff;
                }
                default: {
                    // 0x49d493
                    v10 = v27 & 0xffffffff;
                    v13 = (int64_t)&g6;
                    v11 = (int64_t)"mbedtls_ssl_read_record";
                    goto lab_0x49d4a2;
                }
            }
        } else {
            goto lab_0x49d4eb;
        }
    } else {
        // 0x49d3f1
        v20 = (int64_t *)(a1 + 224);
        v23 = v19;
        goto lab_0x49d401;
    }
  lab_0x49d4eb:;
    int64_t * v28 = (int64_t *)(a1 + 224);
    int32_t * v29 = (int32_t *)(a1 + 216); // 0x49d4f3
    int32_t v30 = *v29; // 0x49d4f3
    int32_t v31 = v30; // 0x49d4f9
    int64_t v32 = v22; // 0x49d4f9
    if (*v28 == 0 == v30 == 23) {
        int64_t v33 = function_49d220(a1); // 0x49d6c9
        int32_t v34 = v33; // 0x49d6ce
        if (v34 != 0) {
            // 0x49d7da
            if (v34 == -0x7280) {
                // 0x49d450
                return v7 & 0xffffffff;
            }
            // 0x49d7e5
            v10 = v33 & 0xffffffff;
            v13 = (int64_t)&g7;
            v11 = (int64_t)"mbedtls_ssl_read_record";
            goto lab_0x49d4a2;
        } else {
            // 0x49d6d6
            v31 = *v29;
            v32 = a1;
            goto lab_0x49d504;
        }
    } else {
        goto lab_0x49d504;
    }
  lab_0x49d401:;
    uint64_t v35 = *v20; // 0x49d401
    int64_t v36 = v35 < a3 ? v35 : a3; // 0x49d40e
    memcpy((int64_t *)a2, (int64_t *)v23, (int32_t)v36);
    int64_t v37 = *v20 - v36; // 0x49d41a
    *v20 = v37;
    int64_t v38 = 0; // 0x49d421
    if (v37 != 0) {
        // 0x49d470
        v38 = *v18 + v36;
    }
    // 0x49d42e
    *v18 = v38;
    function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g17, "<= read", v17);
    // 0x49d450
    return v36 & 0xffffffff;
  lab_0x49d4a2:
    // 0x49d4a2
    function_49e8b0(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", (int64_t *)v13, (char *)v11, v10);
    // 0x49d450
    return v10 & 0xffffffff;
  lab_0x49d504:;
    // 0x49d504
    int64_t v39; // 0x49d320
    int64_t v40; // 0x49d320
    int64_t v41; // 0x49d320
    int64_t v42; // 0x49d320
    uint64_t v43; // 0x49d64c
    if (v31 == 22) {
        // 0x49d620
        function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g8, "received handshake message", v17);
        int64_t v44 = *(int64_t *)(a1 + 200); // 0x49d645
        unsigned char v45 = *v2; // 0x49d64c
        v43 = (int64_t)v45;
        char v46 = *(char *)v44;
        if (v45 % 2 == 0) {
            // 0x49d6e1
            v41 = (int64_t)"handshake received (not HelloRequest)";
            v39 = (int64_t)&g9;
            if (v46 != 0) {
                goto lab_0x49d670;
            } else {
                int64_t v47 = v43 & 2; // 0x49d6e8
                int64_t v48 = *(int64_t *)(a1 + 272); // 0x49d6f9
                v41 = (int64_t)"handshake received (not HelloRequest)";
                v39 = (int64_t)&g9;
                if (v48 == (v47 - (v47 | (int64_t)(v47 == 0)) & -8) + 12) {
                    goto lab_0x49d713;
                } else {
                    goto lab_0x49d670;
                }
            }
        } else {
            // 0x49d65b
            v41 = (int64_t)"handshake received (not ClientHello)";
            v39 = (int64_t)&g10;
            if (v46 == 1) {
                goto lab_0x49d713;
            } else {
                goto lab_0x49d670;
            }
        }
    } else {
        // 0x49d50d
        if (*(int32_t *)(a1 + 12) == 3) {
            uint32_t v49 = *(int32_t *)(v32 + 348); // 0x49d5c3
            if (v49 < 0) {
                goto lab_0x49d517;
            } else {
                int32_t * v50 = (int32_t *)(a1 + 16); // 0x49d5d1
                uint32_t v51 = *v50 + 1; // 0x49d5d4
                *v50 = v51;
                v40 = (int64_t)"renegotiation requested, but not honored by client";
                v42 = (int64_t)&g13;
                if (v49 < v51) {
                    goto lab_0x49d5ee;
                } else {
                    goto lab_0x49d517;
                }
            }
        } else {
            goto lab_0x49d517;
        }
    }
  lab_0x49d517:
    // 0x49d517
    if (v31 == 21) {
        // 0x49d84e
        function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g14, "ignoring non-fatal non-closure alert", v17);
        // 0x49d450
        return 0xffff9700;
    }
    // 0x49d520
    v40 = (int64_t)"bad application data message";
    v42 = (int64_t)&g15;
    if (v31 != 23) {
        goto lab_0x49d5ee;
    } else {
        // 0x49d529
        *v18 = *(int64_t *)(a1 + 200);
        char * v52; // 0x49d320
        if (*v8 == 16) {
            // 0x49d6a0
            function_4945c0(a1, 0);
            v52 = v2;
        } else {
            // 0x49d529
            v52 = (char *)(v32 + 372);
        }
        // 0x49d541
        if (*v52 % 2 != 0) {
            // 0x49d54d
            if (*(int32_t *)(a1 + 12) == 3) {
                int64_t v53 = function_499c70(a1); // 0x49d792
                if ((int32_t)v53 != 0) {
                    int64_t v54 = v53 & 0xffffffff; // 0x49d799
                    function_49e8b0(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g16, "ssl_resend_hello_request", v54);
                    v21 = v54;
                    // 0x49d450
                    return v21 & 0xffffffff;
                }
            }
        }
        // 0x49d557
        v20 = v28;
        v23 = *v18;
        goto lab_0x49d401;
    }
  lab_0x49d670:;
    int64_t v55 = v39;
    int64_t v56 = v41;
    function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", (int64_t *)v55, (char *)v56, v17);
    char v57 = *v2; // 0x49d689
    v21 = 0xffff8900;
    int64_t v58; // 0x49d320
    if ((v57 & 2) == 0) {
        // 0x49d450
        v58 = v21;
        return v58 & 0xffffffff;
    }
    // 0x49d696
    v21 = 0xffff9700;
    // 0x49d450
    v58 = v21;
    return v58 & 0xffffffff;
  lab_0x49d713:;
    char v59 = *(char *)(a1 + 373); // 0x49d713
    if ((v59 & 64) == 0) {
        goto lab_0x49d732;
    } else {
        int32_t v60 = *(int32_t *)(a1 + 400); // 0x49d71c
        if (v60 != 0) {
            goto lab_0x49d7f9;
        } else {
            if ((v43 & 48) != 0) {
                goto lab_0x49d7f9;
            } else {
                goto lab_0x49d732;
            }
        }
    }
  lab_0x49d5ee:
    // 0x49d5ee
    function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", (int64_t *)v42, (char *)v40, v17);
    // 0x49d450
    return 0xffff8900;
  lab_0x49d732:
    // 0x49d732
    function_49e770(a1, 3, "/home/richard/code/mbedtls/library/ssl_tls.c", &g11, "refusing renegotiation, sending alert", v17);
    uint32_t result = *(int32_t *)(a1 + 24); // 0x49d754
    if (result < 1) {
        // 0x49d875
        return result;
    }
    int64_t v61 = function_49a730(a1, 1, 100); // 0x49d76c
    v21 = v61 & 0xffffffff;
    if ((int32_t)v61 != 0) {
        // 0x49d450
        v58 = v21;
        return v58 & 0xffffffff;
    }
    goto lab_0x49d77b;
  lab_0x49d77b:;
    int32_t v62; // 0x49d320
    if (v62 == 0) {
        // 0x49d696
        v21 = 0xffff9700;
        // 0x49d450
        v58 = v21;
        return v58 & 0xffffffff;
    }
    goto lab_0x49d784;
  lab_0x49d7f9:
    if (v43 % 4 == 2) {
        // 0x49d845
        *(int32_t *)(a1 + 12) = 3;
    }
    int64_t v63 = function_497d70(a1); // 0x49d803
    switch ((int32_t)v63) {
        case -0x6b00: {
            goto lab_0x49d784;
        }
        case 0: {
            goto lab_0x49d77b;
        }
        default: {
            int64_t v64 = v63 & 0xffffffff; // 0x49d80d
            function_49e8b0(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g12, "ssl_start_renegotiation", v64);
            v21 = v64;
            // 0x49d450
            v58 = v21;
            return v58 & 0xffffffff;
        }
    }
  lab_0x49d784:
    // 0x49d784
    goto lab_0x49d517;
}

// Address range: 0x4ca380 - 0x4ca3c7
int64_t function_4ca380(int64_t a1, int64_t a2, int64_t a3) {
    int32_t v1 = *(int32_t *)(a1 + 328); // 0x4ca380
    if (v1 == 0) {
        // 0x4ca394
        return function_4ca080();
    }
    if (v1 == 1) {
        // 0x4ca3b8
        return function_4c9db0();
    }
    // 0x4ca3ad
    return 0xffffbf00;
}

// Address range: 0x4ca3d0 - 0x4ca726
int64_t function_4ca3d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int32_t a9, int64_t a10) {
    int32_t v1 = a4; // 0x4ca3fb
    int64_t v2; // 0x4ca3d0
    int64_t v3; // 0x4ca3d0
    int64_t v4; // 0x4ca3d0
    if (v1 == 1) {
        // 0x4ca610
        if (*(int32_t *)(a1 + 328) != 1) {
            // 0x4ca5a8
            return 0xffffbf80;
        }
        int64_t v5 = *(int64_t *)(a1 + 8); // 0x4ca619
        v2 = v5;
        if (v5 - 16 > (int64_t)&g21) {
            // 0x4ca5a8
            return 0xffffbf80;
        }
        goto lab_0x4ca425;
    } else {
        int64_t v6 = *(int64_t *)(a1 + 8); // 0x4ca409
        if (v6 - 16 > (int64_t)&g21) {
            // 0x4ca5a8
            return 0xffffbf80;
        }
        // 0x4ca41d
        v2 = v6;
        if (v1 == 0) {
            // 0x4ca5e8
            v3 = v6;
            v4 = function_4c8fa0();
            goto lab_0x4ca443;
        } else {
            goto lab_0x4ca425;
        }
    }
  lab_0x4ca425:
    // 0x4ca425
    v3 = v2;
    v4 = function_4c9080(a1);
    goto lab_0x4ca443;
  lab_0x4ca443:
    // 0x4ca443
    if ((int32_t)v4 != 0) {
        // 0x4ca5a8
        return v4 & 0xffffffff & 0xffffffff;
    }
    int64_t v7 = v3 - 1; // 0x4ca44c
    int32_t v8; // bp-1224, 0x4ca3d0
    if (*(char *)((int64_t)&v8 + 144 + v7) != -68) {
        // 0x4ca5a8
        return 0xffffbf00;
    }
    int64_t v9 = 0x100000000 * a6 >> 32; // 0x4ca468
    if ((int32_t)a5 != 0) {
        int64_t v10 = function_4c14d0(a5 & 0xffffffff); // 0x4ca46d
        if (v10 == 0) {
            // 0x4ca5a8
            return 0xffffbf80;
        }
        // 0x4ca47b
        v9 = function_4c1d00(v10) % 256;
    }
    int64_t v11 = function_4c14d0(a8 & 0xffffffff); // 0x4ca491
    if (v11 == 0) {
        // 0x4ca5a8
        return 0xffffbf80;
    }
    uint64_t v12 = function_4c1d00(v11); // 0x4ca4a8
    int64_t v13 = 0; // bp-1192, 0x4ca4b5
    int64_t v14 = function_4b0f10(a1 + 16); // 0x4ca4be
    uint64_t v15 = v14 - 1; // 0x4ca4c3
    int64_t v16 = v15 % 8 != 0 ? v3 : v7;
    int32_t v17; // bp-1080, 0x4ca3d0
    if (v17 % 256 >> (int32_t)(v14 + 7 - 8 * v16) % 32 != 0) {
        // 0x4ca5a8
        return 0xffffbf80;
    }
    // 0x4ca4f3
    int64_t v18; // bp-1176, 0x4ca3d0
    function_4c1690(&v18);
    int32_t v19 = function_4c1770(&v18, v11, 0); // 0x4ca50c
    v8 = v19;
    if (v19 != 0) {
        // 0x4ca710
        function_4c16b0(&v18);
        // 0x4ca5a8
        return (int64_t)v8 & 0xffffffff;
    }
    int64_t v20 = (int64_t)&v17;
    uint64_t n = v12 % 256;
    int64_t v21; // bp-1079, 0x4ca3d0
    int64_t v22 = v15 % 8 != 0 ? v20 : (int64_t)&v21;
    uint64_t v23 = v16 + v20; // 0x4ca528
    int64_t v24 = v16 + -1 - n; // 0x4ca536
    function_4c8790(v22, v24, v24 + v22, n, &v18);
    v17 = 0x1000000 * (v17 & 255 >> (8 * (int32_t)v16 - (int32_t)v15) % 32) / 0x1000000;
    char v25; // 0x4ca3d0
    int64_t v26; // 0x4ca3d0
    if (v22 < v23) {
        // 0x4ca56d
        if (*(char *)v22 == 0) {
            int64_t v27 = v22 + 1; // 0x4ca58a
            while (v27 != v23) {
                char v28 = *(char *)v27; // 0x4ca580
                v25 = v28;
                v26 = v27;
                if (v28 != 0) {
                    goto lab_0x4ca648;
                }
                v27++;
            }
            // 0x4ca593
            function_4c16b0(&v18);
            // 0x4ca5a8
            return 0xffffbf00;
        }
    }
    if (v22 == v23) {
        // 0x4ca593
        function_4c16b0(&v18);
        // 0x4ca5a8
        return 0xffffbf00;
    }
    // 0x4ca63b
    v25 = *(char *)v22;
    v26 = v22;
  lab_0x4ca648:
    // 0x4ca648
    if (v25 != 1) {
        // 0x4ca593
        function_4c16b0(&v18);
        // 0x4ca5a8
        return 0xffffbf00;
    }
    int64_t v29 = v26 + 1; // 0x4ca64c
    int64_t v30 = v7 - n; // 0x4ca656
    int64_t v31 = v20 - v29 + v30; // 0x4ca65c
    if (a9 != -1) {
        if (v31 != (int64_t)a9) {
            // 0x4ca593
            function_4c16b0(&v18);
            // 0x4ca5a8
            return 0xffffbf00;
        }
    }
    // 0x4ca67a
    function_4c1820(&v18);
    function_4c1850(&v18, &v13, 8);
    function_4c1850(&v18, (int64_t *)a7, v9 & 0xffffffff);
    function_4c1850(&v18, (int64_t *)v29, v31);
    int64_t str; // bp-1144, 0x4ca3d0
    function_4c1880(&v18, &str);
    function_4c16b0(&v18);
    int32_t memcmp_rc = memcmp((int64_t *)(v30 + v20), &str, (int32_t)n); // 0x4ca6f1
    // 0x4ca5a8
    return (memcmp_rc != 0 ? 0xffffbc80 : (int64_t)v8) & 0xffffffff;
}

// Address range: 0x4ca730 - 0x4ca769
int64_t function_4ca730(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int32_t v1 = *(int32_t *)(a1 + 332); // 0x4ca734
    int32_t v2 = v1 == 0 ? (int32_t)a5 : v1; // 0x4ca749
    int64_t v3; // 0x4ca730
    return function_4ca3d0(a1, a2, a3, a4, a5, v3, a6, (int64_t)v2, -1, a7);
}

// Address range: 0x4ca770 - 0x4ca955
int64_t function_4ca770(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x4ca770
    char v1; // 0x4ca770
    unsigned char v2 = v1;
    int32_t v3 = a4; // 0x4ca785
    if (v3 == 1) {
        // 0x4ca950
        int64_t result; // 0x4ca770
        return result;
    }
    int64_t v4 = *(int64_t *)(a1 + 8); // 0x4ca78e
    int64_t result2 = v4 - 16; // 0x4ca792
    if (v3 == 0 || result2 > (int64_t)&g21) {
        // 0x4ca950
        return result2;
    }
    int64_t result3 = function_4c9080(a1); // 0x4ca7ba
    char v5; // bp-1064, 0x4ca770
    if ((int32_t)result3 != 0 || v5 != 0 || v1 != 1) {
        // 0x4ca950
        return result3;
    }
    int64_t v6 = (int64_t)&v5; // 0x4ca7aa
    char v7; // bp-1062, 0x4ca770
    int64_t v8 = (int64_t)&v7; // 0x4ca7d9
    int64_t result4 = v2; // 0x4ca7e3
    int64_t v9 = v8; // 0x4ca7ea
    int64_t v10; // bp-1104, 0x4ca770
    if (v2 != 0) {
        uint64_t v11 = v4 + v6 - 1; // 0x4ca7ec
        if (v2 != -1 || v11 <= v8) {
            // 0x4ca950
            return result4;
        }
        // 0x4ca802
        int64_t v12; // bp-1061, 0x4ca770
        int64_t v13 = (int64_t)&v12; // 0x4ca806
        v10 = v13;
        char v14 = *(char *)v13; // 0x4ca82c
        v9 = v13;
        while (v14 != 0) {
            // 0x4ca810
            if (v13 == v11) {
                // 0x4ca950
                return result4;
            }
            // 0x4ca819
            v13++;
            if (v14 != -1) {
                // 0x4ca950
                return result4;
            }
            v10 = v13;
            v14 = *(char *)v13;
            v9 = v13;
        }
    }
    int64_t v15 = v9 + 1; // 0x4ca837
    v10 = v15;
    int64_t v16 = v6 - v15 + v4; // 0x4ca846
    int32_t v17 = a5; // 0x4ca84e
    if (v17 == 0 == (a6 & 0xffffffff) == v16) {
        // 0x4ca950
        return result4;
    }
    int64_t v18 = function_4c14d0(a5 & 0xffffffff); // 0x4ca858
    if (v18 == 0) {
        // 0x4ca950
        return 0;
    }
    uint64_t v19 = function_4c1d00(v18); // 0x4ca869
    int64_t v20 = v4 + v6; // 0x4ca886
    int64_t v21; // bp-1112, 0x4ca770
    int64_t result5 = function_4afe70(&v10, v20, &v21, 48); // 0x4ca88c
    if ((int32_t)result5 != 0 || v21 + 2 != v16) {
        // 0x4ca950
        return result5;
    }
    int64_t result6 = function_4afe70(&v10, v20, &v21, 48); // 0x4ca8bd
    if ((int32_t)result6 != 0) {
        // 0x4ca950
        return result6;
    }
    int64_t result7 = v19 % 256 + 6 + v21; // 0x4ca8cf
    if (v16 != result7) {
        // 0x4ca950
        return result7;
    }
    // 0x4ca8dd
    int64_t v22; // bp-1088, 0x4ca770
    int64_t result8 = function_4afe70(&v10, v20, &v22, 6); // 0x4ca8ef
    if ((int32_t)result8 != 0) {
        // 0x4ca950
        return result8;
    }
    // 0x4ca8fc
    v10 += v22;
    int64_t v23; // bp-1096, 0x4ca770
    int32_t v24; // bp-1116, 0x4ca770
    int64_t result9 = function_4c3510(&v23, (int64_t *)&v24); // 0x4ca91a
    if ((int32_t)result9 != 0) {
        // 0x4ca950
        return result9;
    }
    int64_t result10 = result9; // 0x4ca92b
    if (v24 == v17) {
        // 0x4ca931
        result10 = function_4afe70(&v10, v20, &v21, 5);
    }
    // 0x4ca950
    return result10;
}

// Address range: 0x4f4170 - 0x4f470b
int64_t function_4f4170(int64_t a1, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x4f4184
    int64_t * v2 = (int64_t *)(a1 + 16); // 0x4f4194
    int64_t v3 = *v2; // 0x4f4194
    if (v3 == 0) {
        int64_t result = function_4efd30(160); // 0x4f46a5
        *(int32_t *)(result + 8) = 0;
        *(int64_t *)(result + 16) = 0;
        *(int64_t *)(result + 24) = 0;
        *(char *)(result + 32) = 0;
        *(int64_t *)(result + 36) = 0;
        *(int64_t *)(result + 48) = 0;
        *(int64_t *)(result + 56) = 0;
        *(int64_t *)result = (int64_t)&g33;
        *(int64_t *)(result + 64) = 0;
        *(int64_t *)(result + 72) = 0;
        *(int64_t *)(result + 80) = 0;
        *(int64_t *)(result + 88) = 0;
        return result;
    }
    if (a2 == 0) {
        // 0x4f43e8
        *(int32_t *)(v3 + 36) = 46;
        *(int32_t *)(*v2 + 40) = 44;
        *(int64_t *)(*v2 + 16) = (int64_t)&g28;
        *(int64_t *)(*v2 + 24) = 0;
        *(char *)(*v2 + 32) = 0;
        *(int64_t *)(*v2 + 48) = (int64_t)&g27;
        *(int64_t *)(*v2 + 56) = 0;
        *(int64_t *)(*v2 + 64) = (int64_t)&g27;
        *(int64_t *)(*v2 + 72) = 0;
        *(int64_t *)(*v2 + 80) = (int64_t)&g27;
        *(int64_t *)(*v2 + 88) = 0;
        *(int32_t *)(*v2 + 96) = 0;
        *(int32_t *)(*v2 + 100) = 0x4000302;
        *(int32_t *)(*v2 + 104) = 0x4000302;
        int64_t v4 = (int32_t)&g36 ^ (int32_t)&g36; // 0x4f4492
        int64_t v5 = v4;
        char v6 = *(char *)(v5 + *(int64_t *)&g36); // 0x4f4498
        *(int32_t *)(4 * v5 + 108 + *v2) = (int32_t)v6;
        v4 = v5 + 1;
        while (v5 != 10) {
            // 0x4f4498
            v5 = v4;
            v6 = *(char *)(v5 + *(int64_t *)&g36);
            *(int32_t *)(4 * v5 + 108 + *v2) = (int32_t)v6;
            v4 = v5 + 1;
        }
        // 0x4f43bf
        return __readfsqword(40) ^ v1;
    }
    struct __locale_struct * v7 = (struct __locale_struct *)a2; // 0x4f41ab
    struct __locale_struct * v8 = __uselocale(v7); // 0x4f41ab
    *(int32_t *)(*v2 + 36) = (int32_t)(int64_t)__nl_langinfo_l(0x4002b, v7);
    *(int32_t *)(*v2 + 40) = (int32_t)(int64_t)__nl_langinfo_l(0x4002c, v7);
    int64_t v9 = *v2; // 0x4f41db
    if (*(int32_t *)(v9 + 36) != 0) {
        // 0x4f4590
        *(int32_t *)(*v2 + 96) = (int32_t)*__nl_langinfo_l(0x40007, v7);
    } else {
        // 0x4f41ea
        *(int32_t *)(v9 + 96) = 0;
        *(int32_t *)(*v2 + 36) = 46;
    }
    char * str = __nl_langinfo_l(0x40004, v7); // 0x4f4204
    char * str3 = __nl_langinfo_l(0x40005, v7); // 0x4f4214
    char * str2 = str3; // bp-96, 0x4f4221
    char * str4 = __nl_langinfo_l(0x40006, v7); // bp-88, 0x4f4233
    char * str5 = __nl_langinfo_l(0x40000, v7); // bp-80, 0x4f4245
    char * v10 = __nl_langinfo_l(0x40015, v7); // 0x4f424a
    int64_t v11 = *v2; // 0x4f424f
    char v12 = *v10; // 0x4f4253
    int32_t v13; // 0x4f4170
    if (*(int32_t *)(v11 + 40) != 0) {
        int32_t len = strlen(str); // 0x4f44e7
        int64_t v14 = len; // 0x4f44e7
        if (len != 0) {
            int64_t v15 = v14 + 1; // 0x4f45b0
            int64_t v16 = function_4eec00(v15); // 0x4f45bb
            memcpy((int64_t *)v16, (int64_t *)str, (int32_t)v15);
            *(int64_t *)(*v2 + 16) = v16;
        } else {
            // 0x4f44fc
            *(int64_t *)((0x100000000 * v11 >> 32) + 16) = (int64_t)&g28;
            *(char *)(*v2 + 32) = 0;
        }
        // 0x4f4518
        *(int64_t *)(*v2 + 24) = v14;
        int32_t len2 = strlen(str2); // 0x4f4525
        v13 = len2;
        if (len2 == 0) {
            // 0x4f42a8
            *(int64_t *)(*v2 + 64) = (int64_t)&g27;
            goto lab_0x4f42ba;
        } else {
            goto lab_0x4f4533;
        }
    } else {
        // 0x4f4262
        *(int64_t *)(v11 + 16) = (int64_t)&g28;
        *(int64_t *)(*v2 + 24) = 0;
        *(char *)(*v2 + 32) = 0;
        *(int32_t *)(*v2 + 40) = 44;
        int32_t len3 = strlen(str3); // 0x4f429a
        v13 = len3;
        if (len3 != 0) {
            goto lab_0x4f4533;
        } else {
            // 0x4f42a8
            *(int64_t *)(*v2 + 64) = (int64_t)&g27;
            goto lab_0x4f42ba;
        }
    }
  lab_0x4f4533:;
    uint64_t len6 = (int64_t)v13 + 1; // 0x4f4533
    int64_t ps = 0; // bp-72, 0x4f4541
    int64_t wstr = function_4eec00(len6 < 0x1fffffffffffffff ? 4 * len6 : -1); // 0x4f4560
    mbsrtowcs((int32_t *)wstr, &str2, (int32_t)len6, (struct _TYPEDEF___mbstate_t *)&ps);
    *(int64_t *)(*v2 + 64) = wstr;
    goto lab_0x4f42ba;
  lab_0x4f42ba:;
    int64_t v17 = *v2; // 0x4f42ba
    int32_t v18 = wcslen((int32_t *)*(int64_t *)(v17 + 64)); // 0x4f42c2
    *(int64_t *)(v17 + 72) = (int64_t)v18;
    int32_t len4 = strlen(str4); // 0x4f42d0
    if (v12 != 0) {
        if (len4 != 0) {
            uint64_t len7 = (int64_t)len4 + 1; // 0x4f45e8
            ps = 0;
            int64_t wstr2 = function_4eec00(len7 < 0x1fffffffffffffff ? 4 * len7 : -1); // 0x4f4615
            mbsrtowcs((int32_t *)wstr2, &str4, (int32_t)len7, (struct _TYPEDEF___mbstate_t *)&ps);
            *(int64_t *)(*v2 + 80) = wstr2;
        } else {
            // 0x4f44c1
            *(int64_t *)(*v2 + 80) = (int64_t)&g27;
        }
    } else {
        // 0x4f42de
        *(int64_t *)(*v2 + 80) = (int64_t)L"()";
    }
    int64_t v19 = *v2; // 0x4f42f5
    int32_t v20 = wcslen((int32_t *)*(int64_t *)(v19 + 80)); // 0x4f42fd
    *(int64_t *)(v19 + 88) = (int64_t)v20;
    int32_t len5 = strlen(str5); // 0x4f430b
    if (len5 != 0) {
        uint64_t len8 = (int64_t)len5 + 1; // 0x4f4648
        ps = 0;
        int64_t wstr3 = function_4eec00(len8 < 0x1fffffffffffffff ? 4 * len8 : -1); // 0x4f4675
        mbsrtowcs((int32_t *)wstr3, &str5, (int32_t)len8, (struct _TYPEDEF___mbstate_t *)&ps);
        *(int64_t *)(*v2 + 48) = wstr3;
    } else {
        // 0x4f4319
        *(int64_t *)(*v2 + 48) = (int64_t)&g27;
    }
    int64_t v21 = *v2; // 0x4f4328
    int32_t v22 = wcslen((int32_t *)*(int64_t *)(v21 + 48)); // 0x4f4330
    *(int64_t *)(v21 + 56) = (int64_t)v22;
    char v23 = *__nl_langinfo_l(0x40010, v7); // 0x4f4346
    char v24 = *__nl_langinfo_l(0x40011, v7); // 0x4f435c
    int64_t v25 = function_4f3230((int64_t)v23, (int64_t)v24, *__nl_langinfo_l(0x40014, v7)); // 0x4f4379
    *(int32_t *)(*v2 + 100) = (int32_t)v25;
    char v26 = *__nl_langinfo_l(0x40012, v7); // 0x4f4392
    int64_t v27 = function_4f3230((int64_t)v26, (int64_t)*__nl_langinfo_l(0x40013, v7), v12); // 0x4f43af
    *(int32_t *)(*v2 + 104) = (int32_t)v27;
    __uselocale(v8);
    // 0x4f43bf
    return __readfsqword(40) ^ v1;
}

// Address range: 0x4f47e0 - 0x4f4d7b
int64_t function_4f47e0(int64_t a1, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x4f47f4
    int64_t * v2 = (int64_t *)(a1 + 16); // 0x4f4804
    int64_t v3 = *v2; // 0x4f4804
    if (v3 == 0) {
        int64_t result = function_4efd30(160); // 0x4f4d15
        *(int32_t *)(result + 8) = 0;
        *(int64_t *)(result + 16) = 0;
        *(int64_t *)(result + 24) = 0;
        *(char *)(result + 32) = 0;
        *(int64_t *)(result + 36) = 0;
        *(int64_t *)(result + 48) = 0;
        *(int64_t *)(result + 56) = 0;
        *(int64_t *)result = (int64_t)&g34;
        *(int64_t *)(result + 64) = 0;
        *(int64_t *)(result + 72) = 0;
        *(int64_t *)(result + 80) = 0;
        *(int64_t *)(result + 88) = 0;
        return result;
    }
    if (a2 == 0) {
        // 0x4f4a58
        *(int32_t *)(v3 + 36) = 46;
        *(int32_t *)(*v2 + 40) = 44;
        *(int64_t *)(*v2 + 16) = (int64_t)&g28;
        *(int64_t *)(*v2 + 24) = 0;
        *(char *)(*v2 + 32) = 0;
        *(int64_t *)(*v2 + 48) = (int64_t)&g27;
        *(int64_t *)(*v2 + 56) = 0;
        *(int64_t *)(*v2 + 64) = (int64_t)&g27;
        *(int64_t *)(*v2 + 72) = 0;
        *(int64_t *)(*v2 + 80) = (int64_t)&g27;
        *(int64_t *)(*v2 + 88) = 0;
        *(int32_t *)(*v2 + 96) = 0;
        *(int32_t *)(*v2 + 100) = 0x4000302;
        *(int32_t *)(*v2 + 104) = 0x4000302;
        int64_t v4 = (int32_t)&g36 ^ (int32_t)&g36; // 0x4f4b02
        int64_t v5 = v4;
        char v6 = *(char *)(v5 + *(int64_t *)&g36); // 0x4f4b08
        *(int32_t *)(4 * v5 + 108 + *v2) = (int32_t)v6;
        v4 = v5 + 1;
        while (v5 != 10) {
            // 0x4f4b08
            v5 = v4;
            v6 = *(char *)(v5 + *(int64_t *)&g36);
            *(int32_t *)(4 * v5 + 108 + *v2) = (int32_t)v6;
            v4 = v5 + 1;
        }
        // 0x4f4a2f
        return __readfsqword(40) ^ v1;
    }
    struct __locale_struct * v7 = (struct __locale_struct *)a2; // 0x4f481b
    struct __locale_struct * v8 = __uselocale(v7); // 0x4f481b
    *(int32_t *)(*v2 + 36) = (int32_t)(int64_t)__nl_langinfo_l(0x4002b, v7);
    *(int32_t *)(*v2 + 40) = (int32_t)(int64_t)__nl_langinfo_l(0x4002c, v7);
    int64_t v9 = *v2; // 0x4f484b
    if (*(int32_t *)(v9 + 36) != 0) {
        // 0x4f4c00
        *(int32_t *)(*v2 + 96) = (int32_t)*__nl_langinfo_l(0x40008, v7);
    } else {
        // 0x4f485a
        *(int32_t *)(v9 + 96) = 0;
        *(int32_t *)(*v2 + 36) = 46;
    }
    char * str = __nl_langinfo_l(0x40004, v7); // 0x4f4874
    char * str3 = __nl_langinfo_l(0x40005, v7); // 0x4f4884
    char * str2 = str3; // bp-96, 0x4f4891
    char * str4 = __nl_langinfo_l(0x40006, v7); // bp-88, 0x4f48a3
    char * str5 = __nl_langinfo_l(0x40001, v7); // bp-80, 0x4f48b5
    char * v10 = __nl_langinfo_l(0x4000e, v7); // 0x4f48ba
    int64_t v11 = *v2; // 0x4f48bf
    char v12 = *v10; // 0x4f48c3
    int32_t v13; // 0x4f47e0
    if (*(int32_t *)(v11 + 40) != 0) {
        int32_t len = strlen(str); // 0x4f4b57
        int64_t v14 = len; // 0x4f4b57
        if (len != 0) {
            int64_t v15 = v14 + 1; // 0x4f4c20
            int64_t v16 = function_4eec00(v15); // 0x4f4c2b
            memcpy((int64_t *)v16, (int64_t *)str, (int32_t)v15);
            *(int64_t *)(*v2 + 16) = v16;
        } else {
            // 0x4f4b6c
            *(int64_t *)((0x100000000 * v11 >> 32) + 16) = (int64_t)&g28;
            *(char *)(*v2 + 32) = 0;
        }
        // 0x4f4b88
        *(int64_t *)(*v2 + 24) = v14;
        int32_t len2 = strlen(str2); // 0x4f4b95
        v13 = len2;
        if (len2 == 0) {
            // 0x4f4918
            *(int64_t *)(*v2 + 64) = (int64_t)&g27;
            goto lab_0x4f492a;
        } else {
            goto lab_0x4f4ba3;
        }
    } else {
        // 0x4f48d2
        *(int64_t *)(v11 + 16) = (int64_t)&g28;
        *(int64_t *)(*v2 + 24) = 0;
        *(char *)(*v2 + 32) = 0;
        *(int32_t *)(*v2 + 40) = 44;
        int32_t len3 = strlen(str3); // 0x4f490a
        v13 = len3;
        if (len3 != 0) {
            goto lab_0x4f4ba3;
        } else {
            // 0x4f4918
            *(int64_t *)(*v2 + 64) = (int64_t)&g27;
            goto lab_0x4f492a;
        }
    }
  lab_0x4f4ba3:;
    uint64_t len6 = (int64_t)v13 + 1; // 0x4f4ba3
    int64_t ps = 0; // bp-72, 0x4f4bb1
    int64_t wstr = function_4eec00(len6 < 0x1fffffffffffffff ? 4 * len6 : -1); // 0x4f4bd0
    mbsrtowcs((int32_t *)wstr, &str2, (int32_t)len6, (struct _TYPEDEF___mbstate_t *)&ps);
    *(int64_t *)(*v2 + 64) = wstr;
    goto lab_0x4f492a;
  lab_0x4f492a:;
    int64_t v17 = *v2; // 0x4f492a
    int32_t v18 = wcslen((int32_t *)*(int64_t *)(v17 + 64)); // 0x4f4932
    *(int64_t *)(v17 + 72) = (int64_t)v18;
    int32_t len4 = strlen(str4); // 0x4f4940
    if (v12 != 0) {
        if (len4 != 0) {
            uint64_t len7 = (int64_t)len4 + 1; // 0x4f4c58
            ps = 0;
            int64_t wstr2 = function_4eec00(len7 < 0x1fffffffffffffff ? 4 * len7 : -1); // 0x4f4c85
            mbsrtowcs((int32_t *)wstr2, &str4, (int32_t)len7, (struct _TYPEDEF___mbstate_t *)&ps);
            *(int64_t *)(*v2 + 80) = wstr2;
        } else {
            // 0x4f4b31
            *(int64_t *)(*v2 + 80) = (int64_t)&g27;
        }
    } else {
        // 0x4f494e
        *(int64_t *)(*v2 + 80) = (int64_t)L"()";
    }
    int64_t v19 = *v2; // 0x4f4965
    int32_t v20 = wcslen((int32_t *)*(int64_t *)(v19 + 80)); // 0x4f496d
    *(int64_t *)(v19 + 88) = (int64_t)v20;
    int32_t len5 = strlen(str5); // 0x4f497b
    if (len5 != 0) {
        uint64_t len8 = (int64_t)len5 + 1; // 0x4f4cb8
        ps = 0;
        int64_t wstr3 = function_4eec00(len8 < 0x1fffffffffffffff ? 4 * len8 : -1); // 0x4f4ce5
        mbsrtowcs((int32_t *)wstr3, &str5, (int32_t)len8, (struct _TYPEDEF___mbstate_t *)&ps);
        *(int64_t *)(*v2 + 48) = wstr3;
    } else {
        // 0x4f4989
        *(int64_t *)(*v2 + 48) = (int64_t)&g27;
    }
    int64_t v21 = *v2; // 0x4f4998
    int32_t v22 = wcslen((int32_t *)*(int64_t *)(v21 + 48)); // 0x4f49a0
    *(int64_t *)(v21 + 56) = (int64_t)v22;
    char v23 = *__nl_langinfo_l(0x40009, v7); // 0x4f49b6
    char v24 = *__nl_langinfo_l(0x4000a, v7); // 0x4f49cc
    int64_t v25 = function_4f3230((int64_t)v23, (int64_t)v24, *__nl_langinfo_l(0x4000d, v7)); // 0x4f49e9
    *(int32_t *)(*v2 + 100) = (int32_t)v25;
    char v26 = *__nl_langinfo_l(0x4000b, v7); // 0x4f4a02
    int64_t v27 = function_4f3230((int64_t)v26, (int64_t)*__nl_langinfo_l(0x4000c, v7), v12); // 0x4f4a1f
    *(int32_t *)(*v2 + 104) = (int32_t)v27;
    __uselocale(v8);
    // 0x4f4a2f
    return __readfsqword(40) ^ v1;
}

// Address range: 0x4f5b50 - 0x4f60fa
int64_t function_4f5b50(int64_t a1, int64_t a2, int64_t a3) {
    char * v1 = (char *)a1; // 0x4f5b53
    *v1 = 0;
    int64_t * v2 = (int64_t *)(a2 - 24); // 0x4f5b56
    int64_t v3 = *v2; // 0x4f5b56
    int64_t v4 = v3 + a2; // 0x4f5b5a
    uint32_t v5 = *(int32_t *)(v4 + 32); // 0x4f5b5d
    if (v5 != 0) {
        // 0x4f5c50
        return function_4fc010(v4, v5 | 4, a3, v4);
    }
    int64_t v6 = *(int64_t *)(v4 + 216); // 0x4f5b7b
    int64_t v7; // 0x4f5b50
    int64_t v8; // 0x4f5b50
    int64_t v9; // 0x4f5b50
    int64_t v10; // 0x4f5b50
    if (v6 == 0) {
        int64_t result = v5; // 0x4f5b5d
        if ((char)a3 != 0) {
            // 0x4f5c6e
            *v1 = 1;
            return result;
        }
        // 0x4f5c64
        v7 = v3;
        v8 = v4;
        if ((*(char *)(v4 + 25) & 16) == 0) {
            // 0x4f5c6e
            *v1 = 1;
            return result;
        }
        goto lab_0x4f5bad;
    } else {
        // 0x4f5b8b
        function_542c40(v6);
        int64_t v11 = *v2; // 0x4f5b93
        int64_t v12 = v11 + a2; // 0x4f5b97
        v9 = v12;
        v10 = a3;
        if ((char)a3 != 0) {
            goto lab_0x4f5cb0;
        } else {
            // 0x4f5ba3
            v7 = v11;
            v8 = v12;
            v9 = v12;
            v10 = a3;
            if ((*(char *)(v12 + 25) & 16) == 0) {
                goto lab_0x4f5cb0;
            } else {
                goto lab_0x4f5bad;
            }
        }
    }
  lab_0x4f5bad:;
    int64_t v13 = *(int64_t *)(v8 + 232); // 0x4f5bad
    int64_t * v14 = (int64_t *)(v13 + 16); // 0x4f5bb4
    uint64_t v15 = *v14; // 0x4f5bb4
    int64_t * v16 = (int64_t *)(v13 + 24); // 0x4f5bb9
    uint64_t v17 = *v16; // 0x4f5bb9
    int64_t v18; // 0x4f5b50
    int64_t v19; // 0x4f5b50
    int64_t v20; // 0x4f5b50
    int64_t v21; // 0x4f5b50
    int64_t v22; // 0x4f5b50
    int64_t v23; // 0x4f5b50
    int64_t v24; // 0x4f5b50
    if (v17 > v15) {
        int64_t v25 = *(int64_t *)(v8 + 240); // 0x4f5bc4
        v19 = (int64_t)*(char *)v15;
        v20 = v8;
        v18 = v25;
        v22 = v8;
        v24 = a3;
        if (v25 == 0) {
            goto lab_0x4f5d1e;
        } else {
            goto lab_0x4f5bd7;
        }
    } else {
        int64_t v26 = *(int64_t *)v13; // 0x4f5cf0
        int64_t v27 = v7 + a2; // 0x4f5d01
        int64_t v28 = *(int64_t *)(v27 + 240); // 0x4f5d04
        v22 = v27;
        v24 = a2;
        if (v28 == 0) {
            goto lab_0x4f5d1e;
        } else {
            // 0x4f5d10
            v19 = v26;
            v20 = v27;
            v18 = v28;
            v21 = v27;
            v23 = a2;
            if ((int32_t)v26 != -1) {
                goto lab_0x4f5bd7;
            } else {
                goto lab_0x4f5c43;
            }
        }
    }
  lab_0x4f5cb0:;
    int32_t v29 = *(int32_t *)(v9 + 32); // 0x4f5cb0
    int32_t v30 = v29; // 0x4f5cb5
    int64_t v31 = v9; // 0x4f5cb5
    int64_t v32 = v10; // 0x4f5cb5
    int32_t v33 = 0; // 0x4f5cb5
    if (v29 == 0) {
        // 0x4f5c6e
        *v1 = 1;
        return 0;
    }
    goto lab_0x4f5cb9;
  lab_0x4f5cb9:;
    int64_t v34 = v31;
    return function_4fc010(v34, v30 | v33 | 4, v32, v34);
  lab_0x4f5d1e:;
    int64_t v35 = function_5423f0(); // 0x4f5d1e
    int64_t v36 = v24 - 1; // 0x4f5d23
    function_1fd40(v35);
    int64_t v37 = *v2 + a2;
    int32_t * v38 = (int32_t *)(v37 + 32);
    *v38 = *v38 | 1;
    unsigned char v39 = *(char *)(v37 + 28);
    int64_t v40; // 0x4f5b50
    int64_t v41; // 0x4f5b50
    int64_t v42; // 0x4f5b50
    int64_t v43; // 0x4f5b50
    int64_t v44; // 0x4f5b50
    int64_t v45; // 0x4f5b50
    int64_t v46; // 0x4f5b50
    if (v36 != 0) {
        // 0x4f5c7d
        v45 = v37;
        if (v39 % 2 != 0) {
            goto lab_0x4f5d6f;
        } else {
            // 0x4f5c9a
            function_20540(v37);
            v46 = v36;
            v43 = a2;
            goto lab_0x4f5ca0;
        }
    } else {
        // 0x4f5d30
        function_20a50();
        v45 = v35;
        if (v39 % 2 == 0) {
            goto lab_0x4f5d6f;
        } else {
            // 0x4f5d30
            v40 = *v14;
            v41 = *v16;
            v44 = v37;
            v42 = 0;
            goto lab_0x4f5d4b;
        }
    }
  lab_0x4f5bd7:;
    int64_t v47 = *(int64_t *)(v18 + 48); // 0x4f5bd7
    int64_t v48 = v17; // 0x4f5be3
    int64_t v49 = v15; // 0x4f5be3
    int64_t v50 = a2; // 0x4f5be3
    int64_t v51 = v18; // 0x4f5be3
    v9 = v20;
    v10 = v47;
    if ((*(char *)((2 * v19 & 510 | 1) + v47) & 32) != 0) {
        goto lab_0x4f5c17;
    } else {
        goto lab_0x4f5cb0;
    }
  lab_0x4f5c17:;
    int64_t v52 = v51;
    int64_t v53 = v50;
    int64_t v54 = v49; // 0x4f5c17
    int64_t v55 = v48; // 0x4f5c1c
    int64_t v56; // 0x4f5b50
    int64_t v57; // 0x4f5b50
    int64_t v58; // 0x4f5b50
    int64_t v59; // 0x4f5b50
    int64_t v60; // 0x4f5b50
    int64_t v61; // 0x4f5b50
    if (v54 < v55) {
        int64_t v62 = v54 + 1; // 0x4f5bf0
        *v14 = v62;
        v56 = v62;
        v60 = v55;
        v58 = v53;
        v57 = v52;
        goto lab_0x4f5bf9;
    } else {
        // 0x4f5c26
        v61 = v55;
        v59 = v53;
        v40 = v54;
        v41 = v55;
        v44 = v53;
        v42 = v52;
        if ((int32_t)*(int64_t *)v13 != -1) {
            goto lab_0x4f5d4b;
        } else {
            goto lab_0x4f5c39;
        }
    }
  lab_0x4f5c43:
    // 0x4f5c43
    v30 = *(int32_t *)(v21 + 32);
    v31 = v21;
    v32 = v23;
    v33 = 2;
    goto lab_0x4f5cb9;
  lab_0x4f5d6f:;
    int64_t v63 = function_20a50(); // 0x4f5d6f
    function_20540(v45);
    _Unwind_Resume((struct _Unwind_Exception *)v63);
    int64_t v64 = __readfsqword(40); // 0x4f5daa
    char v65; // bp-85, 0x4f5b50
    function_4f5b50((int64_t)&v65, v63, 0);
    int64_t v66 = 0; // 0x4f5dc2
    int64_t v67 = v63; // 0x4f5dc2
    int64_t v68 = v63; // 0x4f5dc2
    int64_t * v69; // 0x4f5b50
    int64_t v70; // 0x4f5b50
    int64_t v71; // 0x4f5b50
    int64_t v72; // 0x4f5b50
    int64_t v73; // 0x4f5b50
    int64_t v74; // 0x4f5b50
    int64_t v75; // 0x4f5b50
    int64_t v76; // 0x4f5b50
    int64_t v77; // 0x4f5b50
    int64_t v78; // 0x4f5b50
    int64_t v79; // 0x4f5b50
    int64_t v80; // 0x4f5b50
    int64_t v81; // 0x4f5b50
    int32_t v82; // 0x4f5b50
    int32_t v83; // 0x4f5b50
    int32_t v84; // 0x4f5b50
    if (v65 == 0) {
        goto lab_0x4f5e2a;
    } else {
        int64_t * v85 = (int64_t *)v63;
        v84 = 0;
        v75 = v22;
        v76 = 0;
        v72 = v63;
        v81 = v63;
        if (*(int64_t *)(v63 + 256 + *(int64_t *)(*v85 - 24)) == 0) {
            goto lab_0x4f5e8b;
        } else {
            // 0x4f5de5
            int16_t v86; // 0x4f5b50
            if ((int64_t)v86 > (int64_t)&g31) {
                // 0x4f5e50
                *(int16_t *)a2 = (int16_t)&g31;
                v69 = v85;
                v83 = 4;
                v74 = 0;
                v78 = (int64_t)&g31;
                v71 = v63;
                v80 = 4;
                goto lab_0x4f5e63;
            } else {
                // 0x4f5e80
                v82 = 0;
                v73 = 0;
                v77 = 0xffffffff;
                v70 = v63;
                v79 = 0;
                goto lab_0x4f5e26;
            }
        }
    }
  lab_0x4f5e2a:;
    int64_t v87 = __readfsqword(40) ^ v64; // 0x4f5e2e
    int64_t result2 = v67; // 0x4f5e3a
    if (v87 == 0) {
        // 0x4f5e3c
        return result2;
    }
    // 0x4f5e86
    __stack_chk_fail();
    int32_t v88; // 0x4f5b50
    v84 = v88;
    v75 = v87;
    v76 = v66;
    v72 = v67;
    v81 = v68;
    goto lab_0x4f5e8b;
  lab_0x4f5ca0:;
    int64_t v152 = v43;
    v9 = *(int64_t *)(*(int64_t *)v152 - 24) + v152;
    v10 = v46;
    goto lab_0x4f5cb0;
  lab_0x4f5d4b:
    // 0x4f5d4b
    v56 = v40;
    v60 = v41;
    v58 = v44;
    v57 = v42;
    goto lab_0x4f5bf9;
  lab_0x4f5bf9:;
    // 0x4f5bf9
    int64_t v125; // 0x4f5cd0
    if (v60 > v56) {
        // 0x4f5c02
        goto lab_0x4f5c05;
    } else {
        // 0x4f5cd0
        v125 = *(int64_t *)v13;
        v61 = v60;
        v59 = v58;
        if ((int32_t)v125 != -1) {
            goto lab_0x4f5c05;
        } else {
            goto lab_0x4f5c39;
        }
    }
  lab_0x4f5c39:;
    int64_t v153 = v59;
    v21 = *(int64_t *)(*(int64_t *)v153 - 24) + v153;
    v23 = v61;
    goto lab_0x4f5c43;
  lab_0x4f5e8b:;
    int64_t v89 = v81;
    int64_t v90 = v72;
    int64_t v91 = function_5423f0(); // 0x4f5e8b
    int64_t v92 = v76 - 1; // 0x4f5e90
    int64_t v93 = v90; // 0x4f5e97
    int64_t v94; // 0x4f5b50
    if (v92 != 0) {
        goto lab_0x4f5eb4;
    } else {
        // 0x4f5e99
        function_1fd40(v91);
        int64_t v95 = *(int64_t *)(*(int64_t *)v90 - 24) + v90; // 0x4f5ea1
        int32_t * v96 = (int32_t *)(v95 + 32); // 0x4f5ea5
        *v96 = *v96 | 1;
        function_20a50();
        v93 = v95;
        v94 = v75;
        if (*(char *)(v95 + 28) % 2 == 0) {
            goto lab_0x4f5eef;
        } else {
            goto lab_0x4f5eb4;
        }
    }
  lab_0x4f5eb4:;
    int64_t v97 = v93;
    function_1fd40(v91);
    int64_t v98 = *(int64_t *)(*(int64_t *)v97 - 24) + v97; // 0x4f5ec0
    int32_t * v99 = (int32_t *)(v98 + 32); // 0x4f5ec3
    *v99 = *v99 | 1;
    v94 = v98;
    if (*(char *)(v98 + 28) % 2 != 0) {
        goto lab_0x4f5eef;
    } else {
        // 0x4f5ecd
        function_20540(v91);
        v82 = v84;
        v73 = v98;
        v77 = v92;
        v70 = v97;
        v79 = v84;
        goto lab_0x4f5e26;
    }
  lab_0x4f5eef:;
    int64_t v100 = function_20a50(); // 0x4f5eef
    function_20540(v91);
    _Unwind_Resume((struct _Unwind_Exception *)v100);
    int64_t v101 = __readfsqword(40); // 0x4f5f2a
    char v102; // bp-141, 0x4f5b50
    function_4f5b50((int64_t)&v102, v100, 0);
    int64_t v103 = 0; // 0x4f5f42
    int64_t v104 = v100; // 0x4f5f42
    int64_t v105 = v100; // 0x4f5f42
    int64_t v106; // 0x4f5b50
    int64_t v107; // 0x4f5b50
    int64_t v108; // 0x4f5b50
    int64_t v109; // 0x4f5b50
    int64_t v110; // 0x4f5b50
    int64_t v111; // 0x4f5b50
    int64_t v112; // 0x4f5b50
    int64_t v113; // 0x4f5b50
    int32_t v114; // 0x4f5b50
    int32_t v115; // 0x4f5b50
    if (v102 == 0) {
        goto lab_0x4f5fa8;
    } else {
        int64_t v116 = *(int64_t *)(*(int64_t *)v100 - 24); // 0x4f5f4e
        v115 = 0;
        v109 = v94;
        v111 = 0;
        v107 = v100;
        v113 = v100;
        if (*(int64_t *)(v100 + 256 + v116) == 0) {
            goto lab_0x4f6002;
        } else {
            // 0x4f5f65
            int32_t v117; // bp-136, 0x4f5b50
            *(int32_t *)v89 = v117;
            v114 = 0;
            v108 = 0;
            v110 = (int64_t)&v117;
            v106 = v100;
            v112 = 0;
            goto lab_0x4f5fa4;
        }
    }
  lab_0x4f5e63:;
    int64_t v118 = *(int64_t *)(*v69 - 24) + v71; // 0x4f5e6a
    uint32_t v119 = *(int32_t *)(v118 + 32) | (int32_t)v80; // 0x4f5e6d
    function_4fc010(v118, v119, v78, v74);
    v88 = v83;
    v66 = v78;
    v67 = v71;
    v68 = v119;
    goto lab_0x4f5e2a;
  lab_0x4f5e26:;
    int64_t v120 = v79;
    int64_t v121 = v70;
    int64_t v122 = v77;
    int32_t v123 = v82;
    v88 = v123;
    v66 = v122;
    v67 = v121;
    v68 = v120;
    if (v120 != 0) {
        // 0x4f5e26
        v69 = (int64_t *)v121;
        v83 = v123;
        v74 = v73;
        v78 = v122;
        v71 = v121;
        v80 = v120;
        goto lab_0x4f5e63;
    } else {
        goto lab_0x4f5e2a;
    }
  lab_0x4f5c05:;
    int64_t v124 = *(int64_t *)(v57 + 48); // 0x4f5c05
    v46 = v124;
    v43 = v58;
    if ((*(char *)(v124 + 1 + (2 * v125 & 510)) & 32) == 0) {
        goto lab_0x4f5ca0;
    } else {
        // 0x4f5c05
        v48 = *v16;
        v49 = v56;
        v50 = v58;
        v51 = v57;
        goto lab_0x4f5c17;
    }
  lab_0x4f5fa8:;
    int64_t v126 = __readfsqword(40) ^ v101; // 0x4f5fac
    result2 = v104;
    if (v126 == 0) {
        // 0x4f5e3c
        return result2;
    }
    // 0x4f5ffd
    __stack_chk_fail();
    int32_t v127; // 0x4f5b50
    v115 = v127;
    v109 = v126;
    v111 = v103;
    v107 = v104;
    v113 = v105;
    goto lab_0x4f6002;
  lab_0x4f6002:;
    int64_t v128 = v113;
    int64_t v129 = v107;
    int64_t v130 = function_5423f0(); // 0x4f6002
    int64_t v131 = v111 - 1; // 0x4f6007
    int64_t v132 = v129; // 0x4f600e
    int64_t v133; // 0x4f5b50
    if (v131 != 0) {
        goto lab_0x4f602b;
    } else {
        // 0x4f6010
        function_1fd40(v130);
        int64_t v134 = *(int64_t *)(*(int64_t *)v129 - 24) + v129; // 0x4f6018
        int32_t * v135 = (int32_t *)(v134 + 32); // 0x4f601c
        *v135 = *v135 | 1;
        function_20a50();
        v132 = v134;
        v133 = v109;
        if (*(char *)(v134 + 28) % 2 == 0) {
            goto lab_0x4f6066;
        } else {
            goto lab_0x4f602b;
        }
    }
  lab_0x4f602b:;
    int64_t v136 = v132;
    function_1fd40(v130);
    int64_t v137 = *(int64_t *)(*(int64_t *)v136 - 24) + v136; // 0x4f6037
    int32_t * v138 = (int32_t *)(v137 + 32); // 0x4f603a
    *v138 = *v138 | 1;
    v133 = v137;
    if (*(char *)(v137 + 28) % 2 != 0) {
        goto lab_0x4f6066;
    } else {
        // 0x4f6044
        function_20540(v130);
        v114 = v115;
        v108 = v137;
        v110 = v131;
        v106 = v136;
        v112 = v115;
        goto lab_0x4f5fa4;
    }
  lab_0x4f5fa4:;
    int64_t v139 = v112;
    int64_t v140 = v106;
    int64_t v141 = v110;
    int32_t v142 = v114;
    v127 = v142;
    v103 = v141;
    v104 = v140;
    v105 = v139;
    if (v139 != 0) {
        int64_t v143 = *(int64_t *)(*(int64_t *)v140 - 24) + v140; // 0x4f5fe8
        uint32_t v144 = *(int32_t *)(v143 + 32) | (int32_t)v139; // 0x4f5feb
        function_4fc010(v143, v144, v141, v108);
        v127 = v142;
        v103 = v141;
        v104 = v140;
        v105 = v144;
    }
    goto lab_0x4f5fa8;
  lab_0x4f6066:;
    int64_t v145 = function_20a50(); // 0x4f6066
    function_20540(v130);
    _Unwind_Resume((struct _Unwind_Exception *)v145);
    __readfsqword(40);
    char v146; // bp-186, 0x4f5b50
    int64_t result3 = function_4f5b50((int64_t)&v146, v145, 0); // 0x4f60a6
    if (v146 == 0) {
        // 0x4f5e3c
        return result3;
    }
    int64_t * v147 = (int64_t *)v145; // 0x4f60b2
    int64_t result4 = *v147; // 0x4f60b2
    if (v128 == 0) {
        // 0x4f5e3c
        return result4;
    }
    int64_t v148 = *(int64_t *)(v145 + 232 + *(int64_t *)(result4 - 24)); // 0x4f60c1
    char v149; // bp-185, 0x4f5b50
    int64_t result5 = function_569140(v148, v128, (int64_t *)&v149); // 0x4f60d0
    if (result5 == 0 || v149 == 0) {
        // 0x4f5e3c
        return result5;
    }
    int64_t v150 = *(int64_t *)(*v147 - 24) + v145; // 0x4f60ef
    int32_t v151 = *(int32_t *)(v150 + 32); // 0x4f60f2
    return function_4fc010(v150, v151 | 2, (int64_t)v149, v133);
}

// Address range: 0x4f8cc0 - 0x4f924a
int64_t function_4f8cc0(int64_t a1, int64_t a2, int64_t a3) {
    char * v1 = (char *)a1; // 0x4f8cc3
    *v1 = 0;
    int64_t * v2 = (int64_t *)(a2 - 24); // 0x4f8cc6
    int64_t v3 = *v2; // 0x4f8cc6
    int64_t v4 = v3 + a2; // 0x4f8cca
    uint32_t v5 = *(int32_t *)(v4 + 32); // 0x4f8ccd
    if (v5 != 0) {
        // 0x4f8da8
        return function_4fca70(v4, v5 | 4, a3, v4);
    }
    int64_t v6 = *(int64_t *)(v4 + 216); // 0x4f8cea
    int64_t v7; // 0x4f8cc0
    int64_t v8; // 0x4f8cc0
    int64_t v9; // 0x4f8cc0
    int64_t v10; // 0x4f8cc0
    if (v6 == 0) {
        int64_t result = v5; // 0x4f8ccd
        if ((char)a3 != 0) {
            // 0x4f8dce
            *v1 = 1;
            return result;
        }
        // 0x4f8dc4
        v7 = v3;
        v8 = v4;
        if ((*(char *)(v4 + 25) & 16) == 0) {
            // 0x4f8dce
            *v1 = 1;
            return result;
        }
        goto lab_0x4f8d1c;
    } else {
        // 0x4f8cfa
        function_545160(v6);
        int64_t v11 = *v2; // 0x4f8d02
        int64_t v12 = v11 + a2; // 0x4f8d06
        v9 = v12;
        v10 = a3;
        if ((char)a3 != 0) {
            goto lab_0x4f8e0a;
        } else {
            // 0x4f8d12
            v7 = v11;
            v8 = v12;
            v9 = v12;
            v10 = a3;
            if ((*(char *)(v12 + 25) & 16) == 0) {
                goto lab_0x4f8e0a;
            } else {
                goto lab_0x4f8d1c;
            }
        }
    }
  lab_0x4f8e00:;
    // 0x4f8e00
    int64_t v13; // 0x4f8cc0
    v9 = *(int64_t *)(v13 - 24) + a2;
    int64_t v14; // 0x4f8cc0
    v10 = v14;
    goto lab_0x4f8e0a;
  lab_0x4f8d1c:;
    int64_t v112 = *(int64_t *)(v8 + 232); // 0x4f8d1c
    int64_t * v113 = (int64_t *)(v112 + 16); // 0x4f8d23
    uint64_t v114 = *v113; // 0x4f8d23
    int64_t * v115 = (int64_t *)(v112 + 24); // 0x4f8d27
    uint64_t v116 = *v115; // 0x4f8d27
    int64_t v44; // 0x4f8cc0
    int64_t v117; // 0x4f8cc0
    if (v116 > v114) {
        // 0x4f8d31
        v44 = v8;
        v117 = (int64_t)*(int32_t *)v114;
    } else {
        // 0x4f8e60
        v44 = v7 + a2;
        v117 = *(int64_t *)v112 & 0xffffffff;
    }
    int64_t v118 = *(int64_t *)(v44 + 240); // 0x4f8d33
    int64_t v21; // 0x4f8cc0
    int64_t v24; // 0x4f8cc0
    int64_t v22; // 0x4f8cc0
    if (v118 == 0) {
        int64_t v119 = function_5423f0(); // 0x4f8e7b
        int64_t v120 = v117 - 1; // 0x4f8e80
        function_1fd40(v119);
        int64_t v121 = *v2 + a2;
        int32_t * v122 = (int32_t *)(v121 + 32);
        *v122 = *v122 | 1;
        unsigned char v123 = *(char *)(v121 + 28);
        if (v120 != 0) {
            // 0x4f8dde
            v24 = v121;
            if (v123 % 2 != 0) {
                goto lab_0x4f8ebd;
            } else {
                // 0x4f8dfb
                function_20540(v121);
                v14 = v120;
                v13 = a2;
                goto lab_0x4f8e00;
            }
        } else {
            int64_t v124 = v119; // 0x4f8ea1
            if (v123 % 2 != 0) {
                // 0x4f8ea3
                v124 = function_20a50();
                function_20540(v119);
                _Unwind_Resume((struct _Unwind_Exception *)v124);
            }
            // 0x4f8eb8
            function_20a50();
            v24 = v124;
            goto lab_0x4f8ebd;
        }
    } else {
        // 0x4f8d43
        v21 = v44;
        v22 = v117;
        if (v117 != 0xffffffff) {
            int64_t * v125 = (int64_t *)v118; // 0x4f8d7c
            v14 = v117;
            v13 = (int64_t)&g18;
            if ((char)*v125 == 0) {
                goto lab_0x4f8e00;
            } else {
                int64_t * v126 = (int64_t *)v112;
                int64_t v127; // 0x4f8cc0
                int64_t v128; // 0x4f8cc0
                int64_t v129; // 0x4f8d52
                if (v114 < v116) {
                    // 0x4f8d50
                    v129 = v114 + 4;
                    *v113 = v129;
                    v127 = v129;
                    v128 = (int64_t)*(int32_t *)v114;
                } else {
                    // 0x4f8d99
                    v127 = v114;
                    v128 = *v126;
                }
                int64_t v130 = v127; // 0x4f8d63
                int64_t v131 = v130; // 0x4f8d5d
                while ((int32_t)v128 != -1) {
                    uint64_t v132 = *v115; // 0x4f8d67
                    int64_t v133; // 0x4f8cc0
                    if (v130 >= v132) {
                        // 0x4f8e48
                        v133 = *v126 & 0xffffffff;
                    } else {
                        // 0x4f8d71
                        v133 = (int64_t)*(int32_t *)v130;
                    }
                    // 0x4f8d73
                    v131 = 0xffffffff;
                    if (v133 == 0xffffffff) {
                        // break -> 0x4f8e30
                        break;
                    }
                    // 0x4f8d7c
                    v14 = v133;
                    v13 = (int64_t)&g18;
                    if ((char)*v125 == 0) {
                        goto lab_0x4f8e00;
                    }
                    int64_t v134 = v130;
                    if (v134 < v132) {
                        // 0x4f8d50
                        v129 = v134 + 4;
                        *v113 = v129;
                        v127 = v129;
                        v128 = (int64_t)*(int32_t *)v134;
                    } else {
                        // 0x4f8d99
                        v127 = v134;
                        v128 = *v126;
                    }
                    // 0x4f8d5a
                    v130 = v127;
                    v131 = v130;
                }
                // 0x4f8e30
                v21 = *(int64_t *)((int64_t)&g18 - 24) + a2;
                v22 = v131;
                goto lab_0x4f8e3a;
            }
        } else {
            goto lab_0x4f8e3a;
        }
    }
  lab_0x4f8e0a:;
    int32_t v15 = *(int32_t *)(v9 + 32); // 0x4f8e0a
    int32_t v16 = v15; // 0x4f8e0f
    int64_t v17 = v9; // 0x4f8e0f
    int64_t v18 = v10; // 0x4f8e0f
    int32_t v19 = 0; // 0x4f8e0f
    if (v15 == 0) {
        // 0x4f8dce
        *v1 = 1;
        return 0;
    }
    goto lab_0x4f8e13;
  lab_0x4f8e13:;
    int64_t v20 = v17;
    return function_4fca70(v20, v16 | v19 | 4, v18, v20);
  lab_0x4f8e3a:
    // 0x4f8e3a
    v16 = *(int32_t *)(v21 + 32);
    v17 = v21;
    v18 = v22;
    v19 = 2;
    goto lab_0x4f8e13;
  lab_0x4f8ebd:;
    int64_t v23 = function_20a50(); // 0x4f8ebd
    function_20540(v24);
    _Unwind_Resume((struct _Unwind_Exception *)v23);
    int64_t v25 = __readfsqword(40); // 0x4f8efa
    char v26; // bp-85, 0x4f8cc0
    function_4f8cc0((int64_t)&v26, v23, 0);
    int64_t * v27; // 0x4f8cc0
    int64_t v28; // 0x4f8cc0
    int64_t v29; // 0x4f8cc0
    int64_t v30; // 0x4f8cc0
    int64_t v31; // 0x4f8cc0
    int64_t v32; // 0x4f8cc0
    int64_t v33; // 0x4f8cc0
    int64_t v34; // 0x4f8cc0
    int64_t v35; // 0x4f8cc0
    int64_t v36; // 0x4f8cc0
    int64_t v37; // 0x4f8cc0
    int64_t v38; // 0x4f8cc0
    int64_t v39; // 0x4f8cc0
    int32_t v40; // 0x4f8cc0
    int32_t v41; // 0x4f8cc0
    int32_t v42; // 0x4f8cc0
    if (v26 == 0) {
        goto lab_0x4f8f7a;
    } else {
        int64_t * v43 = (int64_t *)v23;
        v42 = 0;
        v33 = v44;
        v35 = 0;
        v30 = v23;
        v39 = v23;
        if (*(int64_t *)(v23 + 256 + *(int64_t *)(*v43 - 24)) == 0) {
            goto lab_0x4f8fdb;
        } else {
            // 0x4f8f35
            int16_t v45; // 0x4f8cc0
            if ((int64_t)v45 > (int64_t)&g31) {
                // 0x4f8fa0
                *(int16_t *)a2 = (int16_t)&g31;
                v27 = v43;
                v41 = 4;
                v32 = 0;
                v34 = (int64_t)&g31;
                v29 = v23;
                v38 = 4;
                goto lab_0x4f8fb3;
            } else {
                // 0x4f8fd0
                v40 = 0;
                v31 = 0;
                v36 = 0xffffffff;
                v28 = v23;
                v37 = 0;
                goto lab_0x4f8f76;
            }
        }
    }
  lab_0x4f8f7a:;
    int64_t v46 = __readfsqword(40) ^ v25; // 0x4f8f7e
    int64_t v47; // 0x4f8cc0
    int64_t result2 = v47; // 0x4f8f8a
    if (v46 == 0) {
        // 0x4f8f8c
        return result2;
    }
    // 0x4f8fd6
    __stack_chk_fail();
    int32_t v48; // 0x4f8cc0
    v42 = v48;
    v33 = v46;
    int64_t v49; // 0x4f8cc0
    v35 = v49;
    v30 = v47;
    int64_t v50; // 0x4f8cc0
    v39 = v50;
    goto lab_0x4f8fdb;
  lab_0x4f8fdb:;
    int64_t v51 = v39;
    int64_t v52 = v30;
    int64_t v53 = function_5423f0(); // 0x4f8fdb
    int64_t v54 = v35 - 1; // 0x4f8fe0
    int64_t v55 = v52; // 0x4f8fe7
    int64_t v56; // 0x4f8cc0
    if (v54 != 0) {
        goto lab_0x4f9004;
    } else {
        // 0x4f8fe9
        function_1fd40(v53);
        int64_t v57 = *(int64_t *)(*(int64_t *)v52 - 24) + v52; // 0x4f8ff1
        int32_t * v58 = (int32_t *)(v57 + 32); // 0x4f8ff5
        *v58 = *v58 | 1;
        function_20a50();
        v55 = v57;
        v56 = v33;
        if (*(char *)(v57 + 28) % 2 == 0) {
            goto lab_0x4f903f;
        } else {
            goto lab_0x4f9004;
        }
    }
  lab_0x4f9004:;
    int64_t v59 = v55;
    function_1fd40(v53);
    int64_t v60 = *(int64_t *)(*(int64_t *)v59 - 24) + v59; // 0x4f9010
    int32_t * v61 = (int32_t *)(v60 + 32); // 0x4f9013
    *v61 = *v61 | 1;
    v56 = v60;
    if (*(char *)(v60 + 28) % 2 != 0) {
        goto lab_0x4f903f;
    } else {
        // 0x4f901d
        function_20540(v53);
        v40 = v42;
        v31 = v60;
        v36 = v54;
        v28 = v59;
        v37 = v42;
        goto lab_0x4f8f76;
    }
  lab_0x4f903f:;
    int64_t v62 = function_20a50(); // 0x4f903f
    function_20540(v53);
    _Unwind_Resume((struct _Unwind_Exception *)v62);
    int64_t v63 = __readfsqword(40); // 0x4f907a
    char v64; // bp-141, 0x4f8cc0
    function_4f8cc0((int64_t)&v64, v62, 0);
    int64_t v65 = 0; // 0x4f9092
    int64_t v66 = v62; // 0x4f9092
    int64_t v67 = v62; // 0x4f9092
    int64_t v68; // 0x4f8cc0
    int64_t v69; // 0x4f8cc0
    int64_t v70; // 0x4f8cc0
    int64_t v71; // 0x4f8cc0
    int64_t v72; // 0x4f8cc0
    int64_t v73; // 0x4f8cc0
    int64_t v74; // 0x4f8cc0
    int64_t v75; // 0x4f8cc0
    int32_t v76; // 0x4f8cc0
    int32_t v77; // 0x4f8cc0
    if (v64 == 0) {
        goto lab_0x4f90f8;
    } else {
        int64_t v78 = *(int64_t *)(*(int64_t *)v62 - 24); // 0x4f909e
        v77 = 0;
        v70 = v56;
        v73 = 0;
        v69 = v62;
        v75 = v62;
        if (*(int64_t *)(v62 + 256 + v78) == 0) {
            goto lab_0x4f9152;
        } else {
            // 0x4f90b5
            int32_t v79; // bp-136, 0x4f8cc0
            *(int32_t *)v51 = v79;
            v76 = 0;
            v71 = 0;
            v72 = (int64_t)&v79;
            v68 = v62;
            v74 = 0;
            goto lab_0x4f90f4;
        }
    }
  lab_0x4f8fb3:;
    int64_t v80 = *(int64_t *)(*v27 - 24) + v29; // 0x4f8fba
    uint32_t v81 = *(int32_t *)(v80 + 32) | (int32_t)v38; // 0x4f8fbd
    function_4fca70(v80, v81, v34, v32);
    v48 = v41;
    v49 = v34;
    v47 = v29;
    v50 = v81;
    goto lab_0x4f8f7a;
  lab_0x4f8f76:;
    int64_t v82 = v37;
    int64_t v83 = v28;
    int64_t v84 = v36;
    int32_t v85 = v40;
    v48 = v85;
    v49 = v84;
    v47 = v83;
    v50 = v82;
    if (v82 != 0) {
        // 0x4f8f76
        v27 = (int64_t *)v83;
        v41 = v85;
        v32 = v31;
        v34 = v84;
        v29 = v83;
        v38 = v82;
        goto lab_0x4f8fb3;
    } else {
        goto lab_0x4f8f7a;
    }
  lab_0x4f90f8:;
    int64_t v86 = __readfsqword(40) ^ v63; // 0x4f90fc
    result2 = v66;
    if (v86 == 0) {
        // 0x4f8f8c
        return result2;
    }
    // 0x4f914d
    __stack_chk_fail();
    int32_t v87; // 0x4f8cc0
    v77 = v87;
    v70 = v86;
    v73 = v65;
    v69 = v66;
    v75 = v67;
    goto lab_0x4f9152;
  lab_0x4f9152:;
    int64_t v88 = v75;
    int64_t v89 = v69;
    int64_t v90 = function_5423f0(); // 0x4f9152
    int64_t v91 = v73 - 1; // 0x4f9157
    int64_t v92 = v89; // 0x4f915e
    int64_t v93; // 0x4f8cc0
    if (v91 != 0) {
        goto lab_0x4f917b;
    } else {
        // 0x4f9160
        function_1fd40(v90);
        int64_t v94 = *(int64_t *)(*(int64_t *)v89 - 24) + v89; // 0x4f9168
        int32_t * v95 = (int32_t *)(v94 + 32); // 0x4f916c
        *v95 = *v95 | 1;
        function_20a50();
        v92 = v94;
        v93 = v70;
        if (*(char *)(v94 + 28) % 2 == 0) {
            goto lab_0x4f91b6;
        } else {
            goto lab_0x4f917b;
        }
    }
  lab_0x4f917b:;
    int64_t v96 = v92;
    function_1fd40(v90);
    int64_t v97 = *(int64_t *)(*(int64_t *)v96 - 24) + v96; // 0x4f9187
    int32_t * v98 = (int32_t *)(v97 + 32); // 0x4f918a
    *v98 = *v98 | 1;
    v93 = v97;
    if (*(char *)(v97 + 28) % 2 != 0) {
        goto lab_0x4f91b6;
    } else {
        // 0x4f9194
        function_20540(v90);
        v76 = v77;
        v71 = v97;
        v72 = v91;
        v68 = v96;
        v74 = v77;
        goto lab_0x4f90f4;
    }
  lab_0x4f90f4:;
    int64_t v99 = v74;
    int64_t v100 = v68;
    int64_t v101 = v72;
    int32_t v102 = v76;
    v87 = v102;
    v65 = v101;
    v66 = v100;
    v67 = v99;
    if (v99 != 0) {
        int64_t v103 = *(int64_t *)(*(int64_t *)v100 - 24) + v100; // 0x4f9138
        uint32_t v104 = *(int32_t *)(v103 + 32) | (int32_t)v99; // 0x4f913b
        function_4fca70(v103, v104, v101, v71);
        v87 = v102;
        v65 = v101;
        v66 = v100;
        v67 = v104;
    }
    goto lab_0x4f90f8;
  lab_0x4f91b6:;
    int64_t v105 = function_20a50(); // 0x4f91b6
    function_20540(v90);
    _Unwind_Resume((struct _Unwind_Exception *)v105);
    __readfsqword(40);
    char v106; // bp-186, 0x4f8cc0
    int64_t result3 = function_4f8cc0((int64_t)&v106, v105, 0); // 0x4f91f6
    if (v106 == 0) {
        // 0x4f8f8c
        return result3;
    }
    int64_t * v107 = (int64_t *)v105; // 0x4f9202
    int64_t result4 = *v107; // 0x4f9202
    if (v88 == 0) {
        // 0x4f8f8c
        return result4;
    }
    int64_t v108 = *(int64_t *)(v105 + 232 + *(int64_t *)(result4 - 24)); // 0x4f9211
    char v109; // bp-185, 0x4f8cc0
    int64_t result5 = function_569250(v108, v88, (int64_t *)&v109); // 0x4f9220
    if (result5 == 0 || v109 == 0) {
        // 0x4f8f8c
        return result5;
    }
    int64_t v110 = *(int64_t *)(*v107 - 24) + v105; // 0x4f923f
    int32_t v111 = *(int32_t *)(v110 + 32); // 0x4f9242
    return function_4fca70(v110, v111 | 2, (int64_t)v109, v93);
}

// Address range: 0x50d1e0 - 0x50d73e
int64_t function_50d1e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = __readfsqword(40); // 0x50d20e
    int64_t v2 = function_50ab00(); // 0x50d222
    int64_t v3; // bp-90, 0x50d1e0
    int64_t v4 = function_50d0c0(&v3, a4 + 208); // 0x50d232
    int64_t v5; // 0x50d1e0
    int64_t v6; // 0x50d1e0
    int64_t v7; // 0x50d1e0
    int64_t v8; // 0x50d1e0
    int32_t v9; // bp-68, 0x50d1e0
    int64_t v10; // 0x50d1e0
    if (*(int32_t *)(v4 + 108) == (int32_t)v10) {
        // 0x50d5b0
        v9 = *(int32_t *)(v4 + 104);
        int64_t v11 = *(int64_t *)(a6 - 24); // 0x50d5d1
        v7 = v4 + 80;
        v8 = v4 + 88;
        v5 = v11;
        v6 = v11 != 0 ? a6 + 4 : a6;
    } else {
        // 0x50d248
        v9 = *(int32_t *)(v4 + 100);
        v7 = v4 + 64;
        v8 = v4 + 72;
        v5 = *(int64_t *)(a6 - 24);
        v6 = a6;
    }
    int64_t v12 = v6;
    int64_t v13 = *(int64_t *)v2 - v12 >> 2; // 0x50d285
    int64_t * v14; // 0x50d1e0
    int64_t v15; // 0x50d1e0
    int64_t v16; // 0x50d1e0
    int32_t v17; // 0x50d1e0
    int64_t v18; // 0x50d1e0
    int64_t v19; // 0x50d1e0
    uint64_t v20; // 0x50d1e0
    int32_t v21; // bp-88, 0x50d1e0
    int64_t v22; // 0x50d2ed
    int32_t * v23; // 0x50d2f7
    if (v13 != 0) {
        // 0x50d2d0
        v20 = *(int64_t *)v8;
        int64_t v24 = v12 + 4 * v5; // 0x50d269
        v21 = (int64_t)&g40;
        v22 = (int64_t)&v21;
        function_527a4((int64_t *)&v21, 2 * v13, v12, v24);
        v23 = (int32_t *)(v4 + 96);
        int32_t v25 = *v23; // 0x50d2f7
        int64_t v26 = v13 - (int64_t)v25; // 0x50d2ff
        v17 = v25;
        v18 = v24;
        v15 = v26;
        if (v26 < 1) {
            goto lab_0x50d3de;
        } else {
            int64_t v27 = v25 < 0 ? v13 : v26; // 0x50d310
            int64_t * v28 = (int64_t *)(v4 + 24); // 0x50d314
            if (*v28 == 0) {
                // 0x50d6b0
                function_36cda(v22, v12, v27);
                v19 = v24;
                v16 = v27;
                if (*v23 < 1) {
                    goto lab_0x50d3e6;
                } else {
                    goto lab_0x50d668;
                }
            } else {
                // 0x50d320
                function_550d00(v22, 0, g38, 2 * v27, 0);
                int64_t v29 = *v28; // 0x50d33c
                int64_t v30 = *(int64_t *)(v4 + 16); // 0x50d34b
                int32_t v31 = *(int32_t *)(v4 + 40); // 0x50d355
                if (g39 >= 0) {
                    // 0x50d365
                    function_550a60(v22);
                }
                int64_t v32 = function_50cac0((int64_t)v21, v31, v30, v29, v12, 4 * v27 + v12); // 0x50d389
                int64_t result = g39; // 0x50d39d
                if (g39 >= 0) {
                    // 0x50d39f
                    result = function_550a60(v22);
                }
                uint64_t v33 = v32 - (int64_t)v21 >> 2; // 0x50d3bd
                if (g38 < v33) {
                    // 0x50d2b7
                    return result;
                }
                // 0x50d3cd
                function_36ff8(v22, v33, g38 - v33, 0);
                v17 = *v23;
                v18 = 0;
                v15 = v27;
                goto lab_0x50d3de;
            }
        }
    } else {
        // 0x50d269
        v14 = (int64_t *)(a4 + 16);
        goto lab_0x50d28e;
    }
  lab_0x50d3de:;
    int32_t v34 = v17;
    v19 = v18;
    v16 = v15;
    if (v34 >= 0 == (v34 != 0)) {
        goto lab_0x50d668;
    } else {
        goto lab_0x50d3e6;
    }
  lab_0x50d28e:
    // 0x50d28e
    *v14 = 0;
    int64_t result2 = a2; // 0x50d2b1
    if (v1 != __readfsqword(40)) {
        // 0x50d72f
        __stack_chk_fail();
        result2 = (int64_t)&g69;
    }
    // 0x50d2b7
    return result2;
  lab_0x50d668:
    // 0x50d668
    function_29f0e(v22, *(int32_t *)(v4 + 36));
    if (v16 < 0) {
        // 0x50d6f0
        function_5512a0(v22, -v16, *(int32_t *)(v4 + 112), v19);
        function_5289c(v22, v12, v13);
    } else {
        // 0x50d67c
        function_5289c(v22, 4 * v16 + v12, (int64_t)*v23);
    }
    goto lab_0x50d3e6;
  lab_0x50d3e6:;
    int32_t v35 = *(int32_t *)(a4 + 24); // 0x50d3e6
    int64_t v36 = g38 + v20; // 0x50d400
    int64_t v37 = v36; // 0x50d40c
    int64_t v38 = v36; // 0x50d40c
    if ((v35 & 512) != 0) {
        int64_t v39 = *(int64_t *)(v4 + 56); // 0x50d620
        v37 = v39 + v36;
        v38 = v39;
    }
    int32_t v40 = (int64_t)&g40; // bp-80, 0x50d426
    int64_t v41 = (int64_t)&v40; // 0x50d433
    function_527a4((int64_t *)&v40, 0x100000000 * v37 >> 31, (int64_t)v21, v38);
    int64_t * v42 = (int64_t *)(a4 + 16);
    uint64_t v43 = *v42; // 0x50d442
    int64_t v44 = 0;
    unsigned char v45 = *(char *)(v44 + (int64_t)&v9); // 0x50d468
    while (v45 >= 5) {
        // 0x50d520
        if (v44 == 3) {
            if (v20 < 2) {
                // 0x50d53a
                if (v43 > g38) {
                    goto lab_0x50d5e8;
                } else {
                    goto lab_0x50d54e;
                }
            } else {
                // 0x50d630
                function_5289c(v41, *(int64_t *)v7 + 4, v20 - 1);
                if (v43 > g38) {
                    goto lab_0x50d5e8;
                } else {
                    goto lab_0x50d54e;
                }
            }
        }
        v44++;
        v45 = *(char *)(v44 + (int64_t)&v9);
    }
    int32_t v46 = *(int32_t *)(4 * (int64_t)v45 + (int64_t)&g29); // 0x50d478
    return (int64_t)v46 + (int64_t)&g29;
  lab_0x50d5e8:;
    int64_t v47 = v43 - g38; // 0x50d5ed
    int32_t v48 = a5;
    if ((v35 & 176) == 32) {
        // 0x50d6d0
        function_5512a0(v41, v47, v48, v47);
        goto lab_0x50d54e;
    } else {
        // 0x50d5fb
        function_550d00(v41, 0, 0, v47, v48);
        goto lab_0x50d54e;
    }
  lab_0x50d54e:;
    int64_t v49 = (int64_t)v40 - 24; // 0x50d573
    int64_t v50; // bp-89, 0x50d1e0
    if (v49 != *(int64_t *)0x848c20) {
        // 0x50d720
        function_508450((int64_t *)v49, &v50);
        goto lab_0x50d584;
    } else {
        goto lab_0x50d584;
    }
  lab_0x50d584:
    // 0x50d584
    v14 = v42;
    if (g35 == (int64_t)&g38) {
        goto lab_0x50d28e;
    } else {
        // 0x50d59a
        function_508450(&g38, &v50);
        v14 = v42;
        goto lab_0x50d28e;
    }
}

// Address range: 0x50d900 - 0x50de5e
int64_t function_50d900(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = __readfsqword(40); // 0x50d92e
    int64_t v2 = function_50ab00(); // 0x50d942
    int64_t v3; // bp-90, 0x50d900
    int64_t v4 = function_50d7e0(&v3, a4 + 208); // 0x50d952
    int64_t v5; // 0x50d900
    int64_t v6; // 0x50d900
    int64_t v7; // 0x50d900
    int64_t v8; // 0x50d900
    int32_t v9; // bp-68, 0x50d900
    int64_t v10; // 0x50d900
    if (*(int32_t *)(v4 + 108) == (int32_t)v10) {
        // 0x50dcd0
        v9 = *(int32_t *)(v4 + 104);
        int64_t v11 = *(int64_t *)(a6 - 24); // 0x50dcf1
        v7 = v4 + 80;
        v8 = v4 + 88;
        v5 = v11;
        v6 = v11 != 0 ? a6 + 4 : a6;
    } else {
        // 0x50d968
        v9 = *(int32_t *)(v4 + 100);
        v7 = v4 + 64;
        v8 = v4 + 72;
        v5 = *(int64_t *)(a6 - 24);
        v6 = a6;
    }
    int64_t v12 = v6;
    int64_t v13 = *(int64_t *)v2 - v12 >> 2; // 0x50d9a5
    int64_t * v14; // 0x50d900
    int64_t v15; // 0x50d900
    int64_t v16; // 0x50d900
    int32_t v17; // 0x50d900
    int64_t v18; // 0x50d900
    int64_t v19; // 0x50d900
    uint64_t v20; // 0x50d900
    int32_t v21; // bp-88, 0x50d900
    int64_t v22; // 0x50da0d
    int32_t * v23; // 0x50da17
    if (v13 != 0) {
        // 0x50d9f0
        v20 = *(int64_t *)v8;
        int64_t v24 = v12 + 4 * v5; // 0x50d989
        v21 = (int64_t)&g40;
        v22 = (int64_t)&v21;
        function_527a4((int64_t *)&v21, 2 * v13, v12, v24);
        v23 = (int32_t *)(v4 + 96);
        int32_t v25 = *v23; // 0x50da17
        int64_t v26 = v13 - (int64_t)v25; // 0x50da1f
        v17 = v25;
        v18 = v24;
        v15 = v26;
        if (v26 < 1) {
            goto lab_0x50dafe;
        } else {
            int64_t v27 = v25 < 0 ? v13 : v26; // 0x50da30
            int64_t * v28 = (int64_t *)(v4 + 24); // 0x50da34
            if (*v28 == 0) {
                // 0x50ddd0
                function_36cda(v22, v12, v27);
                v19 = v24;
                v16 = v27;
                if (*v23 < 1) {
                    goto lab_0x50db06;
                } else {
                    goto lab_0x50dd88;
                }
            } else {
                // 0x50da40
                function_550d00(v22, 0, g38, 2 * v27, 0);
                int64_t v29 = *v28; // 0x50da5c
                int64_t v30 = *(int64_t *)(v4 + 16); // 0x50da6b
                int32_t v31 = *(int32_t *)(v4 + 40); // 0x50da75
                if (g39 >= 0) {
                    // 0x50da85
                    function_550a60(v22);
                }
                int64_t v32 = function_50cac0((int64_t)v21, v31, v30, v29, v12, 4 * v27 + v12); // 0x50daa9
                int64_t result = g39; // 0x50dabd
                if (g39 >= 0) {
                    // 0x50dabf
                    result = function_550a60(v22);
                }
                uint64_t v33 = v32 - (int64_t)v21 >> 2; // 0x50dadd
                if (g38 < v33) {
                    // 0x50d9d7
                    return result;
                }
                // 0x50daed
                function_36ff8(v22, v33, g38 - v33, 0);
                v17 = *v23;
                v18 = 0;
                v15 = v27;
                goto lab_0x50dafe;
            }
        }
    } else {
        // 0x50d989
        v14 = (int64_t *)(a4 + 16);
        goto lab_0x50d9ae;
    }
  lab_0x50dafe:;
    int32_t v34 = v17;
    v19 = v18;
    v16 = v15;
    if (v34 >= 0 == (v34 != 0)) {
        goto lab_0x50dd88;
    } else {
        goto lab_0x50db06;
    }
  lab_0x50d9ae:
    // 0x50d9ae
    *v14 = 0;
    int64_t result2 = a2; // 0x50d9d1
    if (v1 != __readfsqword(40)) {
        // 0x50de4f
        __stack_chk_fail();
        result2 = (int64_t)&g69;
    }
    // 0x50d9d7
    return result2;
  lab_0x50dd88:
    // 0x50dd88
    function_29f0e(v22, *(int32_t *)(v4 + 36));
    if (v16 < 0) {
        // 0x50de10
        function_5512a0(v22, -v16, *(int32_t *)(v4 + 112), v19);
        function_5289c(v22, v12, v13);
    } else {
        // 0x50dd9c
        function_5289c(v22, 4 * v16 + v12, (int64_t)*v23);
    }
    goto lab_0x50db06;
  lab_0x50db06:;
    int32_t v35 = *(int32_t *)(a4 + 24); // 0x50db06
    int64_t v36 = g38 + v20; // 0x50db20
    int64_t v37 = v36; // 0x50db2c
    int64_t v38 = v36; // 0x50db2c
    if ((v35 & 512) != 0) {
        int64_t v39 = *(int64_t *)(v4 + 56); // 0x50dd40
        v37 = v39 + v36;
        v38 = v39;
    }
    int32_t v40 = (int64_t)&g40; // bp-80, 0x50db46
    int64_t v41 = (int64_t)&v40; // 0x50db53
    function_527a4((int64_t *)&v40, 0x100000000 * v37 >> 31, (int64_t)v21, v38);
    int64_t * v42 = (int64_t *)(a4 + 16);
    uint64_t v43 = *v42; // 0x50db62
    int64_t v44 = 0;
    unsigned char v45 = *(char *)(v44 + (int64_t)&v9); // 0x50db88
    while (v45 >= 5) {
        // 0x50dc40
        if (v44 == 3) {
            if (v20 < 2) {
                // 0x50dc5a
                if (v43 > g38) {
                    goto lab_0x50dd08;
                } else {
                    goto lab_0x50dc6e;
                }
            } else {
                // 0x50dd50
                function_5289c(v41, *(int64_t *)v7 + 4, v20 - 1);
                if (v43 > g38) {
                    goto lab_0x50dd08;
                } else {
                    goto lab_0x50dc6e;
                }
            }
        }
        v44++;
        v45 = *(char *)(v44 + (int64_t)&v9);
    }
    int32_t v46 = *(int32_t *)(4 * (int64_t)v45 + (int64_t)&g30); // 0x50db98
    return (int64_t)v46 + (int64_t)&g30;
  lab_0x50dd08:;
    int64_t v47 = v43 - g38; // 0x50dd0d
    int32_t v48 = a5;
    if ((v35 & 176) == 32) {
        // 0x50ddf0
        function_5512a0(v41, v47, v48, v47);
        goto lab_0x50dc6e;
    } else {
        // 0x50dd1b
        function_550d00(v41, 0, 0, v47, v48);
        goto lab_0x50dc6e;
    }
  lab_0x50dc6e:;
    int64_t v49 = (int64_t)v40 - 24; // 0x50dc93
    int64_t v50; // bp-89, 0x50d900
    if (v49 != g35) {
        // 0x50de40
        function_508450((int64_t *)v49, &v50);
        goto lab_0x50dca4;
    } else {
        goto lab_0x50dca4;
    }
  lab_0x50dca4:
    // 0x50dca4
    v14 = v42;
    if (g35 == (int64_t)&g38) {
        goto lab_0x50d9ae;
    } else {
        // 0x50dcba
        function_508450(&g38, &v50);
        v14 = v42;
        goto lab_0x50d9ae;
    }
}

// Address range: 0x5227ab - 0x522dbf
int64_t function_5227ab(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x5227ab
    int64_t v1; // 0x5227ab
    int64_t v2; // 0x5227ab
    int64_t v3; // 0x5227ab
    int64_t v4; // 0x5227ab
    int64_t v5; // 0x5227ab
    char v6; // 0x5227ab
    int64_t v7; // 0x5227ab
    int64_t v8; // 0x5227ab
    int64_t v9; // 0x5227ab
    int64_t v10; // 0x5227ab
    int64_t v11; // 0x5227ab
    int64_t v12; // 0x5227ab
    bool v13; // 0x5227ab
    if (v13) {
        // 0x5227ab
        v1 = v12 - 80;
        v9 = a6;
        goto lab_0x522846;
    } else {
        // 0x5227b2
        v11 = a4;
        v7 = a6;
        v2 = 0;
        if ((int32_t)a5 == -1) {
            uint64_t v14 = *(int64_t *)(a4 + 16); // 0x522818
            if (v14 >= *(int64_t *)(a4 + 24)) {
                int64_t * v15 = (int64_t *)(v12 - 72);
                *v15 = a6;
                int32_t v16 = a4; // 0x522c68
                *(int32_t *)(v12 - 96) = v16;
                int64_t v17 = *v15; // 0x522c6e
                v8 = v17;
                if (v16 != -1) {
                    goto lab_0x52282c;
                } else {
                    // 0x522833
                    *(int64_t *)(v12 - 104) = 0;
                    v6 = -1;
                    v10 = v17;
                    v4 = 0;
                    v5 = 0;
                    if (v12 == 0) {
                        goto lab_0x52284b;
                    } else {
                        int64_t v18 = v12 - 80;
                        int32_t * v19 = (int32_t *)v18; // 0x52283c
                        v1 = v18;
                        v9 = v17;
                        v3 = 0;
                        if (*v19 == -1) {
                            uint64_t v20 = *(int64_t *)(v12 + 16); // 0x522c18
                            if (v20 >= *(int64_t *)(v12 + 24)) {
                                // 0x522c8a
                                *v15 = v17;
                                int32_t v21 = v12; // 0x522c97
                                *v19 = v21;
                                int64_t v22 = *v15; // 0x522c9d
                                v1 = v18;
                                v9 = v22;
                                v3 = 0;
                                if (v21 != -1) {
                                    goto lab_0x522846;
                                } else {
                                    // 0x522ca7
                                    v6 = *(char *)v18;
                                    v10 = v22;
                                    v4 = 0;
                                    v5 = 0;
                                    goto lab_0x52284b;
                                }
                            } else {
                                // 0x522c22
                                *v19 = (int32_t)*(char *)v20;
                                v1 = v18;
                                v9 = v17;
                                v3 = 0;
                                goto lab_0x522846;
                            }
                        } else {
                            goto lab_0x522846;
                        }
                    }
                }
            } else {
                // 0x522826
                *(int32_t *)(v12 - 96) = (int32_t)*(char *)v14;
                v8 = a6;
                goto lab_0x52282c;
            }
        } else {
            goto lab_0x5227c2;
        }
    }
  lab_0x522ba3_2:;
    // 0x522ba3
    int32_t * v23; // 0x5227ab
    *v23 = -1;
    int64_t v24; // 0x5227ab
    v11 = v24;
    int64_t v25; // 0x5227ab
    v7 = v25;
    int64_t v26; // 0x5228ae
    v2 = v26;
    int64_t v27; // 0x522911
    int64_t v28 = v27; // 0x522bad
    int64_t v29 = v27; // 0x522bad
    goto lab_0x5227c2;
  lab_0x5227c2:;
    int32_t * v30 = (int32_t *)*(int64_t *)(v12 - 128); // 0x5227c6
    *v30 = *v30 | 4;
    int64_t v31 = v11; // 0x5227c6
    int64_t v32 = v7; // 0x5227c6
    int64_t v33; // 0x5227ab
    int64_t v34 = v33; // 0x5227c6
    int64_t v35 = v2; // 0x5227c6
    int64_t v36 = v28; // 0x5227c6
    int64_t v37 = v29; // 0x5227c6
    goto lab_0x5227c9;
  lab_0x5229d7:;
    // 0x5229d7
    int64_t v132; // 0x5227ab
    int64_t v133 = v132 - 1; // 0x5229d7
    int64_t v134; // 0x5227ab
    v11 = v134;
    v7 = v25;
    v2 = v133;
    int64_t v135; // 0x5227ab
    v28 = v135;
    v29 = v26;
    int64_t v120; // 0x5227ab
    int64_t v99; // 0x5227ab
    int64_t v100; // 0x5227ab
    int64_t v123; // 0x5227ab
    int64_t v101; // 0x5227ab
    int64_t v114; // 0x5227ab
    int64_t v124; // 0x5227ab
    int64_t v102; // 0x5227ab
    int64_t v98; // 0x5227ab
    int64_t v118; // 0x5227ab
    int64_t v122; // 0x5227ab
    int32_t v105; // 0x5227ab
    int64_t v97; // 0x5227ab
    int64_t v121; // 0x5227ab
    int64_t v116; // 0x5227ab
    int64_t v112; // 0x5227ab
    int64_t * v136; // 0x522856
    int64_t v137; // 0x52285e
    int64_t * v138; // 0x52285e
    if (v133 != 0) {
        goto lab_0x5227c2;
    } else {
        if (v135 != 0) {
            int64_t * v139 = (int64_t *)(v135 + 16); // 0x5229e6
            uint64_t result2 = *v139; // 0x5229e6
            if (result2 >= *(int64_t *)(v135 + 24)) {
                // 0x5227f3
                return result2;
            }
            // 0x5229f4
            *v139 = result2 + 1;
            *(int32_t *)(v12 - 80) = -1;
        }
        int32_t v140 = *(int32_t *)v26; // 0x522a03
        int64_t v141 = *v138 + 1; // 0x522a0a
        int64_t str = *(int64_t *)(8 * (int64_t)v140 + v12); // 0x522a0e
        *v136 = str;
        int64_t len = strlen((char *)str); // 0x522a1c
        v97 = str;
        v105 = v140;
        v98 = v25;
        v99 = len;
        v100 = v141;
        v101 = v135;
        v102 = v26;
        if (v141 >= len) {
            goto lab_0x522d33;
        } else {
            // 0x522ab6
            *(int32_t *)v137 = v140;
            v124 = 0xffffffff;
            v114 = v135;
            v123 = v141;
            v120 = *(int64_t *)(v12 - 104);
            v112 = len;
            v118 = len;
            v122 = (int64_t)*(int32_t *)(v12 - 96);
            v116 = (int64_t)*(int32_t *)(v12 - 80);
            v121 = *v136;
            if (v135 == 0) {
                // 0x5227f3
                return len;
            }
            goto lab_0x522abf;
        }
    }
  lab_0x5229a5:;
    // 0x5229a5
    int64_t v142; // 0x5227ab
    int64_t v143 = v142;
    int64_t v144; // 0x5227ab
    int64_t v145 = v144;
    int64_t v146; // 0x5227ab
    int64_t v147 = v146;
    int64_t v148; // 0x5227ab
    int64_t v149; // 0x5227ab
    int64_t v150; // 0x5227ab
    int64_t v151; // 0x5227ab
    int64_t v152; // 0x5227ab
    int32_t * v153; // 0x522988
    unsigned char v154; // 0x52298f
    if (v154 == (char)v152) {
        // 0x522af8
        v150 = v154;
        v151 = v147 + 1;
        v149 = v148;
    } else {
        int64_t v155 = v148 - 1; // 0x5229ae
        uint32_t v156 = *(int32_t *)(4 * v155 + v26); // 0x5229b2
        *v153 = v156;
        v150 = v156;
        v151 = v147;
        v149 = v155;
    }
    int64_t v157 = v149;
    int64_t v158 = v151; // 0x5229bc
    int64_t v159 = v145; // 0x5229bc
    int64_t v160; // 0x5227ab
    int64_t v161 = v160; // 0x5229bc
    int64_t v162 = v157; // 0x5229bc
    int64_t v163 = v143; // 0x5229bc
    if (v157 <= v151) {
        // break -> 0x5229be
        goto lab_0x5229be;
    }
    goto lab_0x522980;
  lab_0x5229a3:;
    // 0x5229a3
    int64_t v167; // 0x5227ab
    v146 = v167;
    int64_t v169; // 0x5227ab
    v144 = v169;
    v152 = v169 & 0xffffffff;
    int64_t v165; // 0x5227ab
    v160 = v165;
    int64_t v164; // 0x5227ab
    v142 = v164;
    goto lab_0x5229a5;
  lab_0x522960:;
    // 0x522960
    int64_t v174; // 0x5227ab
    int64_t v175 = v174;
    int64_t v176; // 0x5227ab
    int64_t v177 = v176;
    int64_t v178 = v175; // 0x522966
    char v179 = 0; // 0x522966
    int64_t v180; // 0x5227ab
    int64_t * v181; // 0x5227ab
    int32_t * v182; // 0x5227ab
    char * v183; // 0x5227ab
    if (*v182 == -1) {
        int64_t v184 = v180; // 0x522b08
        uint64_t v185 = *(int64_t *)(v184 + 16); // 0x522b0c
        if (v185 >= *(int64_t *)(v184 + 24)) {
            // 0x522bbc
            *v183 = (char)v175;
            int32_t v186 = (int32_t)*(int64_t *)v184; // 0x522bc9
            *v182 = v186;
            if (v186 != -1) {
                goto lab_0x522b20;
            } else {
                // 0x522bd9
                *v181 = 0;
                v178 = (int64_t)*v183;
                v179 = 1;
                goto lab_0x52296c;
            }
        } else {
            // 0x522b1a
            *v182 = (int32_t)*(char *)v185;
            goto lab_0x522b20;
        }
    } else {
        goto lab_0x52296c;
    }
  lab_0x52296c:;
    int64_t v187 = v177; // 0x52296e
    int64_t v188 = v177; // 0x52296e
    if (v179 == (char)v178) {
        // break -> 0x522b2a
        goto lab_0x522b2a_2;
    }
    goto lab_0x522974;
  lab_0x522957:;
    int64_t v221 = *v181; // 0x522957
    v180 = v221;
    v176 = v27;
    v174 = 0;
    v187 = v27;
    if (v221 == 0) {
        goto lab_0x522974;
    } else {
        goto lab_0x522960;
    }
  lab_0x522974:
    // 0x522974
    v158 = 0;
    v159 = (int64_t)*v23;
    v161 = *v138;
    int64_t v189; // 0x5227ab
    v162 = v189;
    v163 = v187;
    int64_t * v172; // 0x5227ab
    char * v173; // 0x5227ab
    while (true) {
      lab_0x522980:
        // 0x522980
        v164 = v163;
        v148 = v162;
        v165 = v161;
        int64_t v166 = v159;
        v167 = v158;
        v153 = (int32_t *)(4 * v167 + v26);
        int64_t v168 = *(int64_t *)(8 * (int64_t)*v153 + v12); // 0x52298b
        v154 = *(char *)(v168 + v165);
        v146 = v167;
        v144 = v166;
        v152 = 0xffffffff;
        v160 = v165;
        v142 = 0;
        if (v164 == 0) {
            goto lab_0x5229a5;
        } else {
            // 0x52299a
            v169 = v166;
            if ((int32_t)v166 == -1) {
                uint64_t v170 = *(int64_t *)(v164 + 16); // 0x522ae0
                if (v170 >= *(int64_t *)(v164 + 24)) {
                    int64_t v171 = *(int64_t *)v164; // 0x522b50
                    *v172 = v167;
                    *v136 = v165;
                    *v173 = v154;
                    v146 = *v172;
                    v144 = v171;
                    v152 = 0xffffffff;
                    v160 = *v136;
                    v142 = 0;
                    if ((int32_t)v171 != -1) {
                        goto lab_0x5229a3;
                    } else {
                        goto lab_0x5229a5;
                    }
                } else {
                    // 0x522aea
                    v169 = (int64_t)*(char *)v170;
                    goto lab_0x5229a3;
                }
            } else {
                goto lab_0x5229a3;
            }
        }
    }
  lab_0x5229be:
    // 0x5229be
    *v23 = (int32_t)v145;
    int64_t v190 = v150; // 0x5229c5
    int64_t v191 = v157; // 0x5229c5
    int64_t v192 = v143; // 0x5229c5
    v134 = v150;
    v132 = v157;
    v135 = v143;
    if (v157 < 2) {
        goto lab_0x5229d7;
    }
    goto lab_0x5228d0;
  lab_0x522b20:
    // 0x522b20
    v187 = v177;
    v188 = v177;
    if ((char)v175 == 0) {
        // break -> 0x522b2a
        goto lab_0x522b2a_2;
    }
    goto lab_0x522974;
  lab_0x522846:
    // 0x522846
    v6 = *(char *)v1;
    v10 = v9;
    v4 = v3;
    goto lab_0x52284b;
  lab_0x52284b:
    // 0x52284b
    v25 = v10;
    v11 = a4;
    v7 = v25;
    v2 = v4;
    v28 = v5;
    if (v12 == 0) {
        goto lab_0x5227c2;
    } else {
        char v209 = v6;
        int64_t v210 = v12 - 88; // 0x522856
        v136 = (int64_t *)v210;
        *v136 = v5;
        int64_t * v211 = (int64_t *)(v12 + 24); // 0x52285a
        v137 = v12 - 72;
        v138 = (int64_t *)v137;
        int64_t * v212 = (int64_t *)v25;
        int64_t v213 = 0;
        int64_t v214 = 0;
        int64_t v215; // 0x5227ab
        int64_t v216; // 0x52287e
        while (*(char *)*(int64_t *)(8 * v214 + v12) != v209) {
            // 0x522870
            if (v209 == (char)*v212) {
                // break -> 0x522894
                break;
            }
            // 0x52287e
            v216 = v214 + 1;
            v215 = v213;
            if (*v211 == v216) {
                // break (via goto) -> 0x5228aa
                goto lab_0x5228aa;
            }
            v214 = v216;
        }
        // 0x522894
        *(int32_t *)(*v138 + 4 * v213) = (int32_t)v214;
        int64_t v217 = v213 + 1; // 0x52289c
        int64_t v218 = v214 + 1; // 0x5228a0
        v215 = v217;
        while (*v211 != v218) {
            // 0x522888
            v213 = v217;
            v214 = v218;
            while (*(char *)*(int64_t *)(8 * v214 + v12) != v209) {
                // 0x522870
                if (v209 == (char)*v212) {
                    // break -> 0x522894
                    break;
                }
                // 0x52287e
                v216 = v214 + 1;
                v215 = v213;
                if (*v211 == v216) {
                    // break (via goto) -> 0x5228aa
                    goto lab_0x5228aa;
                }
                v214 = v216;
            }
            // 0x522894
            *(int32_t *)(*v138 + 4 * v213) = (int32_t)v214;
            v217 = v213 + 1;
            v218 = v214 + 1;
            v215 = v217;
        }
      lab_0x5228aa:
        // 0x5228aa
        v26 = *v138;
        int64_t v219 = *v136; // 0x5228b2
        *v138 = 0;
        v134 = a4;
        v132 = v215;
        v135 = v219;
        if (v215 < 2) {
            goto lab_0x5229d7;
        } else {
            int64_t v220 = v12 - 80;
            v23 = (int32_t *)v220;
            v181 = (int64_t *)(v12 - 104);
            v182 = (int32_t *)(v12 - 96);
            v183 = (char *)v210;
            v172 = (int64_t *)(v12 - 112);
            v173 = (char *)v220;
            v190 = a4;
            v191 = v215;
            v192 = v219;
            while (true) {
              lab_0x5228d0:
                // 0x5228d0
                v189 = v191;
                v24 = v190;
                int32_t v193 = *(int32_t *)v26; // 0x5228d0
                int32_t len2 = strlen((char *)*(int64_t *)(8 * (int64_t)v193 + v12)); // 0x5228d8
                *v136 = v192;
                int64_t v194 = 1; // 0x5228ec
                uint64_t v195 = (int64_t)len2;
                int64_t str2 = *(int64_t *)(8 * (int64_t)*(int32_t *)(4 * v194 + v26) + v12); // 0x5228f5
                uint64_t len3 = (int64_t)strlen((char *)str2); // 0x5228f9
                uint64_t v196 = v195 > len3 ? len3 : v195; // 0x522901
                v194++;
                while (v194 < v189) {
                    // 0x5228f0
                    v195 = v196;
                    str2 = *(int64_t *)(8 * (int64_t)*(int32_t *)(4 * v194 + v26) + v12);
                    len3 = (int64_t)strlen((char *)str2);
                    v196 = v195 > len3 ? len3 : v195;
                    v194++;
                }
                // 0x52290e
                v27 = *v136;
                uint64_t v197 = *v138 + 1; // 0x522915
                *v138 = v197;
                if (v27 == 0) {
                    // 0x522b38
                    v188 = 0;
                    if (v197 >= v196) {
                        // break -> 0x522b2a
                        break;
                    }
                    int64_t v198 = *v181; // 0x522b3e
                    v180 = v198;
                    v176 = 0;
                    v174 = 1;
                    v188 = 0;
                    if (v198 == 0) {
                        // break -> 0x522b2a
                        break;
                    }
                    goto lab_0x522960;
                } else {
                    int64_t * v199 = (int64_t *)(v27 + 16); // 0x522923
                    uint64_t v200 = *v199; // 0x522923
                    int64_t * v201 = (int64_t *)(v27 + 24); // 0x522927
                    uint64_t v202 = *v201; // 0x522927
                    int64_t v203; // 0x5227ab
                    int64_t v204; // 0x5227ab
                    if (v200 >= v202) {
                        // 0x522b90
                        v203 = v202;
                        v204 = v200;
                        if (v197 >= v196) {
                            goto lab_0x522ba3_2;
                        }
                    } else {
                        int64_t v205 = v200 + 1; // 0x522931
                        *v199 = v205;
                        if (v197 >= v196) {
                            goto lab_0x522ba3_2;
                        }
                        // 0x522931
                        v203 = *v201;
                        v204 = v205;
                    }
                    uint64_t v206 = v204; // 0x522943
                    if (v206 >= v203) {
                        int32_t v207 = (int32_t)*(int64_t *)v27; // 0x522bf9
                        *v23 = v207;
                        if (v207 != -1) {
                            goto lab_0x522957;
                        } else {
                            int64_t v208 = *v181; // 0x522c05
                            v11 = v24;
                            v7 = v25;
                            v2 = v26;
                            v28 = 0;
                            v29 = v27;
                            v180 = v208;
                            v176 = 0;
                            v174 = 1;
                            if (v208 == 0) {
                                goto lab_0x5227c2;
                            }
                            goto lab_0x522960;
                        }
                    } else {
                        // 0x522951
                        *v23 = (int32_t)*(char *)v206;
                        goto lab_0x522957;
                    }
                }
            }
          lab_0x522b2a_2:
            // 0x522b2a
            v11 = v24;
            v7 = v25;
            v2 = v26;
            v28 = v188;
            v29 = v188;
            goto lab_0x5227c2;
        }
    }
  lab_0x5227c9:;
    int64_t v38 = __readfsqword(40) ^ *(int64_t *)(v12 - 56); // 0x5227e4
    int64_t result = v36; // 0x5227ed
    if (v38 == 0) {
        // 0x5227f3
        return result;
    }
    // 0x522ce2
    __stack_chk_fail();
    int64_t v39 = v31; // 0x522ce7
    int64_t v40 = (int64_t)*(int32_t *)(v12 - 80); // 0x522ce7
    int64_t v41 = v38; // 0x522ce7
    int64_t v42 = v32; // 0x522ce7
    int64_t v43 = v34; // 0x522ce7
    int64_t v44 = v35; // 0x522ce7
    int64_t v45 = v36; // 0x522ce7
    int64_t v46 = v37; // 0x522ce7
    goto lab_0x522cf0;
  lab_0x52282c:
    // 0x52282c
    v11 = a4;
    v7 = v8;
    v2 = 0;
    goto lab_0x5227c2;
  lab_0x522cf0:;
    uint64_t v47 = *(int64_t *)(v43 + 16); // 0x522cf0
    int64_t v48; // 0x5227ab
    int64_t v49; // 0x5227ab
    int64_t v50; // 0x5227ab
    int64_t v51; // 0x5227ab
    int64_t v52; // 0x5227ab
    int64_t v53; // 0x5227ab
    int64_t v54; // 0x5227ab
    int64_t v55; // 0x5227ab
    int64_t v56; // 0x5227ab
    if (v47 >= *(int64_t *)(v43 + 24)) {
        // 0x522d70
        int64_t v57; // 0x5227ab
        int64_t v58 = *(int64_t *)v57; // 0x522d70
        int64_t v59; // 0x5227ab
        int64_t * v60 = (int64_t *)(v59 - 104); // 0x522d74
        int64_t v61; // 0x5227ab
        *v60 = v61;
        int32_t * v62 = (int32_t *)(v59 - 96); // 0x522d7b
        int64_t v63; // 0x5227ab
        *v62 = (int32_t)v63;
        int64_t * v64 = (int64_t *)(v59 - 88); // 0x522d7e
        int64_t v65; // 0x5227ab
        *v64 = v65;
        int64_t v66; // 0x5227ab
        *(char *)(v59 - 80) = (char)v66;
        int64_t v67 = v58 & 0xffffffff; // 0x522d8c
        int64_t v68 = v66 % 256; // 0x522d8e
        int64_t v69 = *v64; // 0x522d93
        uint32_t v70 = *v62; // 0x522d97
        int64_t v71 = v70; // 0x522d97
        int64_t v72 = *v60; // 0x522d9a
        v54 = v69;
        v55 = v71;
        v53 = v67;
        v56 = v72;
        v52 = v68;
        v48 = 0;
        int64_t v73; // 0x5227ab
        v49 = v73;
        int64_t v74; // 0x5227ab
        v50 = v74;
        int64_t v75; // 0x5227ab
        v51 = v75;
        if ((int32_t)v58 != -1) {
            goto lab_0x522cff;
        } else {
            goto lab_0x522a67;
        }
    } else {
        // 0x522cfc
        goto lab_0x522cff;
    }
  lab_0x522cff:
    // 0x522cff
    v54 = v39;
    v55 = v40;
    v53 = (int64_t)*(char *)v47;
    v56 = v41;
    v52 = v42;
    v48 = v43;
    v49 = v44;
    v50 = v45;
    v51 = v46;
    goto lab_0x522a67;
  lab_0x522a67:;
    int64_t v76 = v51;
    int64_t v77 = v50;
    int64_t v78 = v49;
    int64_t v79 = v56;
    int64_t v80 = 0;
    int64_t v81 = v55;
    int64_t v82 = v54;
    int64_t v83 = v81; // 0x522a6a
    int64_t v84 = v52; // 0x522a6a
    int64_t * v85; // 0x5227ab
    int64_t v86; // 0x5227ab
    int64_t v87; // 0x5227ab
    int64_t v88; // 0x5227ab
    int64_t v89; // 0x5227ab
    int64_t v90; // 0x522a73
    if ((char)v80 == (char)v52) {
        goto lab_0x522d2a;
    } else {
        unsigned char v91 = *(char *)(v78 + v82); // 0x522a73
        result = v80;
        if (v77 == 0) {
            // 0x5227f3
            return result;
        }
        // 0x522a7e
        v88 = v48;
        v89 = v53;
        v90 = v91;
        if ((int32_t)v81 == -1) {
            int64_t * v92 = (int64_t *)(v77 + 16);
            int64_t v93 = *v92; // 0x522d10
            uint64_t v94 = *(int64_t *)(v77 + 24); // 0x522d14
            result = v93;
            if (v93 >= v94) {
                // 0x5227f3
                return result;
            }
            unsigned char v95 = *(char *)v93; // 0x522d1e
            v86 = v94;
            v87 = v93;
            v85 = v92;
            v83 = v95;
            v84 = v90;
            if (v95 == v91) {
                goto lab_0x522a90;
            } else {
                goto lab_0x522d2a;
            }
        } else {
            // 0x522a87
            v83 = v81;
            v84 = v90;
            if (v91 != (char)v81) {
                goto lab_0x522d2a;
            } else {
                int64_t * v96 = (int64_t *)(v77 + 16); // 0x522a90
                v86 = *(int64_t *)(v77 + 24);
                v87 = *v96;
                v85 = v96;
                goto lab_0x522a90;
            }
        }
    }
  lab_0x522d33:
    // 0x522d33
    v11 = v97;
    v7 = v98;
    v33 = v99;
    v2 = v100;
    v28 = v101;
    v29 = v102;
    int64_t v103 = v97; // 0x522d36
    int32_t v104 = v105; // 0x522d36
    int64_t v106 = v98; // 0x522d36
    int64_t v107 = v99; // 0x522d36
    int64_t v108 = v100; // 0x522d36
    int64_t v109 = v101; // 0x522d36
    int64_t v110 = v102; // 0x522d36
    if (v99 != v100) {
        goto lab_0x5227c2;
    } else {
        goto lab_0x522d3c;
    }
  lab_0x522d2a:
    // 0x522d2a
    *(int32_t *)(v12 - 80) = (int32_t)v83;
    v97 = v82;
    v105 = *(int32_t *)(v12 - 72);
    v98 = v84;
    v99 = v79;
    v100 = v78;
    v101 = v77;
    v102 = v76;
    goto lab_0x522d33;
  lab_0x522d3c:
    // 0x522d3c
    *(int32_t *)*(int64_t *)(v12 - 136) = v104;
    v31 = v103;
    v32 = v106;
    v34 = v107;
    v35 = v108;
    v36 = v109;
    v37 = v110;
    goto lab_0x5227c9;
  lab_0x522abf:;
    int64_t v111 = v112;
    int64_t v113 = v114;
    int64_t v115 = v116; // 0x522ac2
    int64_t v117 = v118; // 0x522ac2
    if (v116 == 0xffffffff) {
        uint64_t v119 = *(int64_t *)(v113 + 16); // 0x522ac4
        if (v119 >= *(int64_t *)(v113 + 24)) {
            // 0x522db8
            *(int64_t *)(v12 - 96) = v111;
            return *(int64_t *)v113;
        }
        // 0x522ad2
        v115 = (int64_t)*(char *)v119;
        v117 = v119;
    }
    // 0x522a50
    result = v117;
    if (v120 == 0) {
        // 0x5227f3
        return result;
    }
    // 0x522a59
    v54 = v121;
    v55 = v115;
    v53 = v122;
    v56 = v111;
    v52 = 0;
    v48 = v120;
    v49 = v123;
    v50 = v113;
    v51 = v124;
    v39 = v121;
    v40 = v115;
    v41 = v111;
    v42 = 0;
    v43 = v120;
    v44 = v123;
    v45 = v113;
    v46 = v124;
    if ((int32_t)v122 == -1) {
        goto lab_0x522cf0;
    } else {
        goto lab_0x522a67;
    }
  lab_0x522a90:;
    uint64_t v125 = v87; // 0x522a90
    int64_t v126; // 0x5227ab
    int64_t v127; // 0x5227ab
    if (v125 >= v86) {
        int64_t * v128 = (int64_t *)(v12 - 88); // 0x522d4d
        *v128 = v79;
        *(int64_t *)(v12 - 80) = v82;
        v126 = *(int64_t *)v77;
        v127 = *v128;
    } else {
        int64_t v129 = v125 + 1; // 0x522a9e
        *v85 = v129;
        v126 = v129;
        v127 = v79;
    }
    int64_t v130 = v127;
    int64_t v131 = v78 + 1; // 0x522aa9
    v124 = v76;
    v114 = v77;
    v123 = v131;
    v120 = v88;
    v112 = v130;
    v118 = v126;
    v122 = v89;
    v116 = v76 & 0xffffffff;
    v121 = v82;
    if (v131 == v130) {
        // 0x522d68
        *(int32_t *)(v12 - 80) = (int32_t)v76;
        v103 = v82;
        v104 = *(int32_t *)(v12 - 72);
        v106 = v90;
        v107 = v88;
        v108 = v130;
        v109 = v77;
        v110 = v76;
        goto lab_0x522d3c;
    } else {
        goto lab_0x522abf;
    }
}

// Address range: 0x522e70 - 0x523462
int64_t function_522e70(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, uint64_t a8, int64_t a9, int64_t a10) {
    int64_t v1 = 0x100000000 * a5 >> 32; // 0x522e99
    __readfsqword(40);
    function_554b00(a9 + 208);
    int64_t v2 = a3 & 0xffffffff; // 0x522eda
    int64_t v3 = 8 * a8 + 30 & -16; // 0x522eea
    int64_t result2 = v3; // 0x522efd
    int64_t v4; // 0x522e70
    if (a2 == 0) {
        goto lab_0x52341d;
    } else {
        // 0x522f03
        v4 = v2;
        if ((int32_t)a3 == -1) {
            uint64_t v5 = *(int64_t *)(a2 + 16); // 0x523280
            if (v5 >= *(int64_t *)(a2 + 24)) {
                // 0x52339a
                result2 = a2;
                if ((int32_t)a2 == -1) {
                    goto lab_0x52341d;
                } else {
                    // 0x5233c9
                    v4 = a2 & 0xffffffff;
                    goto lab_0x522f0d;
                }
            } else {
                // 0x52328e
                v4 = (int64_t)*(char *)v5;
                goto lab_0x522f0d;
            }
        } else {
            goto lab_0x522f0d;
        }
    }
  lab_0x5230b0:;
    int32_t * v6 = (int32_t *)a10; // 0x5230b4
    *v6 = *v6 | 4;
    // 0x5230b7
    __readfsqword(40);
    int64_t result; // 0x522e70
    return result;
  lab_0x523077:;
    // 0x523077
    int64_t v7; // 0x522e70
    int64_t v8 = v7; // 0x52307d
    int64_t v9; // 0x522e70
    int64_t v10 = v9; // 0x52307d
    int64_t v11 = 0; // 0x52307d
    char v12 = 1; // 0x52307d
    int64_t result4 = 0; // 0x52307d
    if (v9 == 0) {
        // break -> 0x523088
        goto lab_0x523088_3;
    }
    goto lab_0x522f5a;
  lab_0x522f5a:;
    int64_t v13 = v11;
    int64_t v14 = v10;
    int64_t v15 = v8;
    char v16 = 0; // 0x522f60
    int64_t v17 = v15; // 0x522f60
    int64_t v18; // 0x522e70
    if ((int32_t)v18 == -1) {
        // 0x523040
        if (*(int64_t *)(v14 + 16) >= *(int64_t *)(v14 + 24)) {
            // 0x523297
            v16 = (int32_t)*(int64_t *)v14 == -1;
            v17 = v15 & 0xffffffff;
        } else {
            // 0x52304e
            v16 = 0;
            v17 = v15;
        }
    }
    // 0x522f66
    result4 = v13;
    if (v16 == v12) {
        // break -> 0x523088
        goto lab_0x523088_3;
    }
    int64_t v19 = 0; // 0x522f71
    int64_t v20; // 0x522e70
    if (v13 == 0) {
        goto lab_0x522f84;
    } else {
        // 0x522f77
        v20 = v13;
        if ((int32_t)v17 == -1) {
            // 0x523060
            if (*(int64_t *)(v13 + 16) >= *(int64_t *)(v13 + 24)) {
                // 0x523313
                v20 = v13;
                v19 = 0;
                if ((int32_t)*(int64_t *)v13 != -1) {
                    goto lab_0x522f81;
                } else {
                    goto lab_0x522f84;
                }
            } else {
                // 0x52306e
                v20 = v13;
                goto lab_0x522f81;
            }
        } else {
            goto lab_0x522f81;
        }
    }
  lab_0x522f53:;
    // 0x522f53
    int64_t v21; // 0x522e70
    v8 = v21;
    int64_t v22; // 0x522e70
    v10 = v22;
    int64_t v23; // 0x522e70
    v11 = v23;
    v12 = 0;
    v20 = v23;
    if (v22 == 0) {
        goto lab_0x522f81;
    } else {
        goto lab_0x522f5a;
    }
  lab_0x522f84:
    // 0x522f84
    result = v19;
    int64_t v24; // 0x522e70
    if (v24 == 0) {
        goto lab_0x5230b0;
    }
    // 0x522fa5
    uint64_t v25; // 0x522e70
    int64_t v26; // 0x522e70
    int64_t v27; // 0x522e70
    int64_t v28; // 0x522e70
    while (true) {
        // 0x522fa5
        int64_t v29; // 0x522e70
        uint64_t v30; // 0x522e70
        while (v29 > v25) {
            // 0x522fae
            int32_t * v31; // 0x522e70
            int32_t v32 = *v31; // 0x522fb2
            int64_t v33; // 0x522e70
            int64_t v34 = *(int64_t *)(8 * (int64_t)v32 + v33); // 0x522fb5
            char v35 = *(char *)(v34 + v25); // 0x522fb9
            int64_t v36 = v28; // 0x522fbd
            char v37; // 0x522e70
            if (v35 == v37) {
                goto lab_0x522fa0;
            }
            // 0x522fbf
            int64_t v38; // 0x522e70
            int64_t v39 = v38 - 1; // 0x522fbf
            int64_t v40; // 0x522e70
            int32_t v41 = *(int32_t *)(4 * v39 + v40); // 0x522fc3
            *v31 = v41;
            int64_t v42 = *(int64_t *)(8 * v39 + v26); // 0x522fcc
            int64_t * v43; // 0x522fa9
            *v43 = v42;
            v29 = v42;
            v27 = v39;
            int64_t v44 = v39; // 0x522fd3
            int64_t v45 = v28; // 0x522fd3
            if (v30 >= v39) {
                // break (via goto) -> 0x522fd5
                goto lab_0x522fd5;
            }
            v38 = v27;
        }
      lab_0x522fa0:
        // 0x522fa0
        if (v30 + 1 >= v27) {
            // break -> 0x522fd5
            break;
        }
    }
  lab_0x522fd5:;
    // 0x522fd5
    int64_t v46; // 0x522e70
    result4 = v46;
    if (v28 + 1 == v27) {
        // break -> 0x523088
        goto lab_0x523088_3;
    }
    // 0x522fde
    if (v46 != 0) {
        int64_t * v47 = (int64_t *)(v46 + 16); // 0x522fe3
        uint64_t v48 = *v47; // 0x522fe3
        if (v48 >= *(int64_t *)(v46 + 24)) {
            // branch -> 0x522fff
        } else {
            // 0x522ff1
            *v47 = v48 + 1;
        }
    }
    // 0x522fff
    goto lab_0x522f40;
  lab_0x522f81:
    // 0x522f81
    v19 = v20;
    goto lab_0x522f84;
  lab_0x52341d:;
    int64_t v58 = v2; // 0x523423
    int64_t v59 = 0; // 0x523423
    char v60 = 1; // 0x523423
    if (a4 == 0) {
        // 0x52345f
        return result2;
    }
    goto lab_0x522f19;
  lab_0x522f19:;
    char v61 = v60;
    int64_t v62 = v59;
    int64_t v63 = v58;
    int64_t v64 = v1; // 0x522f1f
    int64_t v65 = 0; // 0x522f1f
    int64_t v66 = v63; // 0x522f1f
    int64_t v67 = a4; // 0x522f1f
    int64_t v68; // 0x522e70
    int64_t v69; // 0x522e70
    if ((int32_t)a5 == -1) {
        uint64_t v70 = *(int64_t *)(a4 + 16); // 0x523110
        if (v70 >= *(int64_t *)(a4 + 24)) {
            int64_t v71 = 0x100000000 * a4 >> 32; // 0x5233ed
            int64_t v72 = v63 & 0xffffffff; // 0x5233f4
            v64 = v71;
            v65 = 1;
            v66 = v72;
            v67 = 0;
            v69 = v71;
            v68 = v72;
            if ((int32_t)a4 != -1) {
                goto lab_0x523124;
            } else {
                goto lab_0x522f25;
            }
        } else {
            // 0x52311e
            v69 = (int64_t)*(char *)v70;
            v68 = v63;
            goto lab_0x523124;
        }
    } else {
        goto lab_0x522f25;
    }
  lab_0x522f0d:
    // 0x522f0d
    v58 = v4;
    v59 = a2;
    v60 = 0;
    int64_t v73 = v1; // 0x522f10
    int64_t v74 = v4; // 0x522f10
    int64_t v75 = 0; // 0x522f10
    int64_t v76 = a2; // 0x522f10
    if (a4 == 0) {
        goto lab_0x523142;
    } else {
        goto lab_0x522f19;
    }
  lab_0x522f25:;
    int64_t v54 = v64; // 0x522f28
    int64_t v53 = v66; // 0x522f28
    int64_t v51 = v67; // 0x522f28
    int64_t v49 = v62; // 0x522f28
    int64_t v77 = v64; // 0x522f28
    int64_t v78 = v65; // 0x522f28
    int64_t v79 = v66; // 0x522f28
    int64_t v80 = v67; // 0x522f28
    if (v61 != (char)v65) {
        goto lab_0x52312f;
    } else {
        goto lab_0x522f40_2;
    }
  lab_0x523142:
    // 0x523142
    v54 = v73;
    v53 = v74;
    v51 = v75;
    v49 = v76;
    int64_t result3; // 0x522e70
    if (2 * a8 != 0) {
        int64_t v81; // 0x522e70
        int64_t v82; // 0x522e70
        int64_t v83; // 0x522e70
        int64_t v84; // 0x522e70
        int64_t v85; // 0x522e70
        int64_t v86; // 0x522e70
        int64_t v87; // 0x523149
        char v88; // 0x52319f
        int64_t * v89; // 0x522e70
        int64_t v90; // 0x52318e
        while (*(char *)*(int64_t *)(8 * v84 + v81) != v88) {
            int64_t v91 = *v89; // 0x523180
            if (v88 == (char)v91) {
                // break -> 0x5231a4
                break;
            }
            // 0x52318e
            v90 = v86 + 1;
            v85 = v90;
            v83 = v82;
            if (v90 == v87) {
                // break (via goto) -> 0x5231ba
                goto lab_0x5231ba;
            }
            v86 = v85;
            int64_t v92 = *(int64_t *)(8 * v86 + v81); // 0x523198
            char v93 = *(char *)v92; // 0x52319c
        }
        // 0x5231a4
        int64_t v94; // 0x522e70
        int64_t v95; // 0x522e70
        *(int32_t *)(4 * v94 + v95) = (int32_t)v84;
        int64_t v96 = v94 + 1; // 0x5231ac
        int64_t v97 = v84 + 1; // 0x5231b0
        v94 = v96;
        v84 = v97;
        v83 = v96;
        // 0x523152
        while (v97 != v87) {
            // 0x523198
            v82 = v94;
            v86 = v84;
            while (*(char *)*(int64_t *)(8 * v86 + v81) != v88) {
                // 0x523180
                if (v88 == (char)*v89) {
                    // break -> 0x5231a4
                    break;
                }
                // 0x52318e
                v90 = v86 + 1;
                v85 = v90;
                v83 = v82;
                if (v90 == v87) {
                    // break (via goto) -> 0x5231ba
                    goto lab_0x5231ba;
                }
                v86 = v85;
            }
            // 0x5231a4
            *(int32_t *)(4 * v82 + v95) = (int32_t)v86;
            v96 = v82 + 1;
            v97 = v86 + 1;
            v94 = v96;
            v84 = v97;
            v83 = v96;
        }
      lab_0x5231ba:;
        int64_t v98 = v83;
        int64_t v99; // 0x522e70
        v54 = v99;
        int64_t v100; // 0x522e70
        v53 = v100;
        int64_t v101; // 0x522e70
        v51 = v101;
        int64_t v102; // 0x522e70
        v49 = v102;
        if (v98 != 0) {
            int64_t v103 = v100; // 0x5231e5
            if (v102 != 0) {
                int64_t * v104 = (int64_t *)(v102 + 16); // 0x5231e7
                uint64_t v105 = *v104; // 0x5231e7
                result3 = v105;
                if (v105 >= *(int64_t *)(v102 + 24)) {
                    // 0x52345f
                    return result3;
                }
                // 0x5231f5
                *v104 = v105 + 1;
                v103 = 0xffffffff;
            }
            // 0x523203
            int64_t v106; // 0x522e70
            int64_t v107 = v106 - (8 * v98 + 30 & -16) & -16; // 0x523226
            int64_t v108 = 0;
            int32_t v109 = *(int32_t *)(4 * v108 + v95); // 0x523240
            int32_t len = strlen((char *)*(int64_t *)(8 * (int64_t)v109 + v81)); // 0x523248
            *(int64_t *)(8 * v108 + v107) = (int64_t)len;
            int64_t v110 = v108 + 1; // 0x523251
            while (v98 != v110) {
                // 0x523240
                v109 = *(int32_t *)(4 * v110 + v95);
                len = strlen((char *)*(int64_t *)(8 * (int64_t)v109 + v81));
                *(int64_t *)(8 * v110 + v107) = (int64_t)len;
                v110++;
            }
            // 0x52325a
            v54 = v99;
            v53 = v103;
            v51 = 0x100000000 * v101 >> 32;
            v49 = 0x100000000 * v102 >> 32;
        }
    }
    goto lab_0x522f40_2;
  lab_0x52312f:
    // 0x52312f
    result3 = v78;
    if (v62 == 0) {
        // 0x52345f
        return result3;
    }
    int64_t v113 = v80;
    int64_t v114 = v77;
    v73 = v114;
    v74 = v79;
    v75 = v113;
    v76 = v62;
    if ((int32_t)v79 == -1) {
        uint64_t v115 = *(int64_t *)(v62 + 16); // 0x523348
        if (v115 >= *(int64_t *)(v62 + 24)) {
            int64_t v116 = *(int64_t *)v62; // 0x523430
            v73 = v114;
            v74 = v116 & 0xffffffff;
            v75 = 0x100000000 * v113 >> 32;
            v76 = v62;
            result3 = v116;
            if ((int32_t)v116 == -1) {
                // 0x52345f
                return result3;
            }
        } else {
            // 0x523356
            v73 = v114;
            v74 = (int64_t)*(char *)v115;
            v75 = v113;
            v76 = v62;
        }
    }
    goto lab_0x523142;
  lab_0x522f40_2:
    // 0x522f40
    v26 = 0;
    while (true) {
      lab_0x522f40:
        // 0x522f40
        v23 = v49;
        v25 = 0;
        int64_t v50 = v51;
        int64_t v52 = v53;
        v24 = 0;
        v18 = v54;
        v7 = v52;
        v9 = v50;
        if (v23 == 0) {
            goto lab_0x523077;
        } else {
            // 0x522f49
            v21 = v52;
            v22 = v50;
            if ((int32_t)v52 == -1) {
                uint64_t v55 = *(int64_t *)(v23 + 16); // 0x523020
                if (v55 >= *(int64_t *)(v23 + 24)) {
                    int64_t v56 = *(int64_t *)v23; // 0x5232e0
                    int64_t v57 = 0x100000000 * v50 >> 32; // 0x5232fd
                    v7 = v52 & 0xffffffff;
                    v9 = v57;
                    if ((int32_t)v56 == -1) {
                        goto lab_0x523077;
                    } else {
                        // 0x52330b
                        v21 = v56 & 0xffffffff;
                        v22 = v57;
                        goto lab_0x522f53;
                    }
                } else {
                    // 0x52302e
                    v21 = (int64_t)*(char *)v55;
                    v22 = v50;
                    goto lab_0x522f53;
                }
            } else {
                goto lab_0x522f53;
            }
        }
    }
  lab_0x523088_3:
    // 0x523088
    if (v24 == 1) {
        // 0x52335f
        result = result4;
        if (*(int64_t *)v26 != v25) {
            goto lab_0x5230b0;
        } else {
            goto lab_0x523368;
        }
    } else {
        // 0x523092
        result = result4;
        if (v24 != 2) {
            goto lab_0x5230b0;
        } else {
            // 0x523098
            if (*(int64_t *)v26 == v25) {
                goto lab_0x523368;
            } else {
                // 0x5230a1
                result = result4;
                if (*(int64_t *)(v26 || 8) == v25) {
                    goto lab_0x523368;
                } else {
                    goto lab_0x5230b0;
                }
            }
        }
    }
  lab_0x523124:
    // 0x523124
    v54 = v69;
    v53 = v68;
    v51 = a4;
    v49 = v62;
    v77 = v69;
    v78 = 0;
    v79 = v68;
    v80 = a4;
    if (v61 == 0) {
        goto lab_0x522f40_2;
    } else {
        goto lab_0x52312f;
    }
  lab_0x523368:;
    // 0x523368
    int64_t v111; // bp-152, 0x522e70
    int32_t v112 = *(int32_t *)((int64_t)&v111 - v3 + 15 & -16); // 0x523368
    *(int32_t *)a6 = v112 - ((int64_t)v112 >= a8 ? (int32_t)a8 : 0);
    // 0x5230b7
    __readfsqword(40);
    return result4;
}

// Address range: 0x56a0d0 - 0x56a66b
int64_t function_56a0d0(int64_t a1, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x56a0e4
    int64_t * v2 = (int64_t *)(a1 + 16); // 0x56a0f4
    int64_t v3 = *v2; // 0x56a0f4
    if (v3 == 0) {
        int64_t result = function_4efd30(160); // 0x56a605
        *(int32_t *)(result + 8) = 0;
        *(int64_t *)(result + 16) = 0;
        *(int64_t *)(result + 24) = 0;
        *(char *)(result + 32) = 0;
        *(int64_t *)(result + 36) = 0;
        *(int64_t *)(result + 48) = 0;
        *(int64_t *)(result + 56) = 0;
        *(int64_t *)result = (int64_t)&g33;
        *(int64_t *)(result + 64) = 0;
        *(int64_t *)(result + 72) = 0;
        *(int64_t *)(result + 80) = 0;
        *(int64_t *)(result + 88) = 0;
        return result;
    }
    if (a2 == 0) {
        // 0x56a348
        *(int32_t *)(v3 + 36) = 46;
        *(int32_t *)(*v2 + 40) = 44;
        *(int64_t *)(*v2 + 16) = (int64_t)&g28;
        *(int64_t *)(*v2 + 24) = 0;
        *(char *)(*v2 + 32) = 0;
        *(int64_t *)(*v2 + 48) = (int64_t)&g27;
        *(int64_t *)(*v2 + 56) = 0;
        *(int64_t *)(*v2 + 64) = (int64_t)&g27;
        *(int64_t *)(*v2 + 72) = 0;
        *(int64_t *)(*v2 + 80) = (int64_t)&g27;
        *(int64_t *)(*v2 + 88) = 0;
        *(int32_t *)(*v2 + 96) = 0;
        *(int32_t *)(*v2 + 100) = 0x4000302;
        *(int32_t *)(*v2 + 104) = 0x4000302;
        int64_t v4 = (int32_t)&g36 ^ (int32_t)&g36; // 0x56a3f2
        int64_t v5 = v4;
        char v6 = *(char *)(v5 + *(int64_t *)&g36); // 0x56a3f8
        *(int32_t *)(4 * v5 + 108 + *v2) = (int32_t)v6;
        v4 = v5 + 1;
        while (v5 != 10) {
            // 0x56a3f8
            v5 = v4;
            v6 = *(char *)(v5 + *(int64_t *)&g36);
            *(int32_t *)(4 * v5 + 108 + *v2) = (int32_t)v6;
            v4 = v5 + 1;
        }
        // 0x56a31f
        return __readfsqword(40) ^ v1;
    }
    struct __locale_struct * v7 = (struct __locale_struct *)a2; // 0x56a10b
    struct __locale_struct * v8 = __uselocale(v7); // 0x56a10b
    *(int32_t *)(*v2 + 36) = (int32_t)(int64_t)__nl_langinfo_l(0x4002b, v7);
    *(int32_t *)(*v2 + 40) = (int32_t)(int64_t)__nl_langinfo_l(0x4002c, v7);
    int64_t v9 = *v2; // 0x56a13b
    if (*(int32_t *)(v9 + 36) != 0) {
        // 0x56a4f0
        *(int32_t *)(*v2 + 96) = (int32_t)*__nl_langinfo_l(0x40007, v7);
    } else {
        // 0x56a14a
        *(int32_t *)(v9 + 96) = 0;
        *(int32_t *)(*v2 + 36) = 46;
    }
    char * str = __nl_langinfo_l(0x40004, v7); // 0x56a164
    char * str3 = __nl_langinfo_l(0x40005, v7); // 0x56a174
    char * str2 = str3; // bp-96, 0x56a181
    char * str4 = __nl_langinfo_l(0x40006, v7); // bp-88, 0x56a193
    char * str5 = __nl_langinfo_l(0x40000, v7); // bp-80, 0x56a1a5
    char * v10 = __nl_langinfo_l(0x40015, v7); // 0x56a1aa
    int64_t v11 = *v2; // 0x56a1af
    char v12 = *v10; // 0x56a1b3
    int32_t v13; // 0x56a0d0
    if (*(int32_t *)(v11 + 40) != 0) {
        int32_t len = strlen(str); // 0x56a447
        int64_t v14 = len; // 0x56a447
        if (len != 0) {
            int64_t v15 = v14 + 1; // 0x56a510
            int64_t v16 = function_4eec00(v15); // 0x56a51b
            memcpy((int64_t *)v16, (int64_t *)str, (int32_t)v15);
            *(int64_t *)(*v2 + 16) = v16;
        } else {
            // 0x56a45c
            *(int64_t *)((0x100000000 * v11 >> 32) + 16) = (int64_t)&g28;
            *(char *)(*v2 + 32) = 0;
        }
        // 0x56a478
        *(int64_t *)(*v2 + 24) = v14;
        int32_t len2 = strlen(str2); // 0x56a485
        v13 = len2;
        if (len2 == 0) {
            // 0x56a208
            *(int64_t *)(*v2 + 64) = (int64_t)&g27;
            goto lab_0x56a21a;
        } else {
            goto lab_0x56a493;
        }
    } else {
        // 0x56a1c2
        *(int64_t *)(v11 + 16) = (int64_t)&g28;
        *(int64_t *)(*v2 + 24) = 0;
        *(char *)(*v2 + 32) = 0;
        *(int32_t *)(*v2 + 40) = 44;
        int32_t len3 = strlen(str3); // 0x56a1fa
        v13 = len3;
        if (len3 != 0) {
            goto lab_0x56a493;
        } else {
            // 0x56a208
            *(int64_t *)(*v2 + 64) = (int64_t)&g27;
            goto lab_0x56a21a;
        }
    }
  lab_0x56a493:;
    uint64_t len6 = (int64_t)v13 + 1; // 0x56a493
    int64_t ps = 0; // bp-72, 0x56a4a1
    int64_t wstr = function_4eec00(len6 < 0x1fffffffffffffff ? 4 * len6 : -1); // 0x56a4c0
    mbsrtowcs((int32_t *)wstr, &str2, (int32_t)len6, (struct _TYPEDEF___mbstate_t *)&ps);
    *(int64_t *)(*v2 + 64) = wstr;
    goto lab_0x56a21a;
  lab_0x56a21a:;
    int64_t v17 = *v2; // 0x56a21a
    int32_t v18 = wcslen((int32_t *)*(int64_t *)(v17 + 64)); // 0x56a222
    *(int64_t *)(v17 + 72) = (int64_t)v18;
    int32_t len4 = strlen(str4); // 0x56a230
    if (v12 != 0) {
        if (len4 != 0) {
            uint64_t len7 = (int64_t)len4 + 1; // 0x56a548
            ps = 0;
            int64_t wstr2 = function_4eec00(len7 < 0x1fffffffffffffff ? 4 * len7 : -1); // 0x56a575
            mbsrtowcs((int32_t *)wstr2, &str4, (int32_t)len7, (struct _TYPEDEF___mbstate_t *)&ps);
            *(int64_t *)(*v2 + 80) = wstr2;
        } else {
            // 0x56a421
            *(int64_t *)(*v2 + 80) = (int64_t)&g27;
        }
    } else {
        // 0x56a23e
        *(int64_t *)(*v2 + 80) = (int64_t)L"()";
    }
    int64_t v19 = *v2; // 0x56a255
    int32_t v20 = wcslen((int32_t *)*(int64_t *)(v19 + 80)); // 0x56a25d
    *(int64_t *)(v19 + 88) = (int64_t)v20;
    int32_t len5 = strlen(str5); // 0x56a26b
    if (len5 != 0) {
        uint64_t len8 = (int64_t)len5 + 1; // 0x56a5a8
        ps = 0;
        int64_t wstr3 = function_4eec00(len8 < 0x1fffffffffffffff ? 4 * len8 : -1); // 0x56a5d5
        mbsrtowcs((int32_t *)wstr3, &str5, (int32_t)len8, (struct _TYPEDEF___mbstate_t *)&ps);
        *(int64_t *)(*v2 + 48) = wstr3;
    } else {
        // 0x56a279
        *(int64_t *)(*v2 + 48) = (int64_t)&g27;
    }
    int64_t v21 = *v2; // 0x56a288
    int32_t v22 = wcslen((int32_t *)*(int64_t *)(v21 + 48)); // 0x56a290
    *(int64_t *)(v21 + 56) = (int64_t)v22;
    char v23 = *__nl_langinfo_l(0x40010, v7); // 0x56a2a6
    char v24 = *__nl_langinfo_l(0x40011, v7); // 0x56a2bc
    int64_t v25 = function_4f3230((int64_t)v23, (int64_t)v24, *__nl_langinfo_l(0x40014, v7)); // 0x56a2d9
    *(int32_t *)(*v2 + 100) = (int32_t)v25;
    char v26 = *__nl_langinfo_l(0x40012, v7); // 0x56a2f2
    int64_t v27 = function_4f3230((int64_t)v26, (int64_t)*__nl_langinfo_l(0x40013, v7), v12); // 0x56a30f
    *(int32_t *)(*v2 + 104) = (int32_t)v27;
    __uselocale(v8);
    // 0x56a31f
    return __readfsqword(40) ^ v1;
}

// Address range: 0x56a740 - 0x56acdb
int64_t function_56a740(int64_t a1, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x56a754
    int64_t * v2 = (int64_t *)(a1 + 16); // 0x56a764
    int64_t v3 = *v2; // 0x56a764
    if (v3 == 0) {
        int64_t result = function_4efd30(160); // 0x56ac75
        *(int32_t *)(result + 8) = 0;
        *(int64_t *)(result + 16) = 0;
        *(int64_t *)(result + 24) = 0;
        *(char *)(result + 32) = 0;
        *(int64_t *)(result + 36) = 0;
        *(int64_t *)(result + 48) = 0;
        *(int64_t *)(result + 56) = 0;
        *(int64_t *)result = (int64_t)&g34;
        *(int64_t *)(result + 64) = 0;
        *(int64_t *)(result + 72) = 0;
        *(int64_t *)(result + 80) = 0;
        *(int64_t *)(result + 88) = 0;
        return result;
    }
    if (a2 == 0) {
        // 0x56a9b8
        *(int32_t *)(v3 + 36) = 46;
        *(int32_t *)(*v2 + 40) = 44;
        *(int64_t *)(*v2 + 16) = (int64_t)&g28;
        *(int64_t *)(*v2 + 24) = 0;
        *(char *)(*v2 + 32) = 0;
        *(int64_t *)(*v2 + 48) = (int64_t)&g27;
        *(int64_t *)(*v2 + 56) = 0;
        *(int64_t *)(*v2 + 64) = (int64_t)&g27;
        *(int64_t *)(*v2 + 72) = 0;
        *(int64_t *)(*v2 + 80) = (int64_t)&g27;
        *(int64_t *)(*v2 + 88) = 0;
        *(int32_t *)(*v2 + 96) = 0;
        *(int32_t *)(*v2 + 100) = 0x4000302;
        *(int32_t *)(*v2 + 104) = 0x4000302;
        int64_t v4 = (int32_t)&g36 ^ (int32_t)&g36; // 0x56aa62
        int64_t v5 = v4;
        char v6 = *(char *)(v5 + *(int64_t *)&g36); // 0x56aa68
        *(int32_t *)(4 * v5 + 108 + *v2) = (int32_t)v6;
        v4 = v5 + 1;
        while (v5 != 10) {
            // 0x56aa68
            v5 = v4;
            v6 = *(char *)(v5 + *(int64_t *)&g36);
            *(int32_t *)(4 * v5 + 108 + *v2) = (int32_t)v6;
            v4 = v5 + 1;
        }
        // 0x56a98f
        return __readfsqword(40) ^ v1;
    }
    struct __locale_struct * v7 = (struct __locale_struct *)a2; // 0x56a77b
    struct __locale_struct * v8 = __uselocale(v7); // 0x56a77b
    *(int32_t *)(*v2 + 36) = (int32_t)(int64_t)__nl_langinfo_l(0x4002b, v7);
    *(int32_t *)(*v2 + 40) = (int32_t)(int64_t)__nl_langinfo_l(0x4002c, v7);
    int64_t v9 = *v2; // 0x56a7ab
    if (*(int32_t *)(v9 + 36) != 0) {
        // 0x56ab60
        *(int32_t *)(*v2 + 96) = (int32_t)*__nl_langinfo_l(0x40008, v7);
    } else {
        // 0x56a7ba
        *(int32_t *)(v9 + 96) = 0;
        *(int32_t *)(*v2 + 36) = 46;
    }
    char * str = __nl_langinfo_l(0x40004, v7); // 0x56a7d4
    char * str3 = __nl_langinfo_l(0x40005, v7); // 0x56a7e4
    char * str2 = str3; // bp-96, 0x56a7f1
    char * str4 = __nl_langinfo_l(0x40006, v7); // bp-88, 0x56a803
    char * str5 = __nl_langinfo_l(0x40001, v7); // bp-80, 0x56a815
    char * v10 = __nl_langinfo_l(0x4000e, v7); // 0x56a81a
    int64_t v11 = *v2; // 0x56a81f
    char v12 = *v10; // 0x56a823
    int32_t v13; // 0x56a740
    if (*(int32_t *)(v11 + 40) != 0) {
        int32_t len = strlen(str); // 0x56aab7
        int64_t v14 = len; // 0x56aab7
        if (len != 0) {
            int64_t v15 = v14 + 1; // 0x56ab80
            int64_t v16 = function_4eec00(v15); // 0x56ab8b
            memcpy((int64_t *)v16, (int64_t *)str, (int32_t)v15);
            *(int64_t *)(*v2 + 16) = v16;
        } else {
            // 0x56aacc
            *(int64_t *)((0x100000000 * v11 >> 32) + 16) = (int64_t)&g28;
            *(char *)(*v2 + 32) = 0;
        }
        // 0x56aae8
        *(int64_t *)(*v2 + 24) = v14;
        int32_t len2 = strlen(str2); // 0x56aaf5
        v13 = len2;
        if (len2 == 0) {
            // 0x56a878
            *(int64_t *)(*v2 + 64) = (int64_t)&g27;
            goto lab_0x56a88a;
        } else {
            goto lab_0x56ab03;
        }
    } else {
        // 0x56a832
        *(int64_t *)(v11 + 16) = (int64_t)&g28;
        *(int64_t *)(*v2 + 24) = 0;
        *(char *)(*v2 + 32) = 0;
        *(int32_t *)(*v2 + 40) = 44;
        int32_t len3 = strlen(str3); // 0x56a86a
        v13 = len3;
        if (len3 != 0) {
            goto lab_0x56ab03;
        } else {
            // 0x56a878
            *(int64_t *)(*v2 + 64) = (int64_t)&g27;
            goto lab_0x56a88a;
        }
    }
  lab_0x56ab03:;
    uint64_t len6 = (int64_t)v13 + 1; // 0x56ab03
    int64_t ps = 0; // bp-72, 0x56ab11
    int64_t wstr = function_4eec00(len6 < 0x1fffffffffffffff ? 4 * len6 : -1); // 0x56ab30
    mbsrtowcs((int32_t *)wstr, &str2, (int32_t)len6, (struct _TYPEDEF___mbstate_t *)&ps);
    *(int64_t *)(*v2 + 64) = wstr;
    goto lab_0x56a88a;
  lab_0x56a88a:;
    int64_t v17 = *v2; // 0x56a88a
    int32_t v18 = wcslen((int32_t *)*(int64_t *)(v17 + 64)); // 0x56a892
    *(int64_t *)(v17 + 72) = (int64_t)v18;
    int32_t len4 = strlen(str4); // 0x56a8a0
    if (v12 != 0) {
        if (len4 != 0) {
            uint64_t len7 = (int64_t)len4 + 1; // 0x56abb8
            ps = 0;
            int64_t wstr2 = function_4eec00(len7 < 0x1fffffffffffffff ? 4 * len7 : -1); // 0x56abe5
            mbsrtowcs((int32_t *)wstr2, &str4, (int32_t)len7, (struct _TYPEDEF___mbstate_t *)&ps);
            *(int64_t *)(*v2 + 80) = wstr2;
        } else {
            // 0x56aa91
            *(int64_t *)(*v2 + 80) = (int64_t)&g27;
        }
    } else {
        // 0x56a8ae
        *(int64_t *)(*v2 + 80) = (int64_t)L"()";
    }
    int64_t v19 = *v2; // 0x56a8c5
    int32_t v20 = wcslen((int32_t *)*(int64_t *)(v19 + 80)); // 0x56a8cd
    *(int64_t *)(v19 + 88) = (int64_t)v20;
    int32_t len5 = strlen(str5); // 0x56a8db
    if (len5 != 0) {
        uint64_t len8 = (int64_t)len5 + 1; // 0x56ac18
        ps = 0;
        int64_t wstr3 = function_4eec00(len8 < 0x1fffffffffffffff ? 4 * len8 : -1); // 0x56ac45
        mbsrtowcs((int32_t *)wstr3, &str5, (int32_t)len8, (struct _TYPEDEF___mbstate_t *)&ps);
        *(int64_t *)(*v2 + 48) = wstr3;
    } else {
        // 0x56a8e9
        *(int64_t *)(*v2 + 48) = (int64_t)&g27;
    }
    int64_t v21 = *v2; // 0x56a8f8
    int32_t v22 = wcslen((int32_t *)*(int64_t *)(v21 + 48)); // 0x56a900
    *(int64_t *)(v21 + 56) = (int64_t)v22;
    char v23 = *__nl_langinfo_l(0x40009, v7); // 0x56a916
    char v24 = *__nl_langinfo_l(0x4000a, v7); // 0x56a92c
    int64_t v25 = function_4f3230((int64_t)v23, (int64_t)v24, *__nl_langinfo_l(0x4000d, v7)); // 0x56a949
    *(int32_t *)(*v2 + 100) = (int32_t)v25;
    char v26 = *__nl_langinfo_l(0x4000b, v7); // 0x56a962
    int64_t v27 = function_4f3230((int64_t)v26, (int64_t)*__nl_langinfo_l(0x4000c, v7), v12); // 0x56a97f
    *(int32_t *)(*v2 + 104) = (int32_t)v27;
    __uselocale(v8);
    // 0x56a98f
    return __readfsqword(40) ^ v1;
}

// Address range: 0x582e90 - 0x58341b
int64_t function_582e90(int64_t str, int64_t a2, int64_t a3) {
    // 0x582e90
    int64_t v1; // bp-568, 0x582e90
    int64_t v2 = (int64_t)&v1; // 0x582ea3
    __readfsqword(40);
    int64_t v3; // 0x582e90
    char v4; // 0x582e90
    int64_t v5; // bp-536, 0x582e90
    if ((char)str == 95) {
        char * v6 = (char *)(str + 1);
        if (*v6 != 90) {
            goto lab_0x582ece;
        } else {
            int32_t len = strlen((char *)str); // 0x582f23
            v5 = str;
            if (*v6 != 90) {
                // 0x583082
                __readfsqword(40);
                return 0;
            }
            int64_t v7 = str + 2; // 0x5830c7
            int64_t v8 = function_57cf40(&v5, 1); // 0x5830da
            char v9 = *(char *)v7; // 0x5830f7
            v4 = v9;
            v3 = v8;
            if (v9 == 46) {
                int32_t v10 = 2 * len; // 0x582f2d
                int64_t v11 = v2 - 16 + -24 * (int64_t)v10;
                int64_t v12 = v8; // 0x5831cf
                int32_t v13 = 0;
                int64_t v14 = v7;
                unsigned char v15 = *(char *)(v14 + 1); // 0x583102
                while (v15 != 95 && v15 >= 123) {
                    int32_t v16 = v13;
                    int64_t v17 = (int64_t)v15 + 0xffffffd0; // 0x58311a
                    if ((char)v17 >= 10) {
                        // 0x583438
                        return v17 & 0xffffffff;
                    }
                    int64_t v18 = v14;
                    int64_t v19 = v18; // 0x583139
                    while (*(char *)(v18 + 1) < 58) {
                        int64_t v20 = v18 + 2; // 0x58313b
                        char v21 = *(char *)v20; // 0x58313b
                        int64_t v22 = v20; // 0x583149
                        int64_t v23 = v20; // 0x583149
                        char v24 = v21; // 0x583149
                        if (v21 < 58) {
                            int64_t v25 = v22 + 1; // 0x583150
                            char v26 = *(char *)v25; // 0x583154
                            v22 = v25;
                            v23 = v25;
                            v24 = v26;
                            while (v26 < 58) {
                                // 0x583150
                                v25 = v22 + 1;
                                v26 = *(char *)v25;
                                v22 = v25;
                                v23 = v25;
                                v24 = v26;
                            }
                        }
                        int64_t v27 = v23;
                        v19 = v27;
                        if (v24 != 46) {
                            // break -> 0x583167
                            break;
                        }
                        v18 = v27;
                        v19 = v18;
                    }
                    int64_t v28 = v19;
                    int32_t v29 = v16; // 0x58317a
                    int64_t v30 = 0; // 0x58317a
                    if (v16 < v10) {
                        int32_t v31 = v16 + 1; // 0x583186
                        int32_t v32 = v28 - v14; // 0x583197
                        int64_t v33 = v11 + 8 * ((0x100000000 * (int64_t)v16 >> 31) + (int64_t)v16); // 0x583199
                        int32_t * v34 = (int32_t *)(v33 | 4); // 0x58319d
                        *v34 = 0;
                        v29 = v31;
                        v30 = 0;
                        if (v32 != 0) {
                            // 0x5831b0
                            *v34 = 0;
                            *(int32_t *)v33 = 0;
                            *(int64_t *)(v33 + 8) = v14;
                            *(int32_t *)(v33 + 16) = v32;
                            v29 = v31;
                            v30 = v33;
                        }
                    }
                    // 0x5831c4
                    v13 = v29;
                    v12 = function_5797e0(&v5, 77, v12, (int32_t)v30);
                    char v35 = *(char *)v28; // 0x5830f7
                    v4 = v35;
                    v3 = v12;
                    if (v35 != 46) {
                        goto lab_0x583211;
                    }
                    v14 = v28;
                    v15 = *(char *)(v14 + 1);
                }
                // 0x583410
                return (int64_t)*(char *)(v14 + 2) + 0xffffff9f & 0xffffffff;
            }
            goto lab_0x583211;
        }
    } else {
        goto lab_0x582ece;
    }
  lab_0x583211:;
    int64_t v36 = v3; // 0x583213
    if (v4 != 0) {
        // 0x583082
        __readfsqword(40);
        return 0;
    }
    goto lab_0x583219;
  lab_0x582ece:;
    // 0x582ece
    bool v55; // 0x582e90
    int64_t v56 = v55 ? -1 : 1; // 0x582edd
    int64_t v57 = (int64_t)"_GLOBAL_"; // 0x582e90
    int64_t v58 = str; // 0x582e90
    int64_t v59 = 8; // 0x582e90
    unsigned char v60 = *(char *)v58; // 0x582edd
    char v61 = *(char *)v57; // 0x582edd
    int64_t v62 = v57 + v56; // 0x582edd
    char v63 = v61; // 0x582edd
    bool v64 = false; // 0x582edd
    while (v60 == v61) {
        int64_t v65 = v59 - 1; // 0x582edd
        v58 += v56;
        v59 = v65;
        v63 = v60;
        v64 = true;
        if (v65 == 0) {
            // break -> 
            break;
        }
        v60 = *(char *)v58;
        v61 = *(char *)v62;
        v62 += v56;
        v63 = v61;
        v64 = false;
    }
    unsigned char v66 = v63;
    char v53; // 0x582f06
    if ((v60 >= v66 && !v64) != v60 < v66) {
        goto lab_0x5831f8;
    } else {
        char v67 = *(char *)(str + 8); // 0x582eea
        if (v67 < 96) {
            if ((1 << (int64_t)((v67 + 28) % 64) & 0x800000000000401) == 0) {
                goto lab_0x5831f8;
            } else {
                // 0x582f06
                v53 = *(char *)(str + 9);
                switch (v53) {
                    case 68: {
                        goto lab_0x583350;
                    }
                    case 73: {
                        goto lab_0x583350;
                    }
                    default: {
                        goto lab_0x5831f8;
                    }
                }
            }
        } else {
            goto lab_0x5831f8;
        }
    }
  lab_0x5831f8:;
    int32_t len4 = strlen((char *)str); // 0x582f23
    v5 = str;
    int64_t v68 = function_57ba10(&v5, (int64_t)(2 * len4)); // 0x5831ff
    v4 = v62;
    v3 = v68;
    goto lab_0x583211;
  lab_0x583219:
    // 0x583219
    if (v36 != 0) {
        // 0x583222
        int64_t v37; // 0x582e90
        int32_t v38; // bp-76, 0x582e90
        int32_t v39; // bp-92, 0x582e90
        function_5798c0((int64_t *)&v38, (int64_t *)&v39, v37);
        int32_t v40 = v39; // 0x5832c0
        int32_t v41 = v38; // 0x5832c4
        v38 = v41 * v40;
        int64_t v42; // bp-440, 0x582e90
        function_581610(&v42, 17, v37, 1);
        int64_t v43; // bp-8, 0x582e90
        *(char *)((int64_t)&v43 - 432) = 0;
    }
    // 0x583082
    __readfsqword(40);
    return 0;
  lab_0x583350:;
    // 0x583350
    char * str3; // 0x582e90
    int64_t v44; // 0x582e90
    int64_t v45; // 0x582e90
    int32_t len2; // 0x582f23
    int64_t v46; // 0x582ff6
    char * str2; // 0x582e90
    if (*(char *)(str + 10) != 95) {
        goto lab_0x5831f8;
    } else {
        // 0x58335d
        len2 = strlen((char *)str);
        v5 = str;
        v46 = str + 11;
        str2 = (char *)v46;
        if (*str2 == 95) {
            // 0x583370
            if (*(char *)(str + 12) != 90) {
                goto lab_0x58300c;
            } else {
                int64_t v47 = str + 13; // 0x583382
                int64_t v48 = function_57cf40(&v5, 0); // 0x583392
                str3 = (char *)v47;
                v45 = v47;
                v44 = v48;
                goto lab_0x58303f;
            }
        } else {
            goto lab_0x58300c;
        }
    }
  lab_0x58300c:;
    int32_t v49 = 2 * len2; // 0x582f2d
    int32_t len3 = strlen(str2); // 0x58301c
    str3 = str2;
    v45 = v46;
    v44 = 0;
    if (v49 >= 0 == (v49 != 0)) {
        int64_t v50 = -24 * (int64_t)v49;
        int64_t v51 = v2 - 16 + v50; // 0x582fb6
        *(int32_t *)(v51 | 4) = 0;
        str3 = str2;
        v45 = v46;
        v44 = 0;
        if (len3 != 0) {
            // 0x5833be
            *(int32_t *)v51 = 0;
            *(int64_t *)(v51 + 8) = v46;
            *(int32_t *)(v50 + v2) = len3;
            str3 = str2;
            v45 = v46;
            v44 = v51;
        }
    }
    goto lab_0x58303f;
  lab_0x58303f:;
    int64_t v52 = function_5797e0(&v5, v53 != 73 ? 68 : 67, v44, 0); // 0x583050
    char v54 = *(char *)(v45 + (int64_t)strlen(str3)); // 0x583071
    v36 = v52;
    if (v54 != 0) {
        // 0x583082
        __readfsqword(40);
        return 0;
    }
    goto lab_0x583219;
}
