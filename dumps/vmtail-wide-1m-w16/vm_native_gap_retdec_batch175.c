/*
 * Targeted RetDec C for native executable gap queue batch 175.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x4aaf50-0x4ab285 rank=137 name=fcn.004aaf50 kind=r2_discovered bytes=821 uncovered=821
 *   0x4ad930-0x4adc61 rank=138 name=fcn.004ad930 kind=r2_discovered bytes=817 uncovered=817
 *   0x221c0-0x226f2 rank=139 name=fcn.000221c0 kind=r2_discovered bytes=1330 uncovered=816
 *   0x4aa830-0x4aab60 rank=140 name=fcn.004aa830 kind=r2_discovered bytes=816 uncovered=816
 *   0x545f40-0x54626c rank=141 name=fcn.00545f40 kind=r2_discovered bytes=812 uncovered=812
 *   0x51d34-0x52057 rank=142 name=fcn.00051d34 kind=r2_discovered bytes=803 uncovered=803
 *   0x415ae-0x418c6 rank=143 name=fcn.000415ae kind=r2_discovered bytes=792 uncovered=792
 *   0x523750-0x523a66 rank=144 name=method.std::__cxx11::time_get_char__std::istreambuf_iterator_char__std::char_traits_char_____.virtual_48 kind=native_discovered bytes=790 uncovered=790
 *   0x55a290-0x55a5a6 rank=145 name=method.std::time_get_char__std::istreambuf_iterator_char__std::char_traits_char_____.virtual_48 kind=native_discovered bytes=790 uncovered=790
 *   0x52c050-0x52c360 rank=146 name=fcn.0052c050 kind=r2_discovered bytes=784 uncovered=784
 *   0x3f89f-0x3fba8 rank=147 name=fcn.0003f89f kind=r2_discovered bytes=777 uncovered=777
 *   0x50f6e0-0x50fad7 rank=148 name=method.std::num_put_wchar_t__std::ostreambuf_iterator_wchar_t__std::char_traits_wchar_t_____.virtual_64 kind=native_discovered bytes=1015 uncovered=776
 *   0x41077-0x413ab rank=149 name=fcn.00041077 kind=r2_discovered bytes=820 uncovered=771
 *   0x4452a-0x4482d rank=150 name=fcn.0004452a kind=r2_discovered bytes=771 uncovered=771
 *   0x581fa0-0x5822a2 rank=151 name=fcn.00581fa0 kind=r2_discovered bytes=770 uncovered=770
 *   0x510270-0x510571 rank=152 name=method.std::time_get_wchar_t__std::istreambuf_iterator_wchar_t__std::char_traits_wchar_t_____.virtual_48 kind=native_discovered bytes=769 uncovered=769
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
extern int g67;
extern int g68;
extern int g70;
extern int g71;
extern int g72;
extern int g73;
extern int g74;
extern int g75;
extern int g76;
extern int g77;
extern int g78;
extern int g79;
extern int g80;
extern int g81;
extern int g82;
extern int g83;
extern int g84;
extern int g85;
extern int g86;
extern int g87;
extern int g88;
extern int g89;
extern int g90;
extern int g91;
extern int g92;
extern int g93;
extern int g94;
extern int g95;
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

int64_t function_221c0(int64_t a1, int64_t a2);
int64_t function_2247e(int64_t a1);
int64_t function_225f6(int64_t a1);
int64_t function_2260e(int64_t a1, int64_t a2);
int64_t function_2263e(int64_t a1, int64_t a2);
int64_t function_226ca(int64_t a1);
int64_t function_24e6a();
int64_t function_24f44();
int64_t function_2508e();
int64_t function_251d6();
int64_t function_254fe();
int64_t function_2556e();
int64_t function_255a8();
int64_t function_25856();
int64_t function_25ff8();
int64_t function_2601b();
int64_t function_2603e();
int64_t function_288fa();
int64_t function_3ddf8();
int64_t function_3dffc();
int64_t function_3e19c();
int64_t function_3f89f(int64_t a1, int64_t a2);
int64_t function_40abf();
int64_t function_40adf();
int64_t function_41077(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int32_t a7);
int64_t function_415ae(int64_t a1, int64_t str3, int64_t str, int64_t a4);
int64_t function_4425d();
int64_t function_4452a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4482e();
int64_t function_4a95d0();
int64_t function_4a9790();
int64_t function_4a9850();
int64_t function_4aa470();
int64_t function_4aa650();
int64_t function_4aa830(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint32_t a5, uint32_t a6, int64_t a7, int64_t a8, int64_t a9);
int64_t function_4aab80();
int64_t function_4aaf50(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t str, int64_t a6, int64_t a7, int64_t a8);
int64_t function_4ad720();
int64_t function_4ad750();
int64_t function_4ad930(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4c14d0();
int64_t function_4c18b0();
int64_t function_4c1d00();
int64_t function_4c4730();
int64_t function_4c4920();
int64_t function_4eeb30();
int64_t function_4eeb40();
int64_t function_4eeb50();
int64_t function_4eec00();
int64_t function_4efd30();
int64_t function_4fca70();
int64_t function_50ab00();
int64_t function_50bae();
int64_t function_50c440();
int64_t function_50c4e();
int64_t function_50d7a0();
int64_t function_50e9e();
int64_t function_50f2e0();
int64_t function_50f6e0(void);
int64_t function_50f6f0(int64_t * a1, int64_t * a2);
int64_t function_50f7d0(int64_t a1);
int64_t function_50f830(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10);
int64_t function_50fc20();
int64_t function_510270(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_517e6();
int64_t function_51c60();
int64_t function_51d34(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_522e70();
int64_t function_5236c();
int64_t function_523750(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_52440();
int64_t function_52450();
int64_t function_52b400();
int64_t function_52c050(uint64_t result, int32_t a2, uint64_t a3, uint64_t a4, uint64_t a5);
int64_t function_5346c();
int64_t function_5423b0();
int64_t function_5423f0();
int64_t function_542590();
int64_t function_545920();
int64_t function_5459a0();
int64_t function_545f40(int64_t result, int64_t a2, int64_t a3);
int64_t function_554b00();
int64_t function_556610();
int64_t function_559cd0();
int64_t function_55a290(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_581610();
int64_t function_581fa0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_5822c0();
int64_t function_621c2();
int64_t function_63d20();
int64_t function_63d4c();
int64_t function_71c60();
int64_t function_72496();
int64_t function_7259e();
int64_t function_7260a();
int64_t function_7293a();
int64_t function_72994();
int64_t function_729b6();
int64_t function_729ce();
int64_t function_72b18();

// Address range: 0x221c0 - 0x2247e
int64_t function_221c0(int64_t a1, int64_t a2) {
    // 0x221c0
    *(int32_t *)(a1 + 12) = 0;
    *(int64_t *)a1 = (int64_t)&g72;
    function_63d20(a1 + 24);
    int64_t v1 = a1 + (int64_t)&g90; // 0x221e4
    function_63d20(v1);
    *(int64_t *)(a1 + (int64_t)&g3) = 0;
    *(int64_t *)(a1 + (int64_t)&g5) = 0;
    *(int64_t *)(a1 + (int64_t)&g6) = 0;
    *(int64_t *)(a1 + (int64_t)&g7) = 0;
    *(int64_t *)(a1 + (int64_t)&g8) = 0;
    *(int64_t *)(a1 + (int64_t)&g9) = 0;
    *(int64_t *)(a1 + (int64_t)&g11) = 0;
    *(int64_t *)v1 = (int64_t)&g73;
    *(int64_t *)(a1 + (int64_t)&g12) = 0;
    *(int64_t *)(a1 + (int64_t)&g13) = 0;
    *(int64_t *)(a1 + (int64_t)&g14) = 0;
    function_7293a(a1 + (int64_t)&g15);
    *(int64_t *)(a1 + (int64_t)&g16) = (int64_t)&g89;
    function_7293a(a1 + (int64_t)&g18);
    *(int64_t *)(a1 + (int64_t)&g19) = (int64_t)&g89;
    *(int64_t *)(a1 + (int64_t)&g20) = 0;
    *(int64_t *)(a1 + (int64_t)&g21) = 0;
    *(int64_t *)(a1 + (int64_t)&g22) = 0;
    function_621c2(a1 + (int64_t)&g25, 0, &g50);
    function_7293a(a1 + (int64_t)&g26);
    function_7293a(a1 + (int64_t)&g27);
    *(int64_t *)(a1 + (int64_t)&g28) = 0;
    *(int64_t *)(a1 + (int64_t)&g29) = 0;
    *(int64_t *)(a1 + (int64_t)&g30) = 0;
    function_71c60(a1 + (int64_t)&g31);
    function_7293a(a1 + (int64_t)&g32);
    int64_t * v2 = (int64_t *)(a1 + (int64_t)&g33); // 0x22326
    *v2 = 0;
    int64_t * v3 = (int64_t *)(a1 + (int64_t)&g35); // 0x22331
    *v3 = 0;
    int64_t * v4 = (int64_t *)(a1 + (int64_t)&g36); // 0x22341
    *v4 = 0;
    int64_t * v5 = (int64_t *)(a1 + (int64_t)&g37); // 0x2234c
    *v5 = 0;
    int64_t * v6 = (int64_t *)(a1 + (int64_t)&g38); // 0x22357
    *v6 = 0;
    int64_t * v7 = (int64_t *)(a1 + (int64_t)&g39); // 0x22362
    *v7 = 0;
    int64_t * v8 = (int64_t *)(a1 + (int64_t)&g40); // 0x2236d
    *v8 = 0;
    int64_t * v9 = (int64_t *)(a1 + (int64_t)&g41); // 0x22378
    *v9 = 0;
    int64_t * v10 = (int64_t *)(a1 + (int64_t)&g42); // 0x22383
    *v10 = 0;
    int64_t * v11 = (int64_t *)(a1 + (int64_t)&g34); // 0x2238e
    *v11 = 8;
    int64_t v12 = function_4efd30(64); // 0x22399
    *v2 = v12;
    int64_t v13 = (4 * *v11 - 4 & -8) + v12; // 0x223bd
    int64_t v14 = function_4efd30(504); // 0x223c0
    int64_t v15 = v14 + 504; // 0x223c5
    *(int64_t *)v13 = v14;
    *v6 = v13;
    *v4 = v14;
    *v5 = v15;
    *v10 = v13;
    *v8 = v14;
    *v9 = v15;
    *v3 = v14;
    *v7 = v14;
    function_7293a(a1 + (int64_t)&g43);
    int64_t v16 = a1 + (int64_t)&g44; // 0x22414
    *(int64_t *)(a1 + (int64_t)&g17) = a2;
    *(int32_t *)v16 = 0;
    *(int64_t *)(a1 + (int64_t)&g45) = 0;
    *(int64_t *)(a1 + (int64_t)&g46) = v16;
    *(int64_t *)(a1 + (int64_t)&g47) = v16;
    *(int64_t *)(a1 + (int64_t)&g48) = 0;
    function_24e6a(a1 + 8, 0);
    *(int32_t *)(a1 + (int64_t)&g24) = 1;
    *(int32_t *)(a1 + (int64_t)&g23) = (int32_t)&g50;
    __asm_mfence(a1, 0);
    return function_226ca(a1);
}

// Address range: 0x2247e - 0x225f5
int64_t function_2247e(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + (int64_t)L"L\"" + 16); // 0x2249d
    *(int64_t *)(a1 + (int64_t)L"L\"" - 0x1880) = (int64_t)&g72;
    function_255a8(a1 + (int64_t)L"L\"", v1);
    function_72994(a1 + (int64_t)&g43);
    int64_t v2 = *(int64_t *)(a1 + (int64_t)&g38); // 0x224c0
    int64_t v3 = *(int64_t *)(a1 + (int64_t)&g39); // 0x224c7
    uint64_t v4 = *(int64_t *)(a1 + (int64_t)&g42); // 0x224ce
    int64_t v5 = *(int64_t *)(a1 + (int64_t)&g35); // 0x224d5
    int64_t v6 = v2 + 8;
    int64_t v7 = v6; // 0x22500
    if (v4 > v6) {
        int64_t v8 = *(int64_t *)v7; // 0x22502
        function_25ff8(v8, v8 + 504);
        v7 += 8;
        while (v4 > v7) {
            // 0x22502
            v8 = *(int64_t *)v7;
            function_25ff8(v8, v8 + 504);
            v7 += 8;
        }
    }
    if (v2 == v4) {
        // 0x22539
        function_25ff8(v5, v3);
    } else {
        // 0x2251d
        function_25ff8(v5, *(int64_t *)(a1 + (int64_t)&g37));
        function_25ff8(*(int64_t *)(a1 + (int64_t)&g40), v3);
    }
    // 0x22544
    function_2556e(a1 + (int64_t)&g33);
    function_72994(a1 + (int64_t)&g32);
    function_7259e(a1 + (int64_t)&g31);
    function_254fe(a1 + (int64_t)&g28);
    function_72994(a1 + (int64_t)&g27);
    function_72994(a1 + (int64_t)&g26);
    function_24f44(a1 + (int64_t)&g25);
    function_254fe(a1 + (int64_t)&g20);
    function_2508e(a1 + (int64_t)&g19);
    function_72994(a1 + (int64_t)&g18);
    function_2508e(a1 + (int64_t)&g16);
    function_72994(a1 + (int64_t)&g15);
    function_2603e(a1 + (int64_t)&g90);
    return function_63d4c(a1 + 24);
}

// Address range: 0x225f6 - 0x2260d
int64_t function_225f6(int64_t a1) {
    // 0x225f6
    function_2247e(a1);
    return function_4eeb30(a1, &g49);
}

// Address range: 0x2260e - 0x2263e
int64_t function_2260e(int64_t a1, int64_t a2) {
    // 0x2260e
    function_72b18(a1 + (int64_t)&g31, 0);
    *(int32_t *)(a1 + 12) = (int32_t)a2;
    int64_t v1 = a1 + 8; // 0x2262a
    __asm_mfence(v1, 1);
    return function_24e6a(v1, 1);
}

// Address range: 0x2263e - 0x226c9
int64_t function_2263e(int64_t a1, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x22651
    function_7260a();
    function_72496(a1 + (int64_t)&g31, 0);
    int64_t v2; // bp-40, 0x2263e
    function_729b6(&v2, a1 + (int64_t)&g26);
    function_251d6(a1 + (int64_t)&g10, 0);
    *(int32_t *)(a1 + 12) = 0;
    int64_t v3 = a1 + 8; // 0x22697
    __asm_mfence(v3, 0);
    function_24e6a(v3, 0);
    function_729ce(&v2);
    int64_t result = 0; // 0x226bb
    if (v1 != __readfsqword(40)) {
        // 0x226bd
        __stack_chk_fail();
        result = (int64_t)&g95;
    }
    // 0x226c2
    return result;
}

// Address range: 0x226ca - 0x226f1
int64_t function_226ca(int64_t a1) {
    // 0x226ca
    return __readfsqword(40);
}

// Address range: 0x3f89f - 0x3fba8
int64_t function_3f89f(int64_t a1, int64_t a2) {
    // 0x3f89f
    int64_t v1; // bp-104, 0x3f89f
    int64_t v2 = (int64_t)&v1; // 0x3f8a9
    __readfsqword(40);
    int64_t v3 = 0xfffffffe; // 0x3f8c0
    int64_t v4; // 0x3f89f
    int64_t v5; // 0x3f89f
    int32_t * v6; // 0x3f920
    int64_t v7; // 0x3f8cc
    int32_t * v8; // 0x3f904
    if (a1 != 0) {
        // 0x3f8cc
        v7 = *(int64_t *)(a1 + 56);
        v3 = 0xfffffffe;
        if (v7 == 0) {
            goto lab_0x3fb84;
        } else {
            // 0x3f8d8
            v5 = (int32_t)a2 != 1 ? a2 & 0xffffffff : 2;
            v3 = 0xfffffffe;
            if ((v5 & 0xfffffffd) != 0 == (v5 != 4)) {
                goto lab_0x3fb84;
            } else {
                int32_t v9 = *(int32_t *)(v7 + (int64_t)&g59); // 0x3f8fd
                v8 = (int32_t *)(a1 + 8);
                int32_t * v10 = (int32_t *)(v7 + (int64_t)&g57); // 0x3f908
                *v10 = 0;
                v6 = (int32_t *)(v7 + (int64_t)&g91);
                v3 = 0xfffffffd;
                if (*v6 >= 0) {
                    int32_t * v11 = (int32_t *)(v7 + (int64_t)&g58); // 0x3f933
                    int32_t v12 = *v11; // 0x3f933
                    v3 = 0xfffffffe;
                    if (v5 != 4 == (v12 != 0)) {
                        goto lab_0x3fb84;
                    } else {
                        int64_t v13 = v9 >= 0 == (v9 != 0) ? 9 : 8; // 0x3f91c
                        *v11 = v12 | (int32_t)(v5 == 4);
                        if (v5 != 4) {
                            // 0x3f9ea
                            v4 = v13 | 2;
                            goto lab_0x3f9ee;
                        } else {
                            // 0x3f95c
                            v4 = v13;
                            if (*v10 == 0) {
                                goto lab_0x3f9ee;
                            } else {
                                int64_t * v14 = (int64_t *)(a1 + 24); // 0x3f974
                                int64_t v15 = *v14; // 0x3f974
                                int32_t v16 = *v8; // bp-80, 0x3f97e
                                int32_t * v17 = (int32_t *)(a1 + 32); // 0x3f983
                                int32_t v18 = *v17; // bp-72, 0x3f989
                                int64_t v19 = function_3e19c(v7, a1, (int64_t *)&v16, (int32_t)v15, v15, (int64_t *)&v18); // 0x3f995
                                int32_t v20 = v19; // 0x3f99f
                                *v6 = v20;
                                *v8 = *v8 - v16;
                                int64_t v21 = v16; // 0x3f9a8
                                *(int64_t *)a1 = v7 + v21;
                                int64_t * v22 = (int64_t *)(a1 + 16); // 0x3f9ad
                                *v22 = *v22 + v21;
                                *v17 = *v17 - v18;
                                int64_t v23 = v18; // 0x3f9bc
                                *v14 = *v14 + v23;
                                *(int64_t *)(a1 + 96) = (int64_t)*(int32_t *)(v7 + 28);
                                int64_t * v24 = (int64_t *)(a1 + 40); // 0x3f9c6
                                *v24 = *v24 + v23;
                                v3 = 0xfffffffd;
                                if (v20 < 0) {
                                    goto lab_0x3fb84;
                                } else {
                                    if (v20 == 0) {
                                        // 0x3fb56
                                        v3 = 1;
                                        goto lab_0x3fb84;
                                    } else {
                                        // 0x3f9db
                                        *v6 = -1;
                                        v3 = 0xfffffffb;
                                        goto lab_0x3fb84;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    goto lab_0x3fb84;
                }
            }
        }
    } else {
        goto lab_0x3fb84;
    }
  lab_0x3fb84:;
    int64_t result = v3; // 0x3fb92
    if (*(int64_t *)(v2 + 40) != __readfsqword(40)) {
        // 0x3fb94
        __stack_chk_fail();
        result = (int64_t)&g95;
    }
    // 0x3fb99
    return result;
  lab_0x3f9ee:;
    int32_t * v25 = (int32_t *)(v7 + (int64_t)&g56); // 0x3f9ee
    uint32_t v26 = *v25; // 0x3f9ee
    int64_t v27 = v7 + (int64_t)&g60; // 0x3f9f4
    if (v26 != 0) {
        int32_t * v28 = (int32_t *)(a1 + 32); // 0x3fa0b
        uint32_t v29 = *v28; // 0x3fa0b
        int32_t * v30 = (int32_t *)(v7 + (int64_t)"{\t"); // 0x3fa0e
        uint32_t v31 = *v30; // 0x3fa0e
        uint32_t v32 = v29 > v26 ? v26 : v29; // 0x3fa14
        int64_t * v33 = (int64_t *)(a1 + 24); // 0x3fa18
        int64_t v34 = *v33; // 0x3fa18
        int64_t v35 = v32; // 0x3fa1f
        __asm_rep_movsb_memcpy((char *)v34, (char *)(v27 + (int64_t)v31), v35);
        *v33 = *v33 + v35;
        *v28 = *v28 - v32;
        int64_t * v36 = (int64_t *)(a1 + 40); // 0x3fa2d
        *v36 = *v36 + v35;
        int32_t v37 = *v25 - v32; // 0x3fa37
        *v25 = v37;
        *v30 = *v30 + v32 & (int32_t)&g70;
        v3 = (*v6 | v37) == 0;
    } else {
        int64_t * v38 = (int64_t *)(v2 + 24); // 0x3fa93
        int32_t * v39 = (int32_t *)(v7 + (int64_t)"{\t"); // 0x3fa98
        int64_t * v40 = (int64_t *)(v2 + 32); // 0x3faaf
        int64_t * v41 = (int64_t *)(a1 + 16);
        int32_t * v42 = (int32_t *)(a1 + 32);
        int64_t * v43 = (int64_t *)(a1 + 24);
        int64_t * v44 = (int64_t *)(a1 + 40);
        *v38 = (int64_t)*v8;
        uint32_t v45 = *v39; // 0x3fa98
        *v40 = (int64_t)((int32_t)&g71 - v45);
        *(int64_t *)(v2 - 16) = v4;
        int64_t v46 = *(int64_t *)(v2 + 8); // 0x3fab9
        int64_t v47 = function_3e19c(v7, a1, v38, (int32_t)v27, v27 + (int64_t)v45, (int64_t *)v46); // 0x3fabe
        int64_t v48 = *v38; // 0x3fac3
        int32_t v49 = v47; // 0x3fac8
        *v6 = v49;
        *v8 = *v8 - (int32_t)v48;
        int64_t v50 = v48 & 0xffffffff; // 0x3fad1
        *(int64_t *)a1 = v50 + v7;
        *v41 = *v41 + v50;
        *(int64_t *)(a1 + 96) = (int64_t)*(int32_t *)(v7 + 28);
        uint32_t v51 = (int32_t)*v40; // 0x3fae6
        *v25 = v51;
        uint32_t v52 = *v42; // 0x3faec
        int64_t v53 = *v43; // 0x3faef
        uint32_t v54 = v52 > v51 ? v51 : v52; // 0x3faf3
        uint32_t v55 = *v39; // 0x3faf9
        int64_t v56 = v54; // 0x3faff
        __asm_rep_movsb_memcpy((char *)v53, (char *)(v27 + (int64_t)v55), v56);
        *v43 = *v43 + v56;
        *v42 = *v42 - v54;
        *v44 = *v44 + v56;
        int32_t v57 = *v25 - v54; // 0x3fb1b
        *v25 = v57;
        *v39 = *v39 + v54 & (int32_t)&g70;
        v3 = 0xfffffffd;
        while (v49 >= 0) {
            // 0x3fa60
            v3 = 0xfffffffb;
            if (*v8 == 0 && v49 == 1) {
                // break -> 0x3fb84
                break;
            }
            if (v5 != 4) {
                if (v49 == 0) {
                    // 0x3fb7e
                    v3 = 0;
                    if (v57 == 0) {
                        // 0x3fb56
                        v3 = 1;
                        goto lab_0x3fb84;
                    } else {
                        goto lab_0x3fb84;
                    }
                }
                // 0x3fb61
                v3 = 0;
                if (*v8 == 0) {
                    // break -> 0x3fb84
                    break;
                }
                // 0x3fb67
                v3 = 0;
                if (v57 == 0 != *v42 != 0) {
                    // break -> 0x3fb84
                    break;
                }
            } else {
                if (v49 == 0) {
                    // 0x3fb4d
                    v3 = 0xfffffffb;
                    if (v57 != 0) {
                        goto lab_0x3fb84;
                    } else {
                        // 0x3fb56
                        v3 = 1;
                        goto lab_0x3fb84;
                    }
                }
                // 0x3fa7b
                v3 = 0xfffffffb;
                if (*v42 == 0) {
                    // break -> 0x3fb84
                    break;
                }
            }
            // 0x3fa85
            bool v58; // 0x3f89f
            int64_t v59 = (v58 ? -1 : 1) * v56 + v53; // 0x3f89f
            *v38 = (int64_t)*v8;
            v45 = *v39;
            *v40 = (int64_t)((int32_t)&g71 - v45);
            *(int64_t *)(v2 - 16) = v4;
            v46 = *(int64_t *)(v2 + 8);
            v47 = function_3e19c(v7, v59, v38, (int32_t)v27, v27 + (int64_t)v45, (int64_t *)v46);
            v48 = *v38;
            v49 = v47;
            *v6 = v49;
            *v8 = *v8 - (int32_t)v48;
            v50 = v48 & 0xffffffff;
            *(int64_t *)a1 = v50 + v7;
            *v41 = *v41 + v50;
            *(int64_t *)(a1 + 96) = (int64_t)*(int32_t *)(v7 + 28);
            v51 = (int32_t)*v40;
            *v25 = v51;
            v52 = *v42;
            v53 = *v43;
            v54 = v52 > v51 ? v51 : v52;
            v55 = *v39;
            v56 = v54;
            __asm_rep_movsb_memcpy((char *)v53, (char *)(v27 + (int64_t)v55), v56);
            *v43 = *v43 + v56;
            *v42 = *v42 - v54;
            *v44 = *v44 + v56;
            v57 = *v25 - v54;
            *v25 = v57;
            *v39 = *v39 + v54 & (int32_t)&g70;
            v3 = 0xfffffffd;
        }
    }
    goto lab_0x3fb84;
}

// Address range: 0x41077 - 0x413ab
int64_t function_41077(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int32_t a7) {
    int64_t v1 = __readfsqword(40); // 0x410a4
    int64_t * mem = calloc(1, 0x4df78); // 0x410bc
    int64_t * v2 = (int64_t *)a5; // 0x410cb
    *v2 = 0;
    int64_t v3 = 0; // 0x410da
    int64_t v4; // 0x41077
    if (mem == NULL) {
        goto lab_0x41381;
    } else {
        int64_t v5 = (int64_t)mem; // 0x410bc
        int64_t v6 = (0x100000000 * a4 >> 32) * 0x100000000 * a2; // 0x410e5
        int32_t v7; // bp-144, 0x41077
        __asm_rep_stosd_memset((char *)&v7, 0, 8);
        int32_t v8 = (v6 + 0x100000000 >> 32) * (0x100000000 * a3 >> 32); // 0x41100
        int64_t * mem2 = calloc(1, v8 < 64 == (63 - v8 & v8) < 0 ? v8 + 57 : 121); // 0x41123
        v4 = v5;
        if (mem2 == NULL) {
            goto lab_0x41218;
        } else {
            uint64_t v9 = a3 & 0xffffffff; // 0x4108c
            int64_t v10 = (int64_t)mem2; // 0x41123
            int32_t v11 = 41; // bp-148, 0x4113e
            int64_t v12 = (int64_t)&v11; // 0x41146
            int64_t v13 = 0x100000000 * (int64_t)&v7 >> 32;
            function_3ddf8(v12, 1, v13, 0);
            int32_t v14 = v11 - 1; // 0x41169
            v11 = v14;
            while (v14 != 0) {
                // 0x41155
                function_3ddf8(v12, 1, v13, 0);
                v14 = v11 - 1;
                v11 = v14;
            }
            int32_t * v15 = (int32_t)a6 < 11 ? (int32_t *)((4 * a6 & 0x3fffffffc) + (int64_t)&g67) : (int32_t *)((int64_t)&g67 + 40); // 0x41191
            function_40adf(v5, 0x3ddf8, v13, (int64_t)(*v15 | 0x1000));
            if (v9 != 0) {
                int64_t v16 = v6 >> 32;
                int64_t v17 = 0;
                function_40abf(v5, (int32_t)v12, 1, 0);
                int64_t v18 = v17; // 0x411d2
                if (a7 != 0) {
                    // 0x411d4
                    v18 = (v17 ^ 0xffffffff) + a3 & 0xffffffff;
                }
                int64_t v19 = v17 + 1 & 0xffffffff; // 0x411e4
                function_40abf(v5, (int32_t)((0x100000000 * v18 >> 32) * v16 + a1), v16, 0);
                while (v19 < v9) {
                    // 0x411b0
                    v17 = v19;
                    function_40abf(v5, (int32_t)v12, 1, 0);
                    v18 = v17;
                    if (a7 != 0) {
                        // 0x411d4
                        v18 = (v17 ^ 0xffffffff) + a3 & 0xffffffff;
                    }
                    // 0x411db
                    v19 = v17 + 1 & 0xffffffff;
                    function_40abf(v5, (int32_t)((0x100000000 * v18 >> 32) * v16 + a1), v16, 0);
                }
            }
            // 0x411f6
            if ((int32_t)function_40abf(v5, 0, 0, 4) == 1) {
                // 0x41224
                int64_t v20; // bp-97, 0x41077
                __asm_rep_stosb_memset((char *)&v20, 0, 25);
                int64_t v21 = 0xa1a0a0d474e5089; // bp-105, 0x41263
                *v2 = (int64_t)v7 - 41;
                int64_t v22; // bp-93, 0x41077
                function_3dffc(0, (int64_t)&v22, 17, &g66);
                __asm_rep_movsb_memcpy((char *)mem2, (char *)&v21, 41);
                if ((int32_t)function_3ddf8((int64_t)&g65, 16, v13, 0) != 0) {
                    int64_t v23 = function_3dffc(0, v10 + 37, a5 + 4, NULL); // 0x41346
                    int64_t v24 = v10 - 16; // 0x4135a
                    int64_t v25 = v23; // 0x4134b
                    int64_t v26 = 0;
                    int64_t v27 = v26 + 1; // 0x41362
                    *(char *)(v24 + v26 + (int64_t)v7) = (char)((int32_t)v25 / 0x1000000);
                    v25 = 256 * v25 & 0xffffff00;
                    while (v27 != 4) {
                        // 0x4134d
                        v26 = v27;
                        v27 = v26 + 1;
                        *(char *)(v24 + v26 + (int64_t)v7) = (char)((int32_t)v25 / 0x1000000);
                        v25 = 256 * v25 & 0xffffff00;
                    }
                    // 0x4136f
                    *v2 = a5 + 57;
                    free(mem);
                    v3 = v10;
                    goto lab_0x41381;
                } else {
                    // 0x41326
                    *v2 = 0;
                    // 0x4120b
                    free(mem);
                    v4 = v10;
                    goto lab_0x41218;
                }
            } else {
                // 0x4120b
                free(mem);
                v4 = v10;
                goto lab_0x41218;
            }
        }
    }
  lab_0x41381:;
    int64_t result = v3; // 0x41392
    if (v1 != __readfsqword(40)) {
        // 0x41394
        __stack_chk_fail();
        result = (int64_t)&g95;
    }
    // 0x41399
    return result;
  lab_0x41218:
    // 0x41218
    free((int64_t *)v4);
    v3 = (int32_t)&g95 ^ (int32_t)&g95;
    goto lab_0x41381;
}

// Address range: 0x415ae - 0x418c6
int64_t function_415ae(int64_t a1, int64_t str3, int64_t str, int64_t a4) {
    // 0x415ae
    if (a1 == 0) {
        // 0x418b6
        return 0xffffffff;
    }
    int64_t v1 = *(int64_t *)(a1 + 88); // 0x415ce
    if (str3 == 0 || v1 == 0 || *(int32_t *)(a1 + 20) != 1) {
        // 0x418b6
        return 0xffffffff;
    }
    // 0x415ef
    bool v2; // 0x415ae
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = -1; // 0x415fb
    int64_t v5 = str3; // 0x415ae
    int64_t v6 = 0; // 0x415fb
    while (v4 != 0) {
        int64_t v7 = v5;
        v4--;
        v5 = v7 + v3;
        v6 = v4;
        if (*(char *)v7 == 0) {
            // break -> 
            break;
        }
        v6 = 0;
    }
    uint64_t n2 = -2 - v6; // 0x41603
    int32_t v8 = a4; // 0x41606
    int64_t v9; // 0x415ae
    int64_t v10; // 0x415ae
    int64_t v11; // 0x415ae
    int64_t result; // 0x415ae
    uint64_t v12; // 0x415ae
    int64_t v13; // 0x415ae
    int64_t v14; // 0x415ae
    int64_t v15; // 0x415ae
    int64_t v16; // 0x41630
    int32_t v17; // 0x41650
    int64_t v18; // 0x41656
    int64_t v19; // 0x41665
    uint64_t v20; // 0x41676
    if (str == 0 == (v8 & (int32_t)&g61) == 0) {
        // 0x4161b
        if (*(int64_t *)(v1 + 72) != 0) {
            // 0x41627
            v16 = n2 & 0xffffffff;
            int64_t v21 = (int64_t)(*(int32_t *)(a1 + 16) - 1); // 0x415ae
            int64_t v22 = 0; // 0x416d5
            while (true) {
                // 0x41644
                v12 = v22;
                v11 = v21;
                int64_t v23; // 0x415ae
                while (true) {
                  lab_0x41644:
                    // 0x41644
                    v23 = v11;
                    v17 = (int32_t)(v23 + v12) >> 1;
                    uint32_t v24 = *(int32_t *)(4 * (int64_t)v17 + *(int64_t *)(v1 + 64)); // 0x41656
                    v18 = v24;
                    uint32_t v25 = *(int32_t *)(4 * v18 + *(int64_t *)(v1 + 32)); // 0x4165b
                    int64_t v26 = *(int64_t *)v1 + (int64_t)v25; // 0x41661
                    uint16_t v27 = *(int16_t *)(v26 + 28); // 0x41665
                    v19 = v27;
                    int64_t v28 = v26 + 46; // 0x41669
                    v20 = ((int32_t)n2 > (int32_t)v27 ? v19 : v16) + v28;
                    int64_t v29 = v28; // 0x4168c
                    v13 = 0;
                    v15 = v28;
                    v9 = 0;
                    if (v20 > v28) {
                        int64_t v30 = v29;
                        int64_t v31 = str3;
                        unsigned char v32 = *(char *)v30; // 0x4168e
                        int64_t v33 = v32; // 0x4168e
                        int64_t v34 = v32 < 91 ? v33 + 32 : v33;
                        unsigned char v35 = *(char *)v31; // 0x4169e
                        int64_t v36 = v35; // 0x4169e
                        int64_t v37 = v35 < 91 ? v36 + 32 : v36;
                        v14 = v37;
                        v10 = v34;
                        while ((char)v34 == (char)v37) {
                            int64_t v38 = v30 + 1; // 0x416b3
                            int64_t v39 = v31 + 1; // 0x4168c
                            v29 = v38;
                            v13 = v37;
                            v15 = v38;
                            v9 = v34;
                            if (v20 <= v38) {
                                goto lab_0x416bb;
                            }
                            v30 = v29;
                            v31 = v39;
                            v32 = *(char *)v30;
                            v33 = v32;
                            v34 = v32 < 91 ? v33 + 32 : v33;
                            v35 = *(char *)v31;
                            v36 = v35;
                            v37 = v35 < 91 ? v36 + 32 : v36;
                            v14 = v37;
                            v10 = v34;
                        }
                        goto lab_0x416c2;
                    } else {
                        goto lab_0x416bb;
                    }
                }
              lab_0x416d5:
                // 0x416d5
                v22 = v17 + 1;
                v21 = v23;
                result = 0xffffffff;
                if (v23 < v22) {
                    // break -> 0x418b6
                    break;
                }
            }
          lab_0x418b6_3:
            // 0x418b6
            return result;
        }
    }
    // 0x416e7
    if (n2 > (int64_t)&g94) {
        // 0x418b6
        return 0xffffffff;
    }
    int64_t v40 = -1; // 0x416fa
    int64_t v41 = str; // 0x416fa
    int64_t n = 0; // 0x416fa
    if (str != 0) {
        int64_t v42 = 0; // 0x41708
        while (v40 != 0) {
            int64_t v43 = v41;
            v40--;
            v41 = v43 + v3;
            v42 = v40;
            if (*(char *)v43 == 0) {
                // break -> 
                break;
            }
            v42 = 0;
        }
        n = -2 - v42;
        if (n > (int64_t)&g94) {
            // 0x418b6
            return 0xffffffff;
        }
    }
    uint32_t v44 = *(int32_t *)(a1 + 16); // 0x41727
    if (v44 == 0) {
        // 0x418b6
        return 0xffffffff;
    }
    int64_t v45 = 0; // 0x418ab
    int64_t v46; // 0x415ae
    uint16_t v47; // 0x41760
    int64_t v48; // 0x41760
    int64_t v49; // 0x41774
    while (true) {
      lab_0x41754:
        // 0x41754
        v46 = v45;
        int64_t v50 = *(int64_t *)(v1 + 32); // 0x41754
        int64_t v51 = *(int64_t *)v1 + (int64_t)*(int32_t *)(v50 + 4 * v46); // 0x4175c
        v47 = *(int16_t *)(v51 + 28);
        v48 = v47;
        if (n2 > v48) {
            goto lab_0x418ab;
        } else {
            // 0x41771
            v49 = v51 + 46;
            if (n == 0) {
                goto lab_0x4180c;
            } else {
                uint16_t v52 = *(int16_t *)(v51 + 32); // 0x4177e
                if (n != (int64_t)v52) {
                    goto lab_0x418ab;
                } else {
                    int64_t str2 = v49 + v48 + (int64_t)*(int16_t *)(v51 + 30); // 0x41793
                    if ((a4 & 256) == 0) {
                        uint32_t v53 = (int32_t)v52; // 0x417d0
                        if (v52 == 0) {
                            goto lab_0x4180c;
                        } else {
                            int64_t v54 = 0;
                            char v55 = *(char *)(v54 + str); // 0x417da
                            int64_t v56 = v55; // 0x417da
                            char v57 = *(char *)(v54 + str2); // 0x417ee
                            int64_t v58 = v57; // 0x417ee
                            while ((int32_t)(v55 < 91 ? v56 + 32 : v56) == (int32_t)(v57 < 91 ? v58 + 32 : v58)) {
                                int64_t v59 = v54 + 1; // 0x417ff
                                int64_t v60 = v59; // 0x417d3
                                if (v53 <= (int32_t)v59) {
                                    goto lab_0x4180c;
                                }
                                v54 = v60;
                                v55 = *(char *)(v54 + str);
                                v56 = v55;
                                v57 = *(char *)(v54 + str2);
                                v58 = v57;
                            }
                            goto lab_0x418ab;
                        }
                    } else {
                        // 0x4179a
                        if (memcmp((int64_t *)str, (int64_t *)str2, (int32_t)n) == 0) {
                            goto lab_0x4180c;
                        } else {
                            goto lab_0x418ab;
                        }
                    }
                }
            }
        }
    }
  lab_0x416bb:
    // 0x416bb
    v14 = v13;
    v10 = v9;
    int64_t v61; // 0x415ae
    if (v20 != v15) {
        goto lab_0x416c2;
    } else {
        // 0x416bd
        v61 = v19 - v16;
        goto lab_0x416cb;
    }
  lab_0x416c2:
    // 0x416c2
    v61 = v10 % 256 - v14 % 256;
    goto lab_0x416cb;
  lab_0x416cb:;
    int32_t v62 = v61; // 0x416cb
    result = v18;
    if (v62 == 0) {
        // break (via goto) -> 0x418b6
        goto lab_0x418b6_3;
    }
    if (v62 < 0) {
        // break -> 0x416d5
        goto lab_0x416d5;
    }
    int64_t v63 = v17 - 1; // 0x416de
    v11 = v63;
    result = 0xffffffff;
    if (v12 > v63) {
        // break (via goto) -> 0x418b6
        goto lab_0x418b6_3;
    }
    goto lab_0x41644;
  lab_0x4180c:;
    int64_t v64 = v48; // 0x41811
    int64_t v65 = v49; // 0x41811
    if ((v8 & (int32_t)&g50) != 0 && v47 != 0) {
        int64_t v66 = v48 + 0xffffffff & 0xffffffff;
        char v67 = *(char *)(v66 + v49); // 0x4181c
        if (v67 < 93) {
            // 0x4182c
            if ((1 << (int64_t)((v67 + 17) % 64) & 0x200000000801) != 0) {
                // break -> 0x41846
                break;
            }
        }
        int64_t v68 = v66 - 1; // 0x4183c
        int64_t v69 = v68; // 0x41844
        while ((int32_t)v68 != -1) {
            // 0x4181c
            v66 = v68;
            v67 = *(char *)(v66 + v49);
            if (v67 < 93) {
                // 0x4182c
                v69 = v66;
                if ((1 << (int64_t)((v67 + 17) % 64) & 0x200000000801) != 0) {
                    // break -> 0x41846
                    break;
                }
            }
            // 0x4183c
            v68 = v66 - 1;
            v69 = v68;
        }
        int64_t v70 = (v69 & 0xffffffff) + 1; // 0x41846
        v64 = v48 - v70 & 0xffffffff;
        v65 = (0x100000000 * v70 >> 32) + v49;
    }
    int64_t v71 = v64;
    if (v71 == n2) {
        int64_t str4 = v65;
        if ((a4 & 256) == 0) {
            int64_t v72 = 0; // 0x415ae
            if ((int32_t)v71 <= (int32_t)v72) {
                // 0x418a7
                result = v46 & 0xffffffff;
                goto lab_0x418b6_3;
            }
            char v73 = *(char *)(v72 + str3); // 0x41879
            int64_t v74 = v73; // 0x41879
            int64_t v75 = v73 < 91 ? v74 + 32 : v74;
            char v76 = *(char *)(v72 + str4); // 0x4188c
            int64_t v77 = v76; // 0x4188c
            v72++;
            while ((int32_t)v75 == (int32_t)(v76 < 91 ? v77 + 32 : v77)) {
                // 0x41874
                if ((int32_t)v71 <= (int32_t)v72) {
                    // 0x418a7
                    result = v46 & 0xffffffff;
                    goto lab_0x418b6_3;
                }
                // 0x41879
                v73 = *(char *)(v72 + str3);
                v74 = v73;
                v75 = v73 < 91 ? v74 + 32 : v74;
                v76 = *(char *)(v72 + str4);
                v77 = v76;
                v72++;
            }
        } else {
            // 0x4185e
            if (memcmp((int64_t *)str3, (int64_t *)str4, (int32_t)n2) == 0) {
                // 0x418a7
                result = v46 & 0xffffffff;
                goto lab_0x418b6_3;
            }
        }
    }
    goto lab_0x418ab;
  lab_0x418ab:
    // 0x418ab
    v45 = v46 + 1;
    if (v44 <= (int32_t)v45) {
        // break -> 0x418b6
        goto lab_0x418b6_3;
    }
    goto lab_0x41754;
}

// Address range: 0x4452a - 0x4482d
int64_t function_4452a(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4452a
    int64_t v1; // bp-168, 0x4452a
    int64_t v2 = (int64_t)&v1; // 0x44542
    __readfsqword(40);
    uint64_t v3 = function_4eec00((int64_t)&g1); // 0x44556
    function_4eec00((int64_t)&g64);
    int64_t v4 = function_4eec00((int64_t)&g4); // 0x44572
    int64_t v5 = a1 + 1; // 0x4457f
    int32_t v6 = 0; // bp-92, 0x44584
    int64_t v7 = 0; // bp-80, 0x4458c
    int32_t v8 = 0; // bp-88, 0x44595
    int64_t v9 = v5; // bp-72, 0x445a5
    int64_t v10; // 0x4452a
    if ((char)v10 == 31) {
        int64_t v11 = a1 + 2; // 0x445b6
        v9 = v11;
        if (*(char *)v5 == -99) {
            // 0x445c6
            v9 = a1 + 3;
            unsigned char v12 = *(char *)v11; // 0x445ef
            int64_t v13 = function_4425d(&v9, a2 + a1, (int32_t)(v12 % 32), &v6, &v7, &v8); // 0x4460f
            int64_t v14 = 0x100000000000000 * v13 >> 56; // bp-93, 0x44620
            function_4482e(a3, &v14);
            int64_t v15 = v2 + 84; // 0x44649
            int64_t * v16 = (int64_t *)(v2 - 16); // 0x4464e
            int64_t * v17 = (int64_t *)(v2 + 48); // 0x4464f
            int32_t * v18 = (int32_t *)(v2 + 44); // 0x44654
            int64_t * v19 = (int64_t *)(v2 + 32); // 0x44658
            int64_t * v20 = (int64_t *)(v2 + 96); // 0x44662
            int32_t * v21 = (int32_t *)(v2 + 76); // 0x44662
            int64_t * v22 = (int64_t *)(v2 + 88); // 0x44662
            int32_t * v23 = (int32_t *)(v2 + 24);
            *v16 = v15;
            int64_t v24 = function_4425d(v20, *v19, *v18, v21, v22, (int32_t *)*v17); // 0x44662
            int32_t v25 = v24; // 0x44667
            *v23 = v25;
            if (v25 != (int32_t)&g93) {
                int32_t * v26 = (int32_t *)(v2 | 4);
                int64_t v27 = v2 + 40;
                int64_t v28 = v3 + (int64_t)&g1;
                int64_t * v29 = (int64_t *)(v2 + 8);
                int64_t v30 = v3 + (int64_t)&g93;
                char * v31 = (char *)(v2 + 31);
                int64_t * v32 = (int64_t *)(a3 + 8);
                int64_t * v33 = (int64_t *)(a3 + 16);
                int64_t * v34 = (int64_t *)(v2 + 16);
                int64_t * v35 = (int64_t *)(v2 + 56);
                int32_t v36 = v25; // 0x44667
                int64_t v37 = v24; // 0x4452a
                int64_t v38 = v13 & 0xffffffff; // 0x4452a
                int64_t v39; // 0x4452a
                while (true) {
                    int64_t v40 = v38;
                    int64_t v41; // 0x4452a
                    int64_t v42; // 0x4452a
                    if (*v26 > v36) {
                        int64_t v43 = v3;
                        int64_t v44 = v37 & 0xffffffff;
                        v42 = v44;
                        v41 = v43;
                        while (v44 >= 256) {
                            int64_t v45 = v43 + 1; // 0x446dc
                            *(char *)v43 = *(char *)(v44 + v4);
                            v39 = v30;
                            if (v30 == v45) {
                                // break (via goto) -> 0x447e8
                                goto lab_0x447e8_2;
                            }
                            v43 = v45;
                            v44 = (int64_t)*(int32_t *)(*v29 + 4 * v44);
                            v42 = v44;
                            v41 = v43;
                        }
                    } else {
                        // 0x44685
                        *(char *)v3 = *(char *)v27;
                        int64_t v46 = v3 + 1;
                        int64_t v47 = v40;
                        v42 = v47;
                        v41 = v46;
                        while (v47 >= 256) {
                            int64_t v48 = v46 + 1; // 0x446aa
                            *(char *)v46 = *(char *)(v47 + v4);
                            v39 = v28;
                            if (v48 == v28) {
                                // break (via goto) -> 0x447e8
                                goto lab_0x447e8_2;
                            }
                            v46 = v48;
                            v47 = (int64_t)*(int32_t *)(*v29 + 4 * v47);
                            v42 = v47;
                            v41 = v46;
                        }
                    }
                    char v49 = v42; // 0x446f0
                    *(char *)v41 = v49;
                    *v31 = v49;
                    *(int32_t *)v27 = (int32_t)v42 % 256;
                    int64_t v50 = v41; // 0x44702
                    if (v41 >= v3) {
                        int64_t v51 = v50;
                        int64_t v52 = *v32; // 0x4470b
                        int64_t v53; // 0x4452a
                        int64_t v54; // 0x44732
                        int64_t v55; // 0x4477e
                        int64_t v56; // 0x44785
                        int64_t v57; // 0x44752
                        int64_t v58; // 0x44757
                        if (v52 == *v33) {
                            // 0x44723
                            v54 = function_25856(a3, 1, "vector::_M_realloc_insert");
                            *v34 = v54;
                            v58 = 0;
                            v57 = 0;
                            if (v54 != 0) {
                                // 0x4474a
                                *v35 = 0;
                                v57 = function_4efd30(v54);
                                v58 = *v35;
                            }
                            // 0x4475f
                            *v35 = v57;
                            *(char *)(v57 + v58) = *(char *)v51;
                            v55 = function_2601b(v58, v52, v57) + 1;
                            v56 = function_2601b(v52, *v32, v55);
                            if (v55 != 0) {
                                // 0x4479a
                                function_4eeb50(v55);
                            }
                            // 0x447a4
                            v53 = *v35;
                            *(int64_t *)a3 = v53;
                            *v32 = v56;
                            *v33 = *v34 + v53;
                        } else {
                            // 0x44715
                            *(char *)v52 = *(char *)v51;
                            *v32 = *v32 + 1;
                        }
                        int64_t v59 = v51 - 1; // 0x44708
                        while (v59 >= v3) {
                            // 0x44708
                            v51 = v59;
                            v52 = *v32;
                            if (v52 == *v33) {
                                // 0x44723
                                v54 = function_25856(a3, 1, "vector::_M_realloc_insert");
                                *v34 = v54;
                                v58 = 0;
                                v57 = 0;
                                if (v54 != 0) {
                                    // 0x4474a
                                    *v35 = 0;
                                    v57 = function_4efd30(v54);
                                    v58 = *v35;
                                }
                                // 0x4475f
                                *v35 = v57;
                                *(char *)(v57 + v58) = *(char *)v51;
                                v55 = function_2601b(v58, v52, v57) + 1;
                                v56 = function_2601b(v52, *v32, v55);
                                if (v55 != 0) {
                                    // 0x4479a
                                    function_4eeb50(v55);
                                }
                                // 0x447a4
                                v53 = *v35;
                                *(int64_t *)a3 = v53;
                                *v32 = v56;
                                *v33 = *v34 + v53;
                            } else {
                                // 0x44715
                                *(char *)v52 = *(char *)v51;
                                *v32 = *v32 + 1;
                            }
                            // 0x446ff
                            v59 = v51 - 1;
                        }
                    }
                    uint32_t v60 = *v26; // 0x447b9
                    if (v60 <= (int32_t)&g92) {
                        int64_t v61 = v60; // 0x447cd
                        *v26 = v60 + 1;
                        *(int32_t *)(*v29 + 4 * v61) = (int32_t)v40;
                        *(char *)(v4 + v61) = *v31;
                    }
                    // 0x447c3
                    *v16 = v15;
                    int64_t v62 = function_4425d(v20, *v19, *v18, v21, v22, (int32_t *)*v17); // 0x44662
                    v36 = v62;
                    *v23 = v36;
                    v37 = v62;
                    v38 = (int64_t)*v23;
                    if (v36 == (int32_t)&g93) {
                        goto lab_0x447ef;
                    }
                }
              lab_0x447e8_2:
                // 0x447e8
                *v32 = v39;
            }
        }
    }
  lab_0x447ef:
    // 0x447ef
    function_4eeb40(v4);
    function_4eeb40(*(int64_t *)(v2 + 8));
    function_4eeb40(v3);
    int64_t result = 0; // 0x44817
    if (*(int64_t *)(v2 + 104) != __readfsqword(40)) {
        // 0x44819
        __stack_chk_fail();
        result = (int64_t)&g95;
    }
    // 0x4481e
    return result;
}

// Address range: 0x51d34 - 0x52057
int64_t function_51d34(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = __readfsqword(40); // 0x51d45
    int64_t v2 = 0; // bp-200, 0x51d65
    int64_t v3 = 0; // bp-184, 0x51d6e
    int64_t v4 = 0; // bp-160, 0x51d8e
    int64_t v5 = 0; // bp-136, 0x51da9
    int64_t v6 = 7; // 0x51dc4
    if (*(int64_t *)(a2 - 24) != 0) {
        int64_t v7 = function_50bae(a2); // 0x51ddd
        v6 = 8;
        if ((int32_t)v7 != 0) {
            // 0x51dee
            int64_t v8; // bp-112, 0x51d34
            function_288fa(&v8, a2);
            int64_t v9; // bp-192, 0x51d34
            function_50e9e(&v9, v7 & 0xffffffff, v8);
            int64_t v10 = v9; // 0x51e1b
            v9 = 0;
            v2 = v10;
            function_52440(&v9);
            int64_t v11; // bp-72, 0x51d34
            function_2508e((int64_t)&v11);
            int64_t v12; // bp-80, 0x51d34
            function_2508e((int64_t)&v12);
            int64_t v13; // bp-88, 0x51d34
            function_2508e((int64_t)&v13);
            int64_t v14; // bp-96, 0x51d34
            function_2508e((int64_t)&v14);
            int64_t v15; // bp-104, 0x51d34
            function_2508e((int64_t)&v15);
            function_2508e((int64_t)&v8);
            v6 = 7;
            if ((v10 & 0xffffffff) != 0) {
                int64_t v16 = *(int64_t *)v2; // 0x51eb3
                int64_t v17 = v16 & 0xffffffff; // 0x51ec8
                v6 = v17;
                if ((int32_t)v16 == 0) {
                    if ((char)a4 != 0) {
                        // 0x51edb
                        if (*(int64_t *)(a1 + 224) == *(int64_t *)(a1 + 216) && v4 != 0) {
                            int64_t v18 = a1 + 240; // 0x51ea3
                            int64_t v19; // 0x51d34
                            function_50c4e(0x100000000 * a1 + 0xd800000000 >> 32, &v4, v19, v18, &v3, &v4);
                            function_50c4e(v18, &v5, v19, v18, &v3, &v4);
                        }
                    }
                    int64_t v20 = -v3;
                    v8 = 0;
                    v15 = 0;
                    v14 = 0;
                    uint64_t v21 = v20 >> 4; // 0x51f40
                    int64_t v22 = v20; // 0x51f44
                    int64_t v23 = v3; // 0x51f44
                    int64_t v24 = 0; // 0x51f44
                    if (v21 != 0) {
                        if (v21 >= 0x1000000000000000) {
                            // 0x51f55
                            function_5423b0();
                        }
                        // 0x51f5a
                        v24 = function_4efd30(v20);
                        v22 = v24 - v3;
                        v23 = v3;
                    }
                    // 0x51f69
                    v8 = v24;
                    v14 = v22;
                    v15 = v24;
                    int64_t v25 = v24; // 0x51f9b
                    if (v23 != 0) {
                        function_5236c(v25, v23);
                        int64_t v26 = v23 + 16; // 0x51fb2
                        int64_t v27 = v26; // 0x51f9b
                        v25 += 16;
                        while (v26 != 0) {
                            // 0x51f9d
                            function_5236c(v25, v27);
                            v26 = v27 + 16;
                            v27 = v26;
                            v25 += 16;
                        }
                    }
                    // 0x51fbc
                    v15 = v24 - v23;
                    function_517e6(a1, &v8, a3);
                    function_52450(&v8);
                    function_51c60(a1, function_5346c(v2));
                    v6 = v17;
                }
            }
        }
    }
    // 0x52004
    function_254fe((int64_t)&v5);
    function_254fe((int64_t)&v4);
    function_52450(&v3);
    function_52440(&v2);
    int64_t result = v6; // 0x5203e
    if (v1 != __readfsqword(40)) {
        // 0x52040
        __stack_chk_fail();
        result = (int64_t)&g95;
    }
    // 0x52045
    return result;
}

// Address range: 0x4aa830 - 0x4aab5f
int64_t function_4aa830(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint32_t a5, uint32_t a6, int64_t a7, int64_t a8, int64_t a9) {
    int32_t * v1 = (int32_t *)a7;
    if ((int32_t)function_4ad720(a1 + 304) != 0) {
        // 0x4aa86f
        *v1 = *v1 | 1;
    }
    int64_t v2 = function_4ad750(a1 + 280); // 0x4aa881
    uint32_t v3 = *v1;
    if ((int32_t)v2 != 0) {
        uint32_t result = v3 | 512;
        *v1 = result;
        return result;
    }
    int64_t v4 = v3; // 0x4aa896
    int32_t * v5 = (int32_t *)(a1 + (int64_t)&g52); // 0x4aa898
    int32_t v6 = *v5; // 0x4aa898
    int64_t v7 = v4; // 0x4aa8af
    int64_t v8; // 0x4aa830
    if ((1 << (v6 + 31) % 32 & *(int32_t *)&v8) == 0) {
        // 0x4aa8b1
        v7 = v4 | 0x4000;
        *v1 = (int32_t)v7;
    }
    int32_t * v9 = (int32_t *)(a1 + (int64_t)&g53); // 0x4aa8bf
    uint32_t v10 = 1 << (*v9 + 31) % 32;
    int64_t v11 = v7 & 0xffff7fff | 0x8000; // 0x4aa8de
    *v1 = (int32_t)((v10 & *(int32_t *)(a4 + 4)) == 0 ? v11 : v7) | 8;
    int64_t v12 = function_4c14d0(v6, a4, (int64_t)v10, v11, a7); // 0x4aa8ed
    int64_t result2 = 0; // 0x4aa8fa
    int64_t v13; // 0x4aa830
    int64_t v14; // 0x4aa830
    int64_t v15; // 0x4aa830
    int64_t v16; // bp-120, 0x4aa830
    int64_t * v17; // 0x4aa830
    int64_t * n2; // 0x4aa830
    int64_t * str3; // 0x4aa830
    int64_t * v18; // 0x4aa830
    if (v12 != 0) {
        int64_t v19 = *(int64_t *)(a1 + 40); // 0x4aa904
        result2 = function_4c18b0(v12, v19, *(int64_t *)(a1 + 32), &v16);
        if (a2 != 0) {
            int64_t v20 = a5 + 1; // 0x4aa923
            v17 = (int64_t *)(a1 + 136);
            n2 = (int64_t *)(a1 + 112);
            str3 = (int64_t *)(a1 + 144);
            v13 = a2;
            while (true) {
              lab_0x4aa962:
                // 0x4aa962
                v14 = v13;
                int64_t v21 = function_4aa470(a1, v14, 1, (int64_t)(a5 == 0)); // 0x4aa96f
                v15 = v21;
                if ((int32_t)v21 != 0) {
                    goto lab_0x4aa952;
                } else {
                    // 0x4aa978
                    v18 = (int64_t *)(v14 + 136);
                    int64_t v22 = v20; // 0x4aa989
                    if (*v17 == *v18) {
                        int64_t n = *n2; // 0x4aa98b
                        int64_t str2 = *(int64_t *)(v14 + 144); // 0x4aa98f
                        int64_t str = *str3; // 0x4aa996
                        int64_t v23 = memcmp((int64_t *)str, (int64_t *)str2, (int32_t)n) == 0 ? (int64_t)a5 : v20;
                        v22 = v23;
                    }
                    uint32_t v24 = *(int32_t *)(v14 + 456); // 0x4aa930
                    if (v24 < 1) {
                        goto lab_0x4aa942;
                    } else {
                        // 0x4aa93b
                        if ((v22 - (int64_t)a6 & 0xffffffff) > (int64_t)v24) {
                            goto lab_0x4aa952;
                        } else {
                            goto lab_0x4aa942;
                        }
                    }
                }
            }
        }
    }
    goto lab_0x4aab00_2;
  lab_0x4aa952:;
    int64_t v27 = *(int64_t *)(v14 + (int64_t)&g55); // 0x4aa952
    v13 = v27;
    result2 = v15;
    if (v27 == 0) {
        // break -> 0x4aab00
        goto lab_0x4aab00_2;
    }
    goto lab_0x4aa962;
  lab_0x4aa942:;
    int64_t v28 = function_4ad720(v14 + 304); // 0x4aa949
    v15 = v28;
    if ((int32_t)v28 == 0) {
        int64_t v29 = function_4ad750(v14 + 280); // 0x4aa9b7
        v15 = v29;
        if ((int32_t)v29 == 0) {
            int64_t v30 = *(int64_t *)(a1 + (int64_t)&g50); // 0x4aa9c0
            int64_t v31 = *(int64_t *)(a1 + (int64_t)&g51); // 0x4aa9c7
            uint64_t v32 = function_4c1d00(v12); // 0x4aa9dd
            int64_t v33 = v14 + 328; // 0x4aa9ec
            int64_t v34 = *(int64_t *)(a1 + (int64_t)&g54); // 0x4aa9f3
            uint32_t v35 = *v5; // 0x4aaa09
            v8 = v35;
            int64_t v36 = function_4c4730(*v9, v34, v33, v35, &v16, v32 % 256, v31, v30); // 0x4aaa22
            v15 = v36;
            if ((int32_t)v36 == 0) {
                // 0x4aaa2f
                *v1 = *v1 & -9;
                int64_t v37 = function_4a9850(a4, *v9, v33, v8, (int64_t)&v16); // 0x4aaa4a
                if ((int32_t)v37 == 0) {
                    goto lab_0x4aaa62;
                } else {
                    // 0x4aaa53
                    *v1 = *v1 | (int32_t)&g2;
                    goto lab_0x4aaa62;
                }
            }
        }
    }
    goto lab_0x4aa952;
  lab_0x4aab00_2:
    // 0x4aab00
    if (a8 == 0 || (int32_t)result2 != 0) {
        // 0x4aaae8
        return result2;
    }
    int32_t v25 = *v1; // 0x4aa830
  lab_0x4aab3a:
    // 0x4aab3a
    *v1 = v25;
    // 0x4aaae8
    return 0;
  lab_0x4aaa62:
    // 0x4aaa62
    if (*v17 != *v18) {
        goto lab_0x4aaa8d;
    } else {
        int64_t str4 = *(int64_t *)(v14 + 144); // 0x4aaa76
        result2 = 0;
        if (memcmp((int64_t *)*str3, (int64_t *)str4, (int32_t)*n2) == 0) {
            goto lab_0x4aab00_2;
        } else {
            goto lab_0x4aaa8d;
        }
    }
  lab_0x4aaa8d:;
    int32_t v26 = *v1 | (int32_t)function_4aa650(a1, v14, a3, a4); // 0x4aaab4
    *v1 = v26;
    v25 = v26;
    if (a8 == 0) {
        goto lab_0x4aab3a;
    } else {
        // 0x4aaac3
        v25 = 0;
        if (v26 == 0) {
            goto lab_0x4aab3a;
        } else {
            goto lab_0x4aaae8;
        }
    }
}

// Address range: 0x4aaf50 - 0x4ab285
int64_t function_4aaf50(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t str, int64_t a6, int64_t a7, int64_t a8) {
    int64_t v1 = a6;
    if (a4 == 0) {
        // 0x4ab0e9
        int64_t result; // 0x4aaf50
        return result;
    }
    int32_t * v2 = (int32_t *)a6; // 0x4aaf82
    *v2 = 0;
    if (str != 0) {
        int64_t len = strlen((char *)str); // 0x4aaf99
        if ((*(char *)(a1 + 448) & 32) == 0) {
            int64_t v3 = a1 + 216; // 0x4aaf50
            while (true) {
                int64_t v4 = v3;
                int64_t v5; // 0x4aaf50
                if (*(int64_t *)(v4 + 8) == 3) {
                    // 0x4ab100
                    if (memcmp(&g68, (int64_t *)*(int64_t *)(v4 + 16), 3) == 0) {
                        int64_t * v6 = (int64_t *)(v4 + 32); // 0x4ab119
                        uint64_t v7 = *v6; // 0x4ab119
                        if (v7 == len) {
                            // 0x4ab190
                            if ((int32_t)function_4a95d0(*(int64_t *)(v4 + 40), str, len) == 0) {
                                goto lab_0x4ab020_2;
                            }
                        }
                        if (v7 >= 3) {
                            int64_t str2 = v4 + 40; // 0x4ab128
                            if (memcmp((int64_t *)*(int64_t *)str2, (int64_t *)"*.", 2) == 0) {
                                // 0x4ab141
                                if ((int32_t)function_4a9790(str, *v6, str2) == 0) {
                                    goto lab_0x4ab020_2;
                                }
                            }
                        }
                    }
                    int64_t v8 = *(int64_t *)(v4 + 48); // 0x4ab160
                    v5 = v8;
                    if (v8 == 0) {
                        // break -> 0x4ab179
                        break;
                    }
                } else {
                    int64_t v9 = *(int64_t *)(v4 + 48); // 0x4ab170
                    v5 = v9;
                    if (v9 == 0) {
                        // break -> 0x4ab179
                        break;
                    }
                }
                // 0x4ab169
                v3 = v5;
            }
          lab_0x4ab179:
            // 0x4ab179
            *v2 = 4;
        } else {
            int64_t v10 = a1 + 416; // 0x4aafb5
            while (true) {
                int64_t v11 = v10;
                int64_t * v12 = (int64_t *)(v11 + 8); // 0x4ab000
                uint64_t v13 = *v12; // 0x4ab000
                if (v13 == len) {
                    // 0x4ab009
                    if ((int32_t)function_4a95d0(str, *(int64_t *)(v11 + 16), len) == 0) {
                        // break -> 0x4ab020
                        break;
                    }
                }
                if (v13 >= 3) {
                    int64_t str3 = v11 + 16; // 0x4aafc6
                    if (memcmp((int64_t *)*(int64_t *)str3, (int64_t *)"*.", 2) == 0) {
                        // 0x4aafdf
                        if ((int32_t)function_4a9790(str, *v12, str3) == 0) {
                            // break -> 0x4ab020
                            break;
                        }
                    }
                }
                // 0x4aaff3
                v10 = *(int64_t *)(v11 + 24);
                if (v10 == 0) {
                    goto lab_0x4ab179;
                }
            }
        }
    }
  lab_0x4ab020_2:;
    int64_t v14 = a1 + 328; // 0x4ab020
    int64_t result2 = function_4c4920(v14); // 0x4ab02a
    int64_t v15 = result2 + 0xffffffff; // 0x4ab034
    uint32_t v16 = 1 << (int32_t)v15 % 32;
    if ((v16 & *(int32_t *)(a4 + 4)) == 0) {
        // 0x4ab0e9
        return result2;
    }
    int64_t result3 = function_4a9850(a4, (int32_t)result2, v14, v15 & 0xffffffff, (int64_t)v16); // 0x4ab054
    if ((int32_t)result3 != 0) {
        // 0x4ab0e9
        return result3;
    }
    // 0x4ab061
    int64_t v17; // 0x4aaf50
    int32_t v18; // 0x4ab0db
    if (a2 != 0) {
        int64_t v19 = a2;
        while ((int32_t)function_4aa470(a1, v19, 0, 1) != 0) {
            int64_t v20 = *(int64_t *)(v19 + (int64_t)&g55); // 0x4ab078
            if (v20 == 0) {
                goto lab_0x4ab1c0;
            }
            v19 = v20;
        }
        int64_t result4 = function_4aa830(a1, v19, a3, a4, 0, 0, a6, a7, a8); // 0x4ab0d2
        if ((int32_t)result4 != 0) {
            // 0x4ab0e9
            return result4;
        }
        // 0x4ab0db
        v17 = result4;
        v18 = *(int32_t *)&v1;
        // 0x4ab0e9
        return (v17 ^ 0xffffffff) + v17 + (int64_t)(v18 == 0) & 0xffffd900;
    }
  lab_0x4ab1c0:;
    int64_t v21 = *(int64_t *)(a1 + (int64_t)&g55); // 0x4ab1c0
    if (v21 == 0) {
      lab_0x4ab1d0:;
        int64_t result5 = function_4aa830(a1, a2, a3, a4, 0, 0, a6, a7, a8); // 0x4ab206
        if ((int32_t)result5 != 0) {
            // 0x4ab0e9
            return result5;
        }
        // 0x4ab0db
        v17 = result5;
        v18 = *(int32_t *)&v1;
        // 0x4ab0e9
        return (v17 ^ 0xffffffff) + v17 + (int64_t)(v18 == 0) & 0xffffd900;
    }
    int64_t v22 = v21;
    while ((int32_t)function_4aa470(a1, v22, 0, 1) != 0) {
        int64_t v23 = *(int64_t *)(v22 + (int64_t)&g55); // 0x4ab220
        if (v23 == 0) {
            goto lab_0x4ab1d0;
        }
        v22 = v23;
    }
    // 0x4ab242
    return function_4aab80(a1, v22, a2, a3, a4, 0, 0, a6, a7, a8);
}

// Address range: 0x4ad930 - 0x4adc58
int64_t function_4ad930(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4ad930
    int64_t v1; // bp-2000, 0x4ad930
    int64_t v2 = (int64_t)&v1; // 0x4ad948
    int64_t v3 = v2 + (int64_t)&g62;
    int64_t v4 = 3;
    int64_t v5 = 1; // 0x4ad98e
    int64_t v6; // bp-2100, 0x4ad930
    int64_t v7 = (int64_t)&v6; // 0x4ad930
    int64_t v8 = 3;
    *(int32_t *)v7 = (int32_t)v8;
    *(int32_t *)(4 * v8 + v3) = 1;
    v5 = (v5 & 0xffffffff) + 1;
    v4 = 2 * v8 ^ v8 ^ (int64_t)(0x1000000 * (int32_t)v4 >> 31 & 27);
    int32_t v9 = v5; // 0x4ad996
    v7 += 4;
    while (v9 != 256) {
        // 0x4ad970
        v8 = v4 % 256;
        *(int32_t *)v7 = (int32_t)v8;
        *(int32_t *)(4 * v8 + v3) = v9;
        v5 = (v5 & 0xffffffff) + 1;
        v4 = 2 * v8 ^ v8 ^ (int64_t)(0x1000000 * (int32_t)v4 >> 31 & 27);
        v9 = v5;
        v7 += 4;
    }
    // 0x4ad99e
    *(int32_t *)&g74 = 1;
    int64_t v10 = 2; // 0x4ad9d9
    int64_t v11 = 2; // 0x4ad9d9
    int64_t v12 = (int64_t)&g75; // 0x4ad9d9
    if ((int64_t)&g75 != (int64_t)&g76) {
        *(int32_t *)v12 = (int32_t)v10;
        v12 += 4;
        v11 = 2 * v10 ^ (int64_t)(0x1000000 * (int32_t)v11 >> 31 & 27);
        v10 = v11 % 256;
        while (v12 != (int64_t)&g76) {
            // 0x4ad9c0
            *(int32_t *)v12 = (int32_t)v10;
            v12 += 4;
            v11 = 2 * v10 ^ (int64_t)(0x1000000 * (int32_t)v11 >> 31 & 27);
            v10 = v11 % 256;
        }
    }
    // 0x4ad9db
    *(char *)&g77 = 99;
    *(char *)&g80 = 0;
    int64_t v13 = v2 - 104; // 0x4ada0c
    int64_t v14 = 0;
    int32_t v15 = *(int32_t *)(v2 + (int64_t)&g63 + 4 * v14); // 0x4ada03
    uint32_t v16 = *(int32_t *)(4 * (int64_t)(255 - v15) + v13); // 0x4ada0c
    uint32_t v17 = (v16 / 128 | 2 * v16) % 256; // 0x4ada20
    uint32_t v18 = 2 * v17 & 254;
    int32_t v19 = v18 | v17 / 128; // 0x4ada36
    uint32_t v20 = 2 * v19 & 254;
    int32_t v21 = v20 | v18 / 128; // 0x4ada48
    int32_t v22 = v16 ^ 99 ^ v17 ^ v19 ^ v21 ^ (2 * v21 & 254 | v20 / 128); // 0x4ada60
    *(char *)(v14 + (int64_t)&g78) = (char)v22;
    *(char *)((int64_t)v22 + (int64_t)&g79) = (char)v14 + 1;
    int64_t v23 = v14 + 1; // 0x4ada7a
    while (v14 != 254) {
        // 0x4ada00
        v14 = v23;
        v15 = *(int32_t *)(v2 + (int64_t)&g63 + 4 * v14);
        v16 = *(int32_t *)(4 * (int64_t)(255 - v15) + v13);
        v17 = (v16 / 128 | 2 * v16) % 256;
        v18 = 2 * v17 & 254;
        v19 = v18 | v17 / 128;
        v20 = 2 * v19 & 254;
        v21 = v20 | v18 / 128;
        v22 = v16 ^ 99 ^ v17 ^ v19 ^ v21 ^ (2 * v21 & 254 | v20 / 128);
        *(char *)(v14 + (int64_t)&g78) = (char)v22;
        *(char *)((int64_t)v22 + (int64_t)&g79) = (char)v14 + 1;
        v23 = v14 + 1;
    }
    int64_t v24 = 0;
    unsigned char v25 = *(char *)(v24 + (int64_t)&g77); // 0x4adbe4
    int32_t v26 = v25;
    int32_t v27 = 2 * v26 & 254 ^ (v25 > -1 ? 0 : 27); // 0x4adc07
    int32_t v28 = v27 ^ v26; // 0x4adc12
    int64_t v29 = 4 * v24; // 0x4adc14
    int32_t v30 = 0x10000 * v26 | 256 * v26 | v27;
    *(int32_t *)(v29 + (int64_t)&g81) = 0x1000000 * v28 | v30;
    int32_t v31 = 256 * v30 | v28; // 0x4adc27
    *(int32_t *)(v29 + (int64_t)&g82) = v31;
    int32_t v32 = 256 * v31 | v26; // 0x4adc2f
    *(int32_t *)(v29 + (int64_t)&g83) = v32;
    *(int32_t *)(v29 + (int64_t)&g84) = 256 * v32 | v26;
    unsigned char v33 = *(char *)(v24 + (int64_t)&g79); // 0x4adc3d
    int64_t v34 = 0; // 0x4adc44
    int32_t v35 = 0; // 0x4adc44
    int32_t v36 = 0; // 0x4adc44
    int32_t v37 = 0; // 0x4adc44
    int32_t v38; // 0x4ad930
    int32_t v39; // 0x4adae0
    int32_t v40; // 0x4adaf1
    int32_t v41; // 0x4adaf6
    int32_t v42; // 0x4adb20
    int32_t v43; // 0x4adb3c
    int32_t v44; // 0x4adb49
    int32_t v45; // 0x4adb4c
    int32_t v46; // 0x4adb7d
    uint32_t v47; // 0x4adb7d
    int32_t v48; // 0x4adb9a
    uint32_t v49; // 0x4adbab
    if (v33 != 0) {
        // 0x4adae0
        v39 = *(int32_t *)(4 * (int64_t)v33 + v3);
        v40 = v39 + v38;
        v41 = v39 + v38;
        v42 = *(int32_t *)(4 * (int64_t)(-255 * ((v40 + (int32_t)(-0x7f7f7f7f * (int64_t)v40 / 0x100000000) >> 7) - (v40 >> 31)) + v40) + v13);
        v43 = *(int32_t *)(4 * (int64_t)(-255 * ((v41 + (int32_t)(-0x7f7f7f7f * (int64_t)v41 / 0x100000000) >> 7) - (v41 >> 31)) + v41) + v13);
        v44 = v39 + v38;
        v45 = v39 + v38;
        v46 = *(int32_t *)(4 * (int64_t)(-255 * ((v44 + (int32_t)(-0x7f7f7f7f * (int64_t)v44 / 0x100000000) >> 7) - (v44 >> 31)) + v44) + v13);
        v47 = 0x10000 * v43 ^ 256 * v42 ^ v46;
        v48 = *(int32_t *)(4 * (int64_t)(-255 * ((v45 + (int32_t)(-0x7f7f7f7f * (int64_t)v45 / 0x100000000) >> 7) - (v45 >> 31)) + v45) + v13);
        v36 = v47 ^ 0x1000000 * v48;
        v35 = v36 / 0x1000000 | 256 * v47;
        v49 = 256 * v35 | v47 / 0x10000 % 256;
        v34 = v49;
        v37 = 256 * v49 | v47 / 256 % 256;
    }
    int64_t result = v34;
    *(int32_t *)(v29 + (int64_t)&g85) = v36;
    *(int32_t *)(v29 + (int64_t)&g86) = v35;
    *(int32_t *)(v29 + (int64_t)&g87) = (int32_t)result;
    *(int32_t *)(v29 + (int64_t)&g88) = v37;
    int64_t v50 = v24 + 1; // 0x4adbe2
    while (v24 != 255) {
        // 0x4adbe4
        v24 = v50;
        v25 = *(char *)(v24 + (int64_t)&g77);
        v26 = v25;
        v27 = 2 * v26 & 254 ^ (v25 > -1 ? 0 : 27);
        v28 = v27 ^ v26;
        v29 = 4 * v24;
        v30 = 0x10000 * v26 | 256 * v26 | v27;
        *(int32_t *)(v29 + (int64_t)&g81) = 0x1000000 * v28 | v30;
        v31 = 256 * v30 | v28;
        *(int32_t *)(v29 + (int64_t)&g82) = v31;
        v32 = 256 * v31 | v26;
        *(int32_t *)(v29 + (int64_t)&g83) = v32;
        *(int32_t *)(v29 + (int64_t)&g84) = 256 * v32 | v26;
        v33 = *(char *)(v24 + (int64_t)&g79);
        v34 = 0;
        v35 = 0;
        v36 = 0;
        v37 = 0;
        if (v33 != 0) {
            // 0x4adae0
            v39 = *(int32_t *)(4 * (int64_t)v33 + v3);
            v40 = v39 + v38;
            v41 = v39 + v38;
            v42 = *(int32_t *)(4 * (int64_t)(-255 * ((v40 + (int32_t)(-0x7f7f7f7f * (int64_t)v40 / 0x100000000) >> 7) - (v40 >> 31)) + v40) + v13);
            v43 = *(int32_t *)(4 * (int64_t)(-255 * ((v41 + (int32_t)(-0x7f7f7f7f * (int64_t)v41 / 0x100000000) >> 7) - (v41 >> 31)) + v41) + v13);
            v44 = v39 + v38;
            v45 = v39 + v38;
            v46 = *(int32_t *)(4 * (int64_t)(-255 * ((v44 + (int32_t)(-0x7f7f7f7f * (int64_t)v44 / 0x100000000) >> 7) - (v44 >> 31)) + v44) + v13);
            v47 = 0x10000 * v43 ^ 256 * v42 ^ v46;
            v48 = *(int32_t *)(4 * (int64_t)(-255 * ((v45 + (int32_t)(-0x7f7f7f7f * (int64_t)v45 / 0x100000000) >> 7) - (v45 >> 31)) + v45) + v13);
            v36 = v47 ^ 0x1000000 * v48;
            v35 = v36 / 0x1000000 | 256 * v47;
            v49 = 256 * v35 | v47 / 0x10000 % 256;
            v34 = v49;
            v37 = 256 * v49 | v47 / 256 % 256;
        }
        // 0x4adbb5
        result = v34;
        *(int32_t *)(v29 + (int64_t)&g85) = v36;
        *(int32_t *)(v29 + (int64_t)&g86) = v35;
        *(int32_t *)(v29 + (int64_t)&g87) = (int32_t)result;
        *(int32_t *)(v29 + (int64_t)&g88) = v37;
        v50 = v24 + 1;
    }
    // 0x4adc60
    return result;
}

// Address range: 0x50f6e0 - 0x50f6eb
// From class:    std::num_put<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
// Type:          virtual member function
int64_t function_50f6e0(void) {
    // 0x50f6e0
    return function_50f2e0();
}

// Address range: 0x50f6f0 - 0x50f7c5
int64_t function_50f6f0(int64_t * a1, int64_t * a2) {
    int64_t v1 = 1; // 0x50f6ff
    if (a1 != NULL) {
        int64_t v2 = (int64_t)a1;
        int32_t * v3 = (int32_t *)(v2 + 8); // 0x50f703
        v1 = 0;
        if (*v3 == -1) {
            uint64_t v4 = *(int64_t *)(v2 + 16); // 0x50f728
            int64_t v5 = v2; // 0x50f730
            if (v4 < *(int64_t *)(v2 + 24)) {
                // 0x50f732
                v5 = (int64_t)*(int32_t *)v4;
            }
            int32_t v6 = v5; // 0x50f734
            if (v6 == -1) {
                // 0x50f780
                *a1 = 0;
                v1 = 1;
            } else {
                // 0x50f739
                *v3 = v6;
                v1 = 0;
            }
        }
    }
    // 0x50f709
    if (a2 == NULL) {
        // 0x50f71a
        return v1 & 0xffffffff;
    }
    int64_t v7 = (int64_t)a2;
    int32_t * v8 = (int32_t *)(v7 + 8); // 0x50f711
    if (*v8 != -1) {
        // 0x50f71a
        return (v1 ^ 1) & 0xffffffff;
    }
    uint64_t v9 = *(int64_t *)(v7 + 16); // 0x50f740
    int64_t v10 = v7; // 0x50f748
    if (v9 < *(int64_t *)(v7 + 24)) {
        // 0x50f74a
        v10 = (int64_t)*(int32_t *)v9;
    }
    int32_t v11 = v10; // 0x50f74c
    if (v11 == -1) {
        // 0x50f770
        *a2 = 0;
        // 0x50f71a
        return v1 & 0xffffffff;
    }
    // 0x50f751
    *v8 = v11;
    // 0x50f71a
    return (v1 ^ 1) & 0xffffffff;
}

// Address range: 0x50f7d0 - 0x50f82b
int64_t function_50f7d0(int64_t a1) {
    // 0x50f7d0
    if (a1 == 0) {
        // 0x50f7e5
        return 0xffffffff;
    }
    int32_t * v1 = (int32_t *)(a1 + 8); // 0x50f7dd
    uint32_t result = *v1; // 0x50f7dd
    if (result != -1) {
        // 0x50f7e5
        return result;
    }
    uint64_t v2 = *(int64_t *)(a1 + 16); // 0x50f7f1
    int64_t result2 = a1; // 0x50f7fc
    if (v2 < *(int64_t *)(a1 + 24)) {
        // 0x50f7fe
        result2 = (int64_t)*(int32_t *)v2;
    }
    int32_t v3 = result2; // 0x50f800
    if (v3 == -1) {
        // 0x50f810
        *(int64_t *)a1 = 0;
        return result2;
    }
    // 0x50f805
    *v1 = v3;
    return result2;
}

// Address range: 0x50f830 - 0x50fad5
int64_t function_50f830(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10) {
    int64_t result2 = a2; // bp-88, 0x50f845
    int64_t v1 = a4; // bp-104, 0x50f84d
    __readfsqword(40);
    int64_t v2 = function_50ab00(a9 + 208); // 0x50f87e
    if ((char)function_50f6f0(&result2, &v1) == 0) {
        int64_t v3 = (int64_t)&result2; // 0x50f8b0
        int64_t v4 = function_50f7d0(v3); // 0x50f8f9
        if (a8 != 0) {
            // 0x50f908
            int64_t v5; // bp-168, 0x50f830
            int64_t v6 = 15 - (4 * a8 + 30 & -16) + (int64_t)&v5 & -16; // 0x50f8b4
            int64_t v7 = 0;
            int64_t v8 = 0;
            int64_t v9 = v4 & 0xffffffff;
            int32_t v10 = v9; // 0x50f937
            int64_t v11 = v9; // 0x50f93a
            int64_t v12; // 0x50f830
            int64_t v13; // 0x50f91e
            int64_t v14; // 0x50f927
            while (*(int32_t *)*(int64_t *)(8 * v8 + a7) != v10) {
                // 0x50f910
                v13 = v9 & 0xffffffff;
                v11 = v13;
                if (v10 == (int32_t)*(int64_t *)v2) {
                    // break -> 0x50f93c
                    break;
                }
                // 0x50f927
                v14 = v8 + 1;
                v12 = v7;
                if (v14 == a8) {
                    // break (via goto) -> 0x50f94e
                    goto lab_0x50f94e;
                }
                v8 = v14;
                v9 = v13;
                v10 = v9;
                v11 = v9;
            }
            // 0x50f93c
            *(int32_t *)(4 * v7 + v6) = (int32_t)v8;
            int64_t v15 = v7 + 1; // 0x50f940
            int64_t v16 = v8 + 1; // 0x50f944
            v12 = v15;
            while (v16 != a8) {
                // 0x50f931
                v7 = v15;
                v8 = v16;
                v9 = v11;
                v10 = v9;
                v11 = v9;
                while (*(int32_t *)*(int64_t *)(8 * v8 + a7) != v10) {
                    // 0x50f910
                    v13 = v9 & 0xffffffff;
                    v11 = v13;
                    if (v10 == (int32_t)*(int64_t *)v2) {
                        // break -> 0x50f93c
                        break;
                    }
                    // 0x50f927
                    v14 = v8 + 1;
                    v12 = v7;
                    if (v14 == a8) {
                        // break (via goto) -> 0x50f94e
                        goto lab_0x50f94e;
                    }
                    v8 = v14;
                    v9 = v13;
                    v10 = v9;
                    v11 = v9;
                }
                // 0x50f93c
                *(int32_t *)(4 * v7 + v6) = (int32_t)v8;
                v15 = v7 + 1;
                v16 = v8 + 1;
                v12 = v15;
            }
          lab_0x50f94e:;
            int64_t v17 = v12; // 0x50f95a
            if (v12 >= 2) {
                int64_t v18 = 0; // 0x50f9c0
                int64_t v19 = v12;
                int64_t v20 = (int64_t)*(int32_t *)v6; // 0x50f960
                int64_t v21 = 1; // 0x50f974
                uint64_t v22 = (int64_t)wcslen((int32_t *)*(int64_t *)(8 * v20 + a7));
                int64_t wstr = *(int64_t *)(8 * (int64_t)*(int32_t *)(4 * v21 + v6) + a7); // 0x50f980
                int64_t v23 = wcslen((int32_t *)wstr); // 0x50f984
                int64_t v24 = v22 > v23 ? v23 : v22; // 0x50f990
                v21 = (0x100000000 * v21 >> 32) + 1;
                while (v19 > v21) {
                    // 0x50f978
                    v22 = v24;
                    wstr = *(int64_t *)(8 * (int64_t)*(int32_t *)(4 * v21 + v6) + a7);
                    v23 = wcslen((int32_t *)wstr);
                    v24 = v22 > v23 ? v23 : v22;
                    v21 = (0x100000000 * v21 >> 32) + 1;
                }
                int64_t result = v23; // 0x50f9a4
                while (result2 != 0) {
                    int64_t * v25 = (int64_t *)(result2 + 16); // 0x50f9aa
                    uint64_t v26 = *v25; // 0x50f9aa
                    result = v26;
                    if (v26 >= *(int64_t *)(result2 + 24)) {
                        // break -> 0x50fb40
                        break;
                    }
                    // 0x50f9b8
                    *v25 = v26 + 4;
                    v18++;
                    if (v18 >= v24) {
                        goto lab_0x50f8c4;
                    }
                    // 0x50f9d9
                    result = v18;
                    if (result2 == 0) {
                        // break -> 0x50fb40
                        break;
                    }
                    uint64_t v27 = *(int64_t *)(result2 + 16); // 0x50f9e6
                    result = v27;
                    if (v27 >= *(int64_t *)(result2 + 24)) {
                        // break -> 0x50fb40
                        break;
                    }
                    int32_t v28 = *(int32_t *)v27; // 0x50f9f4
                    result = 0xffffffff;
                    if (v28 == -1) {
                        // break -> 0x50fb40
                        break;
                    }
                    // 0x50f9ff
                    if (v1 != 0) {
                        if ((int32_t)a5 != -1) {
                            goto lab_0x50f8c4;
                        } else {
                            uint64_t v29 = *(int64_t *)(v1 + 16); // 0x50fa18
                            result = v29;
                            if (v29 >= *(int64_t *)(v1 + 24)) {
                                return result;
                            } else {
                                // 0x50fa26
                                result = 0xffffffff;
                                if (*(int32_t *)v29 == -1) {
                                    return result;
                                } else {
                                    goto lab_0x50f8c4;
                                }
                            }
                        }
                    }
                    int64_t v30 = result2; // 0x50fa56
                    int64_t v31 = 0; // 0x50fa56
                    int64_t v32 = v20; // 0x50fa56
                    int64_t v33 = v19; // 0x50fa56
                    int64_t v34; // 0x50f830
                    while (true) {
                        int64_t v35 = v33;
                        int64_t v36 = v31;
                        int64_t v37 = v30;
                        int32_t v38 = *(int32_t *)(*(int64_t *)(8 * v32 + a7) + 4 * v18); // 0x50fa80
                        int64_t v39; // 0x50f830
                        int32_t v40; // 0x50f830
                        int64_t v41; // 0x50f830
                        int64_t v42; // 0x50f830
                        if (v38 != (v37 == 0 ? -1 : v28)) {
                            int64_t v43 = v35 - 1; // 0x50fa60
                            int32_t v44 = *(int32_t *)(4 * v43 + v6); // 0x50fa64
                            *(int32_t *)(4 * v36 + v6) = v44;
                            v34 = v43;
                            if (v43 <= v36) {
                                // break -> 0x50faa3
                                break;
                            }
                            // 0x50fa60
                            v40 = v44;
                            v39 = result2;
                            v42 = v36;
                            v41 = v43;
                        } else {
                            int64_t v45 = v36 + 1; // 0x50fa9a
                            v34 = v35;
                            if (v35 <= v45) {
                                // break -> 0x50faa3
                                break;
                            }
                            // 0x50fa9a
                            v40 = *(int32_t *)(4 * v45 + v6);
                            v39 = v37;
                            v42 = v45;
                            v41 = v35;
                        }
                        // 0x50fa71
                        v30 = v39;
                        v31 = v42;
                        v32 = v40;
                        v33 = v41;
                    }
                    // 0x50faa3
                    v19 = v34;
                    v17 = v19;
                    if (v19 < 2) {
                        goto lab_0x50faad;
                    }
                    v20 = (int64_t)*(int32_t *)v6;
                    v21 = 1;
                    v22 = (int64_t)wcslen((int32_t *)*(int64_t *)(8 * v20 + a7));
                    wstr = *(int64_t *)(8 * (int64_t)*(int32_t *)(4 * v21 + v6) + a7);
                    v23 = wcslen((int32_t *)wstr);
                    v24 = v22 > v23 ? v23 : v22;
                    v21 = (0x100000000 * v21 >> 32) + 1;
                    while (v19 > v21) {
                        // 0x50f978
                        v22 = v24;
                        wstr = *(int64_t *)(8 * (int64_t)*(int32_t *)(4 * v21 + v6) + a7);
                        v23 = wcslen((int32_t *)wstr);
                        v24 = v22 > v23 ? v23 : v22;
                        v21 = (0x100000000 * v21 >> 32) + 1;
                    }
                    // 0x50f99d
                    result = v23;
                }
              lab_0x50fb40:
                // 0x50fb40
                return result;
            }
          lab_0x50faad:
            // 0x50faad
            if (v17 == 1) {
                // 0x50fab7
                function_50d7a0(v3);
                return (int64_t)*(int32_t *)v6;
            }
        }
    }
    goto lab_0x50f8c4;
  lab_0x50f8c4:;
    int32_t * v46 = (int32_t *)a10; // 0x50f8c8
    *v46 = *v46 | 4;
    __readfsqword(40);
    return result2;
}

// Address range: 0x510270 - 0x51056b
// From class:    std::time_get_byname<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
// Type:          virtual member function
int64_t function_510270(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x510270
    __readfsqword(40);
    int64_t v1 = function_50c440(); // 0x5102ca
    function_50ab00(a6 + 208);
    int64_t v2 = *(int64_t *)(*(int64_t *)(v1 + 16) + 296); // bp-264, 0x5102eb
    int32_t v3 = 0; // bp-268, 0x5103c3
    int32_t v4; // bp-272, 0x510270
    int64_t result = function_50fc20(a1, a2, a3, a4, a5, (int64_t *)&v4, &v2, 12, a6, &v3); // 0x510463
    if (v3 != 0) {
        int32_t * v5 = (int32_t *)a7; // 0x510500
        *v5 = *v5 | 4;
        if (result != 0) {
            goto lab_0x5104a7;
        } else {
            goto lab_0x510509;
        }
    } else {
        // 0x510496
        *(int32_t *)(a8 + 16) = v4;
        if (result == 0) {
            goto lab_0x510509;
        } else {
            goto lab_0x5104a7;
        }
    }
  lab_0x5104a7:
    if ((int32_t)a3 == -1) {
        uint64_t v6 = *(int64_t *)(result + 16); // 0x510540
        int64_t v7 = result; // 0x510548
        if (v6 < *(int64_t *)(result + 24)) {
            // 0x51054a
            v7 = (int64_t)*(int32_t *)v6;
        }
        // 0x51054c
        if ((int32_t)v7 == -1) {
            goto lab_0x510509;
        } else {
            goto lab_0x5104b0;
        }
    } else {
        goto lab_0x5104b0;
    }
  lab_0x510509:;
    int64_t result2 = 0; // 0x51050f
    int64_t result4; // 0x510270
    char v8; // 0x510270
    if (a4 == 0) {
        goto lab_0x5104bb;
    } else {
        // 0x510511
        result4 = 0;
        v8 = 1;
        if ((int32_t)a5 != -1) {
            // 0x5104bf
            __readfsqword(40);
            return 0;
        }
        goto lab_0x510523;
    }
  lab_0x5104b0:
    // 0x5104b0
    if (a4 == 0) {
        // 0x5104bf
        __readfsqword(40);
        return result;
    }
    // 0x5104b5
    result2 = result;
    result4 = result;
    v8 = 0;
    if ((int32_t)a5 == -1) {
        goto lab_0x510523;
    } else {
        goto lab_0x5104bb;
    }
  lab_0x5104bb:;
    int32_t * v9 = (int32_t *)a7; // 0x5104bb
    *v9 = *v9 | 2;
    // 0x5104bf
    __readfsqword(40);
    return result2;
  lab_0x510523:;
    uint64_t result3 = *(int64_t *)(a4 + 16); // 0x510523
    if (result3 >= *(int64_t *)(a4 + 24)) {
        // 0x510570
        return result3;
    }
    // 0x51052d
    result2 = result4;
    if (v8 != (char)(*(int32_t *)result3 == -1)) {
        // 0x5104bf
        __readfsqword(40);
        return result4;
    }
    goto lab_0x5104bb;
}

// Address range: 0x523750 - 0x523a66
// From class:    std::__cxx11::time_get_byname<char, std::istreambuf_iterator<char, std::char_traits<char> > >
// Type:          virtual member function
int64_t function_523750(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x523750
    __readfsqword(40);
    int64_t v1 = function_556610(); // 0x5237aa
    function_554b00(a6 + 208);
    int64_t v2 = *(int64_t *)(*(int64_t *)(v1 + 16) + 296); // bp-264, 0x5237cb
    int32_t v3 = 0; // bp-268, 0x5238a3
    int32_t v4; // bp-272, 0x523750
    int64_t result = function_522e70(a1, a2, a3, a4, a5, (int64_t *)&v4, &v2, 12, a6, &v3); // 0x523943
    int32_t v5; // 0x523750
    if (v3 != 0) {
        int32_t * v6 = (int32_t *)a7; // 0x5239e0
        *v6 = *v6 | 4;
        v5 = v3;
    } else {
        // 0x523976
        *(int32_t *)(a8 + 16) = v4;
        v5 = v4;
    }
    if (result == 0) {
        goto lab_0x523a50;
    } else {
        // 0x52398b
        if ((int32_t)a3 == -1) {
            uint64_t v7 = *(int64_t *)(result + 24); // 0x5239f4
            if ((int32_t)result == -1 == *(int64_t *)(result + 16) >= v7) {
                goto lab_0x523a50;
            } else {
                goto lab_0x523990;
            }
        } else {
            goto lab_0x523990;
        }
    }
  lab_0x523a50:;
    int64_t result2 = 0; // 0x523a56
    if (a4 != 0) {
        // 0x523a5c
        if ((int32_t)a5 == -1) {
            // 0x523a66
            return result;
        }
        // 0x52399f
        __readfsqword(40);
        return 0;
    }
    goto lab_0x52399b;
  lab_0x52399b:;
    int32_t * v8 = (int32_t *)a7; // 0x52399b
    *v8 = *v8 | 2;
    // 0x52399f
    __readfsqword(40);
    return result2;
  lab_0x523990:
    // 0x523990
    if (a4 == 0) {
        // 0x52399f
        __readfsqword(40);
        return result;
    }
    // 0x523995
    result2 = result;
    if ((int32_t)a5 == -1) {
        // 0x523a00
        result2 = result;
        if (*(int64_t *)(a4 + 16) >= *(int64_t *)(a4 + 24)) {
            // 0x523a0d
            result2 = result;
            if (v5 == -1) {
                // 0x52399f
                __readfsqword(40);
                return result;
            }
        }
    }
    goto lab_0x52399b;
}

// Address range: 0x52c050 - 0x52c35e
int64_t function_52c050(uint64_t result, int32_t a2, uint64_t a3, uint64_t a4, uint64_t a5) {
    int64_t v1 = a4;
    int64_t v2 = a2;
    int64_t * v3 = (int64_t *)(result + 8); // 0x52c06e
    uint64_t v4 = *v3; // 0x52c06e
    if (a3 + 0x7fffffffffffffff - v4 < a5) {
        // 0x52c30f
        function_542590("basic_string::_M_replace");
        uint64_t v5 = *(int64_t *)(v2 + 8); // 0x52c320
        v1 = v2;
        if (v5 < v4) {
            // 0x52c347
            return 0;
        }
        uint64_t v6 = v5 - v4; // 0x52c327
        int64_t v7 = v6 > a4 ? a4 : v6; // 0x52c32d
        return function_52c050((int64_t)"basic_string::_M_replace", 0, 0x4d5f3a3a676e6972, v4 + v2, v7);
    }
    int64_t v8 = a5 - a3; // 0x52c088
    uint64_t v9 = v4 + v8; // 0x52c093
    int64_t v10 = *(int64_t *)(result + 16); // 0x52c09c
    if (v10 < v9) {
        // 0x52c220
        function_52b400(result);
        // 0x52c125
        *v3 = v9;
        *(char *)(result + v9) = 0;
        return result;
    }
    int64_t v11 = v2 + result; // 0x52c0ac
    int64_t v12 = v4 - v2 - a3; // 0x52c0ba
    char v13; // 0x52c050
    int64_t v14; // 0x52c050
    int64_t v15; // 0x52c050
    int64_t v16; // 0x52c050
    if (a4 < result || v4 + result < a4) {
        int64_t v17 = v10; // 0x52c0cc
        if (a5 != a3 && v12 != 0) {
            int64_t v18 = v11 + a3; // 0x52c0d2
            int64_t v19 = v11 + a5; // 0x52c0d6
            if (v12 == 1) {
                // 0x52c248
                *(char *)v19 = *(char *)v18;
                v17 = v19;
            } else {
                // 0x52c0e0
                memmove((int64_t *)v19, (int64_t *)v18, (int32_t)v12);
                v1 = a4;
                v17 = v19;
            }
        }
        // 0x52c110
        if (a5 == 0) {
            // 0x52c125
            *v3 = v9;
            *(char *)(v17 + v9) = 0;
            return result;
        }
        if (a5 != 1) {
            // 0x52c230
            memcpy((int64_t *)v11, (int64_t *)v1, (int32_t)a5);
            // 0x52c125
            *v3 = v9;
            *(char *)(v11 + v9) = 0;
            return result;
        }
        // 0x52c115
        v13 = *(char *)&v1;
        v16 = v17;
        v14 = v11;
        goto lab_0x52c11f;
    } else {
        if (a5 - 1 < a3) {
            if (a5 == 1) {
                // 0x52c258
                *(char *)v11 = (char)a4;
                goto lab_0x52c25e;
            } else {
                int64_t * dest_mem = memmove((int64_t *)v11, (int64_t *)a4, (int32_t)a5); // 0x52c183
                v1 = a4;
                v15 = (int64_t)dest_mem;
                if (a5 == a3 || v12 == 0) {
                    // 0x52c125
                    *v3 = v9;
                    *(char *)(v11 + v9) = 0;
                    return result;
                }
                goto lab_0x52c1a0;
            }
        } else {
            goto lab_0x52c25e;
        }
    }
  lab_0x52c11f:
    // 0x52c11f
    *(char *)v14 = v13;
    // 0x52c125
    *v3 = v9;
    *(char *)(v16 + v9) = 0;
    return result;
  lab_0x52c25e:
    // 0x52c25e
    v15 = v11;
    int64_t v20 = v10; // 0x52c261
    int64_t v21 = v11; // 0x52c261
    if (a5 != a3 && v12 != 0) {
        goto lab_0x52c1a0;
    } else {
        goto lab_0x52c1e0;
    }
  lab_0x52c1a0:;
    int64_t v22 = v15 + a3; // 0x52c1a4
    int64_t v23 = v15 + a5; // 0x52c1a8
    if (v12 == 1) {
        // 0x52c290
        *(char *)v23 = *(char *)v22;
        v20 = v23;
        v21 = v15;
    } else {
        // 0x52c1b2
        memmove((int64_t *)v23, (int64_t *)v22, (int32_t)v12);
        v20 = v23;
        v21 = v15;
    }
    goto lab_0x52c1e0;
  lab_0x52c1e0:
    // 0x52c1e0
    if (a5 <= a3) {
        // 0x52c125
        *v3 = v9;
        *(char *)(v20 + v9) = 0;
        return result;
    }
    uint64_t v24 = v21 + a3; // 0x52c1ed
    char v25 = v1;
    if (v24 < v1 + a5) {
        if (v24 <= v1) {
            int64_t v26 = v1 + v8; // 0x52c202
            int64_t v27; // 0x52c050
            if (a5 == 1) {
                // 0x52c2dd
                *(char *)v21 = *(char *)v26;
                v27 = v20;
            } else {
                // 0x52c20c
                memcpy((int64_t *)v21, (int64_t *)v26, (int32_t)a5);
                v27 = v21;
            }
            // 0x52c125
            *v3 = v9;
            *(char *)(v27 + v9) = 0;
            return result;
        }
        int64_t v28 = v24 - v1; // 0x52c2a0
        int64_t dest_mem2; // 0x52c050
        if (v28 == 1) {
            // 0x52c2d5
            *(char *)v21 = v25;
            dest_mem2 = v21;
        } else {
            // 0x52c2a9
            dest_mem2 = v21;
            if (v28 != 0) {
                // 0x52c2f2
                dest_mem2 = (int64_t)memmove((int64_t *)v21, (int64_t *)v1, (int32_t)v28);
            }
        }
        int64_t v29 = dest_mem2 + a5; // 0x52c2b1
        int64_t v30 = dest_mem2 + v28; // 0x52c2b5
        int64_t v31 = a5 - v28; // 0x52c2b9
        switch (v31) {
            case 1: {
                // 0x52c2e8
                *(char *)v30 = *(char *)v29;
                // 0x52c125
                *v3 = v9;
                *(char *)(v30 + v9) = 0;
                return result;
            }
            case 0: {
                // 0x52c125
                *v3 = v9;
                *(char *)(v30 + v9) = 0;
                return result;
            }
        }
        // 0x52c2cb
        memcpy((int64_t *)v30, (int64_t *)v29, (int32_t)v31);
        // 0x52c125
        *v3 = v9;
        *(char *)(v30 + v9) = 0;
        return result;
    }
    // 0x52c270
    v13 = v25;
    v16 = v20;
    v14 = v21;
    if (a5 != 1) {
        // 0x52c27a
        memmove((int64_t *)v21, (int64_t *)v1, (int32_t)a5);
        // 0x52c125
        *v3 = v9;
        *(char *)(v21 + v9) = 0;
        return result;
    }
    goto lab_0x52c11f;
}

// Address range: 0x545f40 - 0x54626c
int64_t function_545f40(int64_t result, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x545f61
    char v2; // bp-88, 0x545f40
    function_545920((int64_t *)&v2);
    int64_t v3 = a3; // 0x545f7e
    int64_t v4; // 0x545f40
    int64_t v5; // 0x545f40
    int64_t v6; // 0x545f40
    int64_t v7; // 0x545f40
    int64_t v8; // 0x545f40
    int64_t v9; // 0x545f40
    int64_t v10; // 0x545f40
    int64_t v11; // 0x545f40
    int64_t v12; // 0x545f40
    int64_t v13; // 0x545f40
    int64_t v14; // 0x545f40
    int64_t v15; // 0x545f40
    int64_t v16; // 0x545f40
    int64_t v17; // 0x545f8f
    int32_t v18; // 0x545fa4
    if (v2 == 0) {
        goto lab_0x54605c;
    } else {
        int64_t v19 = *(int64_t *)((int64_t)&v2 - 24) + result; // 0x545f8c
        v17 = *(int64_t *)(v19 + 16);
        if (v17 > a3) {
            // 0x545fa4
            v18 = *(int32_t *)(v19 + 24);
            v13 = a3;
            v7 = v19;
            v10 = v19;
            if ((v18 & 176) == 32) {
                goto lab_0x546049;
            } else {
                char * v20 = (char *)(v19 + 228); // 0x545fbd
                if (*v20 == 0) {
                    int64_t v21 = *(int64_t *)(v19 + 240); // 0x5461a8
                    v16 = a3;
                    v5 = v19;
                    if (v21 == 0) {
                        goto lab_0x5461e4;
                    } else {
                        int64_t v22 = *(int64_t *)v21; // 0x5461b4
                        *(int32_t *)(v19 + 224) = (int32_t)v22;
                        *v20 = 1;
                        v6 = *(int64_t *)(v21 - 24) + result;
                        v4 = v22 & 0xffffffff;
                        goto lab_0x545ff9;
                    }
                } else {
                    // 0x545fcd
                    v6 = v19;
                    v4 = (int64_t)*(int32_t *)(v19 + 224);
                    goto lab_0x545ff9;
                }
            }
        } else {
            int64_t v23 = *(int64_t *)(v19 + 232); // 0x546090
            int64_t v24 = *(int64_t *)(v23 - 24) + result; // 0x5460ad
            v14 = v23;
            v8 = v19;
            v11 = v24;
            if (*(int64_t *)v23 == a3) {
                goto lab_0x546054;
            } else {
                // 0x5460b5
                function_4fca70(v24, *(int32_t *)(v24 + 32) | 1, v23);
                v15 = v23;
                v9 = v19;
                v12 = v24;
                goto lab_0x5460c0;
            }
        }
    }
  lab_0x546049:
    // 0x546049
    v14 = v13;
    v8 = v7;
    v11 = v10;
    int64_t v25; // 0x545f40
    int64_t v26; // 0x545f40
    if (*(int32_t *)(v10 + 32) == 0) {
        int64_t v27 = *(int64_t *)(v10 + 232); // 0x5460d8
        int64_t v28 = *(int64_t *)(v27 - 24) + result; // 0x5460f5
        int64_t v29 = v28; // 0x5460fe
        if (*(int64_t *)v27 != a3) {
            // 0x546100
            function_4fca70(v28, *(int32_t *)(v28 + 32) | 1, v27);
            v29 = *(int64_t *)(v28 - 24) + result;
        }
        // 0x546119
        v14 = v27;
        v8 = v29;
        v11 = v29;
        if ((v18 & 176) != 32) {
            goto lab_0x546054;
        } else {
            // 0x546124
            v14 = v27;
            v8 = v29;
            v11 = v29;
            if (*(int32_t *)(v29 + 32) != 0) {
                goto lab_0x546054;
            } else {
                char * v30 = (char *)(v29 + 228); // 0x546136
                int64_t v31; // 0x545f40
                int64_t v32; // 0x545f40
                if (*v30 == 0) {
                    int64_t v33 = *(int64_t *)(v29 + 240); // 0x546208
                    if (v33 == 0) {
                        // 0x546264
                        return function_5423f0();
                    }
                    int64_t v34 = *(int64_t *)v33; // 0x546214
                    *(int32_t *)(v29 + 224) = (int32_t)v34;
                    *v30 = 1;
                    v32 = *(int64_t *)(v33 - 24) + result;
                    v31 = v34 & 0xffffffff;
                } else {
                    // 0x546143
                    v32 = v29;
                    v31 = (int64_t)*(int32_t *)(v29 + 224);
                }
                int64_t v35 = v17 - a3; // 0x546167
                int64_t v36 = *(int64_t *)(v32 + 232); // 0x546171
                int64_t * v37 = (int64_t *)(v36 + 40); // 0x54617b
                uint64_t v38 = *v37; // 0x54617b
                int64_t v39; // 0x545f40
                int64_t v40; // 0x545f40
                if (v38 < *(int64_t *)(v36 + 48)) {
                    // 0x546150
                    *(int32_t *)v38 = (int32_t)v31;
                    *v37 = v38 + 4;
                    v39 = v31;
                    v40 = v32;
                } else {
                    // 0x546185
                    v39 = *(int64_t *)v36;
                    v40 = *(int64_t *)(v36 - 24) + result;
                }
                int64_t v41 = v40;
                v26 = v36;
                v25 = v41;
                while ((int32_t)v39 != -1) {
                    // 0x546167
                    v35--;
                    v14 = v36;
                    v8 = v41;
                    v11 = v41;
                    if (v35 == 0) {
                        goto lab_0x546054;
                    }
                    int64_t v42 = v41;
                    v36 = *(int64_t *)(v42 + 232);
                    v37 = (int64_t *)(v36 + 40);
                    v38 = *v37;
                    if (v38 < *(int64_t *)(v36 + 48)) {
                        // 0x546150
                        *(int32_t *)v38 = (int32_t)v31;
                        *v37 = v38 + 4;
                        v39 = v31;
                        v40 = v42;
                    } else {
                        // 0x546185
                        v39 = *(int64_t *)v36;
                        v40 = *(int64_t *)(v36 - 24) + result;
                    }
                    // 0x54615e
                    v41 = v40;
                    v26 = v36;
                    v25 = v41;
                }
                goto lab_0x5461f0;
            }
        }
    } else {
        goto lab_0x546054;
    }
  lab_0x546054:
    // 0x546054
    *(int64_t *)(v11 + 16) = 0;
    v3 = v14;
    int64_t v43 = v8; // 0x546054
    goto lab_0x54605c;
  lab_0x54605c:
    // 0x54605c
    function_5459a0((int64_t *)&v2);
    if (v1 == __readfsqword(40)) {
        // 0x54607b
        return result;
    }
    // 0x5461df
    __stack_chk_fail();
    v16 = v3;
    v5 = v43;
    goto lab_0x5461e4;
  lab_0x5461e4:
    // 0x5461e4
    function_5423f0();
    v26 = v16;
    v25 = v5;
    goto lab_0x5461f0;
  lab_0x5461f0:;
    int64_t v44 = v25;
    function_4fca70(v44, *(int32_t *)(v44 + 32) | 1, v26);
    v15 = v26;
    v9 = v44;
    v12 = v44;
    goto lab_0x5460c0;
  lab_0x5460c0:
    // 0x5460c0
    *(int64_t *)(result + 16 + *(int64_t *)(v12 - 24)) = 0;
    v3 = v15;
    v43 = v9;
    goto lab_0x54605c;
  lab_0x545ff9:;
    int64_t v45 = v6; // 0x545f40
    int64_t v46 = v17 - a3; // 0x545f40
    int64_t v47; // 0x545f40
    int64_t v48; // 0x545ff9
    while (true) {
        int64_t v49 = v45;
        v48 = *(int64_t *)(v49 + 232);
        int64_t * v50 = (int64_t *)(v48 + 40); // 0x546003
        uint64_t v51 = *v50; // 0x546003
        int64_t v52; // 0x545f40
        if (v51 < *(int64_t *)(v48 + 48)) {
            // 0x545fe0
            *(int32_t *)v51 = (int32_t)v4;
            *v50 = v51 + 4;
            v52 = v49;
            v47 = v49;
            if (v4 == 0xffffffff) {
                // break -> 0x546030
                break;
            }
        } else {
            int64_t v53 = *(int64_t *)(v48 - 24) + result; // 0x546021
            v52 = v53;
            v47 = v53;
            if ((int32_t)*(int64_t *)v48 == -1) {
                // break -> 0x546030
                break;
            }
        }
        int64_t v54 = v46 - 1; // 0x545ff3
        v45 = v52;
        v46 = v54;
        v13 = v48;
        v7 = v52;
        v10 = v52;
        if (v54 == 0) {
            goto lab_0x546049;
        }
    }
    int64_t v55 = v47;
    function_4fca70(v55, *(int32_t *)(v55 + 32) | 1, v48);
    v13 = v48;
    v7 = v55;
    v10 = *(int64_t *)(v55 - 24) + result;
    goto lab_0x546049;
}

// Address range: 0x55a290 - 0x55a5a6
// From class:    std::time_get_byname<char, std::istreambuf_iterator<char, std::char_traits<char> > >
// Type:          virtual member function
int64_t function_55a290(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x55a290
    __readfsqword(40);
    int64_t v1 = function_556610(); // 0x55a2ea
    function_554b00(a6 + 208);
    int64_t v2 = *(int64_t *)(*(int64_t *)(v1 + 16) + 296); // bp-264, 0x55a30b
    int32_t v3 = 0; // bp-268, 0x55a3e3
    int32_t v4; // bp-272, 0x55a290
    int64_t result = function_559cd0(a1, a2, a3, a4, a5, (int64_t *)&v4, &v2, 12, a6, &v3); // 0x55a483
    int32_t v5; // 0x55a290
    if (v3 != 0) {
        int32_t * v6 = (int32_t *)a7; // 0x55a520
        *v6 = *v6 | 4;
        v5 = v3;
    } else {
        // 0x55a4b6
        *(int32_t *)(a8 + 16) = v4;
        v5 = v4;
    }
    if (result == 0) {
        goto lab_0x55a590;
    } else {
        // 0x55a4cb
        if ((int32_t)a3 == -1) {
            uint64_t v7 = *(int64_t *)(result + 24); // 0x55a534
            if ((int32_t)result == -1 == *(int64_t *)(result + 16) >= v7) {
                goto lab_0x55a590;
            } else {
                goto lab_0x55a4d0;
            }
        } else {
            goto lab_0x55a4d0;
        }
    }
  lab_0x55a590:;
    int64_t result2 = 0; // 0x55a596
    if (a4 != 0) {
        // 0x55a59c
        if ((int32_t)a5 == -1) {
            // 0x55a5a6
            return result;
        }
        // 0x55a4df
        __readfsqword(40);
        return 0;
    }
    goto lab_0x55a4db;
  lab_0x55a4db:;
    int32_t * v8 = (int32_t *)a7; // 0x55a4db
    *v8 = *v8 | 2;
    // 0x55a4df
    __readfsqword(40);
    return result2;
  lab_0x55a4d0:
    // 0x55a4d0
    if (a4 == 0) {
        // 0x55a4df
        __readfsqword(40);
        return result;
    }
    // 0x55a4d5
    result2 = result;
    if ((int32_t)a5 == -1) {
        // 0x55a540
        result2 = result;
        if (*(int64_t *)(a4 + 16) >= *(int64_t *)(a4 + 24)) {
            // 0x55a54d
            result2 = result;
            if (v5 == -1) {
                // 0x55a4df
                __readfsqword(40);
                return result;
            }
        }
    }
    goto lab_0x55a4db;
}

// Address range: 0x581fa0 - 0x5822a2
int64_t function_581fa0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2 & 0xffffffff; // 0x581fb0
    int64_t v2; // 0x581fa0
    int64_t result; // 0x581fa0
    char v3; // 0x581fa0
    if (a4 == 0) {
        goto lab_0x582008_2;
    } else {
        int64_t v4 = a4; // 0x581fbd
        if (*(int32_t *)(a4 + 16) != 0) {
            goto lab_0x582008_2;
        } else {
            while (true) {
                uint32_t v5 = *(int32_t *)*(int64_t *)(v4 + 8) - 25; // 0x581fdd
                if (v5 < 19) {
                    uint32_t v6 = v5 % 64;
                    int64_t v7 = v6 == 0 ? 1 : 1 << (int64_t)v6;
                    if ((v7 & 0x43107) != 0) {
                        // break -> 0x582210
                        break;
                    }
                    if ((v7 & 3584) != 0) {
                        char v8 = *(char *)(a1 + 264); // 0x582110
                        int64_t v9 = *(int64_t *)(a1 + 256); // 0x582118
                        v2 = v9;
                        result = v9;
                        v3 = v8;
                        if ((v8 & -3) != 40) {
                            goto lab_0x58221f;
                        } else {
                            goto lab_0x58212d;
                        }
                    }
                }
                int64_t v10 = *(int64_t *)v4; // 0x582000
                if (v10 == 0) {
                    goto lab_0x582008_2;
                }
                // 0x581fd0
                v4 = v10;
                if (*(int32_t *)(v10 + 16) != 0) {
                    goto lab_0x582008_2;
                }
            }
            // 0x582210
            result = *(int64_t *)(a1 + 256);
            v3 = *(char *)(a1 + 264);
            goto lab_0x58221f;
        }
    }
  lab_0x582008_2:;
    int64_t * v11 = (int64_t *)(a1 + 296); // 0x582008
    *v11 = 0;
    function_5822c0(a1, v1, a4, 0);
    int64_t v12 = *(int64_t *)(a1 + 256); // 0x582029
    int64_t v13 = *v11; // 0x582029
    goto lab_0x582030;
  lab_0x582030:;
    // 0x582030
    int64_t * v14; // 0x581fa0
    char * v15; // 0x581fa0
    int64_t * v16; // 0x581fa0
    int64_t * v17; // 0x581fa0
    int64_t v18; // 0x581fa0
    int64_t v19; // 0x581fa0
    int64_t v20; // 0x581fa0
    int64_t v21; // 0x581fa0
    int64_t v22; // 0x581fa0
    int64_t v23; // 0x581fa0
    if (v12 != 255) {
        // 0x582030
        v15 = (char *)(a1 + 264);
        v17 = (int64_t *)(a1 + 256);
        v23 = v12;
        v19 = v13;
        goto lab_0x5821df;
    } else {
        int64_t v24 = *(int64_t *)(a1 + 280); // 0x58203d
        *(char *)(a1 + 255) = 0;
        *(char *)a1 = 40;
        *(char *)(a1 + 264) = 40;
        int64_t * v25 = (int64_t *)(a1 + 320); // 0x58206c
        *v25 = *v25 + 1;
        int64_t * v26 = (int64_t *)(a1 + 256);
        *v26 = 1;
        v16 = v26;
        v22 = v24;
        v18 = v13;
        v14 = v26;
        v21 = 1;
        v20 = v13;
        if (v24 == 0) {
            goto lab_0x582275;
        } else {
            goto lab_0x582099;
        }
    }
  lab_0x58221f:
    // 0x58221f
    v2 = result;
    int64_t v27; // 0x581fa0
    if (v3 == 32) {
        goto lab_0x58212d;
    } else {
        if (result != 255) {
            // 0x58229e
            return result;
        }
        // 0x582230
        *(char *)(a1 + 255) = 0;
        int64_t * v28 = (int64_t *)(a1 + 320); // 0x58224e
        *v28 = *v28 + 1;
        *(char *)a1 = 32;
        v27 = 1;
        goto lab_0x582260;
    }
  lab_0x5821df:
    // 0x5821df
    *v17 = v23 + 1;
    *(char *)(v23 + a1) = 40;
    *v15 = 40;
    v16 = v17;
    v22 = v23;
    v18 = v19;
    v14 = v17;
    v21 = 1;
    v20 = v19;
    if (v23 == 0) {
        goto lab_0x582275;
    } else {
        goto lab_0x582099;
    }
  lab_0x582275:;
    int64_t * v29 = v14; // 0x582279
    int64_t v30 = v21; // 0x582279
    int64_t v31 = v21 + 1; // 0x582279
    int64_t v32 = v20; // 0x582279
    goto lab_0x5820d2;
  lab_0x582099:
    // 0x582099
    function_581610(a1, v1, v22);
    int64_t v42 = *v16; // 0x582092
    v14 = v16;
    v21 = v42;
    v20 = v18;
    if (v42 != 255) {
        goto lab_0x582275;
    } else {
        // 0x5820a5
        *(char *)(a1 + 255) = 0;
        int64_t * v43 = (int64_t *)(a1 + 320); // 0x5820c3
        *v43 = *v43 + 1;
        v29 = v16;
        v30 = 0;
        v31 = 1;
        v32 = v18;
        goto lab_0x5820d2;
    }
  lab_0x58212d:
    // 0x58212d
    v27 = v2;
    int64_t v33; // 0x581fa0
    int64_t v34; // 0x581fa0
    if (v2 != 255) {
        goto lab_0x582260;
    } else {
        // 0x582139
        *(char *)(a1 + 255) = 0;
        int64_t * v44 = (int64_t *)(a1 + 320); // 0x582157
        *v44 = *v44 + 1;
        v33 = 0;
        v34 = 1;
        goto lab_0x582166;
    }
  lab_0x5820d2:
    // 0x5820d2
    *v29 = v31;
    *(char *)(v30 + a1) = 41;
    *(char *)(a1 + 264) = 41;
    int64_t result2 = function_5822c0(a1, v1, a4, 1); // 0x5820f4
    *(int64_t *)(a1 + 296) = v32;
    return result2;
  lab_0x582260:
    // 0x582260
    v33 = v27;
    v34 = v27 + 1;
    goto lab_0x582166;
  lab_0x582166:;
    int64_t * v35 = (int64_t *)(a1 + 256);
    *v35 = v34;
    *(char *)(v33 + a1) = 40;
    int64_t * v36 = (int64_t *)(a1 + 296); // 0x582178
    int64_t v37 = *v36; // 0x582178
    char * v38 = (char *)(a1 + 264);
    *v38 = 40;
    *v36 = 0;
    function_5822c0(a1, v1, a4, 0);
    int64_t v39 = *v35; // 0x58219c
    if (v39 != 255) {
        int64_t v40 = v39 + 1; // 0x582280
        *v35 = v40;
        *(char *)(v39 + a1) = 41;
        *v38 = 41;
        v12 = v40;
        v13 = v37;
        goto lab_0x582030;
    } else {
        // 0x5821af
        *(char *)(a1 + 255) = 0;
        int64_t * v41 = (int64_t *)(a1 + 320); // 0x5821cd
        *v41 = *v41 + 1;
        *(char *)a1 = 41;
        v15 = v38;
        v17 = v35;
        v23 = 1;
        v19 = v37;
        goto lab_0x5821df;
    }
}
