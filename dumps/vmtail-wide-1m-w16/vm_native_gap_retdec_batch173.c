/*
 * Targeted RetDec C for native executable gap queue batch 173.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x4aab80-0x4aaf42 rank=106 name=fcn.004aab80 kind=r2_discovered bytes=962 uncovered=962
 *   0x50b2b0-0x50b66f rank=107 name=fcn.0050b2b0 kind=r2_discovered bytes=959 uncovered=959
 *   0x50f830-0x50fbef rank=108 name=fcn.0050f830 kind=r2_discovered bytes=959 uncovered=959
 *   0x4b3910-0x4b3cce rank=109 name=fcn.004b3910 kind=r2_discovered bytes=958 uncovered=958
 *   0x559cd0-0x55a086 rank=110 name=fcn.00559cd0 kind=r2_discovered bytes=950 uncovered=950
 *   0x4336c-0x43721 rank=111 name=fcn.0004336c kind=r2_discovered bytes=949 uncovered=949
 *   0x5598f0-0x559ca5 rank=112 name=fcn.005598f0 kind=r2_discovered bytes=949 uncovered=949
 *   0x543a60-0x543e11 rank=113 name=fcn.00543a60 kind=r2_discovered bytes=945 uncovered=945
 *   0x497970-0x497d1b rank=114 name=fcn.00497970 kind=r2_discovered bytes=939 uncovered=939
 *   0x4c62e0-0x4c667b rank=115 name=fcn.004c62e0 kind=r2_discovered bytes=923 uncovered=923
 *   0x4ac630-0x4ac9c7 rank=116 name=fcn.004ac630 kind=r2_discovered bytes=919 uncovered=919
 *   0x5770c0-0x57744e rank=117 name=fcn.005770c0 kind=r2_discovered bytes=910 uncovered=910
 *   0x577490-0x57781e rank=118 name=fcn.00577490 kind=r2_discovered bytes=910 uncovered=910
 *   0x24660-0x249e5 rank=119 name=fcn.00024660 kind=r2_discovered bytes=901 uncovered=901
 *   0x4b04e0-0x4b0864 rank=120 name=fcn.004b04e0 kind=r2_discovered bytes=900 uncovered=900
 *   0x517e6-0x51b65 rank=121 name=fcn.000517e6 kind=r2_discovered bytes=895 uncovered=895
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
extern int g41;
extern int g42;
extern int g43;
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
int64_t function_208a0();
int64_t function_20a50();
int64_t function_24660(int64_t a1, int64_t a2, int64_t a3);
int64_t function_249e6();
int64_t function_24ded();
int64_t function_2508e();
int64_t function_2509a();
int64_t function_250b0();
int64_t function_25194();
int64_t function_253a6();
int64_t function_25c34();
int64_t function_29cea();
int64_t function_29ef7();
int64_t function_35ef6();
int64_t function_35fcc();
int64_t function_36b3c();
int64_t function_36ff8();
int64_t function_4336c(uint64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_4945c0();
int64_t function_496ab0();
int64_t function_497750();
int64_t function_4977a0();
int64_t function_497930();
int64_t function_497970(int64_t a1);
int64_t function_49e770();
int64_t function_4a9620();
int64_t function_4a9850();
int64_t function_4aa470();
int64_t function_4aa650();
int64_t function_4aa830();
int64_t function_4aab80(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int32_t a7, int64_t a8, int64_t a9, int64_t a10);
int64_t function_4ac5f0();
int64_t function_4ac610();
int64_t function_4ac630(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4ad720();
int64_t function_4ad750();
int64_t function_4afe70();
int64_t function_4aff10();
int64_t function_4b04e0(uint64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_4b0870();
int64_t function_4b0890();
int64_t function_4b0ac0();
int64_t function_4b0ec0();
int64_t function_4b0f10();
int64_t function_4b1220();
int64_t function_4b1590();
int64_t function_4b1680();
int64_t function_4b1a80();
int64_t function_4b1ac0();
int64_t function_4b26c0();
int64_t function_4b2d10();
int64_t function_4b38b0();
int64_t function_4b3910(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4b4e60();
int64_t function_4b82e0();
int64_t function_4b90b0();
int64_t function_4c14d0();
int64_t function_4c1690();
int64_t function_4c18b0();
int64_t function_4c1d00();
int64_t function_4c1d60();
int64_t function_4c1e70();
int64_t function_4c3510();
int64_t function_4c3b10();
int64_t function_4c3b30();
int64_t function_4c40e0();
int64_t function_4c42d0();
int64_t function_4c4300();
int64_t function_4c4360();
int64_t function_4c4730();
int64_t function_4c5100();
int64_t function_4c5930();
int64_t function_4c5bd0();
int64_t function_4c5d50();
int64_t function_4c62e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4cb410();
int64_t function_4cb520();
int64_t function_4ccc30();
int64_t function_4ccd50();
int64_t function_4cdd20();
int64_t function_4cdde0();
int64_t function_4eeb40();
int64_t function_4eec00();
int64_t function_4efd30();
int64_t function_4f0bc0();
int64_t function_4fc010();
int64_t function_508450();
int64_t function_508620();
int64_t function_50906();
int64_t function_50ab00();
int64_t function_50b260();
int64_t function_50b2b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_50d5a();
int64_t function_50d7a0();
int64_t function_50f6f0();
int64_t function_50f7d0();
int64_t function_50f830(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10);
int64_t function_517e6(int64_t a1, int64_t a2, int64_t a3);
int64_t function_5236c();
int64_t function_52392();
int64_t function_5245c0();
int64_t function_524600();
int64_t function_5246d0();
int64_t function_525f0();
int64_t function_52876();
int64_t function_52d3e();
int64_t function_52f2a();
int64_t function_52fbc();
int64_t function_5423b0();
int64_t function_5423f0();
int64_t function_5433f0();
int64_t function_543470();
int64_t function_543a60(int64_t a1, int64_t a2, int64_t a3);
int64_t function_543e0f(void);
int64_t function_547670();
int64_t function_547e30();
int64_t function_54d560();
int64_t function_54ff00();
int64_t function_5509d0();
int64_t function_554b00();
int64_t function_5598f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10);
int64_t function_559cd0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, uint64_t a8, int64_t a9, int64_t a10);
int64_t function_5770c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_577490(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_5ca10();
int64_t function_5cd02();
int64_t function_729b6();
int64_t function_729ce();

// Address range: 0x24660 - 0x249e5
int64_t function_24660(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a3 & 0xffffffff; // 0x24664
    int64_t v2 = __readfsqword(40); // 0x24689
    int64_t v3; // bp-168, 0x24660
    function_729b6(&v3, a1 + (int64_t)&g3);
    function_25c34(a1 + (int64_t)&g4, a2, function_24ded(a2));
    function_729ce(&v3);
    if ((char)function_249e6(a1, v1) != 0) {
        // 0x246d9
        int64_t v4; // bp-224, 0x24660
        function_729b6(&v4, a1 + (int64_t)&g6);
        int64_t v5; // bp-216, 0x24660
        int64_t v6; // bp-231, 0x24660
        function_250b0(&v5, "N1", &v6);
        int64_t v7; // bp-136, 0x24660
        function_253a6(&v7, (int64_t)&v5, v1);
        int64_t v8; // bp-208, 0x24660
        int64_t v9; // bp-230, 0x24660
        function_250b0(&v8, "N2", &v9);
        uint32_t v10 = *(int32_t *)(a1 + (int64_t)&g2); // 0x24749
        int64_t v11; // bp-112, 0x24660
        function_253a6(&v11, (int64_t)&v8, (int64_t)v10);
        int64_t v12; // bp-200, 0x24660
        int64_t v13; // bp-229, 0x24660
        function_250b0(&v12, "N3", &v13);
        int64_t v14 = *(int64_t *)(a1 + (int64_t)&g8); // 0x24784
        int64_t v15 = v14 != *(int64_t *)(a1 + (int64_t)&g7); // 0x24794
        int64_t v16; // bp-88, 0x24660
        function_253a6(&v16, (int64_t)&v12, v15);
        int64_t v17 = function_4efd30(72); // 0x247bc
        int64_t v18 = v17 + 72; // 0x247c1
        int64_t v19 = v17; // bp-192, 0x247c8
        int64_t v20 = (int64_t)&v7; // 0x247cd
        function_2509a(v17, v20, v15);
        int64_t v21 = v17 + 24; // 0x247e5
        function_2509a(v17 + 8, v20 + 8, v15);
        *(int32_t *)(v17 + 16) = *(int32_t *)(v20 + 16);
        v20 += 24;
        while (v18 != v21) {
            int64_t v22 = v21;
            function_2509a(v22, v20, v15);
            v21 = v22 + 24;
            function_2509a(v22 + 8, v20 + 8, v15);
            *(int32_t *)(v22 + 16) = *(int32_t *)(v20 + 16);
            v20 += 24;
        }
        int64_t v23 = 17; // bp-228, 0x2480c
        function_5cd02(&v3, &v23);
        int64_t v24 = v18 - v19; // 0x2481e
        int64_t v25 = 0; // bp-160, 0x2482d
        uint64_t v26 = -0x5555555555555555 * (v24 >> 3); // 0x2485b
        int64_t v27 = v19; // 0x24862
        int64_t v28 = 0; // 0x24862
        if (v26 != 0) {
            if (v26 >= 0xaaaaaaaaaaaaaab) {
                // 0x24873
                function_5423b0();
            }
            // 0x24878
            v27 = v19;
            v28 = function_4efd30(v24);
        }
        // 0x24884
        v25 = v28;
        int64_t v29 = v28; // 0x248b3
        if (v18 != v27) {
            function_2509a(v29, v27, v18);
            int64_t v30 = v27 + 24; // 0x248d7
            function_2509a(v29 + 8, v27 + 8, v18);
            *(int32_t *)(v29 + 16) = *(int32_t *)(v27 + 16);
            int64_t v31 = v30; // 0x248b3
            v29 += 24;
            while (v18 != v30) {
                // 0x248b5
                function_2509a(v29, v31, v18);
                v30 = v31 + 24;
                function_2509a(v29 + 8, v31 + 8, v18);
                *(int32_t *)(v29 + 16) = *(int32_t *)(v31 + 16);
                v31 = v30;
                v29 += 24;
            }
        }
        // 0x248fd
        function_25194(&v19);
        int64_t v32; // bp-80, 0x24660
        function_2508e(&v32);
        function_2508e(&v16);
        int64_t v33; // bp-104, 0x24660
        function_2508e(&v33);
        function_2508e(&v11);
        int64_t v34; // bp-128, 0x24660
        function_2508e(&v34);
        function_2508e(&v7);
        function_2508e(&v12);
        function_2508e(&v8);
        function_2508e(&v5);
        function_5ca10(a1 + (int64_t)&g9, 2, &v3);
        function_25194(&v25);
        function_2508e(&v3);
        function_729ce(&v4);
    }
    int64_t result = 0; // 0x249cc
    if (v2 != __readfsqword(40)) {
        // 0x249ce
        __stack_chk_fail();
        result = (int64_t)&g43;
    }
    // 0x249d3
    return result;
}

// Address range: 0x4336c - 0x43721
int64_t function_4336c(uint64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4336c
    if (a2 == 0 || a4 == 0) {
        // 0x43713
        return 0;
    }
    uint64_t v1 = a2 + a1; // 0x43380
    uint64_t v2 = a4 + a3; // 0x43389
    __asm_rep_stosd_memset((char *)a5, 0, 0x20000);
    int64_t v3 = a3 + 1; // 0x4339e
    uint64_t v4 = v1 - 2; // 0x433a2
    int64_t v5 = a1; // 0x433c1
    int64_t v6 = v3; // 0x433c1
    int64_t v7 = 0; // 0x433c1
    int64_t v8; // 0x4336c
    int64_t v9; // 0x4336c
    int64_t v10; // 0x4336c
    int64_t v11; // 0x4336c
    int64_t v12; // 0x4336c
    int64_t v13; // 0x4336c
    int64_t v14; // 0x4336c
    uint64_t v15; // 0x4336c
    int64_t v16; // 0x4336c
    int64_t v17; // 0x4336c
    uint64_t v18; // 0x433e9
    uint64_t v19; // 0x433f7
    uint64_t v20; // 0x43428
    int64_t v21; // 0x43470
    int64_t v22; // 0x433d0
    if (v4 > a1) {
        uint16_t v23 = llvm_bswap_i16((int16_t)a1); // 0x433b5
        v16 = a1;
        v8 = 0;
        v10 = v23;
        v14 = v3;
        while (true) {
          lab_0x433c7:
            // 0x433c7
            v15 = v14;
            v9 = v8;
            v17 = v16;
            char * v24 = (char *)(v17 + 2); // 0x433c7
            v22 = 256 * v10 & 0xffffff00 | (int64_t)*v24;
            int64_t * v25 = (int64_t *)((8 * (0xfffb * v22 + v10) & 0x7fff8) + a5); // 0x433e9
            v18 = *v25;
            *v25 = v17;
            v19 = v17 + -1 - v18;
            if (v18 <= a1 || v19 > (int64_t)&g10) {
                goto lab_0x43433;
            } else {
                // 0x43408
                if (*(char *)(v18 + 2) != *v24) {
                    goto lab_0x43433;
                } else {
                    // 0x43413
                    if (*(int16_t *)v18 != *(int16_t *)v17) {
                        goto lab_0x43433;
                    } else {
                        uint64_t v26 = v15 + 4; // 0x43421
                        if (v2 <= v26) {
                            // 0x43443
                            if (v2 <= v26 + (int64_t)(v9 == 0)) {
                                // break -> 0x43713
                                break;
                            }
                        }
                        // 0x43454
                        v20 = v1 - v17 - 2;
                        *(char *)(v15 - 1 + (-((0x100000000 * v9)) >> 32)) = (char)v9 - 1;
                        v21 = v15 - (int64_t)(v9 == 0);
                        v11 = 2;
                        if (v20 < 17) {
                            goto lab_0x435bd;
                        } else {
                            // 0x4347d
                            v12 = 3;
                            if (*(char *)(v18 + 3) != *(char *)(v17 + 3)) {
                                goto lab_0x435da;
                            } else {
                                // 0x43492
                                if (*(char *)(v18 + 4) != *(char *)(v17 + 4)) {
                                    goto lab_0x435da;
                                } else {
                                    // 0x434a7
                                    v12 = 5;
                                    if (*(char *)(v18 + 5) != *(char *)(v17 + 5)) {
                                        goto lab_0x435da;
                                    } else {
                                        // 0x434bc
                                        v12 = 6;
                                        if (*(char *)(v18 + 6) != *(char *)(v17 + 6)) {
                                            goto lab_0x435da;
                                        } else {
                                            // 0x434d1
                                            v12 = 7;
                                            if (*(char *)(v18 + 7) != *(char *)(v17 + 7)) {
                                                goto lab_0x435da;
                                            } else {
                                                // 0x434e6
                                                v12 = 8;
                                                if (*(char *)(v18 + 8) != *(char *)(v17 + 8)) {
                                                    goto lab_0x435da;
                                                } else {
                                                    // 0x434fb
                                                    v13 = 9;
                                                    if (*(char *)(v18 + 9) != *(char *)(v17 + 9)) {
                                                        goto lab_0x435da_2;
                                                    } else {
                                                        // 0x43510
                                                        v13 = 10;
                                                        if (*(char *)(v18 + 10) != *(char *)(v17 + 10)) {
                                                            goto lab_0x435da_2;
                                                        } else {
                                                            // 0x43525
                                                            v13 = 11;
                                                            if (*(char *)(v18 + 11) != *(char *)(v17 + 11)) {
                                                                goto lab_0x435da_2;
                                                            } else {
                                                                // 0x4353a
                                                                v13 = 12;
                                                                if (*(char *)(v18 + 12) != *(char *)(v17 + 12)) {
                                                                    goto lab_0x435da_2;
                                                                } else {
                                                                    // 0x4354f
                                                                    v13 = 13;
                                                                    if (*(char *)(v18 + 13) != *(char *)(v17 + 13)) {
                                                                        goto lab_0x435da_2;
                                                                    } else {
                                                                        // 0x43560
                                                                        v13 = 14;
                                                                        if (*(char *)(v18 + 14) != *(char *)(v17 + 14)) {
                                                                            goto lab_0x435da_2;
                                                                        } else {
                                                                            // 0x43571
                                                                            v13 = 15;
                                                                            if (*(char *)(v18 + 15) != *(char *)(v17 + 15)) {
                                                                                goto lab_0x435da_2;
                                                                            } else {
                                                                                // 0x43582
                                                                                v13 = 16;
                                                                                if (*(char *)(v18 + 16) != *(char *)(v17 + 16)) {
                                                                                    goto lab_0x435da_2;
                                                                                } else {
                                                                                    // 0x43593
                                                                                    v13 = 17;
                                                                                    if (*(char *)(v18 + 17) != *(char *)(v17 + 17)) {
                                                                                        goto lab_0x435da_2;
                                                                                    } else {
                                                                                        // 0x435a4
                                                                                        v11 = 18;
                                                                                        v13 = 18;
                                                                                        if (*(char *)(v18 + 18) != *(char *)(v17 + 18)) {
                                                                                            goto lab_0x435da_2;
                                                                                        } else {
                                                                                            goto lab_0x435bd;
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
        // 0x43713
        return 0;
    }
  lab_0x436b9_2:
    // 0x436b9
    if (v2 < v6 + 3) {
        // 0x43713
        return 0;
    }
    int64_t v27 = v6; // 0x436c9
    int64_t v28 = v7; // 0x436c9
    if (v5 < v1) {
        int64_t v29 = v7 + 1; // 0x436d2
        *(char *)v6 = *(char *)v5;
        int64_t v30 = v6 + 1; // 0x436e0
        int64_t v31 = v29 & 0xffffffff; // 0x436e0
        if ((int32_t)v29 == 32) {
            // 0x436e7
            *(char *)(v6 - 32) = 31;
            v30 = v6 + 2;
            v31 = 0;
        }
        int64_t v32 = v5 + 1; // 0x436cb
        int64_t v33 = v32; // 0x436c9
        v27 = v30;
        v28 = v31;
        while (v32 < v1) {
            int64_t v34 = v30;
            v29 = v31 + 1;
            *(char *)v34 = *(char *)v33;
            v30 = v34 + 1;
            v31 = v29 & 0xffffffff;
            if ((int32_t)v29 == 32) {
                // 0x436e7
                *(char *)(v34 - 32) = 31;
                v30 = v34 + 2;
                v31 = 0;
            }
            // 0x436e2
            v32 = v33 + 1;
            v33 = v32;
            v27 = v30;
            v28 = v31;
        }
    }
    int64_t v35 = v28;
    *(char *)(v27 - 1 + (-((0x100000000 * v35)) >> 32)) = (char)v35 - 1;
    // 0x43713
    return v27 - a3 + (int64_t)((int32_t)v35 == 0);
  lab_0x43433:
    // 0x43433
    if (v15 >= v2) {
        return 0;
    }
    int64_t v36 = v17 + 1; // 0x43687
    int64_t v37 = v9 + 1; // 0x4368e
    *(char *)v15 = *(char *)v17;
    int64_t v38 = v22; // 0x4369c
    int64_t v39 = v37 & 0xffffffff; // 0x4369c
    int64_t v40 = v15 + 1; // 0x4369c
    int64_t v41 = v36; // 0x4369c
    if ((int32_t)v37 == 32) {
        // 0x436a9
        *(char *)(v15 - 32) = 31;
        v38 = v22;
        v39 = 0;
        v40 = v15 + 2;
        v41 = v36;
    }
    goto lab_0x4369e;
  lab_0x4369e:
    // 0x4369e
    v16 = v41;
    v8 = v39;
    v10 = v38;
    v14 = v40;
    v5 = v41;
    v6 = v40;
    v7 = v39;
    if (v4 <= v41) {
        goto lab_0x436b9_2;
    }
    goto lab_0x433c7;
  lab_0x435bd:;
    int64_t v42 = v11;
    int64_t v43 = v42 + 1; // 0x435c8
    while ((v20 < 264 ? v20 : 264) > v43) {
        int64_t v44 = v43; // 0x435d8
        if (*(char *)(v43 + v18) != *(char *)(v43 + v17)) {
            // break -> 0x435da
            break;
        }
        v42 = v44;
        v43 = v42 + 1;
    }
    int64_t v45 = v42 - 1; // 0x435da
    int64_t v46 = v19 / 256; // 0x435e1
    int64_t v47 = v46; // 0x435e9
    int64_t v48 = v45; // 0x435e9
    int64_t v49 = v43; // 0x435e9
    int64_t v50 = v46; // 0x435e9
    int64_t v51 = v43; // 0x435e9
    if (v45 < 7) {
        goto lab_0x435eb;
    } else {
        goto lab_0x435fb;
    }
  lab_0x435eb:
    // 0x435eb
    *(char *)v21 = (char)(32 * v48 + v47);
    int64_t v52 = v49; // 0x435f9
    int64_t v53 = v21 + 1; // 0x435f9
    goto lab_0x4360e;
  lab_0x435fb:
    // 0x435fb
    *(char *)v21 = (char)v50 - 32;
    *(char *)(v21 + 1) = (char)v51 - 9;
    v52 = v51;
    v53 = v21 + 2;
    goto lab_0x4360e;
  lab_0x435da:
    // 0x435da
    v47 = v19 / 256;
    v48 = v12 - 2;
    v49 = v12;
    goto lab_0x435eb;
  lab_0x4360e:;
    int64_t v54 = v52 + v17; // 0x4360e
    *(char *)v53 = (char)v19;
    if (v4 <= v54) {
        goto lab_0x436b9_2;
    }
    int64_t v55 = v54 - 2; // 0x43623
    int64_t v56 = v54 - 1; // 0x43628
    unsigned char v57 = *(char *)v56; // 0x43628
    int64_t v58 = 256 * (int64_t)*(char *)v55 | (int64_t)v57; // 0x43634
    int64_t v59 = 256 * v58 | (int64_t)*(char *)v54; // 0x4363f
    *(int64_t *)((8 * (0xfffb * v59 + v58) & 0x7fff8) + a5) = v55;
    int64_t v60 = 256 * v59 | (int64_t)*(char *)(v54 + 1); // 0x43665
    *(int64_t *)((8 * (0xfffb * v60 + v59) & 0x7fff8) + a5) = v56;
    v38 = v60;
    v39 = 0;
    v40 = v53 + 2;
    v41 = v54;
    goto lab_0x4369e;
  lab_0x435da_2:
    // 0x435da
    v50 = v19 / 256;
    v51 = v13;
    goto lab_0x435fb;
}

// Address range: 0x517e6 - 0x51b65
int64_t function_517e6(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 + 56; // 0x517f9
    int64_t v2 = __readfsqword(40); // 0x51804
    int64_t v3; // bp-256, 0x517e6
    function_729b6(&v3, v1);
    int64_t v4 = *(int64_t *)(a2 + 8); // 0x51831
    int64_t v5; // 0x517e6
    int64_t v6; // 0x517e6
    int64_t v7; // 0x517e6
    int64_t v8; // 0x517e6
    int64_t v9; // 0x517e6
    int64_t v10; // 0x517e6
    int64_t v11; // 0x517e6
    int64_t v12; // 0x517e6
    int64_t v13; // 0x517e6
    int64_t v14; // bp-152, 0x517e6
    int32_t v15; // bp-160, 0x517e6
    int64_t v16; // bp-248, 0x517e6
    int64_t v17; // 0x518d2
    int64_t v18; // 0x5190c
    int64_t v19; // 0x51924
    uint64_t v20; // 0x5192a
    int64_t * v21; // 0x5194c
    int64_t v22; // 0x517e6
    int64_t v23; // 0x517e6
    int64_t * v24; // 0x517e6
    if (v4 != v1) {
        // 0x51848
        int64_t v25; // bp-176, 0x517e6
        v22 = (int64_t)&v25;
        v23 = a1 + 16;
        v24 = (int64_t *)(a1 + 48);
        v5 = v1;
        while (true) {
          lab_0x51848:
            // 0x51848
            v7 = v6;
            function_5236c((int64_t *)&v15, v5);
            function_52fbc(&v16, (int64_t *)&v15);
            function_35fcc(&v14);
            int64_t * v26 = (int64_t *)v5; // 0x5186c
            int64_t v27 = *v26 + 8; // 0x51870
            function_52d3e(v27);
            int64_t v28 = *(int64_t *)v27; // 0x51879
            int64_t v29 = *v26 + 8; // 0x51885
            int64_t v30 = 4 * *(int64_t *)(v28 - 24) + v28; // 0x51889
            function_52d3e(v29);
            int64_t v31 = *(int64_t *)v29; // 0x51896
            int64_t v32 = v31; // 0x5189e
            if (v30 != v31) {
                int32_t * v33 = (int32_t *)v32; // 0x518a0
                if (*v33 == 92) {
                    // 0x518a5
                    *v33 = 47;
                }
                int64_t v34 = v32 + 4; // 0x518ab
                v32 = v34;
                while (v30 != v34) {
                    // 0x518a0
                    v33 = (int32_t *)v32;
                    if (*v33 == 92) {
                        // 0x518a5
                        *v33 = 47;
                    }
                    // 0x518ab
                    v34 = v32 + 4;
                    v32 = v34;
                }
            }
            int64_t v35 = *v26; // 0x518b1
            int64_t v36 = *(int64_t *)(v35 + 24); // 0x518b5
            int64_t v37 = v35 + 8; // 0x518b9
            function_52d3e(v37);
            v17 = function_50906(*(int64_t *)v37 + 4 * v36);
            int64_t * v38 = (int64_t *)(v36 - 24); // 0x518de
            v9 = v7;
            if (*v38 == 0) {
                goto lab_0x51a5b;
            } else {
                // 0x518e9
                function_5236c((int64_t *)&v15, v22);
                v18 = *v38;
                v19 = (int64_t)v15 + 8;
                v20 = 4 * function_36b3c(a3, 0, "basic_string::insert", v36) + v36;
                function_36b3c(v19, 0, "basic_string::insert", v36);
                function_52876(v19, 0, v18, "basic_string::insert");
                v21 = (int64_t *)v19;
                uint64_t v39 = *v21; // 0x5194c
                if (v20 >= v39) {
                    int64_t v40 = v39 - 24; // 0x5197f
                    if (v20 > 4 * *(int64_t *)v40 + v39) {
                        goto lab_0x51956;
                    } else {
                        // 0x5198d
                        if ((char)function_29cea(v40) != 0) {
                            goto lab_0x51956;
                        } else {
                            int64_t v41 = v20 - *v21; // 0x5199e
                            function_36ff8(v19, 0, 0, v18);
                            uint64_t v42 = *v21; // 0x519b6
                            int64_t v43 = 4 * v18; // 0x519be
                            int64_t v44 = v42 + v41; // 0x519c9
                            int64_t v45 = v44 + v43; // 0x519cd
                            v10 = v43;
                            v12 = v18;
                            v13 = v44;
                            v11 = v42;
                            v8 = v41;
                            if (v42 < v45) {
                                // 0x519d6
                                v10 = v43;
                                v12 = v18;
                                v13 = v45;
                                v11 = v42;
                                v8 = v41;
                                if (v42 > v44) {
                                    int64_t v46 = -v41; // 0x519e3
                                    int64_t v47 = v46 >> 2; // 0x519f5
                                    function_29ef7(v42, v44, v47, v43, v46);
                                    v10 = v43;
                                    v12 = v18 - v47;
                                    v13 = v42 + v43;
                                    v11 = v42 - v41;
                                    v8 = v46;
                                }
                            }
                            goto lab_0x51a1f;
                        }
                    }
                } else {
                    goto lab_0x51956;
                }
            }
        }
    }
  lab_0x51b31:
    // 0x51b31
    function_729ce(&v3);
    int64_t result = 0; // 0x51b4c
    if (v2 != __readfsqword(40)) {
        // 0x51b4e
        __stack_chk_fail();
        result = (int64_t)&g43;
    }
    // 0x51b53
    return result;
  lab_0x51a5b:;
    int32_t v48 = v17; // 0x518d7
    if ((char)function_52f2a(&v16) != 0) {
        goto lab_0x51a83;
    } else {
        // 0x51a6c
        if ((char)function_50d5a(a1, v48, &v16) != 0) {
            goto lab_0x51b20;
        } else {
            goto lab_0x51a83;
        }
    }
  lab_0x51a83:
    // 0x51a83
    v15 = v48;
    function_525f0(&v14, &v16, &v14);
    int64_t v49 = function_4efd30(128); // 0x51aa6
    int32_t * v50 = (int32_t *)(v49 + 32); // 0x51ac0
    *v50 = v15;
    function_525f0((int64_t *)(v49 + 40), &v14, &v14);
    int64_t v51 = *(int64_t *)(a1 + 24);
    int64_t v52 = v23; // 0x51ad7
    int64_t v53 = 1; // 0x51ad7
    if (v51 != 0) {
        uint32_t v54 = *v50; // 0x51adc
        int64_t v55 = v51;
        uint32_t v56 = *(int32_t *)(v55 + 32); // 0x51ad9
        int64_t v57 = *(int64_t *)((v54 >= v56 ? 24 : 16) + v55);
        while (v57 != 0) {
            // 0x51ad9
            v55 = v57;
            v56 = *(int32_t *)(v55 + 32);
            v57 = *(int64_t *)((v54 >= v56 ? 24 : 16) + v55);
        }
        // 0x51af4
        v52 = v55;
        v53 = v23 == v55 | v54 < v56;
    }
    // 0x51b07
    function_4f0bc0(v53, v49, v52);
    *v24 = *v24 + 1;
    function_52392(&v14);
    goto lab_0x51b20;
  lab_0x51956:
    // 0x51956
    function_36ff8(v19, 0, 0, v18);
    int64_t v60 = 0; // 0x51969
    int64_t v61 = v7; // 0x51969
    if (v18 == 0) {
        goto lab_0x51a24;
    } else {
        // 0x5196f
        v10 = v18;
        v12 = v18;
        v13 = v20;
        v11 = *v21;
        v8 = v7;
        goto lab_0x51a1f;
    }
  lab_0x51b20:;
    int64_t v58 = v5 + 16; // 0x51b23
    function_52392(&v16);
    v5 = v58;
    v6 = v9;
    if (v4 == v58) {
        // break -> 0x51b31
        goto lab_0x51b31;
    }
    goto lab_0x51848;
  lab_0x51a24:
    // 0x51a24
    function_35fcc(&v14);
    function_5236c((int64_t *)&v15, v22);
    int64_t * v59 = (int64_t *)((int64_t)v15 + 24); // 0x51a52
    *v59 = *v59 + *(int64_t *)(v60 - 24);
    function_35fcc(&v14);
    v9 = v61;
    goto lab_0x51a5b;
  lab_0x51a1f:
    // 0x51a1f
    function_29ef7(v11, v13, v12, v10, v8);
    v60 = v12;
    v61 = v8;
    goto lab_0x51a24;
}

// Address range: 0x497970 - 0x497d15
int64_t function_497970(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 128); // 0x49797d
    int64_t v2 = *v1; // 0x49797d
    int64_t v3; // 0x497970
    if (v2 != 0) {
        // 0x497989
        v3 = function_497750(v2);
    }
    int64_t * v4 = (int64_t *)(a1 + 88); // 0x49798e
    int64_t v5 = *v4; // 0x49798e
    int64_t v6 = v3; // 0x497995
    if (v5 != 0) {
        // 0x497997
        v6 = function_497930(v5);
    }
    int64_t * v7 = (int64_t *)(a1 + 96); // 0x49799c
    int64_t v8 = *v7; // 0x49799c
    int64_t result = v6; // 0x4979a5
    int64_t v9 = 0; // 0x4979a5
    if (v8 != 0) {
        // 0x4979a7
        result = function_4977a0(v8);
        v9 = *v7;
    }
    // 0x4979b0
    if (*v1 == 0) {
        // 0x497b90
        return result;
    }
    int64_t v10 = *v4;
    if (v10 == 0) {
        // 0x497b90
        return result;
    }
    int64_t v11 = v10; // 0x4979cc
    if (v9 == 0) {
        int64_t * mem = calloc(1, (int32_t)&g42); // 0x497cba
        *v7 = (int64_t)mem;
        if (mem != NULL) {
            // 0x4979d2
            if (*v1 == 0) {
                goto lab_0x497cd0;
            } else {
                // 0x4979e0
                v11 = *v4;
                if (v11 == 0) {
                    goto lab_0x497cd0;
                } else {
                    goto lab_0x4979ed;
                }
            }
        } else {
            goto lab_0x497cd0;
        }
    } else {
        goto lab_0x4979ed;
    }
  lab_0x4979ed:
    // 0x4979ed
    function_496ab0(v11);
    uint64_t v12 = *v1; // 0x4979f2
    int64_t v13 = 304; // 0x497a05
    int64_t v14 = v12; // 0x497a05
    if (v12 % 2 != 0) {
        // 0x497c38
        *(char *)v12 = 0;
        v13 = 303;
        v14 = v12 + 1;
    }
    int64_t v15 = v13; // 0x497a0f
    int64_t v16 = v14; // 0x497a0f
    if ((v14 & 2) != 0) {
        // 0x497c50
        *(int16_t *)v14 = 0;
        v15 = v13 + 510 & 319;
        v16 = v14 + 2;
    }
    int64_t v17 = v15; // 0x497a19
    int64_t v18 = v16; // 0x497a19
    if ((v16 & 4) != 0) {
        // 0x497c68
        *(int32_t *)v16 = 0;
        v17 = v15 + 0xfffffffc & 0xffffffff;
        v18 = v16 + 4;
    }
    uint64_t v19 = v17 / 8 % 0x20000000; // 0x497a23
    __asm_rep_stosq_memset((char *)v18, 0, v19);
    bool v20; // 0x497970
    int64_t v21 = v20 ? -8 : 8; // 0x497a29
    int64_t v22 = v19 * v21 + v18; // 0x497a29
    int64_t v23; // 0x497970
    int64_t v24; // 0x497970
    if ((v17 & 4) != 0) {
        // 0x497c08
        *(int32_t *)v22 = 0;
        int64_t v25 = v22 + 4; // 0x497c0e
        v24 = v25;
        v23 = v25;
        if ((v17 & 2) == 0) {
            goto lab_0x497a3b;
        } else {
            goto lab_0x497bf0;
        }
    } else {
        // 0x497a32
        v24 = v22;
        v23 = v22;
        if ((v17 & 2) != 0) {
            goto lab_0x497bf0;
        } else {
            goto lab_0x497a3b;
        }
    }
  lab_0x497cd0:
    // 0x497cd0
    function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g5, "alloc() of ssl sub-contexts failed");
    free((int64_t *)*v7);
    free((int64_t *)*v1);
    free((int64_t *)*v4);
    return (int64_t)&g43;
  lab_0x497a3b:
    // 0x497a3b
    if (v17 % 2 != 0) {
        // 0x497be0
        *(char *)v24 = 0;
        goto lab_0x497a44;
    } else {
        goto lab_0x497a44;
    }
  lab_0x497bf0:
    // 0x497bf0
    *(int16_t *)v23 = 0;
    if (v17 % 2 == 0) {
        goto lab_0x497a44;
    } else {
        // 0x497be0
        *(char *)(v23 + 2) = 0;
        goto lab_0x497a44;
    }
  lab_0x497a44:
    // 0x497a44
    function_4b4e60(v12 + 128);
    function_4b4e60(v12 + 216);
    function_4c1690(v12 + 80);
    function_4c1690(v12 + 104);
    uint64_t v26 = *v7; // 0x497a6e
    int64_t v27 = (int64_t)&g42; // 0x497a7e
    int64_t v28 = v26; // 0x497a7e
    if (v26 % 2 != 0) {
        // 0x497c98
        *(char *)v26 = 0;
        v27 = (int64_t)&g42 & -256 | 151;
        v28 = v26 + 1;
    }
    int64_t v29 = v27; // 0x497a88
    int64_t v30 = v28; // 0x497a88
    if ((v28 & 2) != 0) {
        // 0x497c20
        *(int16_t *)v28 = 0;
        v29 = v27 + 0xfffffffe & 0xffffffff;
        v30 = v28 + 2;
    }
    int64_t v31 = v29; // 0x497a92
    int64_t v32 = v30; // 0x497a92
    if ((v30 & 4) != 0) {
        // 0x497c80
        *(int32_t *)v30 = 0;
        v31 = v29 + 0xfffffffc & 0xffffffff;
        v32 = v30 + 4;
    }
    uint64_t v33 = v31 / 8 % 0x20000000; // 0x497a9c
    __asm_rep_stosq_memset((char *)v32, 0, v33);
    int64_t v34 = v33 * v21 + v32; // 0x497aa2
    int64_t v35; // 0x497970
    int64_t v36; // 0x497970
    if ((v31 & 4) != 0) {
        // 0x497bc8
        *(int32_t *)v34 = 0;
        int64_t v37 = v34 + 4; // 0x497bce
        v35 = v37;
        v36 = v37;
        if ((v31 & 2) == 0) {
            goto lab_0x497ab4;
        } else {
            goto lab_0x497bb0;
        }
    } else {
        // 0x497aab
        v35 = v34;
        v36 = v34;
        if ((v31 & 2) != 0) {
            goto lab_0x497bb0;
        } else {
            goto lab_0x497ab4;
        }
    }
  lab_0x497ab4:
    // 0x497ab4
    if (v31 % 2 != 0) {
        // 0x497ba0
        *(char *)v35 = 0;
        goto lab_0x497abd;
    } else {
        goto lab_0x497abd;
    }
  lab_0x497bb0:
    // 0x497bb0
    *(int16_t *)v36 = 0;
    if (v31 % 2 == 0) {
        goto lab_0x497abd;
    } else {
        // 0x497ba0
        *(char *)(v36 + 2) = 0;
        goto lab_0x497abd;
    }
  lab_0x497abd:;
    int64_t v38 = v26 + (int64_t)&g22; // 0x497abd
    int64_t v39 = v26 + (int64_t)&g23; // 0x497ac4
    function_4c1d60(v38);
    function_4cb410(v39);
    function_4c1e70(v38);
    int64_t v40 = v26 + (int64_t)&g24; // 0x497ae6
    function_4cb520(v39);
    function_4ccc30(v40);
    int64_t v41 = v26 + (int64_t)&g26; // 0x497afd
    function_4ccd50(v40, 0);
    function_4cdd20(v41);
    function_4cdde0(v41, 1);
    *(int32_t *)v26 = 2;
    *(int64_t *)(v26 + (int64_t)&g28) = 0x494f80;
    function_4b82e0(v26 + 8);
    function_4b90b0(v26 + 256);
    *(int32_t *)(v26 + (int64_t)&g19) = 3;
    char * v42 = (char *)(v26 + 628); // 0x497b59
    if ((*v42 & 2) != 0) {
        int64_t v43 = *v7; // 0x497b62
        *(int64_t *)(v43 + (int64_t)&g21) = *(int64_t *)(a1 + 112);
        unsigned char v44 = -((*v42 % 2)) & 2;
        *(char *)(v43 + (int64_t)&g20) = v44;
        function_4945c0(a1, 0, (int32_t)v44);
    }
    // 0x497b90
    return 0;
}

// Address range: 0x4aab80 - 0x4aaf3e
int64_t function_4aab80(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int32_t a7, int64_t a8, int64_t a9, int64_t a10) {
    uint32_t v1 = (int32_t)a6; // 0x4aab9a
    int32_t v2 = 0; // bp-124, 0x4aabb4
    int32_t v3 = a7; // 0x4aabbc
    if (v1 != 0) {
        // 0x4aaec0
        v3 = (int32_t)((int32_t)function_4a9620(a1 + 152, a1 + 216) == 0) + a7;
        if (v1 >= 8) {
            int32_t * v4 = (int32_t *)a8; // 0x4aaee8
            *v4 = *v4 | 8;
            // 0x4aadb1
            return 0xffffd900;
        }
    }
    // 0x4aabc2
    if ((int32_t)function_4ad720(a1 + 304) != 0) {
        int32_t * v5 = (int32_t *)a8; // 0x4aabd2
        *v5 = *v5 | 1;
    }
    // 0x4aabd7
    if ((int32_t)function_4ad750(a1 + 280) != 0) {
        int32_t * v6 = (int32_t *)a8; // 0x4aabe7
        *v6 = *v6 | (int32_t)&g11;
    }
    int32_t * v7 = (int32_t *)(a1 + (int64_t)&g13); // 0x4aabef
    int32_t v8 = *v7; // 0x4aabef
    int64_t v9; // 0x4aab80
    if ((1 << (v8 + 31) % 32 & *(int32_t *)&v9) == 0) {
        int32_t * v10 = (int32_t *)a8; // 0x4aadf0
        *v10 = *v10 | (int32_t)"le";
    }
    int32_t * v11 = (int32_t *)(a1 + (int64_t)&g14); // 0x4aac0c
    v9 = a5;
    int32_t * v12; // 0x4aab80
    int32_t * v13; // 0x4aab80
    int64_t v14; // 0x4aab80
    if ((1 << (*v11 + 31) % 32 & *(int32_t *)(a5 + 4)) == 0) {
        int32_t * v15 = (int32_t *)a8;
        *v15 = *v15 | (int32_t)&g29;
        int64_t v16 = function_4c14d0(v8); // 0x4aadd0
        v12 = v15;
        v14 = v16;
        v13 = v15;
        if (v16 != 0) {
            goto lab_0x4aac39;
        } else {
            goto lab_0x4aadde;
        }
    } else {
        int64_t v17 = function_4c14d0(v8); // 0x4aac2b
        int32_t * v18 = (int32_t *)a8;
        v12 = v18;
        v14 = v17;
        v13 = v18;
        if (v17 == 0) {
            goto lab_0x4aadde;
        } else {
            goto lab_0x4aac39;
        }
    }
  lab_0x4aac39:;
    int32_t * v19 = v12;
    int64_t v20 = *(int64_t *)(a1 + 40); // 0x4aac3d
    int64_t v21 = a2 + 328; // 0x4aac4e
    int64_t v22; // bp-120, 0x4aab80
    function_4c18b0(v14, v20, *(int64_t *)(a1 + 32), &v22);
    v9 = v14;
    int64_t v23 = v14; // 0x4aac74
    if ((int32_t)function_4a9850(a5, *v11, v21) != 0) {
        // 0x4aac76
        *v19 = *v19 | (int32_t)&g1;
        v23 = v9;
    }
    int64_t v24 = *(int64_t *)(a1 + (int64_t)&g11); // 0x4aac7e
    int64_t v25 = *(int64_t *)(a1 + (int64_t)&g12); // 0x4aac88
    uint64_t v26 = function_4c1d00(v23); // 0x4aac94
    int32_t v27 = *v7; // 0x4aac9e
    int64_t v28 = *(int64_t *)(a1 + (int64_t)&g15); // 0x4aaca9
    int32_t v29 = *v11; // 0x4aacb0
    int64_t v30 = function_4c4730(v29, v28, v21, v27, &v22, v26 % 256, 0x100000000 * v25 >> 32, v24); // 0x4aacc6
    int64_t v31 = (int64_t)*v19; // 0x4aaccd
    int32_t * v32 = v19; // 0x4aacd1
    int64_t v33 = v31; // 0x4aacd1
    if ((int32_t)v30 != 0) {
        int64_t v34 = v31 | 8; // 0x4aae00
        *v19 = (int32_t)v34;
        v32 = v19;
        v33 = v34;
    }
    goto lab_0x4aacd7;
  lab_0x4aadde:;
    uint32_t v46 = *v13 | 8; // 0x4aade2
    *v13 = v46;
    v32 = v13;
    v33 = v46;
    goto lab_0x4aacd7;
  lab_0x4aacd7:;
    int32_t * v35 = v32;
    *v35 = (int32_t)(function_4aa650(a1, a2, a4, a5) | v33);
    int64_t result3; // 0x4aab80
    if (a3 == 0) {
      lab_0x4aae10:
        // 0x4aae10
        if (*(int64_t *)(a2 + (int64_t)&g16) != 0) {
            // 0x4aae30
            int32_t v36; // 0x4aab80
            uint32_t v37 = v1 + 2 - v36; // 0x4aae1b
            int64_t v38 = v1 == 0;
            int64_t v39; // 0x4aae10
            int64_t v40 = v39; // 0x4aab80
            int64_t v41 = v40;
            uint32_t v42 = *(int32_t *)(v41 + 456); // 0x4aae30
            if (v42 > 0 != v42 < v37) {
                // 0x4aae41
                if ((int32_t)function_4aa470(a2, v41, 0, v38) == 0) {
                    // 0x4aaef7
                    return (int64_t)&v2;
                }
            }
            int64_t v43 = *(int64_t *)(v41 + (int64_t)&g16); // 0x4aae5e
            v40 = v43;
            while (v43 != 0) {
                // 0x4aae30
                v41 = v40;
                v42 = *(int32_t *)(v41 + 456);
                if (v42 > 0 != v42 < v37) {
                    // 0x4aae41
                    if ((int32_t)function_4aa470(a2, v41, 0, v38) == 0) {
                        // 0x4aaef7
                        return (int64_t)&v2;
                    }
                }
                // 0x4aae5e
                v43 = *(int64_t *)(v41 + (int64_t)&g16);
                v40 = v43;
            }
        }
        int64_t result = function_4aa830(a2, a3, a4, a5, a6 + 1 & 0xffffffff, v3, (int32_t *)(0x100000000 * (int64_t)&v2 >> 32), a9, a10); // 0x4aaeac
        result3 = result;
        if ((int32_t)result != 0) {
            // 0x4aadb1
            return result;
        }
    } else {
        int64_t v44 = a3;
        while ((int32_t)function_4aa470(a2, v44, 0, (int64_t)(v1 == 0)) != 0) {
            int64_t v45 = *(int64_t *)(v44 + (int64_t)&g16); // 0x4aad10
            if (v45 == 0) {
                goto lab_0x4aae10;
            }
            v44 = v45;
        }
        int64_t result2 = function_4aa830(a2, v44, a4, a5, a6 + 1 & 0xffffffff, v3, (int32_t *)(0x100000000 * (int64_t)&v2 >> 32), a9, a10); // 0x4aad73
        result3 = result2;
        if ((int32_t)result2 != 0) {
            // 0x4aadb1
            return result2;
        }
    }
    if (a9 != 0) {
        // 0x4aad87
        if ((int32_t)result3 != 0) {
            // 0x4aadb1
            return result3;
        }
    }
    // 0x4aada7
    *v35 = *v35 | v2;
    // 0x4aadb1
    return 0;
}

// Address range: 0x4ac630 - 0x4ac9c7
int64_t function_4ac630(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a1;
    *(int32_t *)a2 = 4;
    *(int32_t *)a3 = 4;
    *(int32_t *)a4 = 20;
    if (*(int32_t *)&v1 != 48) {
        // 0x4ac6c1
        return 0xffffdc9e;
    }
    int64_t v2 = *(int64_t *)(v1 + 16); // 0x4ac67a
    int64_t v3 = *(int64_t *)(v1 + 8); // 0x4ac681
    int64_t v4 = v2; // bp-184, 0x4ac685
    if (v3 == 0) {
        // 0x4ac6c1
        return 0;
    }
    int64_t v5 = v3 + v2; // 0x4ac681
    int64_t v6; // bp-176, 0x4ac630
    int64_t v7 = function_4afe70(&v4, v5, &v6, 160); // 0x4ac6a5
    int32_t v8 = v7; // 0x4ac6aa
    int64_t v9; // 0x4ac630
    int64_t v10; // bp-152, 0x4ac630
    if (v8 == 0) {
        int64_t v11 = v6 + v4; // 0x4ac755
        int64_t v12 = function_4ac5f0(&v4, v11, &v10); // 0x4ac767
        if ((int32_t)v12 != 0) {
            // 0x4ac6c1
            return v12 & 0xffffffff;
        }
        int64_t v13 = function_4c3510(&v10, a2); // 0x4ac77e
        if ((int32_t)v13 != 0) {
            // 0x4ac6c1
            return v13 + 0xffffdd00 & 0xffffffff;
        }
        // 0x4ac78b
        v9 = v11;
        if (v4 != v11) {
            // 0x4ac6c1
            return 0xffffdc9a;
        }
    } else {
        // 0x4ac6b2
        if (v8 != -98) {
            // 0x4ac6c1
            return v7 + 0xffffdd00 & 0xffffffff;
        }
        // 0x4ac7a0
        v9 = v4;
    }
    // 0x4ac7a5
    if (v5 == v9) {
        // 0x4ac6c1
        return 0;
    }
    int64_t v14 = function_4afe70(&v4, v5, &v6, 161); // 0x4ac7bc
    int32_t v15 = v14; // 0x4ac7c1
    int64_t v16; // 0x4ac630
    int64_t v17; // 0x4ac630
    int64_t v18; // 0x4ac865
    if (v15 == 0) {
        // 0x4ac860
        v18 = v6 + v4;
        int32_t v19; // bp-120, 0x4ac630
        int64_t v20 = function_4ac610(&v4, v18, &v10, (int64_t *)&v19); // 0x4ac87c
        if ((int32_t)v20 != 0) {
            // 0x4ac6c1
            return v20 & 0xffffffff;
        }
        // 0x4ac88b
        int64_t str; // 0x4ac630
        if (str != 9) {
            // 0x4ac6c1
            return 0xffffdf52;
        }
        int32_t memcmp_rc = memcmp(&g27, (int64_t *)str, 9); // 0x4ac8ad
        if (memcmp_rc != 0) {
            // 0x4ac6c1
            return 0xffffdf52;
        }
        // 0x4ac8ba
        if (v19 != 48) {
            // 0x4ac6c1
            return memcmp_rc;
        }
        // 0x4ac8c5
        char * v21; // 0x4ac630
        int64_t v22 = (int64_t)v21; // 0x4ac8c5
        uint64_t v23 = str + v22; // 0x4ac8d2
        int64_t v24 = v22; // bp-168, 0x4ac8d7
        if (v23 <= v22) {
            // 0x4ac6c1
            return 0xffffdca0;
        }
        int32_t v25 = (int32_t)*v21; // bp-88, 0x4ac8fa
        int64_t v26; // bp-80, 0x4ac630
        int64_t v27 = function_4afe70(&v24, v23, &v26, 6); // 0x4ac8fe
        v17 = v27;
        if ((int32_t)v27 == 0) {
            // 0x4ac95d
            v24 += v26;
            int64_t v28 = function_4c3510((int64_t *)&v25, a3); // 0x4ac97c
            v17 = v28;
            if ((int32_t)v28 != 0) {
                goto lab_0x4ac907;
            } else {
                // 0x4ac985
                if (v23 == v24) {
                    goto lab_0x4ac915;
                } else {
                    // 0x4ac98c
                    int64_t v29; // bp-160, 0x4ac630
                    int64_t result = function_4afe70(&v24, v23, &v29, 5); // 0x4ac99e
                    v17 = result;
                    if ((int32_t)result != 0) {
                        goto lab_0x4ac907;
                    } else {
                        // 0x4ac9ab
                        v17 = result;
                        if (v29 != 0) {
                            goto lab_0x4ac907;
                        } else {
                            // 0x4ac9b7
                            if (v23 != v24) {
                                // 0x4ac6c1
                                return result;
                            }
                            goto lab_0x4ac915;
                        }
                    }
                }
            }
        } else {
            goto lab_0x4ac907;
        }
    } else {
        // 0x4ac7c9
        if (v15 != -98) {
            // 0x4ac6c1
            return v14 + 0xffffdd00 & 0xffffffff;
        }
        // 0x4ac7d8
        v16 = v4;
        goto lab_0x4ac7dd;
    }
  lab_0x4ac907:;
    int64_t v30 = v17 + 0xffffdd00; // 0x4ac907
    if ((int32_t)v30 != 0) {
        // 0x4ac6c1
        return v30 & 0xffffffff;
    }
    goto lab_0x4ac915;
  lab_0x4ac7dd:
    // 0x4ac7dd
    if (v5 == v16) {
        // 0x4ac6c1
        return 0;
    }
    int64_t v31 = function_4afe70(&v4, v5, &v6, 162); // 0x4ac7f8
    int32_t v32 = v31; // 0x4ac7fd
    int64_t v33; // 0x4ac630
    int64_t v34; // 0x4ac630
    int64_t result3; // 0x4ac630
    if (v32 == 0) {
        int64_t v35 = v6 + v4; // 0x4ac92d
        int64_t v36 = function_4aff10(&v4, v35, (int64_t *)a4); // 0x4ac93d
        v34 = v36;
        if ((int32_t)v36 != 0) {
            // 0x4ac6c1
            return v34 + 0xffffdd00 & 0xffffffff;
        }
        // 0x4ac94a
        v33 = v35;
        if (v4 != v35) {
            // 0x4ac6c1
            return 0xffffdc9a;
        }
    } else {
        // 0x4ac805
        result3 = v31 + 0xffffdd00 & 0xffffffff;
        if (v32 != -98) {
            // 0x4ac6c1
            return result3;
        }
        // 0x4ac814
        v33 = v4;
    }
    // 0x4ac819
    if (v5 == v33) {
        // 0x4ac6c1
        return 0;
    }
    int64_t v37 = function_4afe70(&v4, v5, &v6, 163); // 0x4ac834
    v34 = v37;
    switch ((int32_t)v37) {
        case 0: {
            int64_t v38 = v6 + v4; // 0x4ac700
            int32_t v39; // bp-188, 0x4ac630
            int64_t v40 = function_4aff10(&v4, v38, (int64_t *)&v39); // 0x4ac712
            v34 = v40;
            if ((int32_t)v40 != 0) {
                // 0x4ac6c1
                return v34 + 0xffffdd00 & 0xffffffff;
            }
            // 0x4ac71f
            if (v4 != v38) {
                // 0x4ac6c1
                return 0xffffdc9a;
            }
            // 0x4ac72b
            if (v39 != 1) {
                // 0x4ac6c1
                return 0xffffdd00;
            }
            // break -> 0x4ac736
            break;
        }
        case -98: {
            // break -> 0x4ac736
            break;
        }
        default: {
            // 0x4ac6c1
            return v34 + 0xffffdd00 & 0xffffffff;
        }
    }
    // 0x4ac736
    if (v4 != v5) {
        // 0x4ac6c1
        return 0xffffdc9a;
    }
    // 0x4ac6c1
    return 0;
  lab_0x4ac915:
    // 0x4ac915
    v16 = v18;
    if (v4 != v18) {
        // 0x4ac795
        result3 = 0xffffdc9a;
        int64_t result2 = result3;
        return result2;
    }
    goto lab_0x4ac7dd;
}

// Address range: 0x4b04e0 - 0x4b0864
int64_t function_4b04e0(uint64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = 0; // 0x4b04ee
    int64_t v2 = a2; // 0x4b04ee
    int64_t v3 = a3; // 0x4b04ee
    int64_t v4 = a1; // 0x4b04ee
    if (a1 >= 16) {
        int128_t v5 = a4; // 0x4b050a
        int64_t v6 = a1; // 0x4b0500
        v6 -= 16;
        uint128_t v7 = (int128_t)*(int64_t *)a2 * v5; // 0x4b050a
        uint64_t v8 = (int64_t)v7; // 0x4b050a
        uint64_t v9 = v8; // 0x4b0511
        int64_t * v10 = (int64_t *)a3; // 0x4b051c
        uint64_t v11 = *v10; // 0x4b051c
        uint64_t v12 = v9 + v11; // 0x4b051c
        *v10 = v12;
        uint128_t v13 = (int128_t)*(int64_t *)(a2 + 8) * v5; // 0x4b0529
        uint64_t v14 = (int64_t)v13; // 0x4b0529
        uint64_t v15 = (int64_t)(v9 < v8) + (int64_t)(v7 / 0x8000000000000000) + v14 + (int64_t)(v12 < v11); // 0x4b0530
        int64_t * v16 = (int64_t *)(a3 + 8); // 0x4b053b
        uint64_t v17 = *v16; // 0x4b053b
        uint64_t v18 = v15 + v17; // 0x4b053b
        *v16 = v18;
        uint128_t v19 = (int128_t)*(int64_t *)(a2 + 16) * v5; // 0x4b0548
        uint64_t v20 = (int64_t)v19; // 0x4b0548
        uint64_t v21 = v20 + (int64_t)(v13 / 0x8000000000000000) + (int64_t)(v15 < v14) + (int64_t)(v18 < v17); // 0x4b054f
        int64_t * v22 = (int64_t *)(a3 + 16); // 0x4b055a
        uint64_t v23 = *v22; // 0x4b055a
        uint64_t v24 = v21 + v23; // 0x4b055a
        *v22 = v24;
        uint128_t v25 = (int128_t)*(int64_t *)(a2 + 24) * v5; // 0x4b0567
        uint64_t v26 = (int64_t)v25; // 0x4b0567
        uint64_t v27 = v26 + (int64_t)(v19 / 0x8000000000000000) + (int64_t)(v21 < v20) + (int64_t)(v24 < v23); // 0x4b056e
        int64_t * v28 = (int64_t *)(a3 + 24); // 0x4b0579
        uint64_t v29 = *v28; // 0x4b0579
        uint64_t v30 = v27 + v29; // 0x4b0579
        *v28 = v30;
        uint128_t v31 = (int128_t)*(int64_t *)(a2 + 32) * v5; // 0x4b0586
        uint64_t v32 = (int64_t)v31; // 0x4b0586
        uint64_t v33 = v32 + (int64_t)(v25 / 0x8000000000000000) + (int64_t)(v27 < v26) + (int64_t)(v30 < v29); // 0x4b058d
        int64_t * v34 = (int64_t *)(a3 + 32); // 0x4b0598
        uint64_t v35 = *v34; // 0x4b0598
        uint64_t v36 = v33 + v35; // 0x4b0598
        *v34 = v36;
        uint128_t v37 = (int128_t)*(int64_t *)(a2 + 40) * v5; // 0x4b05a5
        uint64_t v38 = (int64_t)v37; // 0x4b05a5
        uint64_t v39 = v38 + (int64_t)(v31 / 0x8000000000000000) + (int64_t)(v33 < v32) + (int64_t)(v36 < v35); // 0x4b05ac
        int64_t * v40 = (int64_t *)(a3 + 40); // 0x4b05b7
        uint64_t v41 = *v40; // 0x4b05b7
        uint64_t v42 = v39 + v41; // 0x4b05b7
        *v40 = v42;
        uint128_t v43 = (int128_t)*(int64_t *)(a2 + 48) * v5; // 0x4b05c4
        uint64_t v44 = (int64_t)v43; // 0x4b05c4
        uint64_t v45 = v44 + (int64_t)(v37 / 0x8000000000000000) + (int64_t)(v39 < v38) + (int64_t)(v42 < v41); // 0x4b05cb
        int64_t * v46 = (int64_t *)(a3 + 48); // 0x4b05d6
        uint64_t v47 = *v46; // 0x4b05d6
        uint64_t v48 = v45 + v47; // 0x4b05d6
        *v46 = v48;
        uint128_t v49 = (int128_t)*(int64_t *)(a2 + 56) * v5; // 0x4b05e3
        uint64_t v50 = (int64_t)v49; // 0x4b05e3
        uint64_t v51 = v50 + (int64_t)(v43 / 0x8000000000000000) + (int64_t)(v45 < v44) + (int64_t)(v48 < v47); // 0x4b05ea
        int64_t * v52 = (int64_t *)(a3 + 56); // 0x4b05f5
        uint64_t v53 = *v52; // 0x4b05f5
        uint64_t v54 = v51 + v53; // 0x4b05f5
        *v52 = v54;
        uint128_t v55 = (int128_t)*(int64_t *)(a2 + 64) * v5; // 0x4b0602
        uint64_t v56 = (int64_t)v55; // 0x4b0602
        uint64_t v57 = v56 + (int64_t)(v49 / 0x8000000000000000) + (int64_t)(v51 < v50) + (int64_t)(v54 < v53); // 0x4b0609
        int64_t * v58 = (int64_t *)(a3 + 64); // 0x4b0614
        uint64_t v59 = *v58; // 0x4b0614
        uint64_t v60 = v57 + v59; // 0x4b0614
        *v58 = v60;
        uint128_t v61 = (int128_t)*(int64_t *)(a2 + 72) * v5; // 0x4b0621
        uint64_t v62 = (int64_t)v61; // 0x4b0621
        uint64_t v63 = v62 + (int64_t)(v55 / 0x8000000000000000) + (int64_t)(v57 < v56) + (int64_t)(v60 < v59); // 0x4b0628
        int64_t * v64 = (int64_t *)(a3 + 72); // 0x4b0633
        uint64_t v65 = *v64; // 0x4b0633
        uint64_t v66 = v63 + v65; // 0x4b0633
        *v64 = v66;
        uint128_t v67 = (int128_t)*(int64_t *)(a2 + 80) * v5; // 0x4b0640
        uint64_t v68 = (int64_t)v67; // 0x4b0640
        uint64_t v69 = v68 + (int64_t)(v61 / 0x8000000000000000) + (int64_t)(v63 < v62) + (int64_t)(v66 < v65); // 0x4b0647
        int64_t * v70 = (int64_t *)(a3 + 80); // 0x4b0652
        uint64_t v71 = *v70; // 0x4b0652
        uint64_t v72 = v69 + v71; // 0x4b0652
        *v70 = v72;
        uint128_t v73 = (int128_t)*(int64_t *)(a2 + 88) * v5; // 0x4b065f
        uint64_t v74 = (int64_t)v73; // 0x4b065f
        uint64_t v75 = v74 + (int64_t)(v67 / 0x8000000000000000) + (int64_t)(v69 < v68) + (int64_t)(v72 < v71); // 0x4b0666
        int64_t * v76 = (int64_t *)(a3 + 88); // 0x4b0671
        uint64_t v77 = *v76; // 0x4b0671
        uint64_t v78 = v75 + v77; // 0x4b0671
        *v76 = v78;
        uint128_t v79 = (int128_t)*(int64_t *)(a2 + 96) * v5; // 0x4b067e
        uint64_t v80 = (int64_t)v79; // 0x4b067e
        uint64_t v81 = v80 + (int64_t)(v73 / 0x8000000000000000) + (int64_t)(v75 < v74) + (int64_t)(v78 < v77); // 0x4b0685
        int64_t * v82 = (int64_t *)(a3 + 96); // 0x4b0690
        uint64_t v83 = *v82; // 0x4b0690
        uint64_t v84 = v81 + v83; // 0x4b0690
        *v82 = v84;
        uint128_t v85 = (int128_t)*(int64_t *)(a2 + 104) * v5; // 0x4b069d
        uint64_t v86 = (int64_t)v85; // 0x4b069d
        uint64_t v87 = v86 + (int64_t)(v79 / 0x8000000000000000) + (int64_t)(v81 < v80) + (int64_t)(v84 < v83); // 0x4b06a4
        int64_t * v88 = (int64_t *)(a3 + 104); // 0x4b06af
        uint64_t v89 = *v88; // 0x4b06af
        uint64_t v90 = v87 + v89; // 0x4b06af
        *v88 = v90;
        uint128_t v91 = (int128_t)*(int64_t *)(a2 + 112) * v5; // 0x4b06bc
        uint64_t v92 = (int64_t)v91; // 0x4b06bc
        uint64_t v93 = v92 + (int64_t)(v85 / 0x8000000000000000) + (int64_t)(v87 < v86) + (int64_t)(v90 < v89); // 0x4b06c3
        int64_t * v94 = (int64_t *)(a3 + 112); // 0x4b06ce
        uint64_t v95 = *v94; // 0x4b06ce
        uint64_t v96 = v93 + v95; // 0x4b06ce
        *v94 = v96;
        uint128_t v97 = (int128_t)*(int64_t *)(a2 + 120) * v5; // 0x4b06db
        uint64_t v98 = (int64_t)v97; // 0x4b06db
        v2 = a2 + 128;
        uint64_t v99 = v98 + (int64_t)(v91 / 0x8000000000000000) + (int64_t)(v93 < v92) + (int64_t)(v96 < v95); // 0x4b06e2
        int64_t * v100 = (int64_t *)(a3 + 120); // 0x4b06ed
        uint64_t v101 = *v100; // 0x4b06ed
        uint64_t v102 = v99 + v101; // 0x4b06ed
        *v100 = v102;
        v1 = (int64_t)(v99 < v98) + (int64_t)(v97 / 0x8000000000000000) + (int64_t)(v102 < v101);
        v3 = a3 + 128;
        int64_t v103 = v2; // 0x4b06fb
        int64_t v104 = v3; // 0x4b06fb
        while (v6 >= 16) {
            // 0x4b0500
            v6 -= 16;
            v7 = (int128_t)*(int64_t *)v103 * v5;
            v8 = (int64_t)v7;
            v9 = v1 + v8;
            v10 = (int64_t *)v104;
            v11 = *v10;
            v12 = v9 + v11;
            *v10 = v12;
            v13 = (int128_t)*(int64_t *)(v103 + 8) * v5;
            v14 = (int64_t)v13;
            v15 = (int64_t)(v9 < v8) + (int64_t)(v7 / 0x8000000000000000) + v14 + (int64_t)(v12 < v11);
            v16 = (int64_t *)(v104 + 8);
            v17 = *v16;
            v18 = v15 + v17;
            *v16 = v18;
            v19 = (int128_t)*(int64_t *)(v103 + 16) * v5;
            v20 = (int64_t)v19;
            v21 = v20 + (int64_t)(v13 / 0x8000000000000000) + (int64_t)(v15 < v14) + (int64_t)(v18 < v17);
            v22 = (int64_t *)(v104 + 16);
            v23 = *v22;
            v24 = v21 + v23;
            *v22 = v24;
            v25 = (int128_t)*(int64_t *)(v103 + 24) * v5;
            v26 = (int64_t)v25;
            v27 = v26 + (int64_t)(v19 / 0x8000000000000000) + (int64_t)(v21 < v20) + (int64_t)(v24 < v23);
            v28 = (int64_t *)(v104 + 24);
            v29 = *v28;
            v30 = v27 + v29;
            *v28 = v30;
            v31 = (int128_t)*(int64_t *)(v103 + 32) * v5;
            v32 = (int64_t)v31;
            v33 = v32 + (int64_t)(v25 / 0x8000000000000000) + (int64_t)(v27 < v26) + (int64_t)(v30 < v29);
            v34 = (int64_t *)(v104 + 32);
            v35 = *v34;
            v36 = v33 + v35;
            *v34 = v36;
            v37 = (int128_t)*(int64_t *)(v103 + 40) * v5;
            v38 = (int64_t)v37;
            v39 = v38 + (int64_t)(v31 / 0x8000000000000000) + (int64_t)(v33 < v32) + (int64_t)(v36 < v35);
            v40 = (int64_t *)(v104 + 40);
            v41 = *v40;
            v42 = v39 + v41;
            *v40 = v42;
            v43 = (int128_t)*(int64_t *)(v103 + 48) * v5;
            v44 = (int64_t)v43;
            v45 = v44 + (int64_t)(v37 / 0x8000000000000000) + (int64_t)(v39 < v38) + (int64_t)(v42 < v41);
            v46 = (int64_t *)(v104 + 48);
            v47 = *v46;
            v48 = v45 + v47;
            *v46 = v48;
            v49 = (int128_t)*(int64_t *)(v103 + 56) * v5;
            v50 = (int64_t)v49;
            v51 = v50 + (int64_t)(v43 / 0x8000000000000000) + (int64_t)(v45 < v44) + (int64_t)(v48 < v47);
            v52 = (int64_t *)(v104 + 56);
            v53 = *v52;
            v54 = v51 + v53;
            *v52 = v54;
            v55 = (int128_t)*(int64_t *)(v103 + 64) * v5;
            v56 = (int64_t)v55;
            v57 = v56 + (int64_t)(v49 / 0x8000000000000000) + (int64_t)(v51 < v50) + (int64_t)(v54 < v53);
            v58 = (int64_t *)(v104 + 64);
            v59 = *v58;
            v60 = v57 + v59;
            *v58 = v60;
            v61 = (int128_t)*(int64_t *)(v103 + 72) * v5;
            v62 = (int64_t)v61;
            v63 = v62 + (int64_t)(v55 / 0x8000000000000000) + (int64_t)(v57 < v56) + (int64_t)(v60 < v59);
            v64 = (int64_t *)(v104 + 72);
            v65 = *v64;
            v66 = v63 + v65;
            *v64 = v66;
            v67 = (int128_t)*(int64_t *)(v103 + 80) * v5;
            v68 = (int64_t)v67;
            v69 = v68 + (int64_t)(v61 / 0x8000000000000000) + (int64_t)(v63 < v62) + (int64_t)(v66 < v65);
            v70 = (int64_t *)(v104 + 80);
            v71 = *v70;
            v72 = v69 + v71;
            *v70 = v72;
            v73 = (int128_t)*(int64_t *)(v103 + 88) * v5;
            v74 = (int64_t)v73;
            v75 = v74 + (int64_t)(v67 / 0x8000000000000000) + (int64_t)(v69 < v68) + (int64_t)(v72 < v71);
            v76 = (int64_t *)(v104 + 88);
            v77 = *v76;
            v78 = v75 + v77;
            *v76 = v78;
            v79 = (int128_t)*(int64_t *)(v103 + 96) * v5;
            v80 = (int64_t)v79;
            v81 = v80 + (int64_t)(v73 / 0x8000000000000000) + (int64_t)(v75 < v74) + (int64_t)(v78 < v77);
            v82 = (int64_t *)(v104 + 96);
            v83 = *v82;
            v84 = v81 + v83;
            *v82 = v84;
            v85 = (int128_t)*(int64_t *)(v103 + 104) * v5;
            v86 = (int64_t)v85;
            v87 = v86 + (int64_t)(v79 / 0x8000000000000000) + (int64_t)(v81 < v80) + (int64_t)(v84 < v83);
            v88 = (int64_t *)(v104 + 104);
            v89 = *v88;
            v90 = v87 + v89;
            *v88 = v90;
            v91 = (int128_t)*(int64_t *)(v103 + 112) * v5;
            v92 = (int64_t)v91;
            v93 = v92 + (int64_t)(v85 / 0x8000000000000000) + (int64_t)(v87 < v86) + (int64_t)(v90 < v89);
            v94 = (int64_t *)(v104 + 112);
            v95 = *v94;
            v96 = v93 + v95;
            *v94 = v96;
            v97 = (int128_t)*(int64_t *)(v103 + 120) * v5;
            v98 = (int64_t)v97;
            v2 = v103 + 128;
            v99 = v98 + (int64_t)(v91 / 0x8000000000000000) + (int64_t)(v93 < v92) + (int64_t)(v96 < v95);
            v100 = (int64_t *)(v104 + 120);
            v101 = *v100;
            v102 = v99 + v101;
            *v100 = v102;
            v1 = (int64_t)(v99 < v98) + (int64_t)(v97 / 0x8000000000000000) + (int64_t)(v102 < v101);
            v3 = v104 + 128;
            v103 = v2;
            v104 = v3;
        }
        // 0x4b0701
        v4 = a1 % 16;
    }
    int64_t v105 = v1; // 0x4b0709
    int64_t v106 = v2; // 0x4b0709
    int64_t v107 = v3; // 0x4b0709
    int64_t v108 = v4; // 0x4b0709
    if (v4 >= 8) {
        int128_t v109 = a4; // 0x4b0719
        uint128_t v110 = (int128_t)*(int64_t *)v2 * v109; // 0x4b0719
        uint64_t v111 = (int64_t)v110; // 0x4b0719
        uint64_t v112 = v1 + v111; // 0x4b0720
        int64_t * v113 = (int64_t *)v3; // 0x4b072b
        uint64_t v114 = *v113; // 0x4b072b
        uint64_t v115 = v112 + v114; // 0x4b072b
        *v113 = v115;
        uint128_t v116 = (int128_t)*(int64_t *)(v2 + 8) * v109; // 0x4b0738
        uint64_t v117 = (int64_t)v116; // 0x4b0738
        uint64_t v118 = (int64_t)(v112 < v111) + (int64_t)(v110 / 0x8000000000000000) + v117 + (int64_t)(v115 < v114); // 0x4b073f
        int64_t * v119 = (int64_t *)(v3 + 8); // 0x4b074a
        uint64_t v120 = *v119; // 0x4b074a
        uint64_t v121 = v118 + v120; // 0x4b074a
        *v119 = v121;
        uint128_t v122 = (int128_t)*(int64_t *)(v2 + 16) * v109; // 0x4b0757
        uint64_t v123 = (int64_t)v122; // 0x4b0757
        uint64_t v124 = v123 + (int64_t)(v116 / 0x8000000000000000) + (int64_t)(v118 < v117) + (int64_t)(v121 < v120); // 0x4b075e
        int64_t * v125 = (int64_t *)(v3 + 16); // 0x4b0769
        uint64_t v126 = *v125; // 0x4b0769
        uint64_t v127 = v124 + v126; // 0x4b0769
        *v125 = v127;
        uint128_t v128 = (int128_t)*(int64_t *)(v2 + 24) * v109; // 0x4b0776
        uint64_t v129 = (int64_t)v128; // 0x4b0776
        uint64_t v130 = v129 + (int64_t)(v122 / 0x8000000000000000) + (int64_t)(v124 < v123) + (int64_t)(v127 < v126); // 0x4b077d
        int64_t * v131 = (int64_t *)(v3 + 24); // 0x4b0788
        uint64_t v132 = *v131; // 0x4b0788
        uint64_t v133 = v130 + v132; // 0x4b0788
        *v131 = v133;
        uint128_t v134 = (int128_t)*(int64_t *)(v2 + 32) * v109; // 0x4b0795
        uint64_t v135 = (int64_t)v134; // 0x4b0795
        uint64_t v136 = v135 + (int64_t)(v128 / 0x8000000000000000) + (int64_t)(v130 < v129) + (int64_t)(v133 < v132); // 0x4b079c
        int64_t * v137 = (int64_t *)(v3 + 32); // 0x4b07a7
        uint64_t v138 = *v137; // 0x4b07a7
        uint64_t v139 = v136 + v138; // 0x4b07a7
        *v137 = v139;
        uint128_t v140 = (int128_t)*(int64_t *)(v2 + 40) * v109; // 0x4b07b4
        uint64_t v141 = (int64_t)v140; // 0x4b07b4
        uint64_t v142 = v141 + (int64_t)(v134 / 0x8000000000000000) + (int64_t)(v136 < v135) + (int64_t)(v139 < v138); // 0x4b07bb
        int64_t * v143 = (int64_t *)(v3 + 40); // 0x4b07c6
        uint64_t v144 = *v143; // 0x4b07c6
        uint64_t v145 = v142 + v144; // 0x4b07c6
        *v143 = v145;
        uint128_t v146 = (int128_t)*(int64_t *)(v2 + 48) * v109; // 0x4b07d3
        uint64_t v147 = (int64_t)v146; // 0x4b07d3
        uint64_t v148 = v147 + (int64_t)(v140 / 0x8000000000000000) + (int64_t)(v142 < v141) + (int64_t)(v145 < v144); // 0x4b07da
        int64_t * v149 = (int64_t *)(v3 + 48); // 0x4b07e5
        uint64_t v150 = *v149; // 0x4b07e5
        uint64_t v151 = v148 + v150; // 0x4b07e5
        *v149 = v151;
        uint128_t v152 = (int128_t)*(int64_t *)(v2 + 56) * v109; // 0x4b07f2
        uint64_t v153 = (int64_t)v152; // 0x4b07f2
        uint64_t v154 = v153 + (int64_t)(v146 / 0x8000000000000000) + (int64_t)(v148 < v147) + (int64_t)(v151 < v150); // 0x4b07f9
        int64_t * v155 = (int64_t *)(v3 + 56); // 0x4b0804
        uint64_t v156 = *v155; // 0x4b0804
        uint64_t v157 = v154 + v156; // 0x4b0804
        *v155 = v157;
        v105 = (int64_t)(v154 < v153) + (int64_t)(v152 / 0x8000000000000000) + (int64_t)(v157 < v156);
        v106 = v2 + 64;
        v107 = v3 + 64;
        v108 = v4 % 8;
    }
    int64_t v158 = v105; // 0x4b0811
    int64_t v159 = v107; // 0x4b0811
    if (v108 != 0) {
        int64_t v160 = v106; // 0x4b04e0
        int64_t v161 = v107; // 0x4b0836
        int64_t v162 = v108; // 0x4b083a
        uint128_t v163 = (int128_t)*(int64_t *)v160 * (int128_t)a4; // 0x4b081e
        uint64_t v164 = (int64_t)v163; // 0x4b081e
        uint64_t v165 = v105 + v164; // 0x4b0825
        int64_t * v166 = (int64_t *)v161; // 0x4b0830
        uint64_t v167 = *v166; // 0x4b0830
        uint64_t v168 = v165 + v167; // 0x4b0830
        *v166 = v168;
        int64_t v169 = (int64_t)(v165 < v164) + (int64_t)(v163 / 0x8000000000000000) + (int64_t)(v168 < v167); // 0x4b0833
        v161 += 8;
        v162--;
        v160 += 8;
        v158 = v169;
        v159 = v161;
        while (v162 != 0) {
            // 0x4b0818
            v163 = (int128_t)*(int64_t *)v160 * (int128_t)a4;
            v164 = (int64_t)v163;
            v165 = v169 + v164;
            v166 = (int64_t *)v161;
            v167 = *v166;
            v168 = v165 + v167;
            *v166 = v168;
            v169 = (int64_t)(v165 < v164) + (int64_t)(v163 / 0x8000000000000000) + (int64_t)(v168 < v167);
            v161 += 8;
            v162--;
            v160 += 8;
            v158 = v169;
            v159 = v161;
        }
    }
    int64_t v170 = v159; // 0x4b04e0
    uint64_t v171 = v158;
    int64_t * v172 = (int64_t *)v170; // 0x4b0843
    int64_t v173 = *v172; // 0x4b0843
    uint64_t result = v173 + v171; // 0x4b0843
    *v172 = result;
    int64_t v174 = !((v173 == 0 | v171 < result)); // 0x4b0859
    v170 += 8;
    while (v173 != 0 && v171 >= result) {
        // 0x4b0840
        v171 = v174;
        v172 = (int64_t *)v170;
        v173 = *v172;
        result = v173 + v171;
        *v172 = result;
        v174 = !((v173 == 0 | v171 < result));
        v170 += 8;
    }
    // 0x4b085b
    return result;
}

// Address range: 0x4b3910 - 0x4b3ccd
int64_t function_4b3910(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4b3910
    int64_t v1; // bp-216, 0x4b3910
    function_4b0870(&v1);
    int64_t v2; // bp-184, 0x4b3910
    function_4b0870(&v2);
    int64_t v3; // bp-152, 0x4b3910
    function_4b0870(&v3);
    int64_t v4; // bp-120, 0x4b3910
    function_4b0870(&v4);
    int64_t v5; // bp-88, 0x4b3910
    function_4b0870(&v5);
    int64_t v6 = function_4b1a80(&v1, a1, 1); // 0x4b3980
    int64_t v7 = v6; // 0x4b398a
    int64_t v8; // 0x4b3910
    uint64_t v9; // 0x4b3991
    if ((int32_t)v6 == 0) {
        // 0x4b398c
        v9 = function_4b0ec0(&v1);
        int64_t v10 = function_4b0ac0(&v2, &v1); // 0x4b39a3
        v7 = v10;
        if ((int32_t)v10 == 0) {
            int64_t v11 = function_4b1220(&v2, v9); // 0x4b3a28
            v7 = v11;
            if ((int32_t)v11 == 0) {
                uint64_t v12 = function_4b0f10(a1); // 0x4b3a3b
                int64_t v13 = 2; // 0x4b3a4e
                if (v12 <= (int64_t)&g25) {
                    // 0x4b3a50
                    v13 = 3;
                    if (v12 <= (int64_t)&g18) {
                        // 0x4b3a60
                        v13 = 4;
                        if (v12 <= (int64_t)&g17) {
                            // 0x4b3a70
                            v13 = 8;
                            if (v12 < 350) {
                                // 0x4b3a80
                                v13 = 12;
                                if (v12 < 250) {
                                    // 0x4b3a90
                                    v13 = v12 < 150 ? 27 : 18;
                                }
                            }
                        }
                    }
                }
                int64_t * v14 = (int64_t *)(a1 + 8); // 0x4b3ab1
                int64_t v15 = (int64_t)&v4;
                int64_t v16 = (int64_t)&v1;
                int64_t v17; // 0x4b3910
                int64_t * v18 = (int64_t *)v17;
                int64_t v19 = 0; // 0x4b3aa8
                int64_t v20 = function_4b38b0(&v4, 8 * *v14, a2, a3); // 0x4b3ac4
                v7 = v20;
                while ((int32_t)v20 == 0) {
                    // 0x4b3ad4
                    if ((int32_t)function_4b1590(&v4, &v1) >= 0) {
                        int64_t v21 = function_4b1220(&v4, function_4b0f10(v15) + 1 - function_4b0f10(v16)); // 0x4b3b0a
                        v7 = v21;
                        if ((int32_t)v21 != 0) {
                            // break -> 0x4b39af
                            break;
                        }
                    }
                    // 0x4b3b1a
                    *v18 = *v18 | 3;
                    int64_t v22 = function_4b38b0(&v4, 8 * *v14, a2, a3); // 0x4b3b5f
                    v7 = v22;
                    int32_t v23 = 32; // 0x4b3b69
                    if ((int32_t)v22 != 0) {
                        // break -> 0x4b39af
                        break;
                    }
                    while (true) {
                        uint64_t v24 = function_4b0f10(v15); // 0x4b3b74
                        uint64_t v25 = function_4b0f10(v16); // 0x4b3b81
                        if (v24 > v25) {
                            int64_t v26 = function_4b1220(&v4, v24 - v25); // 0x4b3b96
                            v7 = v26;
                            if ((int32_t)v26 != 0) {
                                // break (via goto) -> 0x4b39af
                                goto lab_0x4b39af_2;
                            }
                        }
                        // 0x4b3b30
                        v23--;
                        if (v23 == 0) {
                            // 0x4b39e4
                            return 0xfffffff2;
                        }
                        // 0x4b3b39
                        if ((int32_t)function_4b1590(&v4, &v1) < 0) {
                            // 0x4b3bb0
                            if ((int32_t)function_4b1680(&v4, 1) >= 1) {
                                // break -> 0x4b3bc3
                                break;
                            }
                        }
                        int64_t v27 = function_4b38b0(&v4, 8 * *v14, a2, a3); // 0x4b3b5f
                        v7 = v27;
                        if ((int32_t)v27 != 0) {
                            // break (via goto) -> 0x4b39af
                            goto lab_0x4b39af_2;
                        }
                    }
                    int64_t v28 = function_4b2d10(&v4, &v4, &v2, a1, &v5); // 0x4b3bdb
                    v7 = v28;
                    if ((int32_t)v28 != 0) {
                        // break -> 0x4b39af
                        break;
                    }
                    // 0x4b3beb
                    if ((int32_t)function_4b1590(&v4, &v1) != 0) {
                        // 0x4b3c2b
                        if ((int32_t)function_4b1680(&v4, 1) != 0) {
                            // 0x4b3c3e
                            v8 = 1;
                            if (v9 < 2) {
                                goto lab_0x4b3cab;
                            } else {
                                goto lab_0x4b3c98;
                            }
                        }
                    }
                    // 0x4b3bfe
                    v19++;
                    v7 = v28;
                    if (v19 >= v13) {
                        // break -> 0x4b39af
                        break;
                    }
                    v20 = function_4b38b0(&v4, 8 * *v14, a2, a3);
                    v7 = v20;
                }
            }
        }
    }
  lab_0x4b39af_2:
    // 0x4b39af
    function_4b0890(&v1);
    function_4b0890(&v2);
    function_4b0890(&v3);
    function_4b0890(&v4);
    function_4b0890(&v5);
    // 0x4b39e4
    return v7 & 0xffffffff;
  lab_0x4b3cab:;
    int64_t v29 = function_4b1590(&v4, &v1); // 0x4b3cb5
    int64_t result = v29; // 0x4b3cbc
    if ((int32_t)v29 == 0) {
        // 0x4b3cbe
        return function_4b1680(&v4, 1);
    }
    return result;
  lab_0x4b3c98:
    // 0x4b3c98
    if ((int32_t)function_4b1590(&v4, &v1) != 0) {
        int64_t v30 = function_4b1ac0(&v3, &v4, &v4); // 0x4b3c5d
        result = v30;
        if ((int32_t)v30 != 0) {
            goto lab_0x4b39e4;
        } else {
            int64_t v31 = function_4b26c0(&v4, &v3, a1); // 0x4b3c73
            result = v31;
            if ((int32_t)v31 != 0) {
                goto lab_0x4b39e4;
            } else {
                // 0x4b3c7c
                if ((int32_t)function_4b1680(&v4, 1) == 0) {
                    goto lab_0x4b3cab;
                } else {
                    int64_t v32 = v8 + 1; // 0x4b3c8f
                    v8 = v32;
                    if (v32 == v9) {
                        goto lab_0x4b3cab;
                    } else {
                        goto lab_0x4b3c98;
                    }
                }
            }
        }
    } else {
        goto lab_0x4b3cab;
    }
}

// Address range: 0x4c62e0 - 0x4c667b
int64_t function_4c62e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4c62e0
    int64_t v1; // bp-88, 0x4c62e0
    function_4c3b10(&v1);
    int64_t v2; // 0x4c62e0
    int64_t result; // 0x4c62e0
    if (a3 != 0) {
        char * v3 = (char *)(a2 - 1 + a3); // 0x4c6355
        if (*v3 != 0) {
            goto lab_0x4c6323;
        } else {
            // 0x4c635b
            int64_t v4; // bp-96, 0x4c62e0
            int64_t result2 = function_4c3b30(&v1, "-----BEGIN RSA PRIVATE KEY-----", "-----END RSA PRIVATE KEY-----", a2, a4, a5, &v4); // 0x4c6380
            int32_t v5 = result2; // 0x4c6385
            int64_t v6; // 0x4c62e0
            if (v5 != 0) {
                // 0x4c6411
                result = 0xffffc480;
                switch (v5) {
                    case -0x1380: {
                        return result;
                    }
                    case -0x1300: {
                        // 0x4c63e8
                        return 0xffffc400;
                    }
                    default: {
                        // 0x4c6427
                        if (v5 != -0x1080) {
                            // 0x4c63e8
                            return result2;
                        }
                        // 0x4c642e
                        if (*v3 != 0) {
                            goto lab_0x4c6323;
                        } else {
                            int64_t result3 = function_4c3b30(&v1, "-----BEGIN EC PRIVATE KEY-----", "-----END EC PRIVATE KEY-----", a2, a4, a5, &v4); // 0x4c645d
                            int32_t v7 = result3; // 0x4c6462
                            if (v7 != 0) {
                                // 0x4c64b0
                                result = 0xffffc480;
                                switch (v7) {
                                    case -0x1380: {
                                        return result;
                                    }
                                    case -0x1300: {
                                        // 0x4c63e8
                                        return 0xffffc400;
                                    }
                                    default: {
                                        // 0x4c64c6
                                        if (v7 != -0x1080) {
                                            // 0x4c63e8
                                            return result3;
                                        }
                                        // 0x4c64d1
                                        if (*v3 != 0) {
                                            goto lab_0x4c6323;
                                        } else {
                                            int64_t result4 = function_4c3b30(&v1, "-----BEGIN PRIVATE KEY-----", "-----END PRIVATE KEY-----", a2, 0, 0, &v4); // 0x4c6500
                                            int32_t v8 = result4; // 0x4c6505
                                            if (v8 != 0) {
                                                // 0x4c660e
                                                if (v8 != -0x1080) {
                                                    // 0x4c63e8
                                                    return result4;
                                                }
                                                // 0x4c6619
                                                if (*v3 != 0) {
                                                    goto lab_0x4c6323;
                                                } else {
                                                    int64_t result5 = function_4c3b30(&v1, "-----BEGIN ENCRYPTED PRIVATE KEY-----", "-----END ENCRYPTED PRIVATE KEY-----", a2, 0, 0, &v4); // 0x4c6648
                                                    if ((int32_t)result5 != 0) {
                                                        // 0x4c63e8
                                                        return result5;
                                                    }
                                                    int64_t v9 = function_4c5d50(a1, v1, v6, a4, a5); // 0x4c6664
                                                    v2 = v9;
                                                    if ((int32_t)v9 == 0) {
                                                        // 0x4c63d6
                                                        function_4c40e0(&v1);
                                                        // 0x4c63e8
                                                        return v9 & 0xffffffff;
                                                    }
                                                    goto lab_0x4c63c6;
                                                }
                                            } else {
                                                int64_t v10 = function_4c5bd0(a1, v1, v6); // 0x4c651a
                                                v2 = v10;
                                                if ((int32_t)v10 == 0) {
                                                    // 0x4c63d6
                                                    function_4c40e0(&v1);
                                                    // 0x4c63e8
                                                    return v10 & 0xffffffff;
                                                }
                                                goto lab_0x4c63c6;
                                            }
                                        }
                                    }
                                }
                            } else {
                                int64_t v11 = function_4c4300(2); // 0x4c646b
                                if (v11 == 0) {
                                    // 0x4c63e8
                                    return 0xffffc380;
                                }
                                int64_t v12 = function_4c4360(a1, v11); // 0x4c647f
                                v2 = v12;
                                if ((int32_t)v12 == 0) {
                                    int64_t v13 = function_4c5930(*(int64_t *)(a1 + 8), v1, v6); // 0x4c649a
                                    v2 = v13;
                                    if ((int32_t)v13 == 0) {
                                        // 0x4c63d6
                                        function_4c40e0(&v1);
                                        // 0x4c63e8
                                        return v13 & 0xffffffff;
                                    }
                                }
                                goto lab_0x4c63c6;
                            }
                        }
                    }
                }
            } else {
                int64_t v14 = function_4c4300(1); // 0x4c6392
                if (v14 == 0) {
                    // 0x4c63e8
                    return 0xffffc380;
                }
                int64_t v15 = function_4c4360(a1, v14); // 0x4c63a6
                v2 = v15;
                if ((int32_t)v15 == 0) {
                    int64_t v16 = function_4c5100(*(int64_t *)(a1 + 8), v1, v6); // 0x4c63bd
                    v2 = v16;
                    if ((int32_t)v16 == 0) {
                        // 0x4c63d6
                        function_4c40e0(&v1);
                        // 0x4c63e8
                        return v16 & 0xffffffff;
                    }
                }
                goto lab_0x4c63c6;
            }
        }
    } else {
        goto lab_0x4c6323;
    }
  lab_0x4c6323:;
    int32_t v17 = function_4c5d50(a1, a2, a3, a4, a5); // 0x4c6337
    if (v17 == 0) {
        // 0x4c63e8
        return 0;
    }
    // 0x4c652c
    function_4c42d0(a1);
    if (v17 == -0x3b80) {
        // 0x4c63e8
        return 0xffffc480;
    }
    // 0x4c6542
    if ((int32_t)function_4c5bd0(a1, a2, a3) == 0) {
        // 0x4c63e8
        return 0;
    }
    // 0x4c6558
    function_4c42d0(a1);
    int64_t v18 = function_4c4300(1); // 0x4c6565
    if (v18 == 0) {
        // 0x4c63e8
        return 0xffffc380;
    }
    // 0x4c6573
    if ((int32_t)function_4c4360(a1, v18) != 0) {
        // 0x4c63e8
        return 0;
    }
    int64_t * v19 = (int64_t *)(a1 + 8); // 0x4c6586
    if ((int32_t)function_4c5100(*v19, a2, a3) == 0) {
        // 0x4c63e8
        return 0;
    }
    // 0x4c659d
    function_4c42d0(a1);
    int64_t v20 = function_4c4300(2); // 0x4c65aa
    if (v20 == 0) {
        // 0x4c63e8
        return 0xffffc380;
    }
    // 0x4c65b4
    if ((int32_t)function_4c4360(a1, v20) != 0) {
        // 0x4c63e8
        return 0;
    }
    // 0x4c65c7
    result = 0;
    if ((int32_t)function_4c5930(*v19, a2, a3) != 0) {
        // 0x4c65de
        function_4c42d0(a1);
        result = 0xffffc300;
    }
    // 0x4c63e8
    return result;
  lab_0x4c63c6:
    // 0x4c63c6
    function_4c42d0(a1);
    // 0x4c63d6
    function_4c40e0(&v1);
    // 0x4c63e8
    return v2 & 0xffffffff & 0xffffffff;
}

// Address range: 0x50b2b0 - 0x50b66d
int64_t function_50b2b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = __readfsqword(40); // 0x50b2c7
    int64_t v2 = function_50b260(); // 0x50b2d7
    int64_t * v3 = (int64_t *)v2; // 0x50b2df
    int64_t v4 = v2; // 0x50b2ed
    int64_t v5; // 0x50b2b0
    int64_t v6; // bp-72, 0x50b2b0
    int64_t v7; // bp-88, 0x50b2b0
    if (*(int64_t *)(*v3 + 32) == g31) {
        // 0x50b2f3
        v4 = *(int64_t *)(*(int64_t *)(v2 + 16) + 16);
        function_250b0(&v7, (char *)v4, &v6);
        v5 = v7;
    }
    int64_t v8 = *(int64_t *)(v5 - 24); // 0x50b312
    int64_t * v9 = (int64_t *)(a1 + 24); // 0x50b316
    *v9 = v8;
    int64_t v10 = function_4eec00(v8, v4); // 0x50b31a
    int64_t v11 = *v9; // 0x50b31f
    function_547670(&v7, v10, v11, 0);
    char v12 = 0; // 0x50b33a
    if (*v9 != 0) {
        // 0x50b33c
        v12 = *(char *)v10 < 127;
    }
    // 0x50b349
    *(char *)(a1 + 32) = v12;
    int64_t v13 = v11; // 0x50b35b
    int64_t v14 = v2; // 0x50b35b
    int64_t v15; // bp-80, 0x50b2b0
    int64_t v16; // bp-90, 0x50b2b0
    if (*(int64_t *)(*v3 + 40) == g30) {
        // 0x50b361
        v14 = *(int64_t *)(*(int64_t *)(v2 + 16) + 40);
        function_35ef6(&v15, v14, &v16);
        v13 = (int64_t)&v16;
    }
    uint64_t v17 = *(int64_t *)(v15 - 24); // 0x50b380
    int64_t * v18 = (int64_t *)(a1 + 48); // 0x50b391
    *v18 = v17;
    int64_t v19 = v13; // 0x50b395
    int64_t v20 = v14; // 0x50b395
    int64_t v21 = v17; // 0x50b395
    if (v17 < 0x1fffffffffffffff) {
        int64_t v22 = function_4eec00(4 * v17, v14); // 0x50b39f
        function_54ff00(&v15, v22, *v18, 0);
        int64_t v23 = v2; // 0x50b3c7
        int64_t v24; // bp-89, 0x50b2b0
        if (*(int64_t *)(*v3 + 48) == g32) {
            // 0x50b3cd
            v23 = *(int64_t *)(*(int64_t *)(v2 + 16) + 56);
            function_35ef6(&v6, v23, &v24);
        }
        uint64_t v25 = *(int64_t *)(v6 - 24); // 0x50b3f1
        int64_t * v26 = (int64_t *)(a1 + 64); // 0x50b402
        *v26 = v25;
        if (v25 >= 0x1fffffffffffffff) {
            // 0x50b652
            return function_208a0(v25, v23);
        }
        int64_t v27 = function_4eec00(4 * v25, v23); // 0x50b410
        function_54ff00(&v6, v27, *v26, 0);
        int64_t v28 = *v3; // 0x50b42b
        int64_t v29 = *(int64_t *)(v28 + 16); // 0x50b42f
        int64_t v30 = v29; // 0x50b43a
        if (v29 == g34) {
            // 0x50b440
            v30 = (int64_t)*(int32_t *)(*(int64_t *)(v2 + 16) + 72);
        }
        // 0x50b447
        *(int32_t *)(a1 + 72) = (int32_t)v30;
        int64_t v31 = *(int64_t *)(v28 + 24); // 0x50b44a
        int64_t v32 = v31; // 0x50b455
        if (v31 == g36) {
            // 0x50b45b
            v32 = (int64_t)*(int32_t *)(*(int64_t *)(v2 + 16) + 76);
        }
        // 0x50b462
        *(int32_t *)(a1 + 76) = (int32_t)v32;
        function_50ab00(a2);
        int64_t v33 = a1 + 224; // 0x50b493
        *(int64_t *)(a1 + 16) = v10;
        *(int64_t *)(a1 + 40) = v22;
        *(int64_t *)(a1 + 56) = v27;
        *(char *)(a1 + 328) = 1;
        int64_t v34 = v6 - 24; // 0x50b4ca
        int64_t v35 = *(int64_t *)&g38; // 0x50b4d1
        if (v34 != (int64_t)&g41) {
            // 0x50b5b0
            function_508450(v34, &v24, (int64_t)&g39, v33);
            v35 = (int64_t)&v24;
        }
        int64_t v36 = v15 - 24; // 0x50b4dc
        int64_t v37 = v35; // 0x50b4e3
        if (v36 != (int64_t)&g41) {
            // 0x50b590
            function_508450(v36, &v24, (int64_t)&g39, v33);
            v37 = (int64_t)&v24;
        }
        // 0x50b4e9
        v21 = v7 - 24;
        v20 = v37;
        if (v21 != (int64_t)g33) {
            // 0x50b5a0
            function_508620(v21, &v24);
            v20 = (int64_t)&v24;
        }
        int64_t result = __readfsqword(40) ^ v1; // 0x50b504
        if (result == 0) {
            // 0x50b513
            return result;
        }
        // 0x50b5bf
        __stack_chk_fail();
        v19 = (int64_t)&g39;
    }
    int64_t v38 = function_208a0(v21, v20); // 0x50b5c4
    int64_t v39 = v15 - 24; // 0x50b5db
    int64_t v40 = v20; // 0x50b5e2
    if (v39 != (int64_t)&g41) {
        // 0x50b5e4
        function_508450(v39, &v16, v19, v15);
        v40 = (int64_t)&v16;
    }
    int64_t v41 = v7 - 24; // 0x50b5fd
    int64_t v42 = v40; // 0x50b608
    if (v41 != (int64_t)g33) {
        // 0x50b60a
        int64_t v43; // bp-91, 0x50b2b0
        function_508620(v41, &v43);
        v42 = (int64_t)&v43;
    }
    // 0x50b61e
    function_1fd40(v38);
    if (v38 != 0) {
        // 0x50b62b
        function_4eeb40(v38);
    }
    // 0x50b64d
    function_20a50();
    // 0x50b652
    return function_208a0(v38, v42);
}

// Address range: 0x50f830 - 0x50fbed
int64_t function_50f830(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10) {
    int64_t result = a2; // bp-88, 0x50f845
    int64_t v1 = a4; // bp-104, 0x50f84d
    __readfsqword(40);
    int64_t v2 = function_50ab00(a9 + 208); // 0x50f87e
    char v3; // 0x50f830
    int64_t v4; // 0x50f8b4
    if ((char)function_50f6f0(&result, &v1) == 0) {
        int64_t v5 = (int64_t)&result; // 0x50f8b0
        int64_t v6 = function_50f7d0(v5); // 0x50f8f9
        if (a8 != 0) {
            // 0x50f908
            int64_t v7; // bp-168, 0x50f830
            v4 = 15 - (4 * a8 + 30 & -16) + (int64_t)&v7 & -16;
            int64_t v8 = 0;
            int64_t v9 = 0;
            int64_t v10 = v6 & 0xffffffff;
            int32_t v11 = v10; // 0x50f937
            int64_t v12 = v10; // 0x50f93a
            int64_t v13; // 0x50f830
            int64_t v14; // 0x50f91e
            int64_t v15; // 0x50f927
            while (*(int32_t *)*(int64_t *)(8 * v9 + a7) != v11) {
                // 0x50f910
                v14 = v10 & 0xffffffff;
                v12 = v14;
                if (v11 == (int32_t)*(int64_t *)v2) {
                    // break -> 0x50f93c
                    break;
                }
                // 0x50f927
                v15 = v9 + 1;
                v13 = v8;
                if (v15 == a8) {
                    // break (via goto) -> 0x50f94e
                    goto lab_0x50f94e;
                }
                v9 = v15;
                v10 = v14;
                v11 = v10;
                v12 = v10;
            }
            // 0x50f93c
            *(int32_t *)(4 * v8 + v4) = (int32_t)v9;
            int64_t v16 = v8 + 1; // 0x50f940
            int64_t v17 = v9 + 1; // 0x50f944
            v13 = v16;
            while (v17 != a8) {
                // 0x50f931
                v8 = v16;
                v9 = v17;
                v10 = v12;
                v11 = v10;
                v12 = v10;
                while (*(int32_t *)*(int64_t *)(8 * v9 + a7) != v11) {
                    // 0x50f910
                    v14 = v10 & 0xffffffff;
                    v12 = v14;
                    if (v11 == (int32_t)*(int64_t *)v2) {
                        // break -> 0x50f93c
                        break;
                    }
                    // 0x50f927
                    v15 = v9 + 1;
                    v13 = v8;
                    if (v15 == a8) {
                        // break (via goto) -> 0x50f94e
                        goto lab_0x50f94e;
                    }
                    v9 = v15;
                    v10 = v14;
                    v11 = v10;
                    v12 = v10;
                }
                // 0x50f93c
                *(int32_t *)(4 * v8 + v4) = (int32_t)v9;
                v16 = v8 + 1;
                v17 = v9 + 1;
                v13 = v16;
            }
          lab_0x50f94e:
            // 0x50f94e
            if (v13 < 2) {
              lab_0x50faad:
                // 0x50faad
                if (v13 == 1) {
                    // 0x50fab7
                    function_50d7a0(v5);
                    int32_t v18 = *(int32_t *)v4; // 0x50fac0
                    int64_t v19 = 1; // 0x50fac7
                    int64_t wstr = *(int64_t *)(8 * (int64_t)v18 + a7); // 0x50facb
                    uint64_t v20 = (int64_t)wcslen((int32_t *)wstr); // 0x50fad5
                    int64_t v21 = v19; // 0x50fae0
                    int64_t v22 = v19; // 0x50fae0
                    if (v19 < v20) {
                        int64_t v23 = function_50f6f0(&result, &v1); // 0x50fb18
                        v22 = v21;
                        while ((char)v23 == 0) {
                            // 0x50fae8
                            v22 = v21;
                            if (*(int32_t *)(4 * v21 + wstr) != (int32_t)function_50f7d0(v5)) {
                                // break -> 0x50fb21
                                break;
                            }
                            int64_t v24 = v21 + 1; // 0x50fafc
                            function_50d7a0(v5);
                            v21 = v24;
                            v22 = v24;
                            if (v24 >= v20) {
                                // break -> 0x50fb21
                                break;
                            }
                            v23 = function_50f6f0(&result, &v1);
                            v22 = v21;
                        }
                    }
                    // 0x50fb21
                    if (v22 == v20) {
                        // 0x50fb2a
                        *(int32_t *)a6 = v18;
                        // 0x50f8cb
                        __readfsqword(40);
                        return result;
                    }
                }
            } else {
                // 0x50f960
                while (true) {
                  lab_0x50f960:;
                    int64_t v25 = 0;
                    int64_t v26 = (int64_t)*(int32_t *)v4; // 0x50f960
                    int64_t v27 = 1; // 0x50f974
                    uint64_t v28 = (int64_t)wcslen((int32_t *)*(int64_t *)(8 * v26 + a7));
                    int64_t wstr2 = *(int64_t *)(8 * (int64_t)*(int32_t *)(4 * v27 + v4) + a7); // 0x50f980
                    uint64_t v29 = (int64_t)wcslen((int32_t *)wstr2); // 0x50f984
                    uint64_t v30 = v28 > v29 ? v29 : v28; // 0x50f990
                    v27 = (0x100000000 * v27 >> 32) + 1;
                    while (v13 > v27) {
                        // 0x50f978
                        v28 = v30;
                        wstr2 = *(int64_t *)(8 * (int64_t)*(int32_t *)(4 * v27 + v4) + a7);
                        v29 = (int64_t)wcslen((int32_t *)wstr2);
                        v30 = v28 > v29 ? v29 : v28;
                        v27 = (0x100000000 * v27 >> 32) + 1;
                    }
                    // 0x50f99d
                    if (result == 0) {
                        // 0x50fb70
                        if (v25 + 1 >= v30) {
                            // break -> 0x50f8c4
                            break;
                        }
                        goto lab_0x50fb82;
                    } else {
                        int64_t * v31 = (int64_t *)(result + 16); // 0x50f9aa
                        uint64_t v32 = *v31; // 0x50f9aa
                        if (v32 < *(int64_t *)(result + 24)) {
                            // 0x50f9b8
                            *v31 = v32 + 4;
                        }
                        // 0x50f9c0
                        if (v25 + 1 >= v30) {
                            // break -> 0x50f8c4
                            break;
                        }
                        // 0x50f9d9
                        if (result == 0) {
                            goto lab_0x50fb82;
                        } else {
                            uint64_t result2 = *(int64_t *)(result + 16); // 0x50f9e6
                            if (result2 >= *(int64_t *)(result + 24)) {
                                // 0x50fbe5
                                return result2;
                            }
                            // 0x50f9f4
                            if (*(int32_t *)result2 == -1) {
                                // 0x50fbdb
                                result = 0;
                                goto lab_0x50fb82;
                            } else {
                                // 0x50f9ff
                                if (v1 == 0) {
                                    goto lab_0x50fa42;
                                } else {
                                    // 0x50fa0b
                                    v3 = 0;
                                    if ((int32_t)a5 != -1) {
                                        // break -> 0x50f8c4
                                        break;
                                    }
                                    goto lab_0x50fa18;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
  lab_0x50f8c4_2:;
    int32_t * v33 = (int32_t *)a10; // 0x50f8c8
    *v33 = *v33 | 4;
    // 0x50f8cb
    __readfsqword(40);
    return result;
  lab_0x50fb82:
    // 0x50fb82
    if (v1 == 0) {
        // break -> 0x50f8c4
        goto lab_0x50f8c4_2;
    }
    // 0x50fb8f
    v3 = 1;
    if ((int32_t)a5 != -1) {
        goto lab_0x50fa42;
    } else {
        goto lab_0x50fa18;
    }
  lab_0x50fa3f:
    // 0x50fa3f
    goto lab_0x50fa42;
  lab_0x50fa18:;
    uint64_t result3 = *(int64_t *)(v1 + 16); // 0x50fa18
    if (result3 >= *(int64_t *)(v1 + 24)) {
        // 0x50fbe5
        return result3;
    }
    // 0x50fa26
    if (*(int32_t *)result3 == -1) {
        // 0x50fbe5
        return 0xffffffff;
    }
    // 0x50fa31
    if (v3 == 0) {
        // break -> 0x50f8c4
        goto lab_0x50f8c4_2;
    }
    goto lab_0x50fa3f;
  lab_0x50fa42:;
    // 0x50fa42
    int64_t v34; // 0x50f830
    while (true) {
        // 0x50fa75
        int64_t v35; // 0x50f830
        int64_t v36 = v35;
        int64_t v37; // 0x50f830
        int64_t v38 = v37;
        int64_t v39; // 0x50f830
        int64_t v40 = v39;
        int64_t v41; // 0x50f830
        int64_t v42 = v41;
        int64_t v43; // 0x50f830
        int64_t v44 = v43;
        int64_t v45; // 0x50f830
        int64_t v46 = v45;
        int64_t v47 = *(int64_t *)(8 * v38 + a7); // 0x50fa79
        int32_t v48 = *(int32_t *)(v47 + v40); // 0x50fa80
        int64_t v49 = 0; // 0x50fa87
        int64_t v50 = v44; // 0x50fa87
        int64_t v51 = 0xffffffff; // 0x50fa87
        int64_t v52 = v40; // 0x50fa87
        if (v46 != 0) {
            // 0x50fa89
            v49 = v46;
            v50 = v44;
            v51 = v44 & 0xffffffff;
            v52 = v40;
            if ((int32_t)v44 == -1) {
                uint64_t v53 = *(int64_t *)(v46 + 16); // 0x50fb40
                uint64_t v54 = *(int64_t *)(v46 + 24); // 0x50fb44
                int64_t v55; // 0x50f830
                int64_t v56; // 0x50f830
                if (v53 >= v54) {
                    int64_t v57 = *(int64_t *)v46; // 0x50fba8
                    v56 = v57;
                    v55 = 0x100000000 * v40 >> 32;
                } else {
                    uint32_t v58 = *(int32_t *)v53; // 0x50fb4a
                    v56 = v58;
                    v55 = v40;
                }
                int64_t v59 = v55;
                int64_t v60 = v56;
                if ((int32_t)v60 == -1) {
                    // 0x50fb60
                    result = 0;
                    v49 = 0;
                    v50 = v44;
                    v51 = 0xffffffff;
                    v52 = v59;
                } else {
                    // 0x50fb51
                    v49 = v46;
                    v50 = 0x100000000 * v60 >> 32;
                    v51 = v60;
                    v52 = v59;
                }
            }
        }
        int64_t v61 = v52;
        int64_t v62 = v51;
        int64_t v63 = v50;
        int64_t v64; // 0x50f830
        int32_t v65; // 0x50f830
        int64_t v66; // 0x50f830
        int64_t v67; // 0x50f830
        if (v48 != (int32_t)v62) {
            int64_t v68 = v36 - 1; // 0x50fa60
            int32_t v69 = *(int32_t *)(4 * v68 + v4); // 0x50fa64
            *(int32_t *)(4 * v42 + v4) = v69;
            v34 = v68;
            if (v68 <= v42) {
                // break -> 0x50faa3
                break;
            }
            int64_t v70 = result;
            v65 = v69;
            v64 = v70;
            v67 = v42;
            v66 = v68;
        } else {
            int64_t v71 = v42 + 1; // 0x50fa9a
            v34 = v36;
            if (v36 <= v71) {
                // break -> 0x50faa3
                break;
            }
            int64_t v72 = v49;
            int32_t v73 = *(int32_t *)(4 * v71 + v4);
            v65 = v73;
            v64 = v72;
            v67 = v71;
            v66 = v36;
        }
        int64_t v74 = v66;
        int64_t v75 = v67;
        int64_t v76 = v64;
        int32_t v77 = v65; // 0x50fa71
        v45 = v76;
        v43 = v63;
        v41 = v75;
        v39 = v61;
        v37 = v77;
        v35 = v74;
    }
    int64_t v78 = v34;
    if (v78 < 2) {
        goto lab_0x50faad;
    }
    goto lab_0x50f960;
}

// Address range: 0x543a60 - 0x543e0d
int64_t function_543a60(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x543a80
    char v2; // bp-88, 0x543a60
    function_5433f0((int64_t *)&v2);
    int64_t v3 = a3; // 0x543a9d
    int64_t v4 = a1; // 0x543a9d
    int64_t v5; // 0x543a60
    int64_t v6; // 0x543a60
    int64_t v7; // 0x543a60
    int64_t v8; // 0x543a60
    int64_t v9; // 0x543a60
    int64_t v10; // 0x543a60
    int64_t v11; // 0x543a60
    int64_t v12; // 0x543a60
    int64_t v13; // 0x543ac3
    char v14; // 0x543a60
    int64_t v15; // 0x543cde
    int64_t v16; // 0x543aae
    uint32_t v17; // 0x543ac3
    if (v2 == 0) {
        goto lab_0x543b62;
    } else {
        int64_t * v18 = (int64_t *)((int64_t)&v2 - 24);
        int64_t v19 = *v18; // 0x543aa6
        int64_t v20 = v19 + a1; // 0x543aaa
        v16 = *(int64_t *)(v20 + 16);
        if (v16 > a3) {
            // 0x543ac0
            v17 = *(int32_t *)(v20 + 24) & 176;
            v13 = v17;
            v5 = v20;
            if (v17 == 32) {
                goto lab_0x543b4f;
            } else {
                char * v21 = (char *)(v20 + 225); // 0x543ad5
                if (*v21 == 0) {
                    int64_t v22 = *(int64_t *)(v20 + 240); // 0x543ca8
                    v12 = v13;
                    v8 = a1;
                    if (v22 == 0) {
                        goto lab_0x543d41;
                    } else {
                        // 0x543cbd
                        int64_t * v23; // 0x543a60
                        int64_t v24; // 0x543a60
                        if (*(char *)(v22 + 56) == 0) {
                            // 0x543d08
                            function_54d560(v22);
                            int64_t v25 = *(int64_t *)(*(int64_t *)v22 + 48); // 0x543d1e
                            v23 = (int64_t *)(v22 - 24);
                            v24 = v25 == g37 ? 32 : v25 & 0xffffffff;
                        } else {
                            // 0x543cc8
                            v23 = v18;
                            v24 = (int64_t)*(char *)(v22 + 89);
                        }
                        // 0x543ccd
                        v14 = v24;
                        *(char *)(v20 + 224) = v14;
                        *v21 = 1;
                        v15 = *v23;
                        goto lab_0x543aed;
                    }
                } else {
                    // 0x543ae5
                    v14 = *(char *)(v20 + 224);
                    v15 = v19;
                    goto lab_0x543aed;
                }
            }
        } else {
            int64_t v26 = *(int64_t *)(v20 + 232); // 0x543b90
            int64_t v27 = *(int64_t *)(v26 - 24) + a1; // 0x543bab
            v10 = v26;
            v7 = a1;
            v6 = v27;
            if (*(int64_t *)v26 == a3) {
                goto lab_0x543b5a;
            } else {
                // 0x543bb3
                function_4fc010(v27, *(int32_t *)(v27 + 32) | 1, v26);
                v11 = v26;
                v9 = v27;
                goto lab_0x543bc1;
            }
        }
    }
  lab_0x543b62:
    // 0x543b62
    function_543470((int64_t *)&v2);
    int64_t result = v4; // 0x543b7b
    if (v1 == __readfsqword(40)) {
        // 0x543b81
        return result;
    }
    // 0x543d3c
    __stack_chk_fail();
    v12 = v3;
    v8 = v4;
    goto lab_0x543d41;
  lab_0x543d41:
    // 0x543d41
    function_5423f0();
    int64_t v28 = v12; // 0x543d46
    int64_t v29 = v8; // 0x543d46
  lab_0x543d50:
    // 0x543d50
    v10 = v28;
    v7 = v29;
    v6 = v29 + v28;
    goto lab_0x543b5a;
  lab_0x543b5a:
    // 0x543b5a
    *(int64_t *)(v6 + 16) = 0;
    v3 = v10;
    v4 = v7;
    goto lab_0x543b62;
  lab_0x543b4f:
    // 0x543b4f
    v10 = v13;
    v7 = a1;
    v6 = v5;
    int64_t v30 = v5; // 0x543b54
    if (*(int32_t *)(v5 + 32) == 0) {
        goto lab_0x543bd8;
    } else {
        goto lab_0x543b5a;
    }
  lab_0x543bd8:;
    int64_t v31 = *(int64_t *)(v30 + 232); // 0x543bd8
    int64_t v32 = *(int64_t *)(v31 - 24); // 0x543bf2
    int64_t v33 = v32 + a1; // 0x543bf6
    int64_t v34 = v32; // 0x543bfa
    int64_t v35 = v33; // 0x543bfa
    int64_t v36 = v31; // 0x543bfa
    if (*(int64_t *)v31 != a3) {
        // 0x543bfc
        function_4fc010(v33, *(int32_t *)(v33 + 32) | 1, v32);
        int64_t v37 = *(int64_t *)(v33 - 24); // 0x543c0d
        v34 = v37;
        v35 = v37 + a1;
        v36 = v33;
    }
    // 0x543c15
    v10 = v34;
    v7 = a1;
    v6 = v35;
    char v38; // 0x543a60
    int64_t v39; // 0x543d89
    if (v17 != 32) {
        goto lab_0x543b5a;
    } else {
        // 0x543c20
        v10 = v34;
        v7 = a1;
        v6 = v35;
        if (*(int32_t *)(v35 + 32) != 0) {
            goto lab_0x543b5a;
        } else {
            char * v40 = (char *)(v35 + 225); // 0x543c32
            if (*v40 == 0) {
                int64_t v41 = *(int64_t *)(v35 + 240); // 0x543d60
                if (v41 == 0) {
                    int64_t result2 = function_5423f0(); // 0x543dc1
                    int64_t v42 = v34 - 1; // 0x543dc6
                    int64_t v43 = a1; // 0x543dcd
                    if (v42 == 0) {
                        // 0x543dcf
                        function_1fd40(result2);
                        v43 = *(int64_t *)(result2 - 24) + a1;
                        int32_t * v44 = (int32_t *)(v43 + 32); // 0x543ddb
                        *v44 = *v44 | 1;
                        if (*(char *)(v43 + 28) % 2 == 0) {
                            // 0x543b81
                            return result2;
                        }
                        // 0x543de5
                        function_20a50();
                    }
                    // 0x543dea
                    function_1fd40(result2);
                    int64_t result3 = *(int64_t *)v43; // 0x543def
                    int64_t v45 = *(int64_t *)(result3 - 24) + v43; // 0x543df6
                    int32_t * v46 = (int32_t *)(v45 + 32); // 0x543df9
                    *v46 = *v46 | 1;
                    if (*(char *)(v45 + 28) % 2 != 0) {
                        // 0x543b81
                        return result3;
                    }
                    // 0x543e03
                    function_20540();
                    v3 = v42;
                    v4 = v43;
                    goto lab_0x543b62;
                } else {
                    // 0x543d6c
                    int64_t v47; // 0x543a60
                    int64_t v48; // 0x543a60
                    if (*(char *)(v41 + 56) == 0) {
                        // 0x543d92
                        function_54d560(v41);
                        int64_t v49 = *(int64_t *)(*(int64_t *)v41 + 48); // 0x543d9d
                        v48 = v41;
                        v47 = v49 == g37 ? 32 : v49 & 0xffffffff;
                    } else {
                        // 0x543d73
                        v48 = v36;
                        v47 = (int64_t)*(char *)(v41 + 89);
                    }
                    // 0x543d78
                    v38 = v47;
                    *(char *)(v35 + 224) = v38;
                    *v40 = 1;
                    v39 = *(int64_t *)(v48 - 24);
                    goto lab_0x543c47;
                }
            } else {
                // 0x543c3f
                v38 = *(char *)(v35 + 224);
                v39 = v34;
                goto lab_0x543c47;
            }
        }
    }
  lab_0x543bc1:
    // 0x543bc1
    *(int64_t *)(a1 + 16 + *(int64_t *)(v9 - 24)) = 0;
    v3 = v11;
    v4 = a1;
    goto lab_0x543b62;
  lab_0x543aed:;
    int64_t v50 = v15; // 0x543af1
    int64_t v51 = v16 - a3; // 0x543af1
    int64_t v52; // 0x543b11
    while (true) {
        // 0x543b11
        v52 = *(int64_t *)(a1 + 232 + v50);
        int64_t * v53 = (int64_t *)(v52 + 40); // 0x543b19
        uint64_t v54 = *v53; // 0x543b19
        if (v54 < *(int64_t *)(v52 + 48)) {
            // 0x543af8
            *(char *)v54 = v14;
            *v53 = *v53 + 1;
        } else {
            // 0x543b23
            if ((int32_t)*(int64_t *)v52 == -1) {
                // break -> 0x543b30
                break;
            }
        }
        int64_t v55 = v51 - 1; // 0x543b03
        int64_t v56 = *(int64_t *)(v52 - 24); // 0x543b07
        v50 = v56;
        v51 = v55;
        if (v55 == 0) {
            int64_t v57 = v56 + a1; // 0x543cf0
            v10 = v13;
            v7 = a1;
            v6 = v57;
            v30 = v57;
            if (*(int32_t *)(v57 + 32) != 0) {
                goto lab_0x543b5a;
            } else {
                goto lab_0x543bd8;
            }
        }
    }
    int64_t v58 = *(int64_t *)(v52 - 24) + a1; // 0x543b37
    function_4fc010(v58, *(int32_t *)(v58 + 32) | 1, v13);
    v5 = *(int64_t *)(v58 - 24) + a1;
    goto lab_0x543b4f;
  lab_0x543c47:;
    int64_t v59 = v39; // 0x543c4b
    int64_t v60 = v16 - a3; // 0x543c4b
    int64_t v61; // 0x543a60
    int64_t v62; // 0x543c69
    while (true) {
        // 0x543c69
        v61 = v59;
        v62 = *(int64_t *)(a1 + 232 + v61);
        int64_t * v63 = (int64_t *)(v62 + 40); // 0x543c71
        uint64_t v64 = *v63; // 0x543c71
        if (v64 < *(int64_t *)(v62 + 48)) {
            // 0x543c50
            *(char *)v64 = v38;
            *v63 = *v63 + 1;
        } else {
            // 0x543c7b
            if ((int32_t)*(int64_t *)v62 == -1) {
                // break -> 0x543c88
                break;
            }
        }
        int64_t v65 = v60 - 1; // 0x543c5b
        int64_t v66 = *(int64_t *)(v62 - 24); // 0x543c5f
        v59 = v66;
        v60 = v65;
        v28 = v66;
        v29 = a1;
        if (v65 == 0) {
            goto lab_0x543d50;
        }
    }
    int64_t v67 = *(int64_t *)(v62 - 24) + a1; // 0x543c8f
    function_4fc010(v67, *(int32_t *)(v67 + 32) | 1, v61);
    v11 = v61;
    v9 = v67;
    goto lab_0x543bc1;
}

// Address range: 0x543e0f - 0x543e10
int64_t function_543e0f(void) {
    // 0x543e0f
    int64_t result; // 0x543e0f
    return result;
}

// Address range: 0x5598f0 - 0x559ca5
int64_t function_5598f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10) {
    int64_t result = a2; // bp-88, 0x559905
    int64_t v1 = a4; // bp-104, 0x55990d
    int64_t v2 = a6; // bp-152, 0x559915
    __readfsqword(40);
    int64_t v3 = function_554b00(a9 + 208); // 0x55993e
    int64_t v4; // 0x5598f0
    int64_t v5; // 0x5598f0
    int64_t v6; // 0x5598f0
    int64_t v7; // 0x5598f0
    int64_t result2; // 0x5598f0
    int32_t v8; // 0x5598f0
    int32_t v9; // 0x5598f0
    int32_t v10; // 0x5598f0
    int64_t v11; // 0x5598f0
    int64_t v12; // 0x5598f0
    int64_t v13; // 0x5598f0
    int64_t v14; // 0x5598f0
    int32_t v15; // 0x559a88
    int64_t v16; // 0x559aa1
    int64_t v17; // 0x559971
    if ((char)function_524600(&result, &v1) == 0) {
        int64_t v18 = (int64_t)&result; // 0x55996d
        int64_t v19 = function_5246d0(v18); // 0x5599b6
        if (a8 != 0) {
            // 0x5599c5
            v17 = 15 - (4 * a8 + 30 & -16) + (int64_t)&v2 & -16;
            int64_t v20 = 0;
            int64_t v21 = v19 & 0xffffffff;
            int64_t v22 = 0;
            char v23 = v21; // 0x559a06
            int64_t v24 = v21; // 0x559a09
            int64_t v25; // 0x5598f0
            int64_t v26; // 0x5599e4
            int64_t v27; // 0x5599f5
            while (*(char *)*(int64_t *)(8 * v22 + a7) != v23) {
                // 0x5599d0
                v26 = v21 % 256;
                v24 = v26;
                if (v23 == (char)*(int64_t *)v3) {
                    // break -> 0x559a0b
                    break;
                }
                // 0x5599f5
                v27 = v22 + 1;
                v25 = v20;
                if (v27 == a8) {
                    // break (via goto) -> 0x559a1d
                    goto lab_0x559a1d;
                }
                v21 = v26;
                v22 = v27;
                v23 = v21;
                v24 = v21;
            }
            // 0x559a0b
            *(int32_t *)(4 * v20 + v17) = (int32_t)v22;
            int64_t v28 = v20 + 1; // 0x559a0f
            int64_t v29 = v22 + 1; // 0x559a13
            v25 = v28;
            while (v29 != a8) {
                // 0x5599ff
                v20 = v28;
                v21 = v24;
                v22 = v29;
                v23 = v21;
                v24 = v21;
                while (*(char *)*(int64_t *)(8 * v22 + a7) != v23) {
                    // 0x5599d0
                    v26 = v21 % 256;
                    v24 = v26;
                    if (v23 == (char)*(int64_t *)v3) {
                        // break -> 0x559a0b
                        break;
                    }
                    // 0x5599f5
                    v27 = v22 + 1;
                    v25 = v20;
                    if (v27 == a8) {
                        // break (via goto) -> 0x559a1d
                        goto lab_0x559a1d;
                    }
                    v21 = v26;
                    v22 = v27;
                    v23 = v21;
                    v24 = v21;
                }
                // 0x559a0b
                *(int32_t *)(4 * v20 + v17) = (int32_t)v22;
                v28 = v20 + 1;
                v29 = v22 + 1;
                v25 = v28;
            }
          lab_0x559a1d:
            // 0x559a1d
            v9 = 0;
            v5 = v25;
            if (v25 < 2) {
              lab_0x559b70:
                // 0x559b70
                if (v5 == 1) {
                    // 0x559b7a
                    function_5245c0(v18);
                    int32_t v30 = *(int32_t *)v17; // 0x559b83
                    int64_t v31 = (0x100000000000000 * (int64_t)v9 >> 56) + 1; // 0x559b8a
                    int64_t str = *(int64_t *)(8 * (int64_t)v30 + a7); // 0x559b91
                    uint64_t len = (int64_t)strlen((char *)str); // 0x559b9b
                    int64_t v32 = v31; // 0x559ba6
                    int64_t v33 = v31; // 0x559ba6
                    if (v31 < len) {
                        int64_t v34 = function_524600(&result, &v1); // 0x559bde
                        v33 = v32;
                        while ((char)v34 == 0) {
                            // 0x559bb0
                            v33 = v32;
                            if (*(char *)(v32 + str) != (char)function_5246d0(v18)) {
                                // break -> 0x559be7
                                break;
                            }
                            int64_t v35 = v32 + 1; // 0x559bc5
                            function_5245c0(v18);
                            v32 = v35;
                            if (v35 == len) {
                                goto lab_0x559bf0;
                            }
                            v34 = function_524600(&result, &v1);
                            v33 = v32;
                        }
                    }
                    // 0x559be7
                    if (v33 == len) {
                      lab_0x559bf0:
                        // 0x559bf0
                        *(int32_t *)v2 = 0x1000000 * v30 >> 24;
                        // 0x559988
                        __readfsqword(40);
                        return result;
                    }
                }
            } else {
                // 0x559a30
                v13 = a5;
                v11 = a3;
                v8 = 0;
                v7 = a4;
                v4 = v25;
                while (true) {
                  lab_0x559a30:
                    // 0x559a30
                    result2 = v7;
                    int32_t v36 = v8;
                    int64_t v37 = v11;
                    v14 = v13;
                    int64_t str2 = *(int64_t *)(8 * (int64_t)*(int32_t *)v17 + a7); // 0x559a39
                    int64_t len2 = strlen((char *)str2); // 0x559a45
                    int64_t v38 = 1; // 0x559a45
                    uint64_t v39 = len2;
                    int64_t str3 = *(int64_t *)(8 * (int64_t)*(int32_t *)(4 * v38 + v17) + a7); // 0x559a4c
                    uint64_t len3 = (int64_t)strlen((char *)str3); // 0x559a50
                    uint64_t v40 = v39 > len3 ? len3 : v39; // 0x559a58
                    v38++;
                    while (v4 > v38) {
                        // 0x559a48
                        v39 = v40;
                        str3 = *(int64_t *)(8 * (int64_t)*(int32_t *)(4 * v38 + v17) + a7);
                        len3 = (int64_t)strlen((char *)str3);
                        v40 = v39 > len3 ? len3 : v39;
                        v38++;
                    }
                    int64_t v41 = result; // 0x559a65
                    if (v41 == 0) {
                        char v42 = (char)v36 + 1; // 0x559c08
                        v12 = v37;
                        v10 = v42;
                        if (v40 <= (int64_t)v42) {
                            // break -> 0x559981
                            break;
                        }
                        goto lab_0x559c1a;
                    } else {
                        int64_t * v43 = (int64_t *)(v41 + 16); // 0x559a72
                        uint64_t v44 = *v43; // 0x559a72
                        if (v44 < *(int64_t *)(v41 + 24)) {
                            // 0x559a80
                            *v43 = v44 + 1;
                        }
                        char v45 = (char)v36 + 1; // 0x559a88
                        if (v40 <= (int64_t)v45) {
                            // break -> 0x559981
                            break;
                        }
                        // 0x559aa1
                        v15 = v45;
                        v16 = result;
                        v12 = -1;
                        v10 = v15;
                        if (v16 == 0) {
                            goto lab_0x559c1a;
                        } else {
                            uint64_t v46 = *(int64_t *)(v16 + 16); // 0x559aae
                            if (v46 >= *(int64_t *)(v16 + 24)) {
                                int64_t v47 = *(int64_t *)v16; // 0x559c80
                                v6 = v47;
                                if ((int32_t)v47 != -1) {
                                    goto lab_0x559abf;
                                } else {
                                    // 0x559c8f
                                    result = 0;
                                    v12 = -1;
                                    v10 = v15;
                                    goto lab_0x559c1a;
                                }
                            } else {
                                // 0x559abc
                                v6 = (int64_t)*(char *)v46;
                                goto lab_0x559abf;
                            }
                        }
                    }
                }
            }
        }
    }
  lab_0x559981_3:;
    int32_t * v48 = (int32_t *)a10; // 0x559985
    *v48 = *v48 | 4;
    // 0x559988
    __readfsqword(40);
    return result;
  lab_0x559b08:;
    // 0x559b08
    int64_t v49; // 0x5598f0
    int64_t v50 = v49; // 0x559b0b
    int64_t v51; // 0x5598f0
    int64_t v52 = v51; // 0x559b0b
    int64_t v53 = v49; // 0x559b0b
    int64_t v54; // 0x5598f0
    char v55; // 0x559b31
    if (v55 == (char)v54) {
        goto lab_0x559b5d;
    } else {
        goto lab_0x559b0d;
    }
  lab_0x559b5d:;
    int64_t v56 = v53;
    int64_t v57; // 0x5598f0
    int64_t v58 = v57 + 1; // 0x559b5d
    int64_t v59 = v56; // 0x559b64
    int64_t v60; // 0x5598f0
    int64_t v61 = v60; // 0x559b64
    if (v60 <= v58) {
        // break -> 0x559b66
        goto lab_0x559b66_2;
    }
    int64_t v62 = 4 * v58 + v17; // 0x5598f0
    int64_t v63 = v52; // 0x5598f0
    int64_t v64 = v56; // 0x5598f0
    int64_t v65 = v58; // 0x5598f0
    int64_t v66 = v60; // 0x5598f0
    goto lab_0x559b1e;
  lab_0x559b0d:;
    int64_t v88 = v50;
    int64_t v89 = v60 - 1; // 0x559b0d
    int64_t v90 = 4 * v57 + v17;
    *(int32_t *)v90 = *(int32_t *)(4 * v89 + v17);
    v59 = v88;
    v61 = v89;
    if (v89 <= v57) {
        // break -> 0x559b66
        goto lab_0x559b66_2;
    }
    // 0x559b0d
    v62 = v90;
    v63 = result;
    v64 = v88;
    v65 = v57;
    v66 = v89;
    goto lab_0x559b1e;
  lab_0x559b1e:;
    int64_t v67 = v63; // 0x559b22
    int64_t v68 = v64; // 0x559b22
    int64_t v69 = v62; // 0x559b22
    int64_t v70 = v65; // 0x559b22
    int64_t v71 = v66; // 0x559b22
    goto lab_0x559b26;
  lab_0x559b55:;
    // 0x559b55
    uint64_t v75; // 0x559b44
    int64_t v76 = (int64_t)*(char *)v75;
    int64_t v77 = 0x100000000 * v76 >> 32; // 0x559b58
    v50 = v77;
    int64_t v72; // 0x5598f0
    v52 = v72;
    v53 = v77;
    if (v55 != (char)v76) {
        goto lab_0x559b0d;
    } else {
        goto lab_0x559b5d;
    }
  lab_0x559c1a:
    // 0x559c1a
    if (v1 == 0) {
        // break -> 0x559981
        goto lab_0x559981_3;
    }
    int64_t v78 = 0; // 0x559c2b
    int64_t v79 = v12; // 0x559c2b
    int32_t v80 = v10; // 0x559c2b
    char v81 = 1; // 0x559c2b
    int64_t v82 = 0; // 0x559c2b
    int64_t v83 = v14; // 0x559c2b
    int64_t v84 = v12; // 0x559c2b
    int32_t v85 = v10; // 0x559c2b
    if ((int32_t)v14 != -1) {
        goto lab_0x559af5;
    } else {
        goto lab_0x559ad7;
    }
  lab_0x559af5:;
    int64_t v74 = 0x100000000000000 * (int64_t)v85 >> 56; // 0x559b2a
    v67 = v82;
    v68 = v84;
    v69 = v17;
    v70 = 0;
    v71 = v4;
    while (true) {
      lab_0x559b26:
        // 0x559b26
        v60 = v71;
        v57 = v70;
        v49 = v68;
        v72 = v67;
        int64_t v73 = *(int64_t *)(8 * (int64_t)*(int32_t *)v69 + a7); // 0x559b26
        v55 = *(char *)(v73 + v74);
        v51 = 0;
        v54 = 0xffffffff;
        if (v72 == 0) {
            goto lab_0x559b08;
        } else {
            // 0x559b3c
            v51 = v72;
            v54 = v49 & 0xffffffff;
            if ((int32_t)v49 != -1) {
                goto lab_0x559b08;
            } else {
                // 0x559b44
                v75 = *(int64_t *)(v72 + 16);
                if (v75 >= *(int64_t *)(v72 + 24)) {
                    // 0x559c40
                    if ((int32_t)*(int64_t *)v72 != -1) {
                        goto lab_0x559b55;
                    } else {
                        // 0x559c4f
                        result = 0;
                        v51 = 0;
                        v54 = 0xffffffff;
                        goto lab_0x559b08;
                    }
                } else {
                    // 0x559b52
                    goto lab_0x559b55;
                }
            }
        }
    }
  lab_0x559b66_2:
    // 0x559b66
    v13 = v83;
    v11 = v59;
    v8 = v85;
    v7 = v74;
    v4 = v61;
    v9 = v85;
    v5 = v61;
    if (v61 < 2) {
        goto lab_0x559b70;
    }
    goto lab_0x559a30;
  lab_0x559ad7:;
    uint64_t v86 = *(int64_t *)(v1 + 16); // 0x559ad7
    if (v86 >= *(int64_t *)(v1 + 24)) {
        // 0x559c99
        return result2;
    }
    // 0x559ae5
    v82 = v78;
    v83 = (int64_t)*(char *)v86;
    v84 = v79;
    v85 = v80;
    if (v81 == 0) {
        // break -> 0x559981
        goto lab_0x559981_3;
    }
    goto lab_0x559af5;
  lab_0x559abf:;
    int64_t v87 = 0x100000000 * v6 >> 32; // 0x559ac3
    v82 = v16;
    v83 = v14;
    v84 = v87;
    v85 = v15;
    if (v1 == 0) {
        goto lab_0x559af5;
    } else {
        // 0x559acb
        v78 = v16;
        v79 = v87;
        v80 = v15;
        v81 = 0;
        if ((int32_t)v14 != -1) {
            // break -> 0x559981
            goto lab_0x559981_3;
        }
        goto lab_0x559ad7;
    }
}

// Address range: 0x559cd0 - 0x55a07f
int64_t function_559cd0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, uint64_t a8, int64_t a9, int64_t a10) {
    int64_t result2 = a2; // bp-88, 0x559ce5
    int64_t v1 = a4; // bp-104, 0x559ced
    __readfsqword(40);
    int64_t v2 = function_554b00(a9 + 208); // 0x559d1e
    int64_t v3 = (int64_t)&v1; // 0x559d2a
    int64_t v4; // bp-152, 0x559cd0
    int64_t v5 = (int64_t)&v4 - (8 * a8 + 30 & -16) + 15;
    int64_t v6 = v5 & -16; // 0x559d4d
    int64_t v7 = function_524600(&result2, &v1); // 0x559d54
    int64_t v8 = v7; // 0x559d5b
    int64_t v9 = v3; // 0x559d5b
    int64_t v10 = 0; // 0x559d5b
    int64_t v11 = 0; // 0x559d5b
    int64_t v12 = 0; // 0x559d5b
    if ((char)v7 == 0) {
        int64_t v13 = (int64_t)&result2; // 0x559d49
        int64_t v14 = function_5246d0(v13); // 0x559f7b
        int64_t v15 = 2 * a8; // 0x559f87
        v8 = 0;
        v9 = v3;
        v10 = 0;
        v11 = 0;
        v12 = 0;
        if (v15 != 0) {
            int64_t v16 = 0;
            int64_t v17 = 0;
            int64_t v18 = v14 & 0xffffffff;
            int64_t v19 = *(int64_t *)(8 * v17 + a7); // 0x559fc2
            char v20 = *(char *)v19; // 0x559fc6
            char v21 = v18; // 0x559fc9
            int64_t v22 = v19; // 0x559fcc
            int64_t v23 = v18; // 0x559fcc
            int64_t v24; // 0x559cd0
            int64_t v25; // 0x559cd0
            int64_t v26; // 0x559fa0
            int64_t v27; // 0x559fae
            int64_t v28; // 0x559fb8
            while (v20 != v21) {
                // 0x559fa0
                v26 = *(int64_t *)v2;
                v27 = v18 % 256;
                v22 = v26;
                v23 = v27;
                if (v21 == (char)v26) {
                    // break -> 0x559fce
                    break;
                }
                // 0x559fb8
                v28 = v17 + 1;
                v25 = v26;
                v24 = v16;
                if (v28 == v15) {
                    // break (via goto) -> 0x559fe0
                    goto lab_0x559fe0;
                }
                v17 = v28;
                v18 = v27;
                v19 = *(int64_t *)(8 * v17 + a7);
                v20 = *(char *)v19;
                v21 = v18;
                v22 = v19;
                v23 = v18;
            }
            // 0x559fce
            *(int32_t *)(4 * v16 + v6) = (int32_t)v17;
            int64_t v29 = v16 + 1; // 0x559fd2
            int64_t v30 = v17 + 1; // 0x559fd6
            v25 = v22;
            v24 = v29;
            while (v30 != v15) {
                // 0x559fc2
                v16 = v29;
                v17 = v30;
                v18 = v23;
                v19 = *(int64_t *)(8 * v17 + a7);
                v20 = *(char *)v19;
                v21 = v18;
                v22 = v19;
                v23 = v18;
                while (v20 != v21) {
                    // 0x559fa0
                    v26 = *(int64_t *)v2;
                    v27 = v18 % 256;
                    v22 = v26;
                    v23 = v27;
                    if (v21 == (char)v26) {
                        // break -> 0x559fce
                        break;
                    }
                    // 0x559fb8
                    v28 = v17 + 1;
                    v25 = v26;
                    v24 = v16;
                    if (v28 == v15) {
                        // break (via goto) -> 0x559fe0
                        goto lab_0x559fe0;
                    }
                    v17 = v28;
                    v18 = v27;
                    v19 = *(int64_t *)(8 * v17 + a7);
                    v20 = *(char *)v19;
                    v21 = v18;
                    v22 = v19;
                    v23 = v18;
                }
                // 0x559fce
                *(int32_t *)(4 * v16 + v6) = (int32_t)v17;
                v29 = v16 + 1;
                v30 = v17 + 1;
                v25 = v22;
                v24 = v29;
            }
          lab_0x559fe0:;
            int64_t v31 = v20;
            v8 = v25;
            v9 = v31;
            v10 = 0;
            v11 = 0;
            v12 = 0;
            if (v24 != 0) {
                // 0x559fe9
                function_5245c0(v13);
                int64_t v32 = v5 - (8 * v24 + 30 & -16) & -16; // 0x55a009
                int64_t v33 = 0; // 0x55a014
                int64_t str = *(int64_t *)(8 * (int64_t)*(int32_t *)(4 * v33 + v6) + a7); // 0x55a01c
                int64_t len = strlen((char *)str); // 0x55a020
                *(int64_t *)(8 * v33 + v32) = len;
                v33++;
                v8 = len;
                v9 = v31;
                v10 = v24;
                v11 = 1;
                v12 = v32;
                while (v24 != v33) {
                    // 0x55a018
                    str = *(int64_t *)(8 * (int64_t)*(int32_t *)(4 * v33 + v6) + a7);
                    len = strlen((char *)str);
                    *(int64_t *)(8 * v33 + v32) = len;
                    v33++;
                    v8 = len;
                    v9 = v31;
                    v10 = v24;
                    v11 = 1;
                    v12 = v32;
                }
            }
        }
    }
    int64_t v34 = a5; // 0x559d6e
    int64_t v35 = a3; // 0x559d6e
    int64_t v36 = v8; // 0x559d6e
    int64_t v37 = v9; // 0x559d6e
    int64_t v38 = result2; // 0x559d6e
    int64_t v39 = v10; // 0x559d6e
    int64_t v40 = v11; // 0x559d6e
    int64_t result; // 0x559cd0
    int64_t v41; // 0x559cd0
    int64_t v42; // 0x559cd0
    int64_t v43; // 0x559cd0
    int64_t v44; // 0x559cd0
    int64_t v45; // 0x559cd0
    int64_t v46; // 0x559cd0
    int64_t v47; // 0x559cd0
    int64_t v48; // 0x559cd0
    int64_t v49; // 0x559cd0
    int64_t v50; // 0x559cd0
    int64_t v51; // 0x559cd0
    int64_t v52; // 0x559cd0
    int64_t v53; // 0x559cd0
    int64_t v54; // 0x559cd0
    while (true) {
      lab_0x559d70:
        // 0x559d70
        v44 = v40;
        v41 = v39;
        int64_t v55 = v38;
        int64_t v56 = v36;
        int64_t v57 = v35;
        v52 = v34;
        v54 = v52;
        v51 = v57;
        v48 = v56;
        v43 = v41;
        v46 = v44;
        if (v55 == 0) {
            goto lab_0x559f0c;
        } else {
            if ((int32_t)v57 == -1) {
                uint64_t v58 = *(int64_t *)(v55 + 16); // 0x559de8
                int64_t v59; // 0x559cd0
                if (v58 >= *(int64_t *)(v55 + 24)) {
                    // 0x55a070
                    v59 = v37;
                    result = v37;
                    if ((int32_t)v37 == -1) {
                        // 0x55a07f
                        return result;
                    }
                } else {
                    // 0x559df6
                    v59 = (int64_t)*(char *)v58;
                }
                int64_t v60 = 0x100000000 * v59 >> 32; // 0x559dfd
                v49 = v60;
                v53 = v52;
                v50 = v60;
                v47 = v59;
                v42 = v41;
                v45 = v44;
                if (v1 != 0) {
                    goto lab_0x559d8c;
                } else {
                    goto lab_0x559e08;
                }
            } else {
                // 0x559d7f
                v49 = v57;
                result = v56;
                if (v1 == 0) {
                    // 0x55a07f
                    return result;
                }
                goto lab_0x559d8c;
            }
        }
    }
  lab_0x559d96_4:;
    // 0x559d96
    int64_t v61; // 0x559cd0
    int64_t v62; // 0x559cd0
    if (v61 != 1) {
        if (v61 != 2) {
            goto lab_0x559db0;
        } else {
            // 0x559f34
            if (*(int64_t *)v12 == v62) {
                goto lab_0x559f43;
            } else {
                // 0x559f39
                if (*(int64_t *)(v12 || 8) != v62) {
                    goto lab_0x559db0;
                } else {
                    goto lab_0x559f43;
                }
            }
        }
    } else {
        // 0x559da0
        if (*(int64_t *)v12 == v62) {
            goto lab_0x559f43;
        } else {
            goto lab_0x559db0;
        }
    }
  lab_0x559db0:;
    int32_t * v63 = (int32_t *)a10; // 0x559db4
    *v63 = *v63 | 4;
    // 0x559db7
    __readfsqword(40);
    return result2;
  lab_0x559f0c:
    // 0x559f0c
    v61 = v43;
    v62 = v46;
    if (v1 == 0) {
        // break -> 0x559d96
        goto lab_0x559d96_4;
    }
    // 0x559f19
    v53 = v54;
    v50 = v51;
    v47 = v48;
    v42 = v43;
    v45 = v46;
    int64_t v64 = v54; // 0x559f22
    int64_t v65 = v51; // 0x559f22
    char v66 = 1; // 0x559f22
    int64_t v67 = v43; // 0x559f22
    int64_t v68 = v46; // 0x559f22
    if ((int32_t)v54 != -1) {
        goto lab_0x559e08;
    } else {
        goto lab_0x559ec2;
    }
  lab_0x559e08:
    // 0x559e08
    result = v47;
    if (result2 == 0) {
        // 0x55a07f
        return result;
    }
    int64_t v69 = v45;
    v34 = v53;
    int64_t v70 = v50; // 0x559e1b
    int64_t v71 = v50 & 0xffffffff; // 0x559e1b
    if ((int32_t)v50 == -1) {
        uint64_t v72 = *(int64_t *)(result2 + 16); // 0x559ee8
        result = v72;
        if (v72 >= *(int64_t *)(result2 + 24)) {
            // 0x55a07f
            return result;
        }
        int64_t v73 = (int64_t)*(char *)v72; // 0x559ef6
        v70 = v73;
        v71 = v73;
    }
    if (v42 == 0) {
        goto lab_0x559db0;
    }
    int64_t v74 = v71;
    int64_t v75 = v70;
    char v76 = v74;
    int64_t v77 = 0; // 0x559cd0
    int64_t v78 = 0; // 0x559cd0
    int64_t v79 = v42; // 0x559cd0
    int64_t v80; // 0x559cd0
    int64_t v81; // 0x559cd0
    int64_t v82; // 0x559e3d
    while (true) {
        int64_t v83 = v78;
        uint64_t v84 = v77;
        v82 = 8 * v84 + v12;
        int64_t * v85 = (int64_t *)v82; // 0x559e41
        int32_t * v86 = (int32_t *)(4 * v84 + v6);
        int64_t v87 = *v85; // 0x559e65
        int64_t v88 = v79;
        int64_t v89; // 0x559cd0
        while (v87 > v69) {
            int64_t v90 = *(int64_t *)(8 * (int64_t)*v86 + a7); // 0x559e4d
            v89 = v83;
            if (*(char *)(v90 + v69) == v76) {
                goto lab_0x559e38;
            }
            int64_t v91 = v88 - 1; // 0x559e57
            *v86 = *(int32_t *)(4 * v91 + v6);
            v87 = *(int64_t *)(8 * v91 + v12);
            *v85 = v87;
            v80 = v83;
            v81 = v91;
            if (v84 >= v91) {
                // break (via goto) -> 0x559e6e
                goto lab_0x559e6e;
            }
            v88 = v91;
        }
        // 0x559e30
        v89 = v83 + 1;
      lab_0x559e38:;
        int64_t v92 = v84 + 1;
        v77 = v92;
        v78 = v89;
        v79 = v88;
        v80 = v89;
        v81 = v88;
        if (v92 >= v88) {
            // break -> 0x559e6e
            break;
        }
    }
  lab_0x559e6e:
    // 0x559e6e
    v39 = v81;
    v61 = v80;
    v62 = v69;
    if (v80 == v39) {
        // break -> 0x559d96
        goto lab_0x559d96_4;
    }
    // 0x559e77
    v38 = result2;
    if (v38 == 0) {
        // 0x559f08
        v54 = v34;
        v51 = v75;
        v48 = v74;
        v43 = v39;
        v46 = v69 + 1;
        goto lab_0x559f0c;
    } else {
        int64_t * v93 = (int64_t *)(v38 + 16); // 0x559e84
        uint64_t v94 = *v93; // 0x559e84
        v36 = v82;
        if (v94 < *(int64_t *)(v38 + 24)) {
            // 0x559e92
            v36 = v94 + 1;
            *v93 = v36;
        }
        // 0x559e9a
        v35 = -1;
        v37 = v82;
        v40 = v69 + 1;
        goto lab_0x559d70;
    }
  lab_0x559ec2:;
    uint64_t v95 = *(int64_t *)(v1 + 16); // 0x559ec2
    int64_t v96; // 0x559cd0
    int64_t v97; // 0x559cd0
    int64_t v98; // 0x559cd0
    if (v95 >= *(int64_t *)(v1 + 24)) {
        int64_t v99 = *(int64_t *)v1; // 0x55a041
        v96 = v99;
        if ((int32_t)v99 != -1) {
            goto lab_0x559ed3;
        } else {
            // 0x55a057
            v1 = 0;
            v97 = v64;
            v98 = 1;
            goto lab_0x559ed8;
        }
    } else {
        // 0x559ed0
        v96 = (int64_t)*(char *)v95;
        goto lab_0x559ed3;
    }
  lab_0x559d8c:
    // 0x559d8c
    v61 = v41;
    v62 = v44;
    v64 = v52;
    v65 = v49;
    v66 = 0;
    v67 = v41;
    v68 = v44;
    if ((int32_t)v52 != -1) {
        // break -> 0x559d96
        goto lab_0x559d96_4;
    }
    goto lab_0x559ec2;
  lab_0x559ed3:
    // 0x559ed3
    v97 = 0x100000000 * v96 >> 32;
    v98 = 0;
    goto lab_0x559ed8;
  lab_0x559ed8:
    // 0x559ed8
    v53 = v97;
    v50 = v65;
    v47 = v98;
    v42 = v67;
    v45 = v68;
    if (v66 == (char)v98) {
        // break -> 0x559d96
        goto lab_0x559d96_4;
    }
    goto lab_0x559e08;
  lab_0x559f43:;
    int32_t v100 = *(int32_t *)v6; // 0x559f43
    *(int32_t *)a6 = v100 - ((int64_t)v100 >= a8 ? (int32_t)a8 : 0);
    // 0x559db7
    __readfsqword(40);
    return result2;
}

// Address range: 0x5770c0 - 0x57744d
int64_t function_5770c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = __readfsqword(40); // 0x5770d4
    int32_t v2 = a1; // 0x5770ef
    *(int32_t *)(a2 + 36) = v2;
    *(int32_t *)(a2 + 40) = v2;
    int64_t * v3 = (int64_t *)(a2 + 16); // 0x577109
    *v3 = 0;
    *(int32_t *)(a2 + 96) = v2;
    int64_t * v4 = (int64_t *)(a2 + 48); // 0x577117
    *v4 = 0;
    int64_t * v5 = (int64_t *)(a2 + 64); // 0x57711f
    *v5 = 0;
    int64_t * v6 = (int64_t *)(a2 + 80); // 0x57712a
    *v6 = 0;
    *(char *)(a2 + 152) = 1;
    int64_t result; // bp-72, 0x5770c0
    int64_t v7 = *(int64_t *)(result - 24); // 0x577145
    int64_t v8 = function_4eec00(v7 + 1, a1); // 0x57714d
    function_547670(&result, v8, v7, 0);
    *(char *)(v8 + v7) = 0;
    *v3 = v8;
    *(int64_t *)(a2 + 24) = v7;
    int64_t v9 = result - 24; // 0x577177
    int64_t v10; // bp-73, 0x5770c0
    if (v9 != (int64_t)g33) {
        int32_t * v11 = (int32_t *)(result - 8);
        int32_t v12 = *v11;
        *v11 = v12 - 1;
        if (v12 >= 0 != v12 != 0) {
            // 0x577348
            function_547e30(v9, &v10, v12);
        }
    }
    int64_t v13 = *(int64_t *)(result - 24); // 0x57719a
    uint64_t v14 = v13 + 1; // 0x5771a8
    if (v14 >= 0x1fffffffffffffff) {
        // 0x57745a
        return 0x1ffffffffffffffe;
    }
    int64_t v15 = 4 * v14; // 0x5771b5
    int64_t v16 = function_4eec00(v15, a1); // 0x5771c0
    function_54ff00(&result, v16, v13, 0);
    *(int32_t *)(v15 - 4 + v16) = 0;
    *v4 = v16;
    *(int64_t *)(a2 + 56) = v13;
    int64_t v17 = result - 24; // 0x5771ee
    if (v17 != *(int64_t *)0x848c20) {
        int32_t * v18 = (int32_t *)(result - 8);
        int32_t v19 = *v18;
        *v18 = v19 - 1;
        if (v19 >= 0 != v19 != 0) {
            // 0x577380
            function_5509d0(v17, &v10, v19);
        }
    }
    int64_t v20 = *(int64_t *)(result - 24); // 0x577211
    uint64_t v21 = v20 + 1; // 0x57721f
    if (v21 >= 0x1fffffffffffffff) {
        // 0x57745a
        return 0x1ffffffffffffffe;
    }
    int64_t v22 = 4 * v21; // 0x57722c
    int64_t v23 = function_4eec00(v22, a1); // 0x577233
    function_54ff00(&result, v23, v20, 0);
    *(int32_t *)(v22 - 4 + v23) = 0;
    *v5 = v23;
    *(int64_t *)(a2 + 72) = v20;
    int64_t v24 = result - 24; // 0x577261
    if (v24 != g35) {
        int32_t * v25 = (int32_t *)(result - 8);
        int32_t v26 = *v25;
        *v25 = v26 - 1;
        if (v26 >= 0 != v26 != 0) {
            // 0x5773dc
            function_5509d0(v24, &v10, v26);
        }
    }
    int64_t v27 = *(int64_t *)(result - 24); // 0x577284
    uint64_t v28 = v27 + 1; // 0x577292
    if (v28 >= 0x1fffffffffffffff) {
        // 0x57742e
        function_208a0((int64_t)&result, a1);
        return result;
    }
    int64_t v29 = 4 * v28; // 0x57729f
    int64_t v30 = function_4eec00(v29, a1); // 0x5772a6
    function_54ff00(&result, v30, v27, 0);
    *(int32_t *)(v29 - 4 + v30) = 0;
    *v6 = v30;
    *(int64_t *)(a2 + 88) = v27;
    int64_t v31 = result - 24; // 0x5772d4
    if (v31 == g35) {
        // 0x5772e5
        *(int32_t *)(a2 + 100) = (int32_t)v31;
        *(int32_t *)(a2 + 104) = v2;
        return __readfsqword(40) ^ v1;
    }
    int32_t * v32 = (int32_t *)(result - 8);
    int32_t v33 = *v32;
    *v32 = v33 - 1;
    if (v33 >= 0 != v33 != 0) {
        // 0x5773b0
        function_5509d0(v31, &v10, v33);
    }
    // 0x5772e5
    *(int32_t *)(a2 + 100) = (int32_t)v31;
    *(int32_t *)(a2 + 104) = v2;
    return __readfsqword(40) ^ v1;
}

// Address range: 0x577490 - 0x57781d
int64_t function_577490(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = __readfsqword(40); // 0x5774a4
    int32_t v2 = a1; // 0x5774bf
    *(int32_t *)(a2 + 36) = v2;
    *(int32_t *)(a2 + 40) = v2;
    int64_t * v3 = (int64_t *)(a2 + 16); // 0x5774d9
    *v3 = 0;
    *(int32_t *)(a2 + 96) = v2;
    int64_t * v4 = (int64_t *)(a2 + 48); // 0x5774e7
    *v4 = 0;
    int64_t * v5 = (int64_t *)(a2 + 64); // 0x5774ef
    *v5 = 0;
    int64_t * v6 = (int64_t *)(a2 + 80); // 0x5774fa
    *v6 = 0;
    *(char *)(a2 + 152) = 1;
    int64_t result; // bp-72, 0x577490
    int64_t v7 = *(int64_t *)(result - 24); // 0x577515
    int64_t v8 = function_4eec00(v7 + 1, a1); // 0x57751d
    function_547670(&result, v8, v7, 0);
    *(char *)(v8 + v7) = 0;
    *v3 = v8;
    *(int64_t *)(a2 + 24) = v7;
    int64_t v9 = result - 24; // 0x577547
    int64_t v10; // bp-73, 0x577490
    if (v9 != (int64_t)g33) {
        int32_t * v11 = (int32_t *)(result - 8);
        int32_t v12 = *v11;
        *v11 = v12 - 1;
        if (v12 >= 0 != v12 != 0) {
            // 0x577718
            function_547e30(v9, &v10, v12);
        }
    }
    int64_t v13 = *(int64_t *)(result - 24); // 0x57756a
    uint64_t v14 = v13 + 1; // 0x577578
    if (v14 >= 0x1fffffffffffffff) {
        // 0x57782a
        return 0x1ffffffffffffffe;
    }
    int64_t v15 = 4 * v14; // 0x577585
    int64_t v16 = function_4eec00(v15, a1); // 0x577590
    function_54ff00(&result, v16, v13, 0);
    *(int32_t *)(v15 - 4 + v16) = 0;
    *v4 = v16;
    *(int64_t *)(a2 + 56) = v13;
    int64_t v17 = result - 24; // 0x5775be
    if (v17 != g35) {
        int32_t * v18 = (int32_t *)(result - 8);
        int32_t v19 = *v18;
        *v18 = v19 - 1;
        if (v19 >= 0 != v19 != 0) {
            // 0x577750
            function_5509d0(v17, &v10, v19);
        }
    }
    int64_t v20 = *(int64_t *)(result - 24); // 0x5775e1
    uint64_t v21 = v20 + 1; // 0x5775ef
    if (v21 >= 0x1fffffffffffffff) {
        // 0x57782a
        return 0x1ffffffffffffffe;
    }
    int64_t v22 = 4 * v21; // 0x5775fc
    int64_t v23 = function_4eec00(v22, a1); // 0x577603
    function_54ff00(&result, v23, v20, 0);
    *(int32_t *)(v22 - 4 + v23) = 0;
    *v5 = v23;
    *(int64_t *)(a2 + 72) = v20;
    int64_t v24 = result - 24; // 0x577631
    if (v24 != g35) {
        int32_t * v25 = (int32_t *)(result - 8);
        int32_t v26 = *v25;
        *v25 = v26 - 1;
        if (v26 >= 0 != v26 != 0) {
            // 0x5777ac
            function_5509d0(v24, &v10, v26);
        }
    }
    int64_t v27 = *(int64_t *)(result - 24); // 0x577654
    uint64_t v28 = v27 + 1; // 0x577662
    if (v28 >= 0x1fffffffffffffff) {
        // 0x5777fe
        function_208a0((int64_t)&result, a1);
        return result;
    }
    int64_t v29 = 4 * v28; // 0x57766f
    int64_t v30 = function_4eec00(v29, a1); // 0x577676
    function_54ff00(&result, v30, v27, 0);
    *(int32_t *)(v29 - 4 + v30) = 0;
    *v6 = v30;
    *(int64_t *)(a2 + 88) = v27;
    int64_t v31 = result - 24; // 0x5776a4
    if (v31 == g35) {
        // 0x5776b5
        *(int32_t *)(a2 + 100) = (int32_t)v31;
        *(int32_t *)(a2 + 104) = v2;
        return __readfsqword(40) ^ v1;
    }
    int32_t * v32 = (int32_t *)(result - 8);
    int32_t v33 = *v32;
    *v32 = v33 - 1;
    if (v33 >= 0 != v33 != 0) {
        // 0x577780
        function_5509d0(v31, &v10, v33);
    }
    // 0x5776b5
    *(int32_t *)(a2 + 100) = (int32_t)v31;
    *(int32_t *)(a2 + 104) = v2;
    return __readfsqword(40) ^ v1;
}
