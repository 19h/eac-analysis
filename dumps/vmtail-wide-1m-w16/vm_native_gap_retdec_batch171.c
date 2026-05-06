/*
 * Targeted RetDec C for native executable gap queue batch 171.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x4f3410-0x4f38f6 rank=74 name=fcn.004f3410 kind=r2_discovered bytes=1254 uncovered=1254
 *   0x4f39b0-0x4f3e96 rank=75 name=fcn.004f39b0 kind=r2_discovered bytes=1254 uncovered=1254
 *   0x569370-0x569856 rank=76 name=fcn.00569370 kind=r2_discovered bytes=1254 uncovered=1254
 *   0x569910-0x569df6 rank=77 name=fcn.00569910 kind=r2_discovered bytes=1254 uncovered=1254
 *   0x517bf0-0x5180b6 rank=78 name=method.std::num_get_wchar_t__std::istreambuf_iterator_wchar_t__std::char_traits_wchar_t_____.virtual_16 kind=native_discovered bytes=1222 uncovered=1222
 *   0x4b7810-0x4b7cce rank=79 name=fcn.004b7810 kind=r2_discovered bytes=1214 uncovered=1214
 *   0x4b6d30-0x4b71e5 rank=80 name=fcn.004b6d30 kind=r2_discovered bytes=1205 uncovered=1205
 *   0x4acba0-0x4ad050 rank=81 name=fcn.004acba0 kind=r2_discovered bytes=1200 uncovered=1200
 *   0x69c7c-0x6a114 rank=83 name=fcn.00069c7c kind=r2_discovered bytes=1176 uncovered=1176
 *   0x4c8ef0-0x4c9453 rank=84 name=fcn.004c8ef0 kind=r2_discovered bytes=1379 uncovered=1170
 *   0x562ad0-0x562f49 rank=85 name=method.std::num_get_char__std::istreambuf_iterator_char__std::char_traits_char_____.virtual_16 kind=native_discovered bytes=1145 uncovered=1145
 *   0x3c9ec-0x3ce62 rank=86 name=fcn.0003c9ec kind=r2_discovered bytes=1142 uncovered=1142
 *   0x57caa0-0x57cf07 rank=87 name=fcn.0057caa0 kind=r2_discovered bytes=1127 uncovered=1127
 *   0x50fc20-0x51005d rank=88 name=fcn.0050fc20 kind=r2_discovered bytes=1085 uncovered=1085
 *   0x565a00-0x565e36 rank=89 name=fcn.00565a00 kind=r2_discovered bytes=1078 uncovered=1078
 *   0x5eba0-0x5efd2 rank=90 name=fcn.0005eba0 kind=r2_discovered bytes=1074 uncovered=1074
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
extern int g24;
extern int g25;
extern int g26;
extern int g27;
extern int g28;
extern int g29;
extern int g31;
extern int g32;
extern int g33;
extern int g34;
extern int32_t libntlm_DES_key_swap_at_5948e0;
extern int32_t libntlm_DES_key_swap_at_594920;
extern int32_t RawDES_sbox8_at_594960;
extern int32_t RawDES_sbox6_at_594a60;
extern int32_t RawDES_sbox4_at_594b60;
extern int32_t RawDES_sbox2_at_594c60;
extern int32_t RawDES_sbox7_at_594d60;
extern int32_t RawDES_sbox5_at_594e60;
extern int32_t RawDES_sbox3_at_594f60;
extern int32_t RawDES_sbox1_at_595060;
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

int64_t function_24ded();
int64_t function_24dff();
int64_t function_2508e();
int64_t function_255da();
int64_t function_29c46();
int64_t function_29d94();
int64_t function_36712();
int64_t function_3c9ec(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_48dd5f();
int64_t function_48e723();
int64_t function_48e88e();
int64_t function_4ac420();
int64_t function_4acba0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4afd30();
int64_t function_4b0870();
int64_t function_4b0890();
int64_t function_4b0fc0();
int64_t function_4b1080();
int64_t function_4b1590();
int64_t function_4b1680();
int64_t function_4b1900();
int64_t function_4b19a0();
int64_t function_4b1ac0();
int64_t function_4b26c0();
int64_t function_4b2d10();
int64_t function_4b36d0();
int64_t function_4b38b0();
int64_t function_4b3cf0();
int64_t function_4b6d30(int64_t a1, int64_t a2);
int64_t function_4b7810(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4c8860();
int64_t function_4c8e60();
int64_t function_4c8ef0(int64_t a1);
int64_t function_4c8f30(int64_t a1, int64_t a2);
int64_t function_4c8fa0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4c9080(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4eeb50();
int64_t function_4eec00();
int64_t function_4efd30();
int64_t function_4f3230();
int64_t function_4f3410(int64_t a1, int64_t a2);
int64_t function_4f39b0(int64_t a1, int64_t a2);
int64_t function_504cb();
int64_t function_50ab00();
int64_t function_50d7a0();
int64_t function_50e0e0();
int64_t function_50f6f0();
int64_t function_50f7d0();
int64_t function_50fc20(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, uint64_t a8, int64_t a9, int64_t a10);
int64_t function_517200();
int64_t function_517bf0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_524600();
int64_t function_52b400();
int64_t function_52b8e0();
int64_t function_52bdc0();
int64_t function_52c050();
int64_t function_52c9e0();
int64_t function_542590();
int64_t function_558300();
int64_t function_562060();
int64_t function_562ad0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_565a00(int64_t * a1, int64_t a2, int64_t a3);
int64_t function_569370(int64_t a1, int64_t a2);
int64_t function_569910(int64_t a1, int64_t a2);
int64_t function_5797e0();
int64_t function_579b00();
int64_t function_579bc0();
int64_t function_579d20();
int64_t function_579f90();
int64_t function_57c4c0();
int64_t function_57c670();
int64_t function_57caa0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_57cf04(void);
int64_t function_59e46();
int64_t function_59e48();
int64_t function_59e52();
int64_t function_59e5c();
int64_t function_59f20();
int64_t function_59faa();
int64_t function_5a160();
int64_t function_5a254();
int64_t function_5bfa4();
int64_t function_5c3b0();
int64_t function_5cab4();
int64_t function_5cb26();
int64_t function_5eba0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_69166();
int64_t function_692e6();
int64_t function_69c7c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_6a710();
int64_t function_6a73c();
int64_t function_6a892();
int64_t function_6a8a4();
int64_t function_6aba4();
int64_t function_6af9a();

// Address range: 0x3c9ec - 0x3ce62
int64_t function_3c9ec(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    uint64_t v1 = a4 & 0xffffffff; // 0x3c9f7
    int64_t v2; // bp-5608, 0x3c9ec
    int64_t v3 = (int64_t)&v2; // 0x3ca01
    int64_t v4 = 0x100000000 * a3;
    int64_t v5 = __readfsqword(40); // 0x3ca11
    int64_t v6; // bp-5572, 0x3c9ec
    __asm_rep_stosd_memset((char *)&v6, 0, 33);
    int64_t v7 = 0x100000000 * a2 >> 32; // 0x3ca2c
    int64_t v8; // 0x3c9ec
    int64_t v9; // 0x3c9ec
    int64_t v10; // 0x3c9ec
    int64_t v11; // 0x3c9ec
    int64_t v12; // 0x3c9ec
    int64_t v13; // 0x3c9ec
    int64_t v14; // 0x3c9ec
    int64_t v15; // 0x3c9ec
    int64_t v16; // 0x3c9ec
    int64_t v17; // 0x3c9ec
    int64_t v18; // 0x3cb84
    int16_t * v19; // 0x3cbac
    uint16_t v20; // 0x3cbac
    if ((int32_t)a5 == 0) {
        int64_t v21 = (int64_t)&v6; // 0x3ca0c
        int64_t v22 = v7 * (int64_t)&g3 + a1;
        int64_t v23 = 0;
        int64_t v24 = 0;
        int16_t v25 = *(int16_t *)(v22 + (int64_t)&g20 + 2 * v24); // 0x3ca77
        int64_t v26 = v23; // 0x3ca7e
        int64_t v27; // 0x3c9ec
        if (v25 != 0) {
            // 0x3ca80
            v27 = (0x100000000 * v23 >> 30) + v3;
            *(int16_t *)(v27 + (int64_t)&g7) = v25;
            *(int16_t *)(v27 + (int64_t)&g8) = (int16_t)v24;
            v26 = v23 + 1 & 0xffffffff;
        }
        // 0x3ca96
        v8 = v26;
        int64_t v28 = v24 + 1; // 0x3ca96
        while (v4 >> 32 > v28) {
            // 0x3ca77
            v23 = v8;
            v24 = v28;
            v25 = *(int16_t *)(v22 + (int64_t)&g20 + 2 * v24);
            v26 = v23;
            if (v25 != 0) {
                // 0x3ca80
                v27 = (0x100000000 * v23 >> 30) + v3;
                *(int16_t *)(v27 + (int64_t)&g7) = v25;
                *(int16_t *)(v27 + (int64_t)&g8) = (int16_t)v24;
                v26 = v23 + 1 & 0xffffffff;
            }
            // 0x3ca96
            v8 = v26;
            v28 = v24 + 1;
        }
        // 0x3ca9f
        int64_t v29; // bp-2112, 0x3c9ec
        __asm_rep_stosd_memset((char *)&v29, 0, (int64_t)&g2);
        int32_t v30 = v8; // 0x3cab3
        int64_t v31; // bp-4416, 0x3c9ec
        int64_t v32 = (int64_t)&v31; // 0x3cab6
        int64_t v33; // 0x3c9ec
        if (v30 == 0) {
            // 0x3ca9f
            v33 = v8 & 0xffffffff;
        } else {
            int64_t v34 = v3 + (int64_t)&g32; // 0x3cacc
            int64_t v35 = v3 + (int64_t)&g1; // 0x3cad3
            int64_t v36 = v8 & 0xffffffff;
            int64_t v37 = 0; // 0x3cac3
            uint32_t v38 = *(int32_t *)(4 * v37 + v32); // 0x3cac0
            v37++;
            int32_t * v39 = (int32_t *)(v34 + (int64_t)(4 * v38 & 1020)); // 0x3cacc
            *v39 = *v39 + 1;
            int32_t * v40 = (int32_t *)(v35 + (int64_t)(v38 / 64 & 1020)); // 0x3cad3
            *v40 = *v40 + 1;
            v33 = v36;
            while (v37 != v36) {
                // 0x3cac0
                v38 = *(int32_t *)(4 * v37 + v32);
                v37++;
                v39 = (int32_t *)(v34 + (int64_t)(4 * v38 & 1020));
                *v39 = *v39 + 1;
                v40 = (int32_t *)(v35 + (int64_t)(v38 / 64 & 1020));
                *v40 = *v40 + 1;
                v33 = v36;
            }
        }
        int64_t v41 = v3 + 168; // 0x3cb08
        int64_t v42 = (int64_t)&v29; // 0x3caf9
        int64_t v43 = 0;
        int64_t v44; // bp-3264, 0x3c9ec
        v15 = (int64_t)&v44;
        int64_t v45 = v32;
        int32_t v46 = 0; // 0x3cb06
        int64_t v47 = 0;
        *(int32_t *)(v47 + v41) = v46;
        int64_t v48 = v47 + 4; // 0x3cb12
        v46 += *(int32_t *)(v47 + v42);
        while (v48 != (int64_t)&g5) {
            // 0x3cb08
            v47 = v48;
            *(int32_t *)(v47 + v41) = v46;
            v48 = v47 + 4;
            v46 += *(int32_t *)(v47 + v42);
        }
        int64_t v49; // 0x3c9ec
        uint32_t v50; // 0x3cb2a
        int64_t v51; // 0x3cb26
        uint16_t v52; // 0x3cb26
        int32_t * v53; // 0x3cb2f
        uint32_t v54; // 0x3cb2f
        int64_t v55; // 0x3cb46
        if (v30 != 0) {
            // 0x3cb26
            v50 = 8 * (int32_t)v43 & 24;
            v55 = 0;
            v51 = 4 * v55 + v45;
            v52 = *(int16_t *)v51;
            v49 = v52;
            if (v50 != 0) {
                v49 = (int32_t)v52 >> v50;
            }
            // 0x3cb21
            v53 = (int32_t *)((4 * v49 & 1020) + v41);
            v54 = *v53;
            *v53 = v54 + 1;
            v55++;
            *(int32_t *)(4 * (int64_t)v54 + v15) = *(int32_t *)v51;
            while (v55 != v33) {
                // 0x3cb26
                v51 = 4 * v55 + v45;
                v52 = *(int16_t *)v51;
                v49 = v52;
                if (v50 != 0) {
                    v49 = (int32_t)v52 >> v50;
                }
                // 0x3cb21
                v53 = (int32_t *)((4 * v49 & 1020) + v41);
                v54 = *v53;
                *v53 = v54 + 1;
                v55++;
                *(int32_t *)(4 * (int64_t)v54 + v15) = *(int32_t *)v51;
            }
        }
        int64_t v56 = v43 + 1; // 0x3cb4f
        int32_t v57; // 0x3c9ec
        while ((v57 != v30 ? 2 : 1) != (int32_t)v56) {
            int64_t v58 = v15; // 0x3cb67
            v42 += (int64_t)&g5;
            v43 = v56 & 0xffffffff;
            v15 = v45;
            v45 = v58;
            v46 = 0;
            v47 = 0;
            *(int32_t *)(v47 + v41) = v46;
            v48 = v47 + 4;
            v46 += *(int32_t *)(v47 + v42);
            while (v48 != (int64_t)&g5) {
                // 0x3cb08
                v47 = v48;
                *(int32_t *)(v47 + v41) = v46;
                v48 = v47 + 4;
                v46 += *(int32_t *)(v47 + v42);
            }
            if (v30 != 0) {
                // 0x3cb26
                v50 = 8 * (int32_t)v43 & 24;
                v55 = 0;
                v51 = 4 * v55 + v45;
                v52 = *(int16_t *)v51;
                v49 = v52;
                if (v50 != 0) {
                    v49 = (int32_t)v52 >> v50;
                }
                // 0x3cb21
                v53 = (int32_t *)((4 * v49 & 1020) + v41);
                v54 = *v53;
                *v53 = v54 + 1;
                v55++;
                *(int32_t *)(4 * (int64_t)v54 + v15) = *(int32_t *)v51;
                while (v55 != v33) {
                    // 0x3cb26
                    v51 = 4 * v55 + v45;
                    v52 = *(int16_t *)v51;
                    v49 = v52;
                    if (v50 != 0) {
                        v49 = (int32_t)v52 >> v50;
                    }
                    // 0x3cb21
                    v53 = (int32_t *)((4 * v49 & 1020) + v41);
                    v54 = *v53;
                    *v53 = v54 + 1;
                    v55++;
                    *(int32_t *)(4 * (int64_t)v54 + v15) = *(int32_t *)v51;
                }
            }
            // 0x3cb4f
            v56 = v43 + 1;
        }
        if (v30 != 0) {
            if (v30 != 1) {
                // 0x3cb84
                v18 = v8 + 0xffffffff & 0xffffffff;
                int16_t * v59 = (int16_t *)v15; // 0x3cb8e
                *v59 = *v59 + *(int16_t *)(v15 + 4);
                v16 = 1;
                v12 = 0;
                v9 = 2;
                if (v18 > 1) {
                    while (true) {
                      lab_0x3cba2:
                        // 0x3cba2
                        v10 = v9;
                        v13 = v12;
                        v17 = v16;
                        v19 = (int16_t *)((0x100000000 * v13 >> 30) + v15);
                        v20 = *v19;
                        if (v8 > v10) {
                            uint16_t v60 = *(int16_t *)((0x100000000 * v10 >> 30) + v15); // 0x3cbb6
                            if (v60 > v20) {
                                goto lab_0x3cbc0;
                            } else {
                                // 0x3cbce
                                *(int16_t *)(4 * v17 + v15) = v60;
                                v11 = v10 + 1 & 0xffffffff;
                                v14 = v13;
                                goto lab_0x3cbd4;
                            }
                        } else {
                            goto lab_0x3cbc0;
                        }
                    }
                }
              lab_0x3cc13:;
                int64_t v61 = 0x100000000 * v8;
                *(int16_t *)((v61 >> 30) - 8 + v15) = 0;
                int64_t v62 = v61 - 0x300000000 >> 32; // 0x3cc21
                if ((int32_t)v62 != -1) {
                    int16_t * v63 = (int16_t *)(4 * v62 + v15); // 0x3cc28
                    *v63 = *(int16_t *)(4 * (int64_t)*v63 + v15) + 1;
                    int64_t v64 = v62 - 1; // 0x3cc36
                    int64_t v65 = v64; // 0x3cc26
                    while ((int32_t)v64 != -1) {
                        // 0x3cc28
                        v63 = (int16_t *)(4 * v65 + v15);
                        *v63 = *(int16_t *)(4 * (int64_t)*v63 + v15) + 1;
                        v64 = v65 - 1;
                        v65 = v64;
                    }
                }
                int64_t v66 = a5;
                int64_t v67 = v8 + 0xfffffffe;
                int64_t v68 = 0x100000000 * v67;
                int64_t v69 = v68 >> 32; // 0x3cc44
                int64_t v70 = v69 & 0xffffffff; // 0x3cc49
                int64_t v71 = v67 - v69; // 0x3cc4c
                int64_t v72 = v71 & 0xffffffff; // 0x3cc4c
                int64_t v73 = v70; // 0x3cc51
                int64_t v74 = v71; // 0x3cc51
                int64_t v75 = v72; // 0x3cc51
                int64_t v76; // 0x3c9ec
                int64_t v77; // 0x3c9ec
                int64_t v78; // 0x3cc49
                int64_t v79; // 0x3cc4c
                int64_t v80; // 0x3cc4c
                int32_t v81; // 0x3cc58
                if ((int32_t)v69 != -1) {
                    // 0x3cc53
                    v81 = v66;
                    v76 = v69;
                    v73 = v70;
                    v74 = v71;
                    v75 = v72;
                    if ((int32_t)*(int16_t *)((v68 >> 30) + v15) == v81) {
                        v77 = v76 - 1;
                        v78 = v77 & 0xffffffff;
                        v79 = v67 - v77;
                        v80 = v79 & 0xffffffff;
                        v73 = v78;
                        v74 = v79;
                        v75 = v80;
                        while ((int32_t)v77 != -1) {
                            // 0x3cc53
                            v76 = v77;
                            v73 = v78;
                            v74 = v79;
                            v75 = v80;
                            if ((int32_t)*(int16_t *)(4 * v77 + v15) != v81) {
                                // break -> 0x3cc5d
                                break;
                            }
                            v77 = v76 - 1;
                            v78 = v77 & 0xffffffff;
                            v79 = v67 - v77;
                            v80 = v79 & 0xffffffff;
                            v73 = v78;
                            v74 = v79;
                            v75 = v80;
                        }
                    }
                }
                uint64_t v82 = v75;
                int64_t v83 = 0x100000000 * v18 >> 32; // 0x3cc5d
                int64_t v84 = 1 - v18; // 0x3cc60
                int64_t v85 = v83; // 0x3cc6e
                int64_t v86; // 0x3cc75
                if ((v83 + v84 & 0xffffffff) > v82) {
                    // 0x3cc70
                    v86 = v83;
                    *(int16_t *)(4 * v86 + v15) = (int16_t)v66;
                    v86--;
                    v85 = v86;
                    while ((v86 + v84 & 0xffffffff) > v82) {
                        // 0x3cc70
                        *(int16_t *)(4 * v86 + v15) = (int16_t)v66;
                        v86--;
                        v85 = v86;
                    }
                }
                uint32_t v87 = 2 * (int32_t)v74; // 0x3cc7f
                while (v87 != 0) {
                    int64_t v88 = v85 & 0xffffffff; // 0x3cc8c
                    v66 = v66 + 1 & 0xffffffff;
                    v67 = v73;
                    v68 = 0x100000000 * v67;
                    v69 = v68 >> 32;
                    v70 = v69 & 0xffffffff;
                    v71 = v67 - v69;
                    v72 = v71 & 0xffffffff;
                    v73 = v70;
                    v74 = v71;
                    v75 = v72;
                    if ((int32_t)v69 != -1) {
                        // 0x3cc53
                        v81 = v66;
                        v76 = v69;
                        v73 = v70;
                        v74 = v71;
                        v75 = v72;
                        if ((int32_t)*(int16_t *)((v68 >> 30) + v15) == v81) {
                            v77 = v76 - 1;
                            v78 = v77 & 0xffffffff;
                            v79 = v67 - v77;
                            v80 = v79 & 0xffffffff;
                            v73 = v78;
                            v74 = v79;
                            v75 = v80;
                            while ((int32_t)v77 != -1) {
                                // 0x3cc53
                                v76 = v77;
                                v73 = v78;
                                v74 = v79;
                                v75 = v80;
                                if ((int32_t)*(int16_t *)(4 * v77 + v15) != v81) {
                                    // break -> 0x3cc5d
                                    break;
                                }
                                v77 = v76 - 1;
                                v78 = v77 & 0xffffffff;
                                v79 = v67 - v77;
                                v80 = v79 & 0xffffffff;
                                v73 = v78;
                                v74 = v79;
                                v75 = v80;
                            }
                        }
                    }
                    // 0x3cc5d
                    v82 = v75;
                    v83 = 0x100000000 * v88 >> 32;
                    v84 = (int64_t)v87 - v88;
                    v85 = v83;
                    if ((v83 + v84 & 0xffffffff) > v82) {
                        // 0x3cc70
                        v86 = v83;
                        *(int16_t *)(4 * v86 + v15) = (int16_t)v66;
                        v86--;
                        v85 = v86;
                        while ((v86 + v84 & 0xffffffff) > v82) {
                            // 0x3cc70
                            *(int16_t *)(4 * v86 + v15) = (int16_t)v66;
                            v86--;
                            v85 = v86;
                        }
                    }
                    // 0x3cc7a
                    v87 = 2 * (int32_t)v74;
                }
            } else {
                // 0x3cb78
                *(int16_t *)v15 = 1;
            }
            if (v8 > 0) {
                int64_t v89 = 0; // 0x3cc97
                uint16_t v90 = *(int16_t *)(4 * v89 + v15); // 0x3cc93
                v89++;
                int32_t * v91 = (int32_t *)(v3 + 36 + 4 * (int64_t)v90); // 0x3cc9a
                *v91 = *v91 + 1;
                while (v89 != v8) {
                    // 0x3cc93
                    v90 = *(int16_t *)(4 * v89 + v15);
                    v89++;
                    v91 = (int32_t *)(v3 + 36 + 4 * (int64_t)v90);
                    *v91 = *v91 + 1;
                }
            }
            if (v30 != 1) {
                int64_t v92 = 0x100000000 * a4;
                int32_t * v93 = (int32_t *)((v92 >> 30) + v21);
                int64_t v94 = v92 + 0x100000000 >> 32;
                int64_t v95 = v94 + 1; // 0x3ccc0
                int32_t v96 = *(int32_t *)(4 * v94 + v21) + *v93; // 0x3ccc3
                *v93 = v96;
                int32_t v97 = v96; // 0x3ccc9
                while ((int32_t)v95 < 33) {
                    // 0x3ccbd
                    v94 = v95;
                    v95 = v94 + 1;
                    v96 = *(int32_t *)(4 * v94 + v21) + v97;
                    *v93 = v96;
                    v97 = v96;
                }
                int64_t v98 = v92 >> 32;
                int32_t v99 = *(int32_t *)(4 * v98 + v21); // 0x3cccd
                int64_t v100 = v98 - 1; // 0x3ccd6
                int64_t v101 = (int64_t)(v99 << (int32_t)(a4 - v98) % 32) & 0xffffffff; // 0x3ccdc
                int32_t v102 = v100; // 0x3ccdf
                int64_t v103 = v101; // 0x3cce1
                while (v102 >= 0 == (v102 != 0)) {
                    // 0x3cccd
                    v98 = v100;
                    v99 = *(int32_t *)(4 * v98 + v21);
                    v100 = v98 - 1;
                    v101 = v103 + (int64_t)(v99 << (int32_t)(a4 - v98) % 32) & 0xffffffff;
                    v102 = v100;
                    v103 = v101;
                }
                int64_t v104 = 1 << a4 % 64;
                if (v101 != v104) {
                    int64_t v105 = a4 + 0xffffffff; // 0x3cce3
                    int32_t v106 = v96; // 0x3c9ec
                    int64_t v107 = v101; // 0x3cd31
                    while (true) {
                        // 0x3cd06
                        *v93 = v106 - 1;
                        int64_t v108 = 0;
                        int64_t v109 = 0x100000000 * v105 >> 32;
                        int64_t v110 = 4 * v109; // 0x3cd0e
                        int32_t v111 = *(int32_t *)(v110 + v21); // 0x3cd0e
                        while (v111 == 0) {
                            int64_t v112 = v109 - 1; // 0x3cd26
                            int32_t v113 = v112; // 0x3cd2d
                            int64_t v114 = v108 - 4; // 0x3cd2f
                            if (v113 >= 0 != v113 != 0) {
                                goto lab_0x3cd31;
                            }
                            v108 = v114;
                            v109 = v112;
                            v110 = 4 * v109;
                            v111 = *(int32_t *)(v110 + v21);
                        }
                        // 0x3cd1a
                        *(int32_t *)((4 * v105 & 0x3fffffffc) + v21 + v108) = v111 - 1;
                        int32_t * v115 = (int32_t *)(v110 + (v21 | 4)); // 0x3cd1f
                        *v115 = *v115 + 2;
                      lab_0x3cd31:
                        // 0x3cd31
                        v107 = v107 + 0xffffffff & 0xffffffff;
                        if (v107 == v104) {
                            // break -> 0x3cd35
                            break;
                        }
                        // 0x3cd31
                        v106 = *v93;
                    }
                }
            }
        }
        int64_t v116 = a1 + (int64_t)&g29 + 288 * v7;
        __asm_rep_stosd_memset((char *)v116, 0, 72);
        __asm_rep_stosd_memset((char *)(v22 + (int64_t)&g28), 0, 144);
        int64_t v117 = v8; // 0x3cd7a
        uint64_t v118 = 1;
        int32_t v119 = *(int32_t *)(v3 + 36 + 4 * v118); // 0x3cd7d
        int64_t v120 = 0x100000000 * v117 >> 32; // 0x3cd81
        int32_t v121 = v119 - (int32_t)v117; // 0x3cd87
        uint16_t v122; // 0x3cd92
        int64_t v123; // 0x3cd98
        if (v121 + (int32_t)v120 >= 1) {
            // 0x3cd92
            v123 = v120;
            v122 = *(int16_t *)(v15 - 2 + 4 * v123);
            v123--;
            *(char *)(v116 + (int64_t)v122) = (char)v118;
            while (v121 + (int32_t)v123 >= 1) {
                // 0x3cd92
                v122 = *(int16_t *)(v15 - 2 + 4 * v123);
                v123--;
                *(char *)(v116 + (int64_t)v122) = (char)v118;
            }
        }
        int64_t v124 = v118 + 1; // 0x3cdb2
        v117 = v117 - (int64_t)(v119 > 0 ? v119 : 0) & 0xffffffff;
        while (v1 > v118) {
            // 0x3cd7d
            v118 = v124;
            v119 = *(int32_t *)(v3 + 36 + 4 * v118);
            v120 = 0x100000000 * v117 >> 32;
            v121 = v119 - (int32_t)v117;
            if (v121 + (int32_t)v120 >= 1) {
                // 0x3cd92
                v123 = v120;
                v122 = *(int16_t *)(v15 - 2 + 4 * v123);
                v123--;
                *(char *)(v116 + (int64_t)v122) = (char)v118;
                while (v121 + (int32_t)v123 >= 1) {
                    // 0x3cd92
                    v122 = *(int16_t *)(v15 - 2 + 4 * v123);
                    v123--;
                    *(char *)(v116 + (int64_t)v122) = (char)v118;
                }
            }
            // 0x3cda4
            v124 = v118 + 1;
            v117 = v117 - (int64_t)(v119 > 0 ? v119 : 0) & 0xffffffff;
        }
    } else {
        int64_t v125 = 0; // 0x3ca3f
        unsigned char v126 = *(char *)(a1 + (int64_t)&g29 + 288 * v7 + v125); // 0x3ca42
        v125++;
        int32_t * v127 = (int32_t *)(v3 + 36 + 4 * (int64_t)v126); // 0x3ca4d
        *v127 = *v127 + 1;
        while (v4 >> 32 > v125) {
            // 0x3ca42
            v126 = *(char *)(a1 + (int64_t)&g29 + 288 * v7 + v125);
            v125++;
            v127 = (int32_t *)(v3 + 36 + 4 * (int64_t)v126);
            *v127 = *v127 + 1;
        }
    }
    int64_t v128 = v3 + (int64_t)&g32; // 0x3cdcc
    int32_t v129 = 0; // 0x3cdc4
    for (uint64_t i = 2; i < v1 + 1; i++) {
        int64_t v130 = 4 * i; // 0x3cdc6
        v129 = 2 * (*(int32_t *)(v3 + 32 + v130) + v129);
        *(int32_t *)(v130 + v128) = v129;
    }
    int64_t v131 = 288 * v7;
    int64_t v132 = v131 + a1; // 0x3cde7
    int64_t v133 = v131 + (int64_t)&g28 + v132;
    int64_t v134 = 0;
    unsigned char v135 = *(char *)(v132 + (int64_t)&g29 + v134); // 0x3cded
    int64_t v136; // 0x3c9ec
    int64_t v137; // 0x3c9ec
    int64_t v138; // 0x3cded
    int32_t * v139; // 0x3cdfc
    uint32_t v140; // 0x3cdfc
    int64_t v141; // 0x3ce1a
    int64_t v142; // 0x3ce22
    if (v135 != 0) {
        // 0x3ce15
        v138 = v135;
        v139 = (int32_t *)(4 * v138 + v128);
        v140 = *v139;
        *v139 = v140 + 1;
        v136 = v140;
        v141 = v138;
        v141 = v141 + 0xffffffff & 0xffffffff;
        v142 = v136 % 2;
        v137 = v142;
        v136 /= 2;
        while (v141 != 0) {
            // 0x3ce15
            v141 = v141 + 0xffffffff & 0xffffffff;
            v142 = 2 * v137 & 0xfffffffe | v136 % 2;
            v137 = v142;
            v136 /= 2;
        }
        // 0x3ce27
        *(int16_t *)(v133 + 2 * v134) = (int16_t)v142;
    }
    int64_t v143 = v134 + 1; // 0x3ce2f
    while (v4 >> 32 > v143) {
        // 0x3cded
        v134 = v143;
        v135 = *(char *)(v132 + (int64_t)&g29 + v134);
        if (v135 != 0) {
            // 0x3ce15
            v138 = v135;
            v139 = (int32_t *)(4 * v138 + v128);
            v140 = *v139;
            *v139 = v140 + 1;
            v136 = v140;
            v141 = v138;
            v141 = v141 + 0xffffffff & 0xffffffff;
            v142 = v136 % 2;
            v137 = v142;
            v136 /= 2;
            while (v141 != 0) {
                // 0x3ce15
                v141 = v141 + 0xffffffff & 0xffffffff;
                v142 = 2 * v137 & 0xfffffffe | v136 % 2;
                v137 = v142;
                v136 /= 2;
            }
            // 0x3ce27
            *(int16_t *)(v133 + 2 * v134) = (int16_t)v142;
        }
        // 0x3ce2f
        v143 = v134 + 1;
    }
    int64_t result = 0; // 0x3ce49
    if (v5 != __readfsqword(40)) {
        // 0x3ce4b
        __stack_chk_fail();
        result = (int64_t)&g34;
    }
    // 0x3ce50
    return result;
  lab_0x3cbc0:
    // 0x3cbc0
    *(int16_t *)(4 * v17 + v15) = v20;
    *v19 = (int16_t)v17;
    v11 = v10;
    v14 = v13 + 1 & 0xffffffff;
    goto lab_0x3cbd4;
  lab_0x3cbd4:;
    int64_t v144 = v14;
    int64_t v145 = v11;
    int16_t * v146; // 0x3c9ec
    int16_t v147; // 0x3c9ec
    uint16_t v148; // 0x3cbdf
    if (v8 > v145) {
        // 0x3cbd9
        v148 = *(int16_t *)((0x100000000 * v145 >> 30) + v15);
        if (v17 > v144) {
            int16_t * v149 = (int16_t *)((0x100000000 * v144 >> 30) + v15);
            uint16_t v150 = *v149; // 0x3cbe8
            v147 = v150;
            v146 = v149;
            if (v150 >= v148) {
                goto lab_0x3cc08;
            } else {
                goto lab_0x3cbef;
            }
        } else {
            goto lab_0x3cc08;
        }
    } else {
        int16_t * v151 = (int16_t *)((0x100000000 * v144 >> 30) + v15); // 0x3cbf8
        v147 = *v151;
        v146 = v151;
        goto lab_0x3cbef;
    }
  lab_0x3cc08:;
    int16_t * v152 = (int16_t *)(4 * v17 + v15); // 0x3cc08
    *v152 = *v152 + v148;
    int64_t v153 = v145 + 1 & 0xffffffff; // 0x3cc0c
    int64_t v154 = v144; // 0x3cc0c
    goto lab_0x3cc0e;
  lab_0x3cbef:;
    int16_t * v156 = (int16_t *)(4 * v17 + v15); // 0x3cbfd
    *v156 = *v156 + v147;
    *v146 = (int16_t)v17;
    v153 = v145;
    v154 = v144 + 1 & 0xffffffff;
    goto lab_0x3cc0e;
  lab_0x3cc0e:;
    int64_t v155 = v17 + 1; // 0x3cc0e
    v16 = v155;
    v12 = v154;
    v9 = v153;
    if (v155 == v18) {
        // break -> 0x3cc13
        goto lab_0x3cc13;
    }
    goto lab_0x3cba2;
}

// Address range: 0x5eba0 - 0x5efd2
int64_t function_5eba0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x5ebb6
    int64_t v2 = (int64_t)&g21; // bp-3000, 0x5ebe5
    int64_t v3; // bp-2992, 0x5eba0
    function_6aba4(&v3);
    int64_t v4; // bp-3026, 0x5eba0
    int64_t v5 = (int64_t)&v4; // 0x5ebf7
    int32_t v6; // bp-3192, 0x5eba0
    function_5cb26((int64_t *)&v6, a1 & 0xffffffff);
    function_59e46(&v2);
    int64_t v7 = 0; // 0x5ec0c
    *(char *)(v7 + v5) = 0;
    v7++;
    int64_t v8 = 0x66f72534a7371407; // 0x5ec19
    int64_t v9 = 0; // 0x5ec19
    while (v7 != 17) {
        // 0x5ec0e
        *(char *)(v7 + v5) = 0;
        v7++;
        v8 = 0x66f72534a7371407;
        v9 = 0;
    }
    int32_t v10 = *(int32_t *)(v9 + (int64_t)&g12); // 0x5ec5c
    *(int32_t *)(v9 + v5) = v10 ^ (int32_t)v8;
    int64_t v11 = v9 + 4; // 0x5ec67
    v8 = 0xbe39b193 * (v8 & 0xffffffff) + 0xffffcfc6;
    v9 = v11;
    while (v11 != 16) {
        // 0x5ec4c
        v10 = *(int32_t *)(v9 + (int64_t)&g12);
        *(int32_t *)(v9 + v5) = v10 ^ (int32_t)v8;
        v11 = v9 + 4;
        v8 = 0xbe39b193 * (v8 & 0xffffffff) + 0xffffcfc6;
        v9 = v11;
    }
    // 0x5ec6d
    int64_t v12; // bp-3039, 0x5eba0
    int64_t v13 = (int64_t)&v12; // 0x5ec98
    *(char *)(v5 + 16) = 0;
    int32_t v14; // bp-3112, 0x5eba0
    int64_t v15; // 0x5eba0
    function_5cab4((int64_t *)&v14, &v4, v5, (int64_t)&g12, v15);
    for (int64_t i = 0; i < 13; i++) {
        // 0x5ecb2
        *(char *)(i + v13) = 0;
    }
    int64_t v16 = 0; // 0x5ed0d
    int64_t v17 = 0x7e5ed8a9;
    int32_t v18 = *(int32_t *)(v16 + (int64_t)(int32_t)&g13) ^ 0x7e5ed8a9; // 0x5ed08
    *(int32_t *)(v16 + v13) = v18;
    v16 += 4;
    uint32_t v19 = (int32_t)(0x2000 * v17 ^ v17); // 0x5ece2
    int32_t v20 = v19 / 0x20000 ^ v19; // 0x5ece7
    int32_t v21 = 32 * v20 ^ -1 - v20; // 0x5ecf4
    while (v16 != 12) {
        // 0x5ecfa
        v17 = v21;
        v18 = *(int32_t *)(v16 + (int64_t)(int32_t)&g13) ^ v21;
        *(int32_t *)(v16 + v13) = v18;
        v16 += 4;
        v19 = (int32_t)(0x2000 * v17 ^ v17);
        v20 = v19 / 0x20000 ^ v19;
        v21 = 32 * v20 ^ -1 - v20;
    }
    int64_t v22 = v14; // 0x5ecab
    *(char *)(v13 + 12) = 0;
    int64_t v23; // bp-3120, 0x5eba0
    function_5cab4(&v23, &v12, v22, (int64_t)(v18 & -256 ^ -0x64a39f00), (int64_t)&g13);
    function_59f20(&v2, v23, v22);
    function_2508e((int64_t)&v23);
    function_24dff(&v12, 13);
    function_2508e((int64_t)&v14);
    function_24dff(&v4, 17);
    int64_t v24 = 0; // 0x5ed8e
    *(char *)(v24 + v5) = 0;
    v24++;
    int64_t v25 = 0; // 0x5ed9c
    while (v24 != 26) {
        // 0x5ed90
        *(char *)(v24 + v5) = 0;
        v24++;
        v25 = 0;
    }
    int32_t v26 = *(int32_t *)(v25 + (int64_t)&g9); // 0x5edd3
    int32_t v27 = v26 ^ (int32_t)0x4bb8c3fe206169e5; // 0x5edd7
    *(int32_t *)(v25 + v5) = v27;
    int64_t v28 = v25 + 4; // 0x5eddc
    int64_t v29 = 0x17c7e24fe9eecaeb; // 0x5edc5
    int64_t v30 = v29 & 0xffffffff; // 0x5edc7
    v25 = v28;
    while (v28 != 24) {
        // 0x5edc9
        v26 = *(int32_t *)(v25 + (int64_t)&g9);
        v27 = v26 ^ (int32_t)v29;
        *(int32_t *)(v25 + v5) = v27;
        v28 = v25 + 4;
        v29 = 0xbc02bc03 * v30 + 0xff3c613c;
        v30 = v29 & 0xffffffff;
        v25 = v28;
    }
    // 0x5ede2
    v23 = (int64_t)&g9;
    v14 = v5;
    unsigned char v31 = *(char *)&g10; // 0x5edfe
    int64_t v32 = ((int64_t)v31 | (int64_t)(v27 & -256)) ^ 0xd4e9966d; // 0x5ee06
    *(char *)((0x100000000 * v5 >> 32) + 24) = (char)v32;
    int64_t v33 = v14; // 0x5ee11
    *(char *)(v33 + 25) = 0;
    int64_t v34; // bp-3176, 0x5eba0
    function_5cab4(&v34, &v4, v33, v32, (int64_t)&g9);
    v12 = 0;
    int64_t v35 = 0; // 0x5ee8d
    int64_t v36 = 0x6cbc730;
    uint32_t v37 = *(int32_t *)(v35 + (int64_t)&g11) ^ 0x6cbc730; // 0x5ee88
    *(int32_t *)(v35 + v13) = v37;
    v35 += 4;
    uint32_t v38 = (int32_t)(0x2000 * v36 ^ v36); // 0x5ee63
    int32_t v39 = v38 / 0x20000 ^ v38; // 0x5ee68
    int32_t v40 = (32 * v39 ^ v39) / 16 | 0x10000000 * v39; // 0x5ee71
    while (v35 != 8) {
        // 0x5ee7a
        v36 = v40;
        v37 = *(int32_t *)(v35 + (int64_t)&g11) ^ v40;
        *(int32_t *)(v35 + v13) = v37;
        v35 += 4;
        v38 = (int32_t)(0x2000 * v36 ^ v36);
        v39 = v38 / 0x20000 ^ v38;
        v40 = (32 * v39 ^ v39) / 16 | 0x10000000 * v39;
    }
    int64_t v41 = 0xe8659d52; // 0x5eba0
    int64_t v42 = v37; // 0x5eeab
    int64_t v43 = 8; // 0x5eeb3
    unsigned char v44 = *(char *)(v43 + (int64_t)&g11); // 0x5eea7
    v42 = (v42 & 0xffffff00 | (int64_t)v44) ^ v41;
    *(char *)(v43 + v13) = (char)v42;
    v43++;
    v41 /= 256;
    while (v43 != 11) {
        // 0x5ee9d
        v44 = *(char *)(v43 + (int64_t)&g11);
        v42 = (v42 & 0xffffff00 | (int64_t)v44) ^ v41;
        *(char *)(v43 + v13) = (char)v42;
        v43++;
        v41 /= 256;
    }
    // 0x5eebc
    int64_t v45; // bp-3184, 0x5eba0
    function_5cab4(&v45, &v12, v34, v42, (int64_t)&g11);
    function_59f20(&v2, v45, v34);
    function_2508e((int64_t)&v45);
    function_24dff(&v12, 11);
    function_2508e((int64_t)&v34);
    function_24dff(&v4, 26);
    function_59e48(&v2, &g31);
    function_59e52(&v2, &g31);
    function_59e5c(&v2, &g31);
    int64_t v46 = *(int64_t *)(a2 + 8); // 0x5ef3f
    int64_t v47 = function_5a160(&v2, (int64_t)v6, 443, (int64_t)&g31, (int32_t)v46 - (int32_t)&g31, 0); // 0x5ef56
    int64_t v48 = v47; // 0x5ef5d
    if ((char)v47 != 0) {
        // 0x5ef5f
        v48 = (int32_t)function_59faa(&v2, 0, 0) < 300;
    }
    // 0x5ef76
    function_5a254(&v2);
    function_2508e((int64_t)&v6);
    v2 = (int64_t)&g21;
    int64_t result = function_6af9a(&v3) & -256 | v48 % 256; // 0x5efb9
    if (v1 != __readfsqword(40)) {
        // 0x5efbb
        __stack_chk_fail();
        result = (int64_t)&g34;
    }
    // 0x5efc0
    return result;
}

// Address range: 0x69c7c - 0x6a114
int64_t function_69c7c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = __readfsqword(40); // 0x69c97
    char * v2; // bp-144, 0x69c7c
    function_69166((int64_t *)&v2, (int64_t)"\r\n\r\n");
    int32_t * v3 = (int32_t *)a2; // 0x69cd5
    *v3 = 0;
    int64_t * v4 = (int64_t *)a3; // 0x69ce2
    *v4 = 0;
    int64_t * v5 = (int64_t *)a4; // 0x69cee
    *v5 = 0;
    function_6a710(a5);
    uint64_t v6 = *(int64_t *)(a5 - 24); // 0x69d02
    int64_t v7; // 0x69c7c
    int64_t v8; // 0x69c7c
    int64_t * v9; // bp-88, 0x69c7c
    if (v6 == 0) {
        // 0x6a0fd
        v8 = 0;
        goto lab_0x6a0d8;
    } else {
        int64_t v10 = (int64_t)v2; // 0x69d0f
        uint64_t v11 = *(int64_t *)(v10 - 24); // 0x69d14
        v7 = 0;
        if (v11 == 0) {
            goto lab_0x69da1;
        } else {
            // 0x69d21
            v9 = (int64_t *)(int64_t)*v2;
            if (v11 <= v6) {
                int64_t v12 = function_504cb(a5, 1 - v11 + v6, (int64_t)&v9); // 0x69d5e
                while (v12 != 0) {
                    // 0x69d6f
                    if ((int32_t)function_5bfa4(v12, v10, v11) == 0) {
                        int64_t v13 = v12 - a5; // 0x69d81
                        v7 = v13;
                        if (v13 == -1) {
                            // 0x6a0fd
                            v8 = 0;
                            goto lab_0x6a0d8;
                        } else {
                            goto lab_0x69da1;
                        }
                    }
                    int64_t v14 = v6 + a5 + -1 - v12; // 0x69d9c
                    if (v11 > v14) {
                        // break -> 0x6a0fd
                        break;
                    }
                    v12++;
                }
            }
            // 0x6a0fd
            v8 = 0;
            goto lab_0x6a0d8;
        }
    }
  lab_0x6a0d8:;
    int64_t v15 = function_2508e((int64_t)&v2); // 0x6a0dd
    if (v1 == __readfsqword(40)) {
        // 0x6a102
        return v15 & -256 | v8;
    }
    // 0x6a0f8
    __stack_chk_fail();
    // 0x6a0fd
    v8 = 0;
    goto lab_0x6a0d8;
  lab_0x69da1:;
    // 0x69da1
    int64_t v16; // bp-136, 0x69c7c
    int64_t v17 = (int64_t)&v16; // 0x69db6
    function_36712(&v16, a1, 0, v7);
    int64_t v18 = 0; // 0x69dca
    int64_t v19; // 0x69c7c
    int64_t v20; // bp-112, 0x69c7c
    int64_t v21; // bp-120, 0x69c7c
    int64_t v22; // bp-128, 0x69c7c
    int64_t v23; // 0x69c7c
    int64_t v24; // 0x69e46
    int64_t v25; // 0x69c7c
    if (*(int64_t *)(v16 - 24) != 0) {
        // 0x69dd0
        *v4 = *(int64_t *)((int64_t)v2 - 24) + v7;
        function_69166((int64_t *)&v9, (int64_t)"\r\n");
        function_48e88e(&v20, v17, (char *)&v9);
        function_2508e((int64_t)&v9);
        if (v20 != v23) {
            // 0x69e2d
            function_69166(&v21, (int64_t)&g14);
            v24 = (int64_t)&v21;
            function_48e723((char *)&v9, v20, &v21);
            function_2508e(v24);
            int64_t v26 = 0x100000000000000 * (int64_t)v9 >> 56; // 0x69e59
            if (v23 - v26 >= 16) {
                // 0x69e76
                if (*(int64_t *)(*(int64_t *)v26 - 24) >= 6) {
                    // 0x69e84
                    function_36712(&v21, v26, 0, 5);
                    uint64_t v27 = *(int64_t *)(v21 - 24); // 0x69e9f
                    uint64_t v28 = function_24ded("HTTP/"); // 0x69ea8
                    int64_t v29 = v27 > v28 ? v28 : v27; // 0x69ec2
                    if ((int32_t)function_5bfa4(v21, (int64_t)"HTTP/", v29) == 0) {
                        int64_t v30 = v27 - v28; // 0x69ed2
                        if (v30 <= 0x7fffffff) {
                            if ((int32_t)v30 == 0) {
                                int64_t v31 = *(int64_t *)((0x100000000000000 * (int64_t)v9 >> 56) + 8); // 0x69ef4
                                int64_t v32 = *(int64_t *)(v31 - 24); // 0x69ef8
                                if (v32 != 0) {
                                    int64_t v33 = function_24ded("0123456789"); // 0x69f0b
                                    int64_t v34 = 0; // 0x69f10
                                    while (function_504cb((int64_t)"0123456789", v33, v34 + v31) != 0) {
                                        // 0x69f2f
                                        v34++;
                                        if (v32 == v34) {
                                            // 0x69f3f
                                            function_2508e(v24);
                                            int64_t v35 = *(int64_t *)((0x100000000000000 * (int64_t)v9 >> 56) + 8); // 0x69f5d
                                            *v3 = (int32_t)function_48dd5f(v35);
                                            if (v23 - v20 < 16) {
                                                goto lab_0x6a0a5;
                                            } else {
                                                int64_t v36 = v20 + 8;
                                                if (v36 == v23) {
                                                    goto lab_0x6a03a;
                                                } else {
                                                    // 0x69f90
                                                    v25 = (int64_t)&v22;
                                                    v19 = v36;
                                                    goto lab_0x69f90_2;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    // 0x69f3f
                    function_2508e(v24);
                }
            }
            // 0x6a0b9
            function_29c46((char *)&v9);
        }
        // 0x6a0c1
        function_29c46((char *)&v20);
        v18 = 0;
    }
    goto lab_0x6a0ce;
  lab_0x6a0ce:
    // 0x6a0ce
    function_2508e(v17);
    v8 = v18;
    goto lab_0x6a0d8;
  lab_0x6a0a5:
    // 0x6a0a5
    function_29c46((char *)&v9);
    function_29c46((char *)&v20);
    v18 = 1;
    goto lab_0x6a0ce;
  lab_0x6a03a:
    // 0x6a03a
    function_69166(&v21, (int64_t)"content-length");
    int64_t v37 = function_6a73c(a5, &v21); // 0x6a051
    function_2508e(v24);
    if (v37 == a5 + 8) {
        goto lab_0x6a0a5;
    } else {
        // 0x6a06f
        function_69166(&v21, (int64_t)"content-length");
        *v5 = 0x100000000 * function_48dd5f(*(int64_t *)function_6a8a4(a5, &v21)) >> 32;
        function_2508e(v24);
        goto lab_0x6a0a5;
    }
  lab_0x69f90_2:
    // 0x69f90
    v22 = (int64_t)&g27;
    v21 = (int64_t)&g27;
    int64_t v38; // 0x69c7c
    int64_t v39; // 0x69fbf
    int64_t v40; // 0x69fdc
    int64_t v41; // 0x69fe8
    if ((char)function_692e6(v19, &v22, &v21) == 0) {
        goto lab_0x6a021;
    } else {
        // 0x69fb7
        function_255da(&v22);
        v39 = v22;
        int64_t v42 = function_6a892(&v22); // 0x69fcc
        function_255da(&v22);
        v40 = v22;
        v41 = v42 - v40;
        v38 = 0;
        if (v41 == 0) {
            // 0x6a009
            function_29d94(function_5c3b0(a5, &v22, v41), &v21);
            goto lab_0x6a021;
        } else {
            goto lab_0x69ff0;
        }
    }
  lab_0x6a021:
    // 0x6a021
    function_2508e(v24);
    function_2508e(v25);
    int64_t v43 = v19 + 8;
    v19 = v43;
    if (v43 == v23) {
        goto lab_0x6a03a;
    } else {
        goto lab_0x69f90_2;
    }
  lab_0x69ff0:;
    char v44 = *(char *)(v38 + v40); // 0x69ff0
    char v45 = v44 == 90 | (int32_t)v44 < 90 ? v44 | 32 : v44;
    *(char *)(v38 + v39) = v45;
    int64_t v46 = v38 + 1; // 0x6a004
    v38 = v46;
    if (v41 == v46) {
        // 0x6a009
        function_29d94(function_5c3b0(a5, &v22, v41), &v21);
        goto lab_0x6a021;
    } else {
        goto lab_0x69ff0;
    }
}

// Address range: 0x4acba0 - 0x4ad04d
int64_t function_4acba0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1;
    int64_t v2 = a1; // 0x4acbaf
    int64_t result = a2 - a1; // 0x4acbb2
    if (result < 1) {
        // 0x4acdf0
        return result;
    }
    char v3 = a1;
    int64_t result2; // 0x4acba0
    int64_t v4; // 0x4acba0
    if (v3 != 23) {
        // 0x4acbca
        if (v3 != 24) {
            // 0x4acdf0
            return 0xffffdb9e;
        }
        int64_t * v5 = (int64_t *)a1;
        *v5 = a1 + 1;
        int64_t v6 = function_4afd30(); // 0x4acbe4
        if ((int32_t)v6 != 0) {
            // 0x4ace00
            return v6 - (int64_t)(int32_t)&g4 & 0xffffffff;
        }
        int32_t * v7 = (int32_t *)a3; // 0x4acbf5
        *v7 = 0;
        int64_t v8 = v1;
        char * v9 = (char *)v8; // 0x4acbff
        while (*v9 < 58) {
            int32_t v10 = 10 * *(int32_t *)&v2; // 0x4acc13
            *v7 = v10;
            int64_t v11 = v8 + 1; // 0x4acc1a
            *v7 = v10 - 48 + (int32_t)*v9;
            *v5 = v11;
            if (v8 == v1 + 3) {
                int32_t * v12 = (int32_t *)(a3 + 4); // 0x4acc2d
                *v12 = 0;
                unsigned char v13 = *(char *)v11; // 0x4acc34
                int64_t v14 = v13; // 0x4acc34
                v2 = v14;
                result2 = 0xffffdc00;
                if (v13 < 58) {
                    int64_t v15 = v8 + 2; // 0x4acc43
                    int64_t v16 = v14 + 0xffffffd0; // 0x4acc47
                    v2 = v16 & 0xffffffff;
                    *v12 = (int32_t)v16;
                    *v5 = v15;
                    char * v17 = (char *)v15; // 0x4acc51
                    result2 = 0xffffdc00;
                    if (*v17 < 58) {
                        int64_t v18 = 10 * v2; // 0x4acc64
                        *v12 = (int32_t)v18;
                        *v12 = (int32_t)(v18 + 0xffffffd0 + (int64_t)*v17);
                        int64_t v19 = v8 + 3; // 0x4acc74
                        *v5 = v19;
                        int32_t * v20 = (int32_t *)(a3 + 8); // 0x4acc7c
                        *v20 = 0;
                        unsigned char v21 = *(char *)v19; // 0x4acc83
                        int64_t v22 = v21; // 0x4acc83
                        v2 = v22;
                        result2 = 0xffffdc00;
                        if (v21 < 58) {
                            int64_t v23 = v8 + 4; // 0x4acc93
                            int64_t v24 = v22 + 0xffffffd0; // 0x4acc97
                            v2 = v24 & 0xffffffff;
                            *v20 = (int32_t)v24;
                            *v5 = v23;
                            char * v25 = (char *)v23; // 0x4acca1
                            result2 = 0xffffdc00;
                            if (*v25 < 58) {
                                int64_t v26 = 10 * v2; // 0x4accb4
                                *v20 = (int32_t)v26;
                                *v20 = (int32_t)(v26 + 0xffffffd0 + (int64_t)*v25);
                                int64_t v27 = v8 + 5; // 0x4accc4
                                *v5 = v27;
                                int32_t * v28 = (int32_t *)(a3 + 12); // 0x4acccc
                                *v28 = 0;
                                unsigned char v29 = *(char *)v27; // 0x4accd3
                                int64_t v30 = v29; // 0x4accd3
                                v2 = v30;
                                result2 = 0xffffdc00;
                                if (v29 < 58) {
                                    int64_t v31 = v8 + 6; // 0x4acce3
                                    int64_t v32 = v30 + 0xffffffd0; // 0x4acce7
                                    v2 = v32 & 0xffffffff;
                                    *v28 = (int32_t)v32;
                                    *v5 = v31;
                                    char * v33 = (char *)v31; // 0x4accf1
                                    result2 = 0xffffdc00;
                                    if (*v33 < 58) {
                                        int64_t v34 = 10 * v2; // 0x4acd04
                                        *v28 = (int32_t)v34;
                                        *v28 = (int32_t)(v34 + 0xffffffd0 + (int64_t)*v33);
                                        int64_t v35 = v8 + 7; // 0x4acd14
                                        *v5 = v35;
                                        int32_t * v36 = (int32_t *)(a3 + 16); // 0x4acd1c
                                        *v36 = 0;
                                        unsigned char v37 = *(char *)v35; // 0x4acd23
                                        v2 = v37;
                                        result2 = 0xffffdc00;
                                        if (v37 < 58) {
                                            // 0x4acd33
                                            *v36 = (int32_t)v37 - 48;
                                            int64_t v38 = v8 + 8; // 0x4acd39
                                            *v5 = v38;
                                            char * v39 = (char *)v38; // 0x4acd41
                                            result2 = 0xffffdc00;
                                            if (*v39 < 58) {
                                                int32_t v40 = 10 * *v36; // 0x4acd57
                                                *v36 = v40;
                                                *v36 = v40 - 48 + (int32_t)*v39;
                                                int64_t v41 = v8 + 9; // 0x4acd67
                                                *v5 = v41;
                                                if (v4 < 13) {
                                                    // 0x4acde7
                                                    result2 = function_4ac420(a3);
                                                    return result2;
                                                } else {
                                                    int32_t * v42 = (int32_t *)(a3 + 20); // 0x4acd7a
                                                    *v42 = 0;
                                                    unsigned char v43 = *(char *)v41; // 0x4acd81
                                                    result2 = 0xffffdc00;
                                                    if (v43 < 58) {
                                                        int64_t v44 = (int64_t)v43 + 0xffffffd0; // 0x4acd92
                                                        v1 = v44 & 0xffffffff;
                                                        int64_t v45 = v8 + 10; // 0x4acd95
                                                        *v42 = (int32_t)v44;
                                                        *v5 = v45;
                                                        char * v46 = (char *)v45; // 0x4acda0
                                                        result2 = 0xffffdc00;
                                                        if (*v46 < 58) {
                                                            int64_t v47 = 10 * v1; // 0x4acdb4
                                                            *v42 = (int32_t)v47;
                                                            *v42 = (int32_t)(v47 + 0xffffffd0 + (int64_t)*v46);
                                                            int64_t v48 = v8 + 11; // 0x4acdc8
                                                            *v5 = v48;
                                                            if (v2 < 15) {
                                                                // 0x4acde7
                                                                result2 = function_4ac420(a3);
                                                                return result2;
                                                            } else {
                                                                // 0x4acdd2
                                                                *v5 = v8 + 12;
                                                                result2 = 0xffffdc00;
                                                                if (*(char *)v48 != 90) {
                                                                    return result2;
                                                                } else {
                                                                    // 0x4acde7
                                                                    result2 = function_4ac420(a3);
                                                                    return result2;
                                                                }
                                                            }
                                                        } else {
                                                            return result2;
                                                        }
                                                    } else {
                                                        return result2;
                                                    }
                                                }
                                            } else {
                                                return result2;
                                            }
                                        } else {
                                            return result2;
                                        }
                                    } else {
                                        return result2;
                                    }
                                } else {
                                    return result2;
                                }
                            } else {
                                return result2;
                            }
                        } else {
                            return result2;
                        }
                    } else {
                        return result2;
                    }
                } else {
                    return result2;
                }
            }
            v8 = v11;
            v9 = (char *)v8;
        }
        // 0x4acdf0
        return 0xffffdc00;
    }
    int64_t * v49 = (int64_t *)a1;
    *v49 = a1 + 1;
    int64_t v50 = function_4afd30(); // 0x4ace1c
    if ((int32_t)v50 != 0) {
        // 0x4ace00
        return v50 - (int64_t)(int32_t)&g4 & 0xffffffff;
    }
    int32_t * v51 = (int32_t *)a3; // 0x4ace29
    *v51 = 0;
    unsigned char v52 = *(char *)&v1; // 0x4ace2f
    int64_t v53 = v52; // 0x4ace2f
    v2 = v53;
    if (v52 >= 58) {
        // 0x4acdf0
        return 0xffffdc00;
    }
    int64_t v54 = v1 + 1; // 0x4ace3e
    int64_t v55 = v53 + 0xffffffd0; // 0x4ace42
    v2 = v55 & 0xffffffff;
    *v51 = (int32_t)v55;
    *v49 = v54;
    char * v56 = (char *)v54; // 0x4ace4b
    if (*v56 >= 58) {
        // 0x4acdf0
        return 0xffffdc00;
    }
    int64_t v57 = 10 * v2; // 0x4ace5e
    *v51 = (int32_t)v57;
    int64_t v58 = v57 + 0xffffffd0 + (int64_t)*v56; // 0x4ace66
    int64_t v59 = v1 + 2; // 0x4ace6b
    int32_t v60 = v58; // 0x4ace6f
    *v51 = v60;
    *v49 = v59;
    int32_t * v61 = (int32_t *)(a3 + 4); // 0x4ace76
    *v61 = 0;
    unsigned char v62 = *(char *)v59; // 0x4ace7d
    int64_t v63 = v62; // 0x4ace7d
    v2 = v63;
    if (v62 >= 58) {
        // 0x4acdf0
        return 0xffffdc00;
    }
    int64_t v64 = v1 + 3; // 0x4ace8a
    int64_t v65 = v63 + 0xffffffd0; // 0x4ace8e
    v2 = v65 & 0xffffffff;
    *v61 = (int32_t)v65;
    *v49 = v64;
    char * v66 = (char *)v64; // 0x4ace98
    if (*v66 >= 58) {
        // 0x4acdf0
        return 0xffffdc00;
    }
    int64_t v67 = 10 * v2; // 0x4acea8
    *v61 = (int32_t)v67;
    *v61 = (int32_t)(v67 + 0xffffffd0 + (int64_t)*v66);
    int64_t v68 = v1 + 4; // 0x4aceb8
    *v49 = v68;
    int32_t * v69 = (int32_t *)(a3 + 8); // 0x4acec0
    *v69 = 0;
    unsigned char v70 = *(char *)v68; // 0x4acec7
    int64_t v71 = v70; // 0x4acec7
    v2 = v71;
    if (v70 >= 58) {
        // 0x4acdf0
        return 0xffffdc00;
    }
    int64_t v72 = v1 + 5; // 0x4aced4
    int64_t v73 = v71 + 0xffffffd0; // 0x4aced8
    v2 = v73 & 0xffffffff;
    *v69 = (int32_t)v73;
    *v49 = v72;
    char * v74 = (char *)v72; // 0x4acee2
    if (*v74 >= 58) {
        // 0x4acdf0
        return 0xffffdc00;
    }
    int64_t v75 = 10 * v2; // 0x4acf03
    *v69 = (int32_t)v75;
    *v69 = (int32_t)(v75 + 0xffffffd0 + (int64_t)*v74);
    int64_t v76 = v1 + 6; // 0x4acf13
    *v49 = v76;
    int32_t * v77 = (int32_t *)(a3 + 12); // 0x4acf1b
    *v77 = 0;
    unsigned char v78 = *(char *)v76; // 0x4acf22
    int64_t v79 = v78; // 0x4acf22
    v2 = v79;
    if (v78 >= 58) {
        // 0x4acdf0
        return 0xffffdc00;
    }
    int64_t v80 = v1 + 7; // 0x4acf2f
    int64_t v81 = v79 + 0xffffffd0; // 0x4acf33
    v2 = v81 & 0xffffffff;
    *v77 = (int32_t)v81;
    *v49 = v80;
    char * v82 = (char *)v80; // 0x4acf3d
    if (*v82 >= 58) {
        // 0x4acdf0
        return 0xffffdc00;
    }
    int64_t v83 = 10 * v2; // 0x4acf4d
    *v77 = (int32_t)v83;
    *v77 = (int32_t)(v83 + 0xffffffd0 + (int64_t)*v82);
    int64_t v84 = v1 + 8; // 0x4acf5d
    *v49 = v84;
    int32_t * v85 = (int32_t *)(a3 + 16); // 0x4acf65
    *v85 = 0;
    unsigned char v86 = *(char *)v84; // 0x4acf6c
    int64_t v87 = v86; // 0x4acf6c
    v2 = v87;
    if (v86 >= 58) {
        // 0x4acdf0
        return 0xffffdc00;
    }
    int64_t v88 = v1 + 9; // 0x4acf7d
    int64_t v89 = v87 + 0xffffffd0; // 0x4acf81
    v2 = v89 & 0xffffffff;
    *v85 = (int32_t)v89;
    *v49 = v88;
    char * v90 = (char *)v88; // 0x4acf8b
    if (*v90 >= 58) {
        // 0x4acdf0
        return 0xffffdc00;
    }
    int64_t v91 = 10 * v2; // 0x4acfa4
    *v85 = (int32_t)v91;
    *v85 = (int32_t)(v91 + 0xffffffd0 + (int64_t)*v90);
    int64_t v92 = v1 + 10; // 0x4acfb8
    *v49 = v92;
    int32_t v93; // 0x4ad02f
    int64_t v94; // 0x4ad043
    int64_t v95; // 0x4ad043
    if (v4 < 11) {
        // 0x4ad02f
        v93 = v60 - 49;
        v94 = v93 < 0 == (48 - v60 & v60) < 0 == (v93 != 0) ? (int64_t)&g19 : (int64_t)&g19 + 100;
        v95 = v94 + (v58 & 0xffffffff);
        *v51 = (int32_t)v95;
        return v95 & 0xffffffff;
    }
    int32_t * v96 = (int32_t *)(a3 + 20); // 0x4acfc2
    *v96 = 0;
    unsigned char v97 = *(char *)v92; // 0x4acfc9
    if (v97 >= 58) {
        // 0x4acdf0
        return 0xffffdc00;
    }
    int64_t v98 = v1 + 11; // 0x4acfda
    int64_t v99 = (int64_t)v97 + 0xffffffd0; // 0x4acfde
    *v96 = (int32_t)v99;
    *v49 = v98;
    char * v100 = (char *)v98; // 0x4acfe8
    if (*v100 >= 58) {
        // 0x4acdf0
        return 0xffffdc00;
    }
    int64_t v101 = 10 * (v99 & 0xffffffff); // 0x4acffc
    *v96 = (int32_t)v101;
    *v96 = (int32_t)(v101 + 0xffffffd0 + (int64_t)*v100);
    int64_t v102 = v1 + 12; // 0x4ad010
    *v49 = v102;
    if (v4 < 13) {
        // 0x4ad02f
        v93 = v60 - 49;
        v94 = v93 < 0 == (48 - v60 & v60) < 0 == (v93 != 0) ? (int64_t)&g19 : (int64_t)&g19 + 100;
        v95 = v94 + (v58 & 0xffffffff);
        *v51 = (int32_t)v95;
        return v95 & 0xffffffff;
    }
    // 0x4ad01a
    *v49 = v1 + 13;
    result2 = 0xffffdc00;
    if (*(char *)v102 != 90) {
      lab_0x4acdf0:
        // 0x4acdf0
        return result2;
    }
    // 0x4ad02f
    v93 = v60 - 49;
    v94 = v93 < 0 == (48 - v60 & v60) < 0 == (v93 != 0) ? (int64_t)&g19 : (int64_t)&g19 + 100;
    v95 = v94 + (v58 & 0xffffffff);
    *v51 = (int32_t)v95;
    return v95 & 0xffffffff;
}

// Address range: 0x4b6d30 - 0x4b71e3
// Used cryptographic patterns:
//  - libntlm_DES_key_swap (32-bit, big endian)
//  - libntlm_DES_key_swap (32-bit, little endian)
int64_t function_4b6d30(int64_t a1, int64_t a2) {
    unsigned char v1 = *(char *)(a2 + 1); // 0x4b6d34
    unsigned char v2 = *(char *)(a2 + 5); // 0x4b6d38
    int64_t v3; // 0x4b6d30
    uint64_t v4 = (uint64_t)v3 % 256; // 0x4b6d3c
    unsigned char v5 = *(char *)(a2 + 3); // 0x4b6d47
    unsigned char v6 = *(char *)(a2 + 2); // 0x4b6d4d
    unsigned char v7 = *(char *)(a2 + 4); // 0x4b6d56
    unsigned char v8 = *(char *)(a2 + 7); // 0x4b6d5f
    unsigned char v9 = *(char *)(a2 + 6); // 0x4b6d65
    uint32_t v10 = 0x1000000 * (int32_t)v7 | 0x10000 * (int32_t)v2 | (int32_t)v8 | 256 * (int32_t)v9; // 0x4b6d6c
    int32_t v11 = 0x10000 * (int64_t)v1 | 0x1000000 * v4 | (int64_t)v5 | 256 * (int64_t)v6; // 0x4b6d73
    int32_t v12 = (v10 / 16 ^ v11) & 0xf0f0f0f; // 0x4b6d75
    uint32_t v13 = v12 ^ v11; // 0x4b6d7b
    uint32_t v14 = (16 * v12 ^ v10) & -0x10101011 | v11 & 0x10101010; // 0x4b6d8d
    int32_t v15 = *(int32_t *)((int64_t)(v13 / 0x80000 & 60) + (int64_t)&libntlm_DES_key_swap_at_5948e0); // 0x4b6da9
    int32_t v16 = *(int32_t *)((int64_t)(4 * v13 & 60) + (int64_t)&libntlm_DES_key_swap_at_5948e0); // 0x4b6db3
    int32_t v17 = *(int32_t *)((int64_t)(v13 / 0x400000 & 60) + (int64_t)&libntlm_DES_key_swap_at_5948e0); // 0x4b6dbd
    int32_t v18 = *(int32_t *)(4 * v4 / 32 + (int64_t)&libntlm_DES_key_swap_at_5948e0); // 0x4b6dc8
    int32_t v19 = *(int32_t *)((int64_t)(v13 / 64 & 60) + (int64_t)&libntlm_DES_key_swap_at_5948e0); // 0x4b6dde
    int32_t v20 = *(int32_t *)((int64_t)(v13 / 0x4000 & 60) + (int64_t)&libntlm_DES_key_swap_at_5948e0); // 0x4b6df4
    int32_t v21 = *(int32_t *)((int64_t)(v13 / 8 & 60) + (int64_t)&libntlm_DES_key_swap_at_5948e0); // 0x4b6e0f
    int32_t v22 = *(int32_t *)((int64_t)(v13 / 2048 & 60) + (int64_t)&libntlm_DES_key_swap_at_5948e0); // 0x4b6e13
    int32_t v23 = *(int32_t *)((int64_t)(v14 / 0x40000 & 60) + (int64_t)&libntlm_DES_key_swap_at_594920); // 0x4b6e3f
    int32_t v24 = *(int32_t *)((int64_t)(4 * v14 / 0x10000000) + (int64_t)&libntlm_DES_key_swap_at_594920); // 0x4b6e48
    int32_t v25 = *(int32_t *)((int64_t)(v14 / 0x800000 & 60) + (int64_t)&libntlm_DES_key_swap_at_594920); // 0x4b6e52
    int32_t v26 = *(int32_t *)((int64_t)(2 * v14 & 60) + (int64_t)&libntlm_DES_key_swap_at_594920); // 0x4b6e60
    int32_t v27 = *(int32_t *)((int64_t)(v14 / 128 & 60) + (int64_t)&libntlm_DES_key_swap_at_594920); // 0x4b6e76
    int32_t v28 = *(int32_t *)((int64_t)(v14 / 0x8000 & 60) + (int64_t)&libntlm_DES_key_swap_at_594920); // 0x4b6e92
    int32_t v29 = *(int32_t *)((int64_t)(v14 / 4 & 60) + (int64_t)&libntlm_DES_key_swap_at_594920); // 0x4b6ead
    int32_t v30 = *(int32_t *)((int64_t)(v14 / 1024 & 60) + (int64_t)&libntlm_DES_key_swap_at_594920); // 0x4b6eb1
    int64_t v31 = 0; // 0x4b6ecb
    uint32_t v32 = (v17 | 32 * v15 | 8 * v16 | 16 * v18 | 4 * v19 | 2 * v20 | 128 * v21 | 64 * v22) % 0x10000000; // 0x4b6ecb
    uint64_t v33 = (int64_t)((v25 | 32 * v23 | 16 * v24 | 8 * v26 | 4 * v27 | 2 * v28 | 128 * v29 | 64 * v30) % 0x10000000); // 0x4b6ecb
    int32_t v34; // 0x4b6d30
    uint32_t v35; // 0x4b6d30
    int64_t v36; // 0x4b6d30
    int64_t v37; // 0x4b6d30
    int32_t v38; // 0x4b6d30
    while (true) {
      lab_0x4b71b7:
        // 0x4b71b7
        v36 = v33;
        v35 = v32;
        v37 = v31;
        int32_t v39 = v37; // 0x4b71b7
        if (v39 < 2) {
            goto lab_0x4b71c0;
        } else {
            switch (v39) {
                case 15: {
                    goto lab_0x4b71c0;
                }
                case 8: {
                    goto lab_0x4b71c0;
                }
                default: {
                    uint32_t v40 = (int32_t)v36; // 0x4b6eec
                    v34 = 4 * v35 & 0xffffffc | v35 / 0x4000000;
                    v38 = 4 * v40 & 0xffffffc | v40 / 0x4000000;
                    goto lab_0x4b6f02;
                }
            }
        }
    }
  lab_0x4b71e8:;
    // 0x4b71e8
    int64_t result; // 0x4b71a6
    return result;
  lab_0x4b71c0:;
    uint32_t v41 = (int32_t)v36; // 0x4b71c9
    v34 = 2 * v35 & 0xffffffe | v35 / 0x8000000;
    v38 = 2 * v41 & 0xffffffe | v41 / 0x8000000;
    goto lab_0x4b6f02;
  lab_0x4b6f02:;
    uint32_t v42 = v38;
    v32 = v34;
    uint64_t v43 = (int64_t)v32;
    v33 = (int64_t)v42;
    int64_t v44 = 1024 * v43; // 0x4b6f10
    uint64_t v45 = v33 / 0x4000; // 0x4b6f32
    uint64_t v46 = v33 / 8; // 0x4b6f36
    int64_t v47 = 0x8000 * v43; // 0x4b6fd2
    int64_t v48 = 8 * v37 + a1;
    *(int32_t *)v48 = 16 * v32 & 0x24000000 | 0x10000000 * v32 & 0x10000000 | v42 & 256 | 0x4000 * v32 & 0x8000000 | 0x40000 * v32 & 0x2080000 | 64 * v32 & 0x1000000 | 512 * v32 & 0x200000 | v32 / 2 & 0x100000 | 4 * v32 & 0x20000 | v32 / 1024 & 0x10000 | v42 / 0x2000 & 0x2000 | v42 / 16 & 0x1000 | 64 * v42 & 2048 | v42 / 2 & 1024 | v42 / 32 & 32 | v42 / 1024 & 16 | v42 / 0x40000 & 4 | v42 / 0x4000000 & 2 | v42 / 0x1000000 % 2 | (int32_t)v44 & 0x40000 | (int32_t)v45 & 512 | (int32_t)v46 & 8;
    result = v47 & 0x20000000 | 0x20000 * v43 & 0x10000000 | v33 & 512 | v44 & 0x8000000 | 0x400000 * v43 & 0x4000000 | v43 / 4 & 0x2000000 | 2 * v43 & 0x1000000 | 0x10000 * v43 & 0x200000 | 2048 * v43 & 0x100000 | 8 * v43 & 0x80000 | v43 / 64 & 0x40000 | v47 & 0x20000 | v43 / 16 & 0x10000 | v33 / 4 & 0x2000 | 256 * v33 & 0x1000 | v45 & 2056 | v33 / 512 & 1024 | 128 * v33 & 256 | v33 / 128 & 32 | v46 & 17 | 4 * v33 & 4 | v33 / 0x200000 & 2;
    *(int32_t *)(v48 + 4) = (int32_t)result;
    v31 = v37 + 1;
    if (v37 == 15) {
        // break -> 0x4b71e8
        goto lab_0x4b71e8;
    }
    goto lab_0x4b71b7;
}

// Address range: 0x4b7810 - 0x4b7cce
// Used cryptographic patterns:
//  - RawDES_sbox1 (32-bit, little endian)
//  - RawDES_sbox2 (32-bit, little endian)
//  - RawDES_sbox3 (32-bit, little endian)
//  - RawDES_sbox4 (32-bit, little endian)
//  - RawDES_sbox5 (32-bit, little endian)
//  - RawDES_sbox6 (32-bit, little endian)
//  - RawDES_sbox7 (32-bit, little endian)
//  - RawDES_sbox8 (32-bit, little endian)
int64_t function_4b7810(int64_t a1, int64_t a2, int64_t a3) {
    unsigned char v1 = *(char *)(a2 + 5); // 0x4b7855
    unsigned char v2 = *(char *)(a2 + 1); // 0x4b785e
    unsigned char v3 = *(char *)(a2 + 3); // 0x4b7872
    unsigned char v4 = *(char *)(a2 + 2); // 0x4b7878
    int64_t v5; // 0x4b7810
    uint32_t v6 = 0x10000 * (int32_t)v2 | 0x1000000 * (int32_t)v5 | (int32_t)v3 | 256 * (int32_t)v4; // 0x4b787f
    unsigned char v7 = *(char *)(a2 + 4); // 0x4b7881
    unsigned char v8 = *(char *)(a2 + 7); // 0x4b788a
    unsigned char v9 = *(char *)(a2 + 6); // 0x4b7890
    int32_t v10 = 0x1000000 * (int32_t)v7 | 0x10000 * (int32_t)v1 | (int32_t)v8 | 256 * (int32_t)v9; // 0x4b7897
    int32_t v11 = (v10 ^ v6 / 16) & 0xf0f0f0f; // 0x4b78a0
    int32_t v12 = v11 ^ v10; // 0x4b78a6
    uint32_t v13 = 16 * v11 ^ v6; // 0x4b78ab
    int32_t v14 = (v13 / 0x10000 ^ v12) & (int32_t)&g33; // 0x4b78b4
    uint32_t v15 = v14 ^ v12; // 0x4b78ba
    int32_t v16 = 0x10000 * v14 ^ v13; // 0x4b78c1
    int32_t v17 = (v15 / 4 ^ v16) & 0x33333333; // 0x4b78c8
    int32_t v18 = v17 ^ v16; // 0x4b78d4
    uint32_t v19 = 4 * v17 ^ v15; // 0x4b78d6
    int32_t v20 = (v19 / 256 ^ v18) & 0xff00ff; // 0x4b78df
    int32_t v21 = v20 ^ v18; // 0x4b78e6
    int32_t v22 = 256 * v20 ^ v19; // 0x4b78eb
    int32_t v23 = 2 * v22; // 0x4b78ed
    int32_t v24 = (v23 ^ v21) & -0x55555556; // 0x4b78f3
    int32_t v25 = v24 ^ v21; // 0x4b78f9
    int32_t v26 = 2 * v25 | (int32_t)(v25 < 0); // 0x4b790b
    int64_t v27 = a1;
    uint32_t v28 = v24 ^ (v23 | (int32_t)(v22 < 0));
    uint32_t v29 = *(int32_t *)(v27 + 4) ^ (v28 / 16 | 0x10000000 * v28); // 0x4b7918
    uint32_t v30 = *(int32_t *)v27 ^ v28; // 0x4b791b
    int32_t v31 = *(int32_t *)((int64_t)(4 * v29 & 252) + (int64_t)&RawDES_sbox7_at_594d60); // 0x4b792b
    int32_t v32 = *(int32_t *)((int64_t)(4 * v30 & 252) + (int64_t)&RawDES_sbox8_at_594960); // 0x4b792f
    int32_t v33 = *(int32_t *)((int64_t)(v30 / 64 & 252) + (int64_t)&RawDES_sbox6_at_594a60); // 0x4b793f
    int32_t v34 = *(int32_t *)((int64_t)(v30 / 0x4000 & 252) + (int64_t)&RawDES_sbox4_at_594b60); // 0x4b7957
    int32_t v35 = *(int32_t *)((int64_t)(v30 / 0x400000 & 252) + (int64_t)&RawDES_sbox2_at_594c60); // 0x4b795b
    int32_t v36 = *(int32_t *)((int64_t)(v29 / 64 & 252) + (int64_t)&RawDES_sbox5_at_594e60); // 0x4b796a
    int32_t v37 = *(int32_t *)((int64_t)(v29 / 0x4000 & 252) + (int64_t)&RawDES_sbox3_at_594f60); // 0x4b797f
    int32_t v38 = *(int32_t *)((int64_t)(v29 / 0x400000 & 252) + (int64_t)&RawDES_sbox1_at_595060); // 0x4b7983
    v26 = v31 ^ v26 ^ v32 ^ v33 ^ v34 ^ v35 ^ v36 ^ v37 ^ v38;
    uint32_t v39 = v26 ^ *(int32_t *)(v27 + 8); // 0x4b798c
    uint32_t v40 = (v26 / 16 | 0x10000000 * v26) ^ *(int32_t *)(v27 + 12); // 0x4b7996
    int64_t v41 = v27 + 16; // 0x4b799d
    int32_t v42 = *(int32_t *)((int64_t)(4 * v39 & 252) + (int64_t)&RawDES_sbox8_at_594960); // 0x4b79a1
    int32_t v43 = *(int32_t *)((int64_t)(v39 / 64 & 252) + (int64_t)&RawDES_sbox6_at_594a60); // 0x4b79b1
    int32_t v44 = *(int32_t *)((int64_t)(v39 / 0x4000 & 252) + (int64_t)&RawDES_sbox4_at_594b60); // 0x4b79c7
    int32_t v45 = *(int32_t *)((int64_t)(v39 / 0x400000 & 252) + (int64_t)&RawDES_sbox2_at_594c60); // 0x4b79cb
    int32_t v46 = *(int32_t *)((int64_t)(4 * v40 & 252) + (int64_t)&RawDES_sbox7_at_594d60); // 0x4b79d5
    int32_t v47 = *(int32_t *)((int64_t)(v40 / 64 & 252) + (int64_t)&RawDES_sbox5_at_594e60); // 0x4b79e1
    int32_t v48 = *(int32_t *)((int64_t)(v40 / 0x4000 & 252) + (int64_t)&RawDES_sbox3_at_594f60); // 0x4b79f2
    int32_t v49 = *(int32_t *)((int64_t)(v40 / 0x400000 & 252) + (int64_t)&RawDES_sbox1_at_595060); // 0x4b79f6
    int32_t v50 = v42 ^ v28 ^ v43 ^ v44 ^ v45 ^ v46 ^ v47 ^ v48 ^ v49; // 0x4b79f6
    while (v27 != a1 + 112) {
        // 0x4b7910
        v27 = v41;
        v28 = v50;
        v29 = *(int32_t *)(v27 + 4) ^ (v28 / 16 | 0x10000000 * v28);
        v30 = *(int32_t *)v27 ^ v28;
        v31 = *(int32_t *)((int64_t)(4 * v29 & 252) + (int64_t)&RawDES_sbox7_at_594d60);
        v32 = *(int32_t *)((int64_t)(4 * v30 & 252) + (int64_t)&RawDES_sbox8_at_594960);
        v33 = *(int32_t *)((int64_t)(v30 / 64 & 252) + (int64_t)&RawDES_sbox6_at_594a60);
        v34 = *(int32_t *)((int64_t)(v30 / 0x4000 & 252) + (int64_t)&RawDES_sbox4_at_594b60);
        v35 = *(int32_t *)((int64_t)(v30 / 0x400000 & 252) + (int64_t)&RawDES_sbox2_at_594c60);
        v36 = *(int32_t *)((int64_t)(v29 / 64 & 252) + (int64_t)&RawDES_sbox5_at_594e60);
        v37 = *(int32_t *)((int64_t)(v29 / 0x4000 & 252) + (int64_t)&RawDES_sbox3_at_594f60);
        v38 = *(int32_t *)((int64_t)(v29 / 0x400000 & 252) + (int64_t)&RawDES_sbox1_at_595060);
        v26 = v31 ^ v26 ^ v32 ^ v33 ^ v34 ^ v35 ^ v36 ^ v37 ^ v38;
        v39 = v26 ^ *(int32_t *)(v27 + 8);
        v40 = (v26 / 16 | 0x10000000 * v26) ^ *(int32_t *)(v27 + 12);
        v41 = v27 + 16;
        v42 = *(int32_t *)((int64_t)(4 * v39 & 252) + (int64_t)&RawDES_sbox8_at_594960);
        v43 = *(int32_t *)((int64_t)(v39 / 64 & 252) + (int64_t)&RawDES_sbox6_at_594a60);
        v44 = *(int32_t *)((int64_t)(v39 / 0x4000 & 252) + (int64_t)&RawDES_sbox4_at_594b60);
        v45 = *(int32_t *)((int64_t)(v39 / 0x400000 & 252) + (int64_t)&RawDES_sbox2_at_594c60);
        v46 = *(int32_t *)((int64_t)(4 * v40 & 252) + (int64_t)&RawDES_sbox7_at_594d60);
        v47 = *(int32_t *)((int64_t)(v40 / 64 & 252) + (int64_t)&RawDES_sbox5_at_594e60);
        v48 = *(int32_t *)((int64_t)(v40 / 0x4000 & 252) + (int64_t)&RawDES_sbox3_at_594f60);
        v49 = *(int32_t *)((int64_t)(v40 / 0x400000 & 252) + (int64_t)&RawDES_sbox1_at_595060);
        v50 = v42 ^ v28 ^ v43 ^ v44 ^ v45 ^ v46 ^ v47 ^ v48 ^ v49;
    }
    int32_t v51 = v50; // 0x4b7a9a
    int64_t v52 = v41;
    uint32_t v53 = v26;
    uint32_t v54 = *(int32_t *)(v52 + 4) ^ (v53 / 16 | 0x10000000 * v53); // 0x4b7a28
    uint32_t v55 = *(int32_t *)v52 ^ v53; // 0x4b7a2b
    int32_t v56 = *(int32_t *)((int64_t)(4 * v54 & 252) + (int64_t)&RawDES_sbox7_at_594d60); // 0x4b7a3b
    int32_t v57 = *(int32_t *)((int64_t)(4 * v55 & 252) + (int64_t)&RawDES_sbox8_at_594960); // 0x4b7a3f
    int32_t v58 = *(int32_t *)((int64_t)(v55 / 64 & 252) + (int64_t)&RawDES_sbox6_at_594a60); // 0x4b7a4f
    int32_t v59 = *(int32_t *)((int64_t)(v55 / 0x4000 & 252) + (int64_t)&RawDES_sbox4_at_594b60); // 0x4b7a67
    int32_t v60 = *(int32_t *)((int64_t)(v55 / 0x400000 & 252) + (int64_t)&RawDES_sbox2_at_594c60); // 0x4b7a6b
    int32_t v61 = *(int32_t *)((int64_t)(v54 / 64 & 252) + (int64_t)&RawDES_sbox5_at_594e60); // 0x4b7a7a
    int32_t v62 = *(int32_t *)((int64_t)(v54 / 0x4000 & 252) + (int64_t)&RawDES_sbox3_at_594f60); // 0x4b7a8f
    int32_t v63 = *(int32_t *)((int64_t)(v54 / 0x400000 & 252) + (int64_t)&RawDES_sbox1_at_595060); // 0x4b7a93
    v51 = v56 ^ v51 ^ v57 ^ v58 ^ v59 ^ v60 ^ v61 ^ v62 ^ v63;
    uint32_t v64 = v51 ^ *(int32_t *)(v52 + 8); // 0x4b7a9c
    uint32_t v65 = (v51 / 16 | 0x10000000 * v51) ^ *(int32_t *)(v52 + 12); // 0x4b7aa6
    int64_t v66 = v52 + 16; // 0x4b7aad
    int32_t v67 = *(int32_t *)((int64_t)(4 * v64 & 252) + (int64_t)&RawDES_sbox8_at_594960); // 0x4b7ab1
    int32_t v68 = *(int32_t *)((int64_t)(v64 / 64 & 252) + (int64_t)&RawDES_sbox6_at_594a60); // 0x4b7ac1
    int32_t v69 = *(int32_t *)((int64_t)(v64 / 0x4000 & 252) + (int64_t)&RawDES_sbox4_at_594b60); // 0x4b7ad7
    int32_t v70 = *(int32_t *)((int64_t)(v64 / 0x400000 & 252) + (int64_t)&RawDES_sbox2_at_594c60); // 0x4b7adb
    int32_t v71 = *(int32_t *)((int64_t)(4 * v65 & 252) + (int64_t)&RawDES_sbox7_at_594d60); // 0x4b7ae5
    int32_t v72 = *(int32_t *)((int64_t)(v65 / 64 & 252) + (int64_t)&RawDES_sbox5_at_594e60); // 0x4b7af1
    int32_t v73 = *(int32_t *)((int64_t)(v65 / 0x4000 & 252) + (int64_t)&RawDES_sbox3_at_594f60); // 0x4b7b02
    int32_t v74 = *(int32_t *)((int64_t)(v65 / 0x400000 & 252) + (int64_t)&RawDES_sbox1_at_595060); // 0x4b7b06
    int32_t v75 = v67 ^ v53 ^ v68 ^ v69 ^ v70 ^ v71 ^ v72 ^ v73 ^ v74; // 0x4b7b06
    while (v52 != a1 + 240) {
        // 0x4b7a20
        v52 = v66;
        v53 = v75;
        v54 = *(int32_t *)(v52 + 4) ^ (v53 / 16 | 0x10000000 * v53);
        v55 = *(int32_t *)v52 ^ v53;
        v56 = *(int32_t *)((int64_t)(4 * v54 & 252) + (int64_t)&RawDES_sbox7_at_594d60);
        v57 = *(int32_t *)((int64_t)(4 * v55 & 252) + (int64_t)&RawDES_sbox8_at_594960);
        v58 = *(int32_t *)((int64_t)(v55 / 64 & 252) + (int64_t)&RawDES_sbox6_at_594a60);
        v59 = *(int32_t *)((int64_t)(v55 / 0x4000 & 252) + (int64_t)&RawDES_sbox4_at_594b60);
        v60 = *(int32_t *)((int64_t)(v55 / 0x400000 & 252) + (int64_t)&RawDES_sbox2_at_594c60);
        v61 = *(int32_t *)((int64_t)(v54 / 64 & 252) + (int64_t)&RawDES_sbox5_at_594e60);
        v62 = *(int32_t *)((int64_t)(v54 / 0x4000 & 252) + (int64_t)&RawDES_sbox3_at_594f60);
        v63 = *(int32_t *)((int64_t)(v54 / 0x400000 & 252) + (int64_t)&RawDES_sbox1_at_595060);
        v51 = v56 ^ v51 ^ v57 ^ v58 ^ v59 ^ v60 ^ v61 ^ v62 ^ v63;
        v64 = v51 ^ *(int32_t *)(v52 + 8);
        v65 = (v51 / 16 | 0x10000000 * v51) ^ *(int32_t *)(v52 + 12);
        v66 = v52 + 16;
        v67 = *(int32_t *)((int64_t)(4 * v64 & 252) + (int64_t)&RawDES_sbox8_at_594960);
        v68 = *(int32_t *)((int64_t)(v64 / 64 & 252) + (int64_t)&RawDES_sbox6_at_594a60);
        v69 = *(int32_t *)((int64_t)(v64 / 0x4000 & 252) + (int64_t)&RawDES_sbox4_at_594b60);
        v70 = *(int32_t *)((int64_t)(v64 / 0x400000 & 252) + (int64_t)&RawDES_sbox2_at_594c60);
        v71 = *(int32_t *)((int64_t)(4 * v65 & 252) + (int64_t)&RawDES_sbox7_at_594d60);
        v72 = *(int32_t *)((int64_t)(v65 / 64 & 252) + (int64_t)&RawDES_sbox5_at_594e60);
        v73 = *(int32_t *)((int64_t)(v65 / 0x4000 & 252) + (int64_t)&RawDES_sbox3_at_594f60);
        v74 = *(int32_t *)((int64_t)(v65 / 0x400000 & 252) + (int64_t)&RawDES_sbox1_at_595060);
        v75 = v67 ^ v53 ^ v68 ^ v69 ^ v70 ^ v71 ^ v72 ^ v73 ^ v74;
    }
    int64_t v76 = v66; // 0x4b7b29
    int32_t v77 = v75; // 0x4b7b29
    uint32_t v78 = v51;
    uint32_t v79 = *(int32_t *)(v76 + 4) ^ (v78 / 16 | 0x10000000 * v78); // 0x4b7b38
    uint32_t v80 = *(int32_t *)v76 ^ v78; // 0x4b7b3b
    int32_t v81 = *(int32_t *)((int64_t)(4 * v79 & 252) + (int64_t)&RawDES_sbox7_at_594d60); // 0x4b7b4b
    int32_t v82 = *(int32_t *)((int64_t)(4 * v80 & 252) + (int64_t)&RawDES_sbox8_at_594960); // 0x4b7b4f
    int32_t v83 = *(int32_t *)((int64_t)(v80 / 64 & 252) + (int64_t)&RawDES_sbox6_at_594a60); // 0x4b7b5f
    int32_t v84 = *(int32_t *)((int64_t)(v80 / 0x4000 & 252) + (int64_t)&RawDES_sbox4_at_594b60); // 0x4b7b77
    int32_t v85 = *(int32_t *)((int64_t)(v80 / 0x400000 & 252) + (int64_t)&RawDES_sbox2_at_594c60); // 0x4b7b7b
    int32_t v86 = *(int32_t *)((int64_t)(v79 / 64 & 252) + (int64_t)&RawDES_sbox5_at_594e60); // 0x4b7b8a
    int32_t v87 = *(int32_t *)((int64_t)(v79 / 0x4000 & 252) + (int64_t)&RawDES_sbox3_at_594f60); // 0x4b7b9f
    int32_t v88 = *(int32_t *)((int64_t)(v79 / 0x400000 & 252) + (int64_t)&RawDES_sbox1_at_595060); // 0x4b7ba3
    v77 = v81 ^ v77 ^ v82 ^ v83 ^ v84 ^ v85 ^ v86 ^ v87 ^ v88;
    uint32_t v89 = v77 ^ *(int32_t *)(v76 + 8); // 0x4b7bac
    uint32_t v90 = (v77 / 16 | 0x10000000 * v77) ^ *(int32_t *)(v76 + 12); // 0x4b7bb6
    int32_t v91 = *(int32_t *)((int64_t)(4 * v89 & 252) + (int64_t)&RawDES_sbox8_at_594960); // 0x4b7bc1
    int32_t v92 = *(int32_t *)((int64_t)(v89 / 64 & 252) + (int64_t)&RawDES_sbox6_at_594a60); // 0x4b7bd1
    int32_t v93 = *(int32_t *)((int64_t)(v89 / 0x4000 & 252) + (int64_t)&RawDES_sbox4_at_594b60); // 0x4b7be7
    int32_t v94 = *(int32_t *)((int64_t)(v89 / 0x400000 & 252) + (int64_t)&RawDES_sbox2_at_594c60); // 0x4b7beb
    int32_t v95 = *(int32_t *)((int64_t)(4 * v90 & 252) + (int64_t)&RawDES_sbox7_at_594d60); // 0x4b7bf5
    int32_t v96 = *(int32_t *)((int64_t)(v90 / 64 & 252) + (int64_t)&RawDES_sbox5_at_594e60); // 0x4b7c01
    int32_t v97 = *(int32_t *)((int64_t)(v90 / 0x4000 & 252) + (int64_t)&RawDES_sbox3_at_594f60); // 0x4b7c12
    int32_t v98 = *(int32_t *)((int64_t)(v90 / 0x400000 & 252) + (int64_t)&RawDES_sbox1_at_595060); // 0x4b7c16
    int32_t v99 = v91 ^ v78 ^ v92 ^ v93 ^ v94 ^ v95 ^ v96 ^ v97 ^ v98; // 0x4b7c16
    while (a1 + 368 != v76) {
        // 0x4b7b30
        v76 += 16;
        v78 = v99;
        v79 = *(int32_t *)(v76 + 4) ^ (v78 / 16 | 0x10000000 * v78);
        v80 = *(int32_t *)v76 ^ v78;
        v81 = *(int32_t *)((int64_t)(4 * v79 & 252) + (int64_t)&RawDES_sbox7_at_594d60);
        v82 = *(int32_t *)((int64_t)(4 * v80 & 252) + (int64_t)&RawDES_sbox8_at_594960);
        v83 = *(int32_t *)((int64_t)(v80 / 64 & 252) + (int64_t)&RawDES_sbox6_at_594a60);
        v84 = *(int32_t *)((int64_t)(v80 / 0x4000 & 252) + (int64_t)&RawDES_sbox4_at_594b60);
        v85 = *(int32_t *)((int64_t)(v80 / 0x400000 & 252) + (int64_t)&RawDES_sbox2_at_594c60);
        v86 = *(int32_t *)((int64_t)(v79 / 64 & 252) + (int64_t)&RawDES_sbox5_at_594e60);
        v87 = *(int32_t *)((int64_t)(v79 / 0x4000 & 252) + (int64_t)&RawDES_sbox3_at_594f60);
        v88 = *(int32_t *)((int64_t)(v79 / 0x400000 & 252) + (int64_t)&RawDES_sbox1_at_595060);
        v77 = v81 ^ v77 ^ v82 ^ v83 ^ v84 ^ v85 ^ v86 ^ v87 ^ v88;
        v89 = v77 ^ *(int32_t *)(v76 + 8);
        v90 = (v77 / 16 | 0x10000000 * v77) ^ *(int32_t *)(v76 + 12);
        v91 = *(int32_t *)((int64_t)(4 * v89 & 252) + (int64_t)&RawDES_sbox8_at_594960);
        v92 = *(int32_t *)((int64_t)(v89 / 64 & 252) + (int64_t)&RawDES_sbox6_at_594a60);
        v93 = *(int32_t *)((int64_t)(v89 / 0x4000 & 252) + (int64_t)&RawDES_sbox4_at_594b60);
        v94 = *(int32_t *)((int64_t)(v89 / 0x400000 & 252) + (int64_t)&RawDES_sbox2_at_594c60);
        v95 = *(int32_t *)((int64_t)(4 * v90 & 252) + (int64_t)&RawDES_sbox7_at_594d60);
        v96 = *(int32_t *)((int64_t)(v90 / 64 & 252) + (int64_t)&RawDES_sbox5_at_594e60);
        v97 = *(int32_t *)((int64_t)(v90 / 0x4000 & 252) + (int64_t)&RawDES_sbox3_at_594f60);
        v98 = *(int32_t *)((int64_t)(v90 / 0x400000 & 252) + (int64_t)&RawDES_sbox1_at_595060);
        v99 = v91 ^ v78 ^ v92 ^ v93 ^ v94 ^ v95 ^ v96 ^ v97 ^ v98;
    }
    int32_t v100 = v99 / 2 | 0x80000000 * v99; // 0x4b7c25
    int32_t v101 = (v100 ^ v77) & -0x55555556; // 0x4b7c30
    int32_t v102 = v101 ^ v100; // 0x4b7c38
    uint32_t v103 = (v101 ^ v77) / 2 | 0x80000000 * v77; // 0x4b7c3a
    int32_t v104 = (v103 / 256 ^ v102) & 0xff00ff; // 0x4b7c44
    int32_t v105 = v104 ^ v102; // 0x4b7c4a
    uint32_t v106 = 256 * v104 ^ v103; // 0x4b7c4f
    int32_t v107 = (v106 / 4 ^ v105) & 0x33333333; // 0x4b7c58
    uint32_t v108 = v107 ^ v105; // 0x4b7c5e
    int32_t v109 = 4 * v107 ^ v106; // 0x4b7c63
    int32_t v110 = (v108 / 0x10000 ^ v109) & (int32_t)&g33; // 0x4b7c6c
    int32_t v111 = v110 ^ v109; // 0x4b7c72
    uint32_t v112 = 0x10000 * v110 ^ v108; // 0x4b7c77
    int32_t v113 = (v112 / 16 ^ v111) & 0xf0f0f0f; // 0x4b7c80
    uint32_t v114 = v113 ^ v111; // 0x4b7c85
    uint32_t v115 = 16 * v113 ^ v112; // 0x4b7c8a
    *(char *)(a3 + 7) = (char)v114;
    *(char *)(a3 + 3) = (char)v115;
    *(char *)a3 = (char)(v115 / 0x1000000);
    *(char *)(a3 + 1) = (char)(v115 / 0x10000);
    *(char *)(a3 + 4) = (char)(v114 / 0x1000000);
    *(char *)(a3 + 2) = (char)(v115 / 256);
    *(char *)(a3 + 5) = (char)(v114 / 0x10000);
    *(char *)(a3 + 6) = (char)(v114 / 256);
    return 0;
}

// Address range: 0x4c8ef0 - 0x4c8f2a
int64_t function_4c8ef0(int64_t a1) {
    int64_t result = function_4c8e60(); // 0x4c8ef4
    if ((int32_t)result != 0) {
        // 0x4c8f28
        return result;
    }
    // 0x4c8efd
    if (*(int64_t *)(a1 + 104) == 0 || *(int64_t *)(a1 + 128) == 0 || *(int64_t *)(a1 + 80) == 0) {
        // 0x4c8f28
        return 0xffffbe00;
    }
    // 0x4c8f15
    return function_4c8860(a1);
}

// Address range: 0x4c8f30 - 0x4c8f94
int64_t function_4c8f30(int64_t a1, int64_t a2) {
    // 0x4c8f30
    if ((int32_t)function_4c8e60() != 0 || (int32_t)function_4c8ef0(a2) != 0 || (int32_t)function_4b1590(a1 + 16, a2 + 16) != 0) {
        // 0x4c8f88
        return 0xffffbe00;
    }
    int64_t v1 = function_4b1590(a1 + 40, a2 + 40); // 0x4c8f6a
    return (v1 ^ 0xffffffff) + v1 + (int64_t)((int32_t)v1 == 0) & 0xffffbe00;
}

// Address range: 0x4c8fa0 - 0x4c9074
int64_t function_4c8fa0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4c8fa0
    int64_t v1; // bp-72, 0x4c8fa0
    function_4b0870(&v1);
    int64_t * v2 = (int64_t *)(a1 + 8); // 0x4c8fc9
    int64_t v3 = function_4b0fc0(&v1, a2, *v2); // 0x4c8fd3
    if ((int32_t)v3 != 0) {
        // 0x4c8fe2
        function_4b0890(&v1);
        // 0x4c8fea
        return v3 + 0xffffbd80 & 0xffffffff & 0xffffffff;
    }
    int64_t v4 = a1 + 16; // 0x4c9008
    if ((int32_t)function_4b1590((int64_t)&v1, v4) >= 0) {
        // 0x4c8fe2
        function_4b0890(&v1);
        // 0x4c8fea
        return 0xffffbd7c;
    }
    int64_t v5 = function_4b2d10(&v1, &v1, a1 + 40, v4, a1 + 208); // 0x4c9038
    if ((int32_t)v5 != 0) {
        // 0x4c8fe2
        function_4b0890(&v1);
        // 0x4c8fea
        return v5 + 0xffffbd80 & 0xffffffff & 0xffffffff;
    }
    int64_t v6 = function_4b1080(&v1, a3, *v2); // 0x4c9052
    function_4b0890(&v1);
    int64_t v7 = 0; // 0x4c9063
    if ((int32_t)v6 != 0) {
        // 0x4c9069
        v7 = v6 - (int64_t)(int32_t)".0" & 0xffffffff;
    }
    // 0x4c8fea
    return v7 & 0xffffffff;
}

// Address range: 0x4c9080 - 0x4c9453
int64_t function_4c9080(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4c9080
    if (*(int64_t *)(a1 + 104) == 0 || *(int64_t *)(a1 + 128) == 0 || *(int64_t *)(a1 + 80) == 0) {
        // 0x4c9130
        return 0xffffbf80;
    }
    // 0x4c90cc
    int64_t v1; // bp-152, 0x4c9080
    function_4b0870(&v1);
    int64_t v2; // bp-120, 0x4c9080
    function_4b0870(&v2);
    int64_t v3; // bp-88, 0x4c9080
    function_4b0870(&v3);
    int64_t * v4 = (int64_t *)(a1 + 8); // 0x4c90f6
    int64_t v5 = function_4b0fc0(&v1, a4, *v4); // 0x4c9102
    int64_t v6; // 0x4c9080
    int64_t v7; // 0x4c9170
    int64_t v8; // 0x4c9174
    if ((int32_t)v5 == 0) {
        // 0x4c9170
        v7 = a1 + 16;
        v8 = (int64_t)&v1;
        v6 = 0xffffbcfc;
        if ((int32_t)function_4b1590(v8, v7) >= 0) {
            goto lab_0x4c9112;
        } else {
            if (a2 == 0) {
                goto lab_0x4c9248;
            } else {
                // 0x4c9194
                if (*(int64_t *)(a1 + 320) == 0) {
                    int64_t v9 = a1 + 304; // 0x4c93b8
                    int64_t v10 = a1 + 280; // 0x4c93bf
                    int32_t v11 = 11; // 0x4c93ce
                    int64_t v12 = function_4b38b0(v9, *v4 - 1, a2, a3); // 0x4c93e6
                    int64_t v13 = v12; // 0x4c93ed
                    while ((int32_t)v12 == 0) {
                        int64_t v14 = function_4b36d0(v10, v9, v7); // 0x4c9403
                        v13 = v14;
                        if ((int32_t)v14 != 0) {
                            // break -> 0x4c910b
                            break;
                        }
                        // 0x4c9410
                        if ((int32_t)function_4b1680(v10, 1) == 0) {
                            // 0x4c9443
                            return function_4b3cf0(v10, v9, v7);
                        }
                        // 0x4c9421
                        v11--;
                        v6 = 0xffff7880;
                        if (v11 == 0) {
                            goto lab_0x4c9112;
                        }
                        v12 = function_4b38b0(v9, *v4 - 1, a2, a3);
                        v13 = v12;
                    }
                    // 0x4c910b
                    v6 = v13 + 0xffffbd00 & 0xffffffff;
                    goto lab_0x4c9112;
                } else {
                    int64_t v15 = a1 + 280; // 0x4c91a2
                    int64_t v16 = function_4b1ac0(v15, v15, v15); // 0x4c91b7
                    v6 = v16 + 0xffffbd00 & 0xffffffff;
                    if ((int32_t)v16 != 0) {
                        goto lab_0x4c9112;
                    } else {
                        int64_t v17 = function_4b26c0(v15, v15, v7); // 0x4c91d6
                        if ((int32_t)v17 != 0) {
                            // 0x4c910b
                            v6 = v17 + 0xffffbd00 & 0xffffffff;
                            goto lab_0x4c9112;
                        } else {
                            int64_t v18 = a1 + 304; // 0x4c91e3
                            int64_t v19 = function_4b1ac0(v18, v18, v18); // 0x4c91f3
                            if ((int32_t)v19 != 0) {
                                // 0x4c910b
                                v6 = v19 + 0xffffbd00 & 0xffffffff;
                                goto lab_0x4c9112;
                            } else {
                                int64_t v20 = function_4b26c0(v18, v18, v7); // 0x4c9209
                                if ((int32_t)v20 != 0) {
                                    // 0x4c910b
                                    v6 = v20 + 0xffffbd00 & 0xffffffff;
                                    goto lab_0x4c9112;
                                } else {
                                    int64_t v21 = function_4b1ac0(v8, v8, v15); // 0x4c9223
                                    if ((int32_t)v21 != 0) {
                                        // 0x4c910b
                                        v6 = v21 + 0xffffbd00 & 0xffffffff;
                                        goto lab_0x4c9112;
                                    } else {
                                        int64_t v22 = function_4b26c0(v8, v8, v7); // 0x4c923b
                                        if ((int32_t)v22 != 0) {
                                            // 0x4c910b
                                            v6 = v22 + 0xffffbd00 & 0xffffffff;
                                            goto lab_0x4c9112;
                                        } else {
                                            goto lab_0x4c9248;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        // 0x4c910b
        v6 = v5 + 0xffffbd00 & 0xffffffff;
        goto lab_0x4c9112;
    }
  lab_0x4c9112:
    // 0x4c9112
    function_4b0890(&v1);
    function_4b0890(&v2);
    function_4b0890(&v3);
    // 0x4c9130
    return v6 & 0xffffffff;
  lab_0x4c9248:;
    int64_t v23 = a1 + 88; // 0x4c9248
    int64_t v24 = function_4b2d10(&v2, &v1, a1 + 136, v23, a1 + 232); // 0x4c9267
    v6 = v24 + 0xffffbd00 & 0xffffffff;
    if ((int32_t)v24 != 0) {
        goto lab_0x4c9112;
    } else {
        int64_t v25 = a1 + 112; // 0x4c927b
        int64_t v26 = function_4b2d10(&v3, &v1, a1 + 160, v25, a1 + 256); // 0x4c929a
        if ((int32_t)v26 != 0) {
            // 0x4c910b
            v6 = v26 + 0xffffbd00 & 0xffffffff;
            goto lab_0x4c9112;
        } else {
            int64_t v27 = function_4b19a0(&v1, &v2, &v3); // 0x4c92b6
            if ((int32_t)v27 != 0) {
                // 0x4c910b
                v6 = v27 + 0xffffbd00 & 0xffffffff;
                goto lab_0x4c9112;
            } else {
                int64_t v28 = (int64_t)&v2; // 0x4c92cf
                int64_t v29 = function_4b1ac0(v28, v8, a1 + 184); // 0x4c92d4
                if ((int32_t)v29 != 0) {
                    // 0x4c910b
                    v6 = v29 + 0xffffbd00 & 0xffffffff;
                    goto lab_0x4c9112;
                } else {
                    int64_t v30 = function_4b26c0(v8, v28, v23); // 0x4c92ee
                    if ((int32_t)v30 != 0) {
                        // 0x4c910b
                        v6 = v30 + 0xffffbd00 & 0xffffffff;
                        goto lab_0x4c9112;
                    } else {
                        int64_t v31 = function_4b1ac0(v28, v8, v25); // 0x4c9308
                        if ((int32_t)v31 != 0) {
                            // 0x4c910b
                            v6 = v31 + 0xffffbd00 & 0xffffffff;
                            goto lab_0x4c9112;
                        } else {
                            int64_t v32 = function_4b1900(&v1, &v3, &v2); // 0x4c9324
                            if ((int32_t)v32 != 0) {
                                // 0x4c910b
                                v6 = v32 + 0xffffbd00 & 0xffffffff;
                                goto lab_0x4c9112;
                            } else {
                                if (a2 == 0) {
                                    goto lab_0x4c936a;
                                } else {
                                    int64_t v33 = function_4b1ac0(v8, v8, a1 + 304); // 0x4c9345
                                    if ((int32_t)v33 != 0) {
                                        // 0x4c910b
                                        v6 = v33 + 0xffffbd00 & 0xffffffff;
                                        goto lab_0x4c9112;
                                    } else {
                                        int64_t v34 = function_4b26c0(v8, v8, v7); // 0x4c935d
                                        if ((int32_t)v34 != 0) {
                                            // 0x4c910b
                                            v6 = v34 + 0xffffbd00 & 0xffffffff;
                                            goto lab_0x4c9112;
                                        } else {
                                            goto lab_0x4c936a;
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
  lab_0x4c936a:;
    int64_t v35 = function_4b1080(&v1, a5, *v4); // 0x4c9376
    function_4b0890(&v1);
    function_4b0890(&v2);
    function_4b0890(&v3);
    int64_t v36 = v35 & 0xffffffff; // 0x4c939f
    if ((int32_t)v35 != 0) {
        // 0x4c93a5
        v36 = v35 - (int64_t)(int32_t)&g6 & 0xffffffff;
    }
    // 0x4c9130
    return v36 & 0xffffffff;
}

// Address range: 0x4f3410 - 0x4f38f1
// From class:    std::__moneypunct_cache<char, true>
// Type:          constructor
int64_t function_4f3410(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 16); // 0x4f3424
    int64_t v2 = *v1; // 0x4f3424
    if (v2 == 0) {
        int64_t result = function_4efd30(112); // 0x4f388d
        *(int32_t *)(result + 8) = 0;
        *(int64_t *)(result + 16) = 0;
        *(int64_t *)(result + 24) = 0;
        *(char *)(result + 32) = 0;
        *(int64_t *)(result + 40) = 0;
        *(int64_t *)(result + 48) = 0;
        *(int64_t *)(result + 56) = 0;
        *(int64_t *)result = (int64_t)&g24;
        *(int64_t *)(result + 64) = 0;
        *(int16_t *)(result + 33) = (int16_t)((int32_t)&g24 ^ (int32_t)&g24);
        *(int64_t *)(result + 72) = 0;
        *(int64_t *)(result + 80) = 0;
        return result;
    }
    if (a2 == 0) {
        // 0x4f3628
        *(char *)(v2 + 33) = 46;
        *(char *)(*v1 + 34) = 44;
        *(int64_t *)(*v1 + 16) = (int64_t)&g15;
        *(int64_t *)(*v1 + 24) = 0;
        *(char *)(*v1 + 32) = 0;
        *(int64_t *)(*v1 + 40) = (int64_t)&g15;
        *(int64_t *)(*v1 + 48) = 0;
        *(int64_t *)(*v1 + 56) = (int64_t)&g15;
        *(int64_t *)(*v1 + 64) = 0;
        *(int64_t *)(*v1 + 72) = (int64_t)&g15;
        *(int64_t *)(*v1 + 80) = 0;
        *(int32_t *)(*v1 + 88) = 0;
        *(int32_t *)(*v1 + 92) = 0x4000302;
        *(int32_t *)(*v1 + 96) = 0x4000302;
        int64_t v3 = (int32_t)&g26 ^ (int32_t)&g26; // 0x4f36c5
        int64_t v4 = v3;
        char v5 = *(char *)(v4 + *(int64_t *)&g26); // 0x4f36c8
        *(char *)(v4 + 100 + *v1) = v5;
        int64_t result2 = v4 + 1; // 0x4f36d4
        while (v4 != 10) {
            // 0x4f36c8
            v4 = result2;
            v5 = *(char *)(v4 + *(int64_t *)&g26);
            *(char *)(v4 + 100 + *v1) = v5;
            result2 = v4 + 1;
        }
        // 0x4f36de
        return result2;
    }
    struct __locale_struct * v6 = (struct __locale_struct *)a2; // 0x4f3440
    *(char *)(*v1 + 33) = *__nl_langinfo_l(0x40002, v6);
    *(char *)(*v1 + 34) = *__nl_langinfo_l(0x40003, v6);
    int64_t v7 = *v1; // 0x4f3466
    if (*(char *)(v7 + 33) != 0) {
        // 0x4f37f8
        *(int32_t *)(*v1 + 88) = (int32_t)*__nl_langinfo_l(0x40007, v6);
    } else {
        // 0x4f3474
        *(int32_t *)(v7 + 88) = 0;
        *(char *)(*v1 + 33) = 46;
    }
    char * str = __nl_langinfo_l(0x40004, v6); // 0x4f348b
    char * str2 = __nl_langinfo_l(0x40005, v6); // 0x4f349c
    char * str3 = __nl_langinfo_l(0x40006, v6); // 0x4f34ac
    char * str4 = __nl_langinfo_l(0x40000, v6); // 0x4f34be
    char * v8 = __nl_langinfo_l(0x40015, v6); // 0x4f34ce
    int64_t v9 = *v1; // 0x4f34d3
    char v10 = *v8; // 0x4f34d7
    int64_t v11; // 0x4f3410
    int64_t v12; // 0x4f3410
    if (*(char *)(v9 + 34) != 0) {
        int32_t len = strlen(str); // 0x4f3771
        int64_t v13 = len; // 0x4f3771
        if (len != 0) {
            int64_t v14 = v13 + 1; // 0x4f3818
            int64_t v15 = function_4eec00(v14); // 0x4f3824
            memcpy((int64_t *)v15, (int64_t *)str, (int32_t)v14);
            *(int64_t *)(*v1 + 16) = v15;
        } else {
            // 0x4f3787
            *(int64_t *)(v9 + 16) = (int64_t)&g15;
            *(char *)(*v1 + 32) = 0;
        }
        // 0x4f37a2
        *(int64_t *)(*v1 + 24) = v13;
        int32_t len2 = strlen(str2); // 0x4f37ad
        v11 = 0;
        v12 = len2;
        if (len2 == 0) {
            goto lab_0x4f3528;
        } else {
            goto lab_0x4f37be;
        }
    } else {
        // 0x4f34e5
        *(int64_t *)(v9 + 16) = (int64_t)&g15;
        *(int64_t *)(*v1 + 24) = 0;
        *(char *)(*v1 + 32) = 0;
        *(char *)(*v1 + 34) = 44;
        int32_t len3 = strlen(str2); // 0x4f3517
        int64_t v16 = len3; // 0x4f3517
        v11 = v16;
        v12 = v16;
        if (len3 != 0) {
            goto lab_0x4f37be;
        } else {
            goto lab_0x4f3528;
        }
    }
  lab_0x4f3528:
    // 0x4f3528
    *(int64_t *)(*v1 + 56) = (int64_t)&g15;
    int64_t v17 = v11; // 0x4f353c
    goto lab_0x4f3540;
  lab_0x4f37be:;
    int64_t v31 = v12 + 1; // 0x4f37be
    int64_t v32 = function_4eec00(v31); // 0x4f37ca
    memcpy((int64_t *)v32, (int64_t *)str2, (int32_t)v31);
    *(int64_t *)(*v1 + 56) = v32;
    v17 = v12;
    goto lab_0x4f3540;
  lab_0x4f3540:
    // 0x4f3540
    *(int64_t *)(*v1 + 64) = v17;
    int64_t v18; // 0x4f3410
    int64_t v19; // 0x4f3410
    if (v10 != 0) {
        int32_t len4 = strlen(str3); // 0x4f36f5
        if (len4 != 0) {
            // 0x4f3850
            int64_t v20; // 0x4f36f5
            int64_t v21 = v20 + 1; // 0x4f3850
            int64_t v22 = function_4eec00(v21); // 0x4f385c
            memcpy((int64_t *)v22, (int64_t *)str3, (int32_t)v21);
            int64_t v23 = *v1; // 0x4f3876
            *(int64_t *)(v23 + 72) = v22;
        } else {
            // 0x4f3706
            *(int64_t *)(*v1 + 72) = (int64_t)&g15;
        }
        // 0x4f3718
        *(int64_t *)(*v1 + 80) = (int64_t)len4;
        int32_t len5 = strlen(str4); // 0x4f3723
        v18 = 0;
        v19 = len5;
        if (len5 == 0) {
            goto lab_0x4f3583;
        } else {
            goto lab_0x4f3734;
        }
    } else {
        // 0x4f3551
        *(int64_t *)(*v1 + 72) = (int64_t)"()";
        *(int64_t *)(*v1 + 80) = 2;
        int32_t len6 = strlen(str4); // 0x4f3572
        int64_t v24 = len6; // 0x4f3572
        v18 = v24;
        v19 = v24;
        if (len6 != 0) {
            goto lab_0x4f3734;
        } else {
            goto lab_0x4f3583;
        }
    }
  lab_0x4f3583:
    // 0x4f3583
    *(int64_t *)(*v1 + 40) = (int64_t)&g15;
    int64_t v25 = v18; // 0x4f358e
    goto lab_0x4f3592;
  lab_0x4f3734:;
    int64_t v30 = v19 + 1; // 0x4f3734
    int64_t * dest_mem = memcpy((int64_t *)function_4eec00(v30), (int64_t *)str4, (int32_t)v30); // 0x4f3750
    *(int64_t *)(*v1 + 40) = (int64_t)dest_mem;
    v25 = v19;
    goto lab_0x4f3592;
  lab_0x4f3592:
    // 0x4f3592
    *(int64_t *)(*v1 + 48) = v25;
    char v26 = *__nl_langinfo_l(0x40010, v6); // 0x4f35af
    char v27 = *__nl_langinfo_l(0x40011, v6); // 0x4f35bb
    int64_t v28 = function_4f3230((int64_t)v26, (int64_t)v27, *__nl_langinfo_l(0x40014, v6)); // 0x4f35d8
    *(int32_t *)(*v1 + 92) = (int32_t)v28;
    char v29 = *__nl_langinfo_l(0x40012, v6); // 0x4f35f1
    int64_t result3 = function_4f3230((int64_t)v29, (int64_t)*__nl_langinfo_l(0x40013, v6), v10); // 0x4f360e
    *(int32_t *)(*v1 + 96) = (int32_t)result3;
    return result3;
}

// Address range: 0x4f39b0 - 0x4f3e91
// From class:    std::__moneypunct_cache<char, false>
// Type:          constructor
int64_t function_4f39b0(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 16); // 0x4f39c4
    int64_t v2 = *v1; // 0x4f39c4
    if (v2 == 0) {
        int64_t result = function_4efd30(112); // 0x4f3e2d
        *(int32_t *)(result + 8) = 0;
        *(int64_t *)(result + 16) = 0;
        *(int64_t *)(result + 24) = 0;
        *(char *)(result + 32) = 0;
        *(int64_t *)(result + 40) = 0;
        *(int64_t *)(result + 48) = 0;
        *(int64_t *)(result + 56) = 0;
        *(int64_t *)result = (int64_t)&g25;
        *(int64_t *)(result + 64) = 0;
        *(int16_t *)(result + 33) = (int16_t)((int32_t)&g25 ^ (int32_t)&g25);
        *(int64_t *)(result + 72) = 0;
        *(int64_t *)(result + 80) = 0;
        return result;
    }
    if (a2 == 0) {
        // 0x4f3bc8
        *(char *)(v2 + 33) = 46;
        *(char *)(*v1 + 34) = 44;
        *(int64_t *)(*v1 + 16) = (int64_t)&g15;
        *(int64_t *)(*v1 + 24) = 0;
        *(char *)(*v1 + 32) = 0;
        *(int64_t *)(*v1 + 40) = (int64_t)&g15;
        *(int64_t *)(*v1 + 48) = 0;
        *(int64_t *)(*v1 + 56) = (int64_t)&g15;
        *(int64_t *)(*v1 + 64) = 0;
        *(int64_t *)(*v1 + 72) = (int64_t)&g15;
        *(int64_t *)(*v1 + 80) = 0;
        *(int32_t *)(*v1 + 88) = 0;
        *(int32_t *)(*v1 + 92) = 0x4000302;
        *(int32_t *)(*v1 + 96) = 0x4000302;
        int64_t v3 = (int32_t)&g26 ^ (int32_t)&g26; // 0x4f3c65
        int64_t v4 = v3;
        char v5 = *(char *)(v4 + *(int64_t *)&g26); // 0x4f3c68
        *(char *)(v4 + 100 + *v1) = v5;
        int64_t result2 = v4 + 1; // 0x4f3c74
        while (v4 != 10) {
            // 0x4f3c68
            v4 = result2;
            v5 = *(char *)(v4 + *(int64_t *)&g26);
            *(char *)(v4 + 100 + *v1) = v5;
            result2 = v4 + 1;
        }
        // 0x4f3c7e
        return result2;
    }
    struct __locale_struct * v6 = (struct __locale_struct *)a2; // 0x4f39e0
    *(char *)(*v1 + 33) = *__nl_langinfo_l(0x40002, v6);
    *(char *)(*v1 + 34) = *__nl_langinfo_l(0x40003, v6);
    int64_t v7 = *v1; // 0x4f3a06
    if (*(char *)(v7 + 33) != 0) {
        // 0x4f3d98
        *(int32_t *)(*v1 + 88) = (int32_t)*__nl_langinfo_l(0x40008, v6);
    } else {
        // 0x4f3a14
        *(int32_t *)(v7 + 88) = 0;
        *(char *)(*v1 + 33) = 46;
    }
    char * str = __nl_langinfo_l(0x40004, v6); // 0x4f3a2b
    char * str2 = __nl_langinfo_l(0x40005, v6); // 0x4f3a3c
    char * str3 = __nl_langinfo_l(0x40006, v6); // 0x4f3a4c
    char * str4 = __nl_langinfo_l(0x40001, v6); // 0x4f3a5e
    char * v8 = __nl_langinfo_l(0x4000e, v6); // 0x4f3a6e
    int64_t v9 = *v1; // 0x4f3a73
    char v10 = *v8; // 0x4f3a77
    int64_t v11; // 0x4f39b0
    int64_t v12; // 0x4f39b0
    if (*(char *)(v9 + 34) != 0) {
        int32_t len = strlen(str); // 0x4f3d11
        int64_t v13 = len; // 0x4f3d11
        if (len != 0) {
            int64_t v14 = v13 + 1; // 0x4f3db8
            int64_t v15 = function_4eec00(v14); // 0x4f3dc4
            memcpy((int64_t *)v15, (int64_t *)str, (int32_t)v14);
            *(int64_t *)(*v1 + 16) = v15;
        } else {
            // 0x4f3d27
            *(int64_t *)(v9 + 16) = (int64_t)&g15;
            *(char *)(*v1 + 32) = 0;
        }
        // 0x4f3d42
        *(int64_t *)(*v1 + 24) = v13;
        int32_t len2 = strlen(str2); // 0x4f3d4d
        v11 = 0;
        v12 = len2;
        if (len2 == 0) {
            goto lab_0x4f3ac8;
        } else {
            goto lab_0x4f3d5e;
        }
    } else {
        // 0x4f3a85
        *(int64_t *)(v9 + 16) = (int64_t)&g15;
        *(int64_t *)(*v1 + 24) = 0;
        *(char *)(*v1 + 32) = 0;
        *(char *)(*v1 + 34) = 44;
        int32_t len3 = strlen(str2); // 0x4f3ab7
        int64_t v16 = len3; // 0x4f3ab7
        v11 = v16;
        v12 = v16;
        if (len3 != 0) {
            goto lab_0x4f3d5e;
        } else {
            goto lab_0x4f3ac8;
        }
    }
  lab_0x4f3ac8:
    // 0x4f3ac8
    *(int64_t *)(*v1 + 56) = (int64_t)&g15;
    int64_t v17 = v11; // 0x4f3adc
    goto lab_0x4f3ae0;
  lab_0x4f3d5e:;
    int64_t v31 = v12 + 1; // 0x4f3d5e
    int64_t v32 = function_4eec00(v31); // 0x4f3d6a
    memcpy((int64_t *)v32, (int64_t *)str2, (int32_t)v31);
    *(int64_t *)(*v1 + 56) = v32;
    v17 = v12;
    goto lab_0x4f3ae0;
  lab_0x4f3ae0:
    // 0x4f3ae0
    *(int64_t *)(*v1 + 64) = v17;
    int64_t v18; // 0x4f39b0
    int64_t v19; // 0x4f39b0
    if (v10 != 0) {
        int32_t len4 = strlen(str3); // 0x4f3c95
        if (len4 != 0) {
            // 0x4f3df0
            int64_t v20; // 0x4f3c95
            int64_t v21 = v20 + 1; // 0x4f3df0
            int64_t v22 = function_4eec00(v21); // 0x4f3dfc
            memcpy((int64_t *)v22, (int64_t *)str3, (int32_t)v21);
            int64_t v23 = *v1; // 0x4f3e16
            *(int64_t *)(v23 + 72) = v22;
        } else {
            // 0x4f3ca6
            *(int64_t *)(*v1 + 72) = (int64_t)&g15;
        }
        // 0x4f3cb8
        *(int64_t *)(*v1 + 80) = (int64_t)len4;
        int32_t len5 = strlen(str4); // 0x4f3cc3
        v18 = 0;
        v19 = len5;
        if (len5 == 0) {
            goto lab_0x4f3b23;
        } else {
            goto lab_0x4f3cd4;
        }
    } else {
        // 0x4f3af1
        *(int64_t *)(*v1 + 72) = (int64_t)"()";
        *(int64_t *)(*v1 + 80) = 2;
        int32_t len6 = strlen(str4); // 0x4f3b12
        int64_t v24 = len6; // 0x4f3b12
        v18 = v24;
        v19 = v24;
        if (len6 != 0) {
            goto lab_0x4f3cd4;
        } else {
            goto lab_0x4f3b23;
        }
    }
  lab_0x4f3b23:
    // 0x4f3b23
    *(int64_t *)(*v1 + 40) = (int64_t)&g15;
    int64_t v25 = v18; // 0x4f3b2e
    goto lab_0x4f3b32;
  lab_0x4f3cd4:;
    int64_t v30 = v19 + 1; // 0x4f3cd4
    int64_t * dest_mem = memcpy((int64_t *)function_4eec00(v30), (int64_t *)str4, (int32_t)v30); // 0x4f3cf0
    *(int64_t *)(*v1 + 40) = (int64_t)dest_mem;
    v25 = v19;
    goto lab_0x4f3b32;
  lab_0x4f3b32:
    // 0x4f3b32
    *(int64_t *)(*v1 + 48) = v25;
    char v26 = *__nl_langinfo_l(0x40009, v6); // 0x4f3b4f
    char v27 = *__nl_langinfo_l(0x4000a, v6); // 0x4f3b5b
    int64_t v28 = function_4f3230((int64_t)v26, (int64_t)v27, *__nl_langinfo_l(0x4000d, v6)); // 0x4f3b78
    *(int32_t *)(*v1 + 92) = (int32_t)v28;
    char v29 = *__nl_langinfo_l(0x4000b, v6); // 0x4f3b91
    int64_t result3 = function_4f3230((int64_t)v29, (int64_t)*__nl_langinfo_l(0x4000c, v6), v10); // 0x4f3bae
    *(int32_t *)(*v1 + 96) = (int32_t)result3;
    return result3;
}

// Address range: 0x50fc20 - 0x51005b
int64_t function_50fc20(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, uint64_t a8, int64_t a9, int64_t a10) {
    int64_t result = a2; // bp-88, 0x50fc40
    int64_t v1 = a4; // bp-104, 0x50fc48
    __readfsqword(40);
    int64_t v2 = function_50ab00(a9 + 208); // 0x50fc72
    int64_t v3; // bp-152, 0x50fc20
    int64_t v4 = (int64_t)&v3 - (8 * a8 + 30 & -16) + 15;
    int64_t v5 = v4 & -16; // 0x50fca1
    int64_t v6 = function_50f6f0(&result, &v1, a3, a4); // 0x50fca8
    int64_t v7 = 0; // 0x50fcb3
    int64_t v8 = 0; // 0x50fcb3
    int64_t v9 = 0; // 0x50fcb3
    if ((char)v6 == 0) {
        int64_t v10 = (int64_t)&result; // 0x50fc9d
        int64_t v11 = function_50f7d0(v10); // 0x50ff50
        int64_t v12 = 2 * a8; // 0x50ff60
        v7 = 0;
        v8 = 0;
        v9 = 0;
        if (v12 != 0) {
            int32_t v13 = v11; // 0x50ff9f
            int64_t v14 = 0;
            int64_t v15 = 0;
            int64_t v16; // 0x50fc20
            int64_t v17; // 0x50ff8f
            while (*(int32_t *)*(int64_t *)(8 * v15 + a7) != v13) {
                // 0x50ff80
                if (v13 == (int32_t)*(int64_t *)v2) {
                    // break -> 0x50ffa4
                    break;
                }
                // 0x50ff8f
                v17 = v15 + 1;
                v16 = v14;
                if (v17 == v12) {
                    // break (via goto) -> 0x50ffba
                    goto lab_0x50ffba;
                }
                v15 = v17;
            }
            // 0x50ffa4
            *(int32_t *)(4 * v14 + v5) = (int32_t)v15;
            int64_t v18 = v14 + 1; // 0x50ffac
            int64_t v19 = v15 + 1; // 0x50ffb0
            v16 = v18;
            while (v19 != v12) {
                // 0x50ff99
                v14 = v18;
                v15 = v19;
                while (*(int32_t *)*(int64_t *)(8 * v15 + a7) != v13) {
                    // 0x50ff80
                    if (v13 == (int32_t)*(int64_t *)v2) {
                        // break -> 0x50ffa4
                        break;
                    }
                    // 0x50ff8f
                    v17 = v15 + 1;
                    v16 = v14;
                    if (v17 == v12) {
                        // break (via goto) -> 0x50ffba
                        goto lab_0x50ffba;
                    }
                    v15 = v17;
                }
                // 0x50ffa4
                *(int32_t *)(4 * v14 + v5) = (int32_t)v15;
                v18 = v14 + 1;
                v19 = v15 + 1;
                v16 = v18;
            }
          lab_0x50ffba:
            // 0x50ffba
            v7 = 0;
            v8 = 0;
            v9 = 0;
            if (v16 != 0) {
                // 0x50ffca
                function_50d7a0(v10);
                int64_t v20 = v4 - (8 * v16 + 30 & -16) & -16; // 0x50fff5
                int64_t v21 = 0; // 0x510003
                int32_t v22 = *(int32_t *)(4 * v21 + v5); // 0x510008
                int32_t v23 = wcslen((int32_t *)*(int64_t *)(8 * (int64_t)v22 + a7)); // 0x510011
                *(int64_t *)(8 * v21 + v20) = (int64_t)v23;
                v21++;
                v7 = v16;
                v8 = 1;
                v9 = v20;
                while (v16 != v21) {
                    // 0x510008
                    v22 = *(int32_t *)(4 * v21 + v5);
                    v23 = wcslen((int32_t *)*(int64_t *)(8 * (int64_t)v22 + a7));
                    *(int64_t *)(8 * v21 + v20) = (int64_t)v23;
                    v21++;
                    v7 = v16;
                    v8 = 1;
                    v9 = v20;
                }
            }
        }
    }
    int64_t v24 = result; // 0x50fcc1
    int64_t v25; // 0x50fc20
    int64_t v26; // 0x50fc20
    int64_t v27; // 0x50fc20
    int64_t v28; // 0x50fc20
    int64_t v29; // 0x50fc20
    if (v24 == 0) {
        goto lab_0x50fe37;
    } else {
        if ((int32_t)a3 == -1) {
            // 0x50fce0
            goto lab_0x50fe80;
        } else {
            // 0x50fcec
            v25 = v8;
            v26 = v7;
            v29 = a3;
            v28 = v1;
            v27 = v7;
            if (v1 == 0) {
                goto lab_0x50fda5;
            } else {
                goto lab_0x50fcf9;
            }
        }
    }
  lab_0x50fe37:;
    int64_t v30 = v7; // 0x50fe37
    int64_t v31 = v1; // 0x50fe37
    int64_t v32 = v8; // 0x50fe37
    goto lab_0x50fe3b;
  lab_0x50fe3b:;
    int64_t v33 = v30; // 0x50fe3e
    int64_t v34 = v32; // 0x50fe3e
    int64_t v35; // 0x50fc20
    int64_t v36; // 0x50fc20
    int64_t v37; // 0x50fc20
    char v38; // 0x50fc20
    int64_t v39; // 0x50fc20
    if (v31 == 0) {
        goto lab_0x50fcff;
    } else {
        // 0x50fe44
        v39 = a3;
        v38 = 1;
        v36 = v30;
        v37 = v31;
        v35 = v32;
        v27 = v30;
        if ((int32_t)a5 == -1) {
            goto lab_0x50fd52;
        } else {
            goto lab_0x50fda5;
        }
    }
  lab_0x50fcff:
    // 0x50fcff
    if (v33 != 1) {
        if (v33 != 2) {
            goto lab_0x50fd18;
        } else {
            // 0x50feb4
            if (*(int64_t *)v9 == v34) {
                goto lab_0x50fec3;
            } else {
                // 0x50feb9
                if (*(int64_t *)(v9 || 8) != v34) {
                    goto lab_0x50fd18;
                } else {
                    goto lab_0x50fec3;
                }
            }
        }
    } else {
        // 0x50fd09
        if (*(int64_t *)v9 == v34) {
            goto lab_0x50fec3;
        } else {
            goto lab_0x50fd18;
        }
    }
  lab_0x50fe80:;
    uint64_t v40 = *(int64_t *)(v24 + 16); // 0x50fe80
    int64_t v41; // 0x50fc20
    if (v40 >= *(int64_t *)(v24 + 24)) {
        // 0x510035
        v41 = *(int64_t *)v24;
    } else {
        // 0x50fe8e
        v41 = (int64_t)*(int32_t *)v40;
    }
    int64_t v42 = v1; // 0x50fe93
    int64_t v43; // 0x50fc20
    int64_t v44; // 0x50fc20
    if ((int32_t)v41 == -1) {
        // 0x50ff10
        result = 0;
        v30 = v7;
        v31 = v42;
        v32 = v8;
        goto lab_0x50fe3b;
    } else {
        int64_t v45 = 0x100000000 * v41 >> 32; // 0x50fe9c
        v25 = v8;
        v26 = v7;
        v29 = v45;
        v28 = v42;
        v44 = v45;
        v43 = v7;
        if (v42 != 0) {
            goto lab_0x50fcf9;
        } else {
            goto lab_0x50fd74;
        }
    }
  lab_0x50fda5:
    // 0x50fda5
    if (v27 == 0) {
        goto lab_0x50fd18;
    } else {
        // 0x50fdc5
        int64_t v46; // 0x50fc20
        int64_t v47; // 0x50fc20
        int64_t v48; // 0x50fc20
        while (true) {
            // 0x50fdc5
            int64_t v49; // 0x50fc20
            uint64_t v50; // 0x50fc20
            while (v49 > v46) {
                // 0x50fdce
                int32_t * v51; // 0x50fc20
                int32_t v52 = *v51; // 0x50fdd2
                int64_t v53 = *(int64_t *)(8 * (int64_t)v52 + a7); // 0x50fdd5
                int64_t v54; // 0x50fc20
                int32_t v55 = *(int32_t *)(v53 + v54); // 0x50fdd9
                int64_t v56 = v48; // 0x50fddd
                int32_t v57; // 0x50fc20
                if (v55 == v57) {
                    goto lab_0x50fdc0;
                }
                // 0x50fde3
                int64_t v58; // 0x50fc20
                int64_t v59 = v58 - 1; // 0x50fde3
                int32_t v60 = *(int32_t *)(4 * v59 + v5); // 0x50fde7
                *v51 = v60;
                int64_t v61; // 0x50fc20
                int64_t v62 = *(int64_t *)(8 * v59 + v61); // 0x50fdf1
                int64_t * v63; // 0x50fdc9
                *v63 = v62;
                v49 = v62;
                v47 = v59;
                int64_t v64 = v59; // 0x50fdf8
                int64_t v65 = v48; // 0x50fdf8
                if (v50 >= v59) {
                    // break (via goto) -> 0x50fdfa
                    goto lab_0x50fdfa;
                }
                v58 = v47;
            }
          lab_0x50fdc0:
            // 0x50fdc0
            if (v50 + 1 >= v47) {
                // break -> 0x50fdfa
                break;
            }
        }
      lab_0x50fdfa:
        // 0x50fdfa
        v33 = v47;
        v34 = v46;
        if (v48 + 1 == v47) {
            goto lab_0x50fcff;
        } else {
            int64_t v66 = result; // 0x50fe03
            if (v66 == 0) {
                // 0x50fe26
                goto lab_0x50fe37;
            } else {
                int64_t * v67 = (int64_t *)(v66 + 16);
                uint64_t v68 = *v67; // 0x50fe0c
                if (v68 < *(int64_t *)(v66 + 24)) {
                    // 0x50fe1a
                    *v67 = v68 + 4;
                }
                // 0x50fce0
                goto lab_0x50fe80;
            }
        }
    }
  lab_0x50fcf9:
    // 0x50fcf9
    v33 = v26;
    v34 = v25;
    v39 = v29;
    v38 = 0;
    v36 = v26;
    v37 = v28;
    v35 = v25;
    if ((int32_t)a5 == -1) {
        goto lab_0x50fd52;
    } else {
        goto lab_0x50fcff;
    }
  lab_0x50fd52:;
    uint64_t v69 = *(int64_t *)(v37 + 16); // 0x50fd52
    if (v69 >= *(int64_t *)(v37 + 24)) {
        // 0x510050
        return *(int64_t *)v37;
    }
    // 0x50fd60
    char v70; // 0x50fc20
    if (*(int32_t *)v69 == -1) {
        // 0x50ff20
        v1 = 0;
        v70 = 1;
    } else {
        // 0x50fd6b
        v70 = 0;
    }
    // 0x50fd70
    v33 = v36;
    v34 = v35;
    v44 = v39;
    v43 = v36;
    if (v70 == v38) {
        goto lab_0x50fcff;
    } else {
        goto lab_0x50fd74;
    }
  lab_0x50fd18:;
    int32_t * v71 = (int32_t *)a10; // 0x50fd1c
    *v71 = *v71 | 4;
    // 0x50fd1f
    __readfsqword(40);
    return result;
  lab_0x50fec3:;
    int32_t v72 = *(int32_t *)v5; // 0x50fec3
    *(int32_t *)a6 = v72 - ((int64_t)v72 >= a8 ? (int32_t)a8 : 0);
    // 0x50fd1f
    __readfsqword(40);
    return result;
  lab_0x50fd74:
    // 0x50fd74
    v27 = v43;
    if (result != 0) {
        // 0x50fd81
        v27 = v43;
        if ((int32_t)v44 == -1) {
            uint64_t result2 = *(int64_t *)(result + 16); // 0x50fd89
            if (result2 >= *(int64_t *)(result + 24)) {
                // 0x510072
                return result2;
            }
            // 0x50fd97
            if (*(int32_t *)result2 == -1) {
                // 0x50ff38
                result = 0;
                v27 = v43;
            } else {
                // 0x50fda2
                v27 = v43;
            }
        }
    }
    goto lab_0x50fda5;
}

// Address range: 0x517bf0 - 0x5180b4
// From class:    std::num_get<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
// Type:          virtual member function
int64_t function_517bf0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x517bf0
    __readfsqword(40);
    int64_t result = a2; // bp-88, 0x517c13
    int64_t v1 = a4; // bp-104, 0x517c1d
    char v2; // bp-72, 0x517bf0
    if (*(char *)(a6 + 24) % 2 == 0) {
        // 0x517c39
        v2 = -1;
        result = function_517200();
        if (v2 < 2) {
            // 0x517c77
            *(char *)a8 = v2 % 2;
            // 0x517c7e
            __readfsqword(40);
            return result;
        }
        // 0x517fa8
        *(char *)a8 = 1;
        int32_t * v3 = (int32_t *)a7; // 0x517fb6
        *v3 = 4;
        int64_t v4 = function_50f6f0(&result, &v1, a7, (int64_t)&v2); // 0x517fbe
        if ((char)v4 != 0) {
            // 0x517fcb
            *v3 = *v3 | 2;
        }
      lab_0x517c7e:
        // 0x517c7e
        __readfsqword(40);
        return result;
    }
    int64_t v5 = function_50e0e0((int64_t *)&v2, a6 + 208); // 0x517cc2
    int64_t v6 = *(int64_t *)(v5 + 64); // 0x517cc7
    int64_t v7 = *(int64_t *)(v5 + 48); // 0x517cdd
    int64_t result2 = 0; // 0x517cee
    int64_t v8 = v5; // 0x517cee
    int64_t v9 = 1; // 0x517cee
    int64_t v10 = 0; // 0x517cee
    int64_t v11; // 0x517bf0
    int64_t v12; // 0x517bf0
    int64_t v13; // 0x517bf0
    bool v14; // 0x517bf0
    int64_t v15; // 0x517bf0
    int64_t v16; // 0x517bf0
    int64_t v17; // 0x517bf0
    int64_t v18; // 0x517bf0
    int64_t v19; // 0x517bf0
    int64_t v20; // 0x517bf0
    int64_t v21; // 0x517bf0
    int64_t v22; // 0x517bf0
    int64_t v23; // 0x517bf0
    int64_t v24; // 0x517bf0
    int64_t v25; // 0x517bf0
    int64_t v26; // 0x517bf0
    int64_t v27; // 0x517bf0
    int64_t v28; // 0x517bf0
    int64_t v29; // 0x517bf0
    int64_t v30; // 0x517bf0
    int64_t v31; // 0x517bf0
    int64_t v32; // 0x517bf0
    int64_t v33; // 0x517bf0
    int64_t v34; // 0x517bf0
    int64_t v35; // 0x517bf0
    int64_t v36; // 0x517bf0
    int64_t v37; // 0x517bf0
    int64_t v38; // 0x517bf0
    int64_t v39; // 0x517bf0
    int64_t v40; // 0x517bf0
    int64_t v41; // 0x517bf0
    int64_t v42; // 0x517bf0
    int64_t v43; // 0x517bf0
    int64_t v44; // 0x517bf0
    int64_t v45; // 0x517bf0
    int64_t v46; // 0x517bf0
    int64_t v47; // 0x517bf0
    int64_t v48; // 0x517bf0
    int64_t v49; // 0x517bf0
    int64_t v50; // 0x517bf0
    int64_t v51; // 0x517bf0
    int64_t v52; // 0x517bf0
    int64_t v53; // 0x517bf0
    int64_t v54; // 0x517bf0
    int64_t v55; // 0x517bf0
    int64_t v56; // 0x517bf0
    int64_t v57; // 0x517bf0
    int64_t v58; // 0x517bf0
    int64_t v59; // 0x517cf4
    uint64_t v60; // 0x517bf0
    if ((v7 || v6) == 0) {
        goto lab_0x517d2e;
    } else {
        // 0x517cf4
        v12 = (v7 | v6) == 0;
        v21 = v7 == 0;
        v18 = 1;
        v15 = v6 == 0;
        v28 = 0;
        v40 = 1;
        v32 = v5;
        v54 = a5;
        v48 = a3;
        while (true) {
          lab_0x517cf4_2:
            // 0x517cf4
            v49 = v48;
            v55 = v54;
            v34 = v32;
            v44 = v40;
            v29 = v28;
            v24 = v12;
            v16 = v15;
            v19 = v18;
            v22 = v21;
            while (true) {
              lab_0x517cf4:
                // 0x517cf4
                v23 = v22;
                v20 = v19;
                v25 = v24;
                v30 = v29;
                int64_t v61 = v44;
                v35 = v34;
                v56 = v55;
                v50 = v49;
                v59 = result;
                if (v59 == 0) {
                    // 0x517f20
                    v43 = v61;
                    v39 = v1;
                    goto lab_0x517f25;
                } else {
                    if ((int32_t)v50 == -1) {
                        uint64_t v62 = *(int64_t *)(v59 + 16); // 0x517ec8
                        int64_t v63; // 0x517bf0
                        int64_t v64; // 0x517bf0
                        if (v62 >= *(int64_t *)(v59 + 24)) {
                            // 0x518060
                            v63 = *(int64_t *)v59;
                            v64 = v61 % 256;
                        } else {
                            // 0x517ed6
                            v63 = (int64_t)*(int32_t *)v62;
                            v64 = v61;
                        }
                        int64_t v65 = v64;
                        int64_t v66 = v63;
                        int64_t v67 = v1; // 0x517edb
                        if ((int32_t)v66 == -1) {
                            // 0x518040
                            result = 0;
                            v43 = v65;
                            v39 = v67;
                            goto lab_0x517f25;
                        } else {
                            int64_t v68 = 0x100000000 * v66 >> 32; // 0x517ee9
                            v51 = v68;
                            v45 = v65;
                            v37 = v67;
                            v52 = v68;
                            v57 = v56;
                            v41 = v65;
                            v38 = v59;
                            if (v67 != 0) {
                                goto lab_0x517d1d;
                            } else {
                                goto lab_0x517da3;
                            }
                        }
                    } else {
                        // 0x517d0f
                        v51 = v50;
                        v45 = v61;
                        v37 = v1;
                        v13 = v59;
                        v53 = v50;
                        v58 = v56;
                        v27 = v50 & 0xffffffff;
                        v33 = v35;
                        v42 = v61;
                        if (v1 == 0) {
                            goto lab_0x517dc9;
                        } else {
                            goto lab_0x517d1d;
                        }
                    }
                }
            }
          lab_0x517eb3_3:;
            int64_t v69 = v60 % 256; // 0x517e0b
            v14 = true;
            v11 = v69;
            v17 = v69;
            goto lab_0x517eb3_2;
        }
      lab_0x517d24_3:
        // 0x517d24
        result2 = 1;
        v8 = v35;
        v9 = v46;
        v10 = v30;
        v26 = 1;
        v36 = v35;
        v47 = v46;
        v31 = v30;
        if ((char)v20 == 0) {
            goto lab_0x517d3d;
        } else {
            goto lab_0x517d2e;
        }
    }
  lab_0x517d2e:;
    int64_t v70 = v10;
    v26 = result2;
    v36 = v8;
    v47 = v9;
    v31 = v70;
    if (*(int64_t *)(v8 + 64) == v70 == (v70 != 0)) {
        // 0x5180b8
        return result2;
    }
    goto lab_0x517d3d;
  lab_0x517f25:;
    int64_t v72 = v39;
    int64_t v73 = v43;
    v46 = v73;
    if (v72 == 0) {
        // break (via goto) -> 0x517d24
        goto lab_0x517d24_3;
    }
    // 0x517f2e
    v13 = 0;
    v53 = v50;
    v58 = v56;
    v27 = 0xffffffff;
    v33 = v35;
    v42 = v73;
    int64_t v74; // 0x517bf0
    int64_t v75; // 0x517bf0
    int64_t v76; // 0x517bf0
    int64_t v77; // 0x517bf0
    int64_t v78; // 0x517bf0
    int64_t v79; // 0x517bf0
    int64_t v80; // 0x517bf0
    int64_t v81; // 0x517bf0
    int64_t v82; // 0x517bf0
    int64_t v83; // 0x517bf0
    if ((int32_t)v56 != -1) {
        goto lab_0x517dc9;
    } else {
        uint64_t v84 = *(int64_t *)(v72 + 16); // 0x517f3f
        v74 = 0;
        v83 = v50;
        v78 = v84;
        v81 = v73;
        v76 = 1;
        v75 = 0;
        v82 = v50;
        v80 = v73;
        v79 = v72;
        v77 = 1;
        if (v84 < *(int64_t *)(v72 + 24)) {
            goto lab_0x517d81;
        } else {
            goto lab_0x517f4d;
        }
    }
  lab_0x517dc9:;
    int64_t v85 = v33;
    int64_t v86 = v27;
    int64_t v87 = v58;
    int64_t v88 = v13; // 0x517e14
    int64_t v89 = 4 * v30; // 0x517dcc
    int64_t result3; // 0x517bf0
    int64_t v90; // 0x517bf0
    int64_t v91; // 0x517bf0
    int32_t v92; // 0x517dde
    int32_t v93; // 0x517de1
    if (v16 != 0) {
        int32_t v94 = *(int32_t *)(*(int64_t *)(v85 + 40) + v89); // 0x517e74
        v91 = 1;
        v90 = v20;
        if (v94 != (int32_t)v86) {
            if ((char)v20 == 0) {
                // 0x517ff0
                *(char *)a8 = 0;
                goto lab_0x517ff4;
            } else {
                // 0x517e87
                if (v30 == 0 | *(int64_t *)(v85 + 64) != v30) {
                    // 0x517ff0
                    *(char *)a8 = 0;
                    goto lab_0x517ff4;
                } else {
                    // 0x517e9a
                    *(char *)a8 = 0;
                    *(int32_t *)a7 = 0;
                    goto lab_0x517c7e;
                }
            }
        }
        goto lab_0x517e08;
    } else {
        int64_t v95 = v42;
        v92 = *(int32_t *)(*(int64_t *)(v85 + 56) + v89);
        v93 = v86;
        if (v92 == v93) {
            // 0x517f10
            v91 = v95;
            v90 = 1;
            if ((char)v23 != 0) {
                goto lab_0x517e08;
            } else {
                goto lab_0x517df6;
            }
        } else {
            if ((char)v23 != 0) {
                if ((char)v95 == 0) {
                    // 0x517ff0
                    *(char *)a8 = 0;
                    goto lab_0x517ff4;
                } else {
                    // 0x517fdc
                    result3 = v86;
                    if (*(int64_t *)(v85 + 48) == v30) {
                        goto lab_0x5180b8;
                    } else {
                        // 0x517ff0
                        *(char *)a8 = 0;
                        goto lab_0x517ff4;
                    }
                }
            }
            goto lab_0x517df6;
        }
    }
  lab_0x517d1d:
    // 0x517d1d
    v46 = v45;
    if ((int32_t)v56 != -1) {
        // break (via goto) -> 0x517d24
        goto lab_0x517d24_3;
    }
    uint64_t v96 = *(int64_t *)(v37 + 16); // 0x517d73
    v74 = v59;
    v83 = v51;
    v78 = v96;
    v81 = v45;
    v76 = 0;
    v75 = v59;
    v82 = v51;
    v80 = v45;
    v79 = v37;
    v77 = 0;
    if (v96 >= *(int64_t *)(v37 + 24)) {
        goto lab_0x517f4d;
    } else {
        goto lab_0x517d81;
    }
  lab_0x517d81:;
    uint32_t v97 = *(int32_t *)v78; // 0x517d81
    int64_t v98 = v74; // 0x517d86
    int64_t v99 = v83; // 0x517d86
    int64_t v100 = v97; // 0x517d86
    int64_t v101 = v81; // 0x517d86
    int64_t v102 = v25; // 0x517d86
    int64_t v103 = v76; // 0x517d86
    int64_t v104 = v74; // 0x517d86
    int64_t v105 = v83; // 0x517d86
    int64_t v106 = v81; // 0x517d86
    int64_t v107 = v76; // 0x517d86
    if (v97 == -1) {
        goto lab_0x517f90;
    } else {
        goto lab_0x517d8c;
    }
  lab_0x517f4d:;
    int64_t v108 = *(int64_t *)v79; // 0x517f4d
    int64_t v109 = v80 % 256; // 0x517f76
    v98 = v75;
    v99 = v82;
    v100 = v108;
    v101 = v109;
    v102 = v25 % 256;
    v103 = v77;
    v104 = v75;
    v105 = v82;
    v106 = v109;
    v107 = v77;
    if ((int32_t)v108 != -1) {
        goto lab_0x517d8c;
    } else {
        goto lab_0x517f90;
    }
  lab_0x517da3:;
    int64_t v110 = v38;
    int64_t v111 = v41;
    int64_t v112 = v57;
    int64_t v113 = v52;
    v13 = v110;
    v53 = v113;
    v58 = v112;
    v27 = v113 & 0xffffffff;
    v33 = v35;
    v42 = v111;
    if ((int32_t)v113 == -1) {
        uint64_t v114 = *(int64_t *)(v110 + 16); // 0x517dac
        int64_t v115; // 0x517bf0
        int64_t v116; // 0x517bf0
        int64_t v117; // 0x517bf0
        if (v114 >= *(int64_t *)(v110 + 24)) {
            // 0x518090
            v115 = *(int64_t *)v110;
            v116 = 0x100000000 * v35 >> 32;
            v117 = v111 % 256;
        } else {
            // 0x517dba
            v115 = (int64_t)*(int32_t *)v114;
            v116 = v35;
            v117 = v111;
        }
        int64_t v118 = v117;
        int64_t v119 = v116;
        int64_t v120 = v115;
        if ((int32_t)v120 == -1) {
            // 0x518050
            result = 0;
            v13 = 0;
            v53 = v113;
            v58 = v112;
            v27 = 0xffffffff;
            v33 = v119;
            v42 = v118;
        } else {
            // 0x517dc5
            v13 = v110;
            v53 = 0x100000000 * v120 >> 32;
            v58 = v112;
            v27 = v120;
            v33 = v119;
            v42 = v118;
        }
    }
    goto lab_0x517dc9;
  lab_0x517e08:;
    int64_t v121 = v90;
    int64_t v122 = v91;
    v60 = v121 | v122;
    if ((char)v60 == 0) {
        // 0x517ff0
        *(char *)a8 = 0;
        goto lab_0x517ff4;
    }
    int64_t v123 = v53; // 0x517e20
    int64_t v124 = v122; // 0x517e20
    if (v88 != 0) {
        int64_t * v125 = (int64_t *)(v88 + 16); // 0x517e22
        uint64_t v126 = *v125; // 0x517e22
        if (v126 >= *(int64_t *)(v88 + 24)) {
            // 0x518008
            v123 = -1;
            v124 = v122 % 256;
        } else {
            // 0x517e30
            *v125 = v126 + 4;
            v123 = -1;
            v124 = v122;
        }
    }
    int64_t v127 = v30 + 1; // 0x517e19
    int64_t v128 = v123;
    if ((char)v121 == 0) {
        // break -> 0x517eb3
        goto lab_0x517eb3_3;
    }
    int64_t v129 = v124;
    int64_t v130 = *(int64_t *)(v85 + 64) <= v127;
    if ((char)v129 != 0) {
        // 0x517eb3
        v14 = false;
        v11 = v60 % 256;
        v17 = v130;
        goto lab_0x517eb3_2;
    }
    // 0x517e4d
    v49 = v128;
    v55 = v87;
    v34 = v85;
    v44 = v129;
    v29 = v127;
    v24 = 0;
    v16 = v130;
    v19 = v121;
    v22 = v121 & 0xffffffff;
    result2 = 0;
    v8 = v85;
    v9 = v129;
    v10 = v127;
    if ((v121 & v130) != 0) {
        goto lab_0x517d2e;
    }
    goto lab_0x517cf4;
  lab_0x517f90:
    // 0x517f90
    v1 = 0;
    int64_t v131 = v104; // 0x517f9f
    int64_t v132 = v105; // 0x517f9f
    int64_t v133 = v56; // 0x517f9f
    int64_t v134 = v106; // 0x517f9f
    int64_t v135 = 1; // 0x517f9f
    int64_t v136 = v107; // 0x517f9f
    goto lab_0x517d90;
  lab_0x517d8c:
    // 0x517d8c
    v131 = v98;
    v132 = v99;
    v133 = 0x100000000 * v100 >> 32;
    v134 = v101;
    v135 = v102;
    v136 = v103;
    goto lab_0x517d90;
  lab_0x517df6:;
    int32_t v140 = *(int32_t *)(*(int64_t *)(v85 + 40) + v89); // 0x517dfa
    v91 = v140 == v93;
    v90 = v92 == v93;
    goto lab_0x517e08;
  lab_0x517d90:
    // 0x517d90
    v46 = v134;
    if ((char)v136 == (char)v135) {
        // break (via goto) -> 0x517d24
        goto lab_0x517d24_3;
    }
    // 0x517d95
    v52 = v132;
    v57 = v133;
    v41 = v134;
    v38 = v131;
    v13 = 0;
    v53 = v132;
    v58 = v133;
    v27 = 0xffffffff;
    v33 = v35;
    v42 = v134;
    if (v131 == 0) {
        goto lab_0x517dc9;
    } else {
        goto lab_0x517da3;
    }
  lab_0x517eb3_2:;
    int64_t v137 = v11;
    int64_t v138 = *(int64_t *)(v85 + 48) <= v127; // 0x517eba
    int64_t v139 = v17 & v138;
    v12 = v139;
    v21 = v138;
    v18 = v121;
    v15 = v17;
    v28 = v127;
    v40 = v137;
    v32 = v85;
    v54 = v87;
    v48 = v128;
    if (v139 != 0) {
        // 0x517e5c
        result2 = 0;
        v8 = v85;
        v9 = v137;
        v10 = v127;
        v26 = 0;
        v36 = v85;
        v47 = v137;
        v31 = v127;
        if (!v14) {
            goto lab_0x517d2e;
        } else {
            goto lab_0x517d3d;
        }
    }
    goto lab_0x517cf4_2;
  lab_0x517d3d:
    // 0x517d3d
    if ((char)v47 != 0) {
        int64_t v71 = v31;
        result3 = v26;
        if (v71 != 0 == *(int64_t *)(v36 + 48) == v71) {
          lab_0x5180b8:
            // 0x5180b8
            return result3;
        }
    }
    // 0x517d50
    *(char *)a8 = 0;
    if ((char)v26 != 0) {
        // 0x517d5c
        *(int32_t *)a7 = 6;
        // 0x517c7e
        __readfsqword(40);
        return result;
    }
  lab_0x517ff4:
    // 0x517ff4
    *(int32_t *)a7 = 4;
    // 0x517c7e
    __readfsqword(40);
    return result;
}

// Address range: 0x562ad0 - 0x562f44
// From class:    std::num_get<char, std::istreambuf_iterator<char, std::char_traits<char> > >
// Type:          virtual member function
int64_t function_562ad0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x562ad0
    __readfsqword(40);
    int64_t result = a2; // bp-88, 0x562af3
    int64_t v1 = a4; // bp-104, 0x562afd
    char v2; // bp-72, 0x562ad0
    if (*(char *)(a6 + 24) % 2 == 0) {
        // 0x562b19
        v2 = -1;
        result = function_562060();
        if (v2 < 2) {
            // 0x562b56
            *(char *)a8 = v2 % 2;
            // 0x562b5b
            __readfsqword(40);
            return result;
        }
        // 0x562df0
        *(char *)a8 = 1;
        int32_t * v3 = (int32_t *)a7; // 0x562dfd
        *v3 = 4;
        int64_t v4 = function_524600(&result, &v1, a7, (int64_t)&v2); // 0x562e04
        if ((char)v4 != 0) {
            // 0x562e11
            *v3 = *v3 | 2;
        }
      lab_0x562b5b:
        // 0x562b5b
        __readfsqword(40);
        return result;
    }
    int64_t v5 = function_558300((int64_t *)&v2, a6 + 208); // 0x562ba2
    int64_t * v6 = (int64_t *)(v5 + 64); // 0x562ba7
    int64_t v7 = *v6; // 0x562ba7
    int64_t * v8 = (int64_t *)(v5 + 48); // 0x562bb8
    int64_t v9 = *v8; // 0x562bb8
    if ((v9 || v7) == 0) {
        // 0x562c2b
        *(char *)a8 = 0;
      lab_0x562e33:
        // 0x562e33
        *(int32_t *)a7 = 4;
        // 0x562b5b
        __readfsqword(40);
        return result;
    }
    int64_t * v10 = (int64_t *)(v5 + 40);
    int64_t v11 = (v9 | v7) == 0;
    int64_t v12 = 1;
    int64_t v13 = 0; // 0x562cd1
    int64_t v14 = v7 == 0;
    int64_t v15 = v9 == 0; // 0x562d8b
    int64_t v16 = 1;
    int64_t v17 = v5;
    int64_t v18 = a5; // 0x562ad0
    int64_t v19 = a3; // 0x562ad0
    int64_t v20; // 0x562ad0
    bool v21; // 0x562ad0
    int64_t result2; // 0x562ad0
    int64_t v22; // 0x562ad0
    int64_t v23; // 0x562ad0
    int64_t v24; // 0x562ad0
    int64_t v25; // 0x562ad0
    int64_t v26; // 0x562ad0
    int64_t v27; // 0x562ad0
    int64_t v28; // 0x562ad0
    int64_t v29; // 0x562ad0
    int64_t v30; // 0x562ad0
    int64_t v31; // 0x562ad0
    int64_t v32; // 0x562ad0
    int64_t v33; // 0x562ad0
    int64_t v34; // 0x562ad0
    int64_t v35; // 0x562ad0
    int64_t v36; // 0x562ad0
    int64_t v37; // 0x562ad0
    int64_t v38; // 0x562ad0
    int64_t v39; // 0x562ad0
    int64_t v40; // 0x562bcf
    uint64_t v41; // 0x562ad0
    while (true) {
      lab_0x562bcf_2:
        // 0x562bcf
        v31 = v16;
        v35 = v15;
        v27 = v11;
        v22 = v14;
        while (true) {
          lab_0x562bcf:
            // 0x562bcf
            v26 = v12;
            v25 = v13;
            v23 = v22;
            v28 = v27;
            v36 = v35;
            v32 = v31;
            v39 = v18;
            v38 = v19;
            v40 = result;
            v30 = v32;
            v34 = v36;
            if (v40 == 0) {
                goto lab_0x562ee5;
            } else {
                if ((int32_t)v38 == -1) {
                    uint64_t v42 = *(int64_t *)(v40 + 16); // 0x562c48
                    if (v42 >= *(int64_t *)(v40 + 24)) {
                        int64_t v43 = *(int64_t *)v40; // 0x562eb0
                        int64_t v44 = v36 % 256; // 0x562ecc
                        int64_t v45 = v32 % 256; // 0x562ed1
                        v29 = v43;
                        v33 = v45;
                        v37 = v44;
                        if ((int32_t)v43 != -1) {
                            goto lab_0x562c59;
                        } else {
                            // 0x562edc
                            result = 0;
                            v30 = v45;
                            v34 = v44;
                            goto lab_0x562ee5;
                        }
                    } else {
                        // 0x562c56
                        v29 = (int64_t)*(char *)v42;
                        v33 = v32;
                        v37 = v36;
                        goto lab_0x562c59;
                    }
                } else {
                    // 0x562be4
                    result2 = v17;
                    if (v1 == 0) {
                        // 0x562f48
                        return result2;
                    }
                    goto lab_0x562bf2;
                }
            }
        }
      lab_0x562d83_3:;
        int64_t v46 = v41 % 256; // 0x562cc3
        v21 = true;
        v20 = v46;
        v24 = v46;
        goto lab_0x562d83_2;
    }
  lab_0x562bfd_3:;
    int64_t result3 = 1; // 0x562c05
    int64_t v47; // 0x562ad0
    int64_t v48 = v47; // 0x562c05
    int64_t v49 = v25; // 0x562c05
    int64_t v50 = 1; // 0x562c05
    int64_t v51 = v47; // 0x562c05
    if ((char)v26 == 0) {
        goto lab_0x562c17;
    } else {
        goto lab_0x562c07;
    }
  lab_0x562c07:;
    int64_t v52 = v49;
    v50 = result3;
    v51 = v48;
    if (*v6 == v52 == (v52 != 0)) {
        // 0x562f48
        return result3;
    }
    goto lab_0x562c17;
  lab_0x562ee5:
    // 0x562ee5
    v47 = v30;
    if (v1 == 0) {
        // break (via goto) -> 0x562bfd
        goto lab_0x562bfd_3;
    }
    // 0x562ef3
    v18 = v39;
    int64_t v57 = 0; // 0x562efe
    int64_t v58 = v38; // 0x562efe
    int64_t v59 = 0xffffffff; // 0x562efe
    int64_t v60 = v30; // 0x562efe
    int64_t v61 = v34; // 0x562efe
    int64_t v62 = 0; // 0x562efe
    int64_t v63 = v38; // 0x562efe
    int64_t v64 = v30; // 0x562efe
    int64_t v65 = v34; // 0x562efe
    char v66 = 1; // 0x562efe
    if ((int32_t)v39 != -1) {
        goto lab_0x562c8b;
    } else {
        goto lab_0x562d9b;
    }
  lab_0x562c8b:;
    int64_t result4 = v59;
    int64_t v67 = v57; // 0x562ccc
    int64_t v68; // 0x562ad0
    int64_t v69; // 0x562ad0
    char v70; // 0x562c99
    char v71; // 0x562c9e
    if (v23 != 0) {
        // 0x562d30
        v69 = 1;
        v68 = v26;
        if (*(char *)(*v10 + v25) != (char)result4) {
            if ((char)v26 == 0) {
                // 0x562e30
                *(char *)a8 = 0;
                goto lab_0x562e33;
            } else {
                // 0x562d4e
                if (v25 == 0 | *v6 != v25) {
                    // 0x562e30
                    *(char *)a8 = 0;
                    goto lab_0x562e33;
                } else {
                    // 0x562d62
                    *(char *)a8 = 0;
                    *(int32_t *)a7 = 0;
                    goto lab_0x562b5b;
                }
            }
        }
        goto lab_0x562cc0;
    } else {
        int64_t v72 = v61;
        int64_t v73 = v60;
        v70 = *(char *)(*(int64_t *)(v5 + 56) + v25);
        v71 = result4;
        if (v70 == v71) {
            // 0x562de0
            v69 = v73;
            v68 = 1;
            if ((char)v72 != 0) {
                goto lab_0x562cc0;
            } else {
                goto lab_0x562cb3;
            }
        } else {
            if ((char)v72 != 0) {
                if ((char)v73 == 0) {
                    // 0x562e30
                    *(char *)a8 = 0;
                    goto lab_0x562e33;
                } else {
                    // 0x562e24
                    if (*v8 == v25) {
                        goto lab_0x562f48;
                    } else {
                        // 0x562e30
                        *(char *)a8 = 0;
                        goto lab_0x562e33;
                    }
                }
            }
            goto lab_0x562cb3;
        }
    }
  lab_0x562d9b:;
    int64_t v74 = v65;
    int64_t v75 = v64;
    uint64_t v76 = *(int64_t *)(v1 + 16); // 0x562d9b
    int64_t v77; // 0x562ad0
    int64_t v78; // 0x562ad0
    int64_t v79; // 0x562ad0
    int64_t v80; // 0x562ad0
    int64_t v81; // 0x562ad0
    int64_t v82; // 0x562ad0
    int64_t v83; // 0x562ad0
    int64_t v84; // 0x562ad0
    if (v76 >= *(int64_t *)(v1 + 24)) {
        int64_t v85 = *(int64_t *)v1; // 0x562e60
        int64_t v86 = v74 % 256; // 0x562e81
        int64_t v87 = v75 % 256; // 0x562e86
        v79 = v85;
        v80 = v87;
        v82 = v86;
        v77 = v28 % 256;
        if ((int32_t)v85 != -1) {
            goto lab_0x562dac;
        } else {
            // 0x562e97
            v1 = 0;
            v84 = v39;
            v81 = v87;
            v83 = v86;
            v78 = 1;
            goto lab_0x562db0;
        }
    } else {
        // 0x562da9
        v79 = (int64_t)*(char *)v76;
        v80 = v75;
        v82 = v74;
        v77 = v28;
        goto lab_0x562dac;
    }
  lab_0x562bf2:
    // 0x562bf2
    v47 = v32;
    v62 = v40;
    v63 = v38;
    v64 = v32;
    v65 = v36;
    v66 = 0;
    if ((int32_t)v39 != -1) {
        // break (via goto) -> 0x562bfd
        goto lab_0x562bfd_3;
    }
    goto lab_0x562d9b;
  lab_0x562cc0:
    // 0x562cc0
    v12 = v68;
    int64_t v88 = v69;
    v41 = v12 | v88;
    if ((char)v41 == 0) {
        // 0x562e30
        *(char *)a8 = 0;
        goto lab_0x562e33;
    }
    // 0x562ccc
    v19 = v58;
    int64_t v89 = result4; // 0x562cd8
    int64_t v90 = v88; // 0x562cd8
    if (v67 != 0) {
        int64_t * v91 = (int64_t *)(v67 + 16); // 0x562cda
        uint64_t v92 = *v91; // 0x562cda
        if (v92 >= *(int64_t *)(v67 + 24)) {
            // 0x562e40
            v19 = -1;
            v89 = *(int64_t *)v67;
            v90 = v88 % 256;
        } else {
            int64_t v93 = v92 + 1; // 0x562ce8
            *v91 = v93;
            v19 = -1;
            v89 = v93;
            v90 = v88;
        }
    }
    // 0x562cf8
    v13 = v25 + 1;
    v17 = v89;
    if ((char)v12 == 0) {
        // break -> 0x562d83
        goto lab_0x562d83_3;
    }
    int64_t v94 = v90;
    int64_t v95 = *v6 <= v13;
    if ((char)v94 != 0) {
        // 0x562d83
        v21 = false;
        v20 = v41 % 256;
        v24 = v95;
        goto lab_0x562d83_2;
    }
    // 0x562d0e
    v31 = v94;
    v35 = v12 & 0xffffffff;
    v27 = 0;
    v22 = v95;
    result3 = 0;
    v48 = v94;
    v49 = v13;
    if ((v12 & v95) != 0) {
        goto lab_0x562c07;
    }
    goto lab_0x562bcf;
  lab_0x562dac:
    // 0x562dac
    v84 = 0x100000000 * v79 >> 32;
    v81 = v80;
    v83 = v82;
    v78 = v77;
    goto lab_0x562db0;
  lab_0x562c59:;
    int64_t v96 = v37; // 0x562c65
    int64_t v97 = v33; // 0x562c65
    int64_t v98 = v39; // 0x562c65
    int64_t v99 = 0x100000000 * v29 >> 32; // 0x562c65
    int64_t v100 = v40; // 0x562c65
    if (v1 != 0) {
        goto lab_0x562bf2;
    } else {
        goto lab_0x562c7e;
    }
  lab_0x562cb3:
    // 0x562cb3
    v69 = *(char *)(*v10 + v25) == v71;
    v68 = v70 == v71;
    goto lab_0x562cc0;
  lab_0x562db0:
    // 0x562db0
    v47 = v81;
    if (v66 == (char)v78) {
        // break (via goto) -> 0x562bfd
        goto lab_0x562bfd_3;
    }
    // 0x562c70
    v96 = v83;
    v97 = v81;
    v98 = v84;
    v99 = v63;
    v100 = v62;
    v18 = v84;
    v57 = 0;
    v58 = v63;
    v59 = 0xffffffff;
    v60 = v81;
    v61 = v83;
    if (v62 == 0) {
        goto lab_0x562c8b;
    } else {
        goto lab_0x562c7e;
    }
  lab_0x562c7e:;
    int64_t v101 = v100;
    int64_t v102 = v99;
    int64_t v103 = v98;
    int64_t v104 = v97;
    int64_t v105 = v96;
    v18 = v103;
    v57 = v101;
    v58 = v102;
    v59 = v102 & 0xffffffff;
    v60 = v104;
    v61 = v105;
    int64_t v106; // 0x562ad0
    int64_t v107; // 0x562ad0
    int64_t v108; // 0x562ad0
    if ((int32_t)v102 == -1) {
        uint64_t v109 = *(int64_t *)(v101 + 16); // 0x562dc0
        if (v109 >= *(int64_t *)(v101 + 24)) {
            int64_t v110 = *(int64_t *)v101; // 0x562f10
            int64_t v111 = v105 % 256; // 0x562f21
            int64_t v112 = v104 % 256; // 0x562f26
            v106 = v110;
            v107 = v112;
            v108 = v111;
            if ((int32_t)v110 != -1) {
                goto lab_0x562dd1;
            } else {
                // 0x562f31
                result = 0;
                v18 = v103;
                v57 = 0;
                v58 = v102;
                v59 = 0xffffffff;
                v60 = v112;
                v61 = v111;
                goto lab_0x562c8b;
            }
        } else {
            // 0x562dce
            v106 = (int64_t)*(char *)v109;
            v107 = v104;
            v108 = v105;
            goto lab_0x562dd1;
        }
    } else {
        goto lab_0x562c8b;
    }
  lab_0x562dd1:
    // 0x562dd1
    v18 = v103;
    v57 = v101;
    v58 = 0x100000000 * v106 >> 32;
    v59 = v106;
    v60 = v107;
    v61 = v108;
    goto lab_0x562c8b;
  lab_0x562d83_2:
    // 0x562d83
    v14 = v24;
    v16 = v20;
    v15 = *v8 <= v13;
    v11 = v14 & v15;
    if (v11 != 0) {
        // 0x562d1d
        result3 = 0;
        v48 = v16;
        v49 = v13;
        v50 = 0;
        v51 = v16;
        if (!v21) {
            goto lab_0x562c07;
        } else {
            goto lab_0x562c17;
        }
    }
    goto lab_0x562bcf_2;
  lab_0x562c17:
    // 0x562c17
    if ((char)v51 != 0) {
        // 0x562c1b
        int64_t v53; // 0x562ad0
        int64_t v54 = v53;
        int64_t v55 = *v8; // 0x562c1b
        int64_t v56; // 0x562ad0
        result2 = v56;
        if (v54 != 0 == v55 == v54) {
          lab_0x562f48:
            // 0x562f48
            return result4;
        }
    }
    // 0x562c2b
    *(char *)a8 = 0;
    if ((char)v50 == 0) {
        // 0x562e33
        *(int32_t *)a7 = 4;
        // 0x562b5b
        __readfsqword(40);
        return result;
    }
    // 0x562c36
    *(int32_t *)a7 = 6;
    // 0x562b5b
    __readfsqword(40);
    return result;
}

// Address range: 0x565a00 - 0x565e33
int64_t function_565a00(int64_t * a1, int64_t a2, int64_t a3) {
    int64_t result = (int64_t)a1;
    int64_t v1 = result + 16; // 0x565a04
    *(char *)v1 = 0;
    *a1 = v1;
    int64_t * v2 = (int64_t *)(result + 8); // 0x565a23
    *v2 = 0;
    int64_t v3 = *(int64_t *)(a2 + 32); // 0x565a2b
    int64_t str = *(int64_t *)v3; // 0x565a2f
    if (str == 0) {
        // 0x565c90
        function_52bdc0();
        // 0x565c5a
        return result;
    }
    int64_t v4 = a3; // 0x565a42
    uint64_t v5 = 0; // 0x565a42
    if (*(int64_t *)(v3 + 8) == 0) {
        // 0x565c40
        function_52c050(result, 0, 0, str, (int64_t)strlen((char *)str));
        // 0x565c5a
        return result;
    }
    v5++;
    int64_t str2 = *(int64_t *)(8 * v5 + v3); // 0x565a54
    int32_t strcmp_rc = strcmp((char *)str, (char *)str2); // 0x565a5b
    v4 = v4 & -256 | (int64_t)(strcmp_rc != 0);
    int64_t v6; // 0x565a00
    int64_t v7 = v6 & -256 | (int64_t)(v5 < 11 != (strcmp_rc == 0)); // 0x565a6f
    while (v5 < 11 == strcmp_rc == 0) {
        int64_t str3 = str2;
        v5++;
        str2 = *(int64_t *)(8 * v5 + v3);
        strcmp_rc = strcmp((char *)str3, (char *)str2);
        v4 = v4 & -256 | (int64_t)(strcmp_rc != 0);
        v7 = v7 & -256 | (int64_t)(v5 < 11 != (strcmp_rc == 0));
    }
    if (strcmp_rc == 0) {
        // 0x565c40
        function_52c050(result, 0, 0, str, (int64_t)strlen((char *)str));
        // 0x565c5a
        return result;
    }
    // 0x565a7b
    function_52b8e0(result, 128, v4, v7);
    uint64_t len = (int64_t)strlen((char *)g22); // 0x565a9d
    uint64_t v8 = 0x7fffffffffffffff - *v2; // 0x565aac
    int64_t v9 = 128; // 0x565ab3
    int64_t v10; // 0x565a00
    if (v8 < len) {
        goto lab_0x565d04;
    } else {
        int64_t v11 = (int64_t)g22; // 0x565a92
        function_52c9e0(result, v11, len, v8);
        int64_t v12 = *v2; // 0x565ad3
        uint64_t v13 = v12 + 1; // 0x565ad7
        int64_t * v14 = (int64_t *)v1; // 0x565add
        int64_t v15 = v11; // 0x565ae4
        if (v13 > *v14) {
            // 0x565cb0
            function_52b400(result, v12, 0, 0, 1);
            v15 = v12;
        }
        // 0x565aea
        *(char *)(v12 + result) = 61;
        *v2 = v13;
        int64_t v16 = result + 1; // 0x565af5
        *(char *)(v12 + v16) = 0;
        int64_t str4 = *(int64_t *)*(int64_t *)(v15 + 32); // 0x565b01
        uint64_t len2 = (int64_t)strlen((char *)str4); // 0x565b07
        int64_t v17 = 0x7fffffffffffffff - *v2; // 0x565b16
        v10 = v15;
        if (v17 < len2) {
            goto lab_0x565d10;
        } else {
            // 0x565b23
            function_52c9e0(result, str4, len2, v17);
            int64_t v18 = 8;
            int64_t v19 = *v2; // 0x565c06
            uint64_t v20 = v19 + 1; // 0x565c0a
            int64_t v21 = v17; // 0x565c18
            int64_t v22 = str4; // 0x565c18
            if (v20 > *v14) {
                // 0x565c1e
                function_52b400(result, v19, 0, 0, 1);
                v21 = 0;
                v22 = v19;
            }
            // 0x565b48
            *(char *)(v19 + result) = 59;
            *v2 = v20;
            *(char *)(v19 + v16) = 0;
            int64_t str5 = *(int64_t *)(v18 + v11); // 0x565b5f
            uint64_t len3 = (int64_t)strlen((char *)str5); // 0x565b66
            v9 = v22;
            while (0x7fffffffffffffff - *v2 >= len3) {
                // 0x565b7b
                function_52c9e0(result, str5, len3, v21);
                int64_t v23 = *v2; // 0x565b95
                uint64_t v24 = v23 + 1; // 0x565b99
                int64_t v25 = v21; // 0x565ba7
                int64_t v26 = str5; // 0x565ba7
                if (v24 > *v14) {
                    // 0x565c70
                    function_52b400(result, v23, 0, 0, 1);
                    v25 = 0;
                    v26 = v23;
                }
                int64_t v27 = v26;
                *(char *)(v23 + result) = 61;
                *v2 = v24;
                *(char *)(v23 + v16) = 0;
                int64_t str6 = *(int64_t *)(*(int64_t *)(v27 + 32) + v18); // 0x565bc6
                uint64_t len4 = (int64_t)strlen((char *)str6); // 0x565bcd
                if (0x7fffffffffffffff - *v2 < len4) {
                    int64_t v28 = function_542590("basic_string::append"); // 0x565cd4
                    if (v1 == (int64_t)"basic_string::append") {
                        // 0x565cea
                        _Unwind_Resume((struct _Unwind_Exception *)v28);
                        v9 = v27;
                        goto lab_0x565cf8;
                    } else {
                        // 0x565ce5
                        function_4eeb50((int64_t)"basic_string::append");
                        // 0x565cea
                        _Unwind_Resume((struct _Unwind_Exception *)v28);
                        v9 = v27;
                        goto lab_0x565cf8;
                    }
                }
                // 0x565be2
                function_52c9e0(result, str6, len4, v25);
                if (v18 == 88) {
                    // 0x565c5a
                    return result;
                }
                v18 += 8;
                v19 = *v2;
                v20 = v19 + 1;
                v21 = v25;
                v22 = str6;
                if (v20 > *v14) {
                    // 0x565c1e
                    function_52b400(result, v19, 0, 0, 1);
                    v21 = 0;
                    v22 = v19;
                }
                // 0x565b48
                *(char *)(v19 + result) = 59;
                *v2 = v20;
                *(char *)(v19 + v16) = 0;
                str5 = *(int64_t *)(v18 + v11);
                len3 = (int64_t)strlen((char *)str5);
                v9 = v22;
            }
            goto lab_0x565cf8;
        }
    }
  lab_0x565d04:
    // 0x565d04
    function_542590("basic_string::append");
    v10 = v9;
    goto lab_0x565d10;
  lab_0x565d10:
    // 0x565d10
    function_542590("basic_string::append");
    int64_t v29 = *(int64_t *)v10; // 0x565d2a
    __readfsqword(40);
    if (v29 == 0x74735f6369736162) {
        // 0x565dfa
        __readfsqword(40);
        return 1;
    }
    int64_t str7 = *(int64_t *)0x5c00725c006e5c00; // 0x565d50
    if (str7 == 0) {
        // 0x565dfa
        __readfsqword(40);
        return 0;
    }
    int64_t v30 = *(int64_t *)(v29 + 32); // 0x565d5d
    int64_t str8 = *(int64_t *)v30; // 0x565d64
    if (str8 == 0 || strcmp((char *)str7, (char *)str8) != 0) {
        // 0x565dfa
        __readfsqword(40);
        return 0;
    }
    // 0x565d7a
    if (*(int64_t *)0x5c00725c006e5c08 == 0) {
        // 0x565e18
        if (*(int64_t *)(v30 + 8) == 0) {
            // 0x565dfa
            __readfsqword(40);
            return 1;
        }
    }
    // 0x565d86
    int64_t v31; // bp-160, 0x565a00
    function_565a00(&v31, v10, v29);
    int64_t v32; // bp-192, 0x565a00
    function_565a00(&v32, (int64_t)"basic_string::append", v29);
    // 0x565c5a
    return 0;
    // 0x565db9
    int64_t v33; // bp-176, 0x565a00
    if (v32 != (int64_t)&v33) {
        // 0x565dc2
        function_4eeb50(v32);
    }
    // 0x565dd3
    int64_t v34; // bp-144, 0x565a00
    if (v31 != (int64_t)&v34) {
        // 0x565de1
        function_4eeb50(v31);
    }
    // 0x565dfa
    __readfsqword(40);
    return 0;
  lab_0x565cf8:
    // 0x565cf8
    function_542590("basic_string::append");
    goto lab_0x565d04;
}

// Address range: 0x569370 - 0x569851
// From class:    std::__moneypunct_cache<char, true>
// Type:          constructor
int64_t function_569370(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 16); // 0x569384
    int64_t v2 = *v1; // 0x569384
    if (v2 == 0) {
        int64_t result = function_4efd30(112); // 0x5697ed
        *(int32_t *)(result + 8) = 0;
        *(int64_t *)(result + 16) = 0;
        *(int64_t *)(result + 24) = 0;
        *(char *)(result + 32) = 0;
        *(int64_t *)(result + 40) = 0;
        *(int64_t *)(result + 48) = 0;
        *(int64_t *)(result + 56) = 0;
        *(int64_t *)result = (int64_t)&g24;
        *(int64_t *)(result + 64) = 0;
        *(int16_t *)(result + 33) = (int16_t)((int32_t)&g24 ^ (int32_t)&g24);
        *(int64_t *)(result + 72) = 0;
        *(int64_t *)(result + 80) = 0;
        return result;
    }
    if (a2 == 0) {
        // 0x569588
        *(char *)(v2 + 33) = 46;
        *(char *)(*v1 + 34) = 44;
        *(int64_t *)(*v1 + 16) = (int64_t)&g15;
        *(int64_t *)(*v1 + 24) = 0;
        *(char *)(*v1 + 32) = 0;
        *(int64_t *)(*v1 + 40) = (int64_t)&g15;
        *(int64_t *)(*v1 + 48) = 0;
        *(int64_t *)(*v1 + 56) = (int64_t)&g15;
        *(int64_t *)(*v1 + 64) = 0;
        *(int64_t *)(*v1 + 72) = (int64_t)&g15;
        *(int64_t *)(*v1 + 80) = 0;
        *(int32_t *)(*v1 + 88) = 0;
        *(int32_t *)(*v1 + 92) = 0x4000302;
        *(int32_t *)(*v1 + 96) = 0x4000302;
        int64_t v3 = (int32_t)&g26 ^ (int32_t)&g26; // 0x569625
        int64_t v4 = v3;
        char v5 = *(char *)(v4 + *(int64_t *)&g26); // 0x569628
        *(char *)(v4 + 100 + *v1) = v5;
        int64_t result2 = v4 + 1; // 0x569634
        while (v4 != 10) {
            // 0x569628
            v4 = result2;
            v5 = *(char *)(v4 + *(int64_t *)&g26);
            *(char *)(v4 + 100 + *v1) = v5;
            result2 = v4 + 1;
        }
        // 0x56963e
        return result2;
    }
    struct __locale_struct * v6 = (struct __locale_struct *)a2; // 0x5693a0
    *(char *)(*v1 + 33) = *__nl_langinfo_l(0x40002, v6);
    *(char *)(*v1 + 34) = *__nl_langinfo_l(0x40003, v6);
    int64_t v7 = *v1; // 0x5693c6
    if (*(char *)(v7 + 33) != 0) {
        // 0x569758
        *(int32_t *)(*v1 + 88) = (int32_t)*__nl_langinfo_l(0x40007, v6);
    } else {
        // 0x5693d4
        *(int32_t *)(v7 + 88) = 0;
        *(char *)(*v1 + 33) = 46;
    }
    char * str = __nl_langinfo_l(0x40004, v6); // 0x5693eb
    char * str2 = __nl_langinfo_l(0x40005, v6); // 0x5693fc
    char * str3 = __nl_langinfo_l(0x40006, v6); // 0x56940c
    char * str4 = __nl_langinfo_l(0x40000, v6); // 0x56941e
    char * v8 = __nl_langinfo_l(0x40015, v6); // 0x56942e
    int64_t v9 = *v1; // 0x569433
    char v10 = *v8; // 0x569437
    int64_t v11; // 0x569370
    int64_t v12; // 0x569370
    if (*(char *)(v9 + 34) != 0) {
        int32_t len = strlen(str); // 0x5696d1
        int64_t v13 = len; // 0x5696d1
        if (len != 0) {
            int64_t v14 = v13 + 1; // 0x569778
            int64_t v15 = function_4eec00(v14); // 0x569784
            memcpy((int64_t *)v15, (int64_t *)str, (int32_t)v14);
            *(int64_t *)(*v1 + 16) = v15;
        } else {
            // 0x5696e7
            *(int64_t *)(v9 + 16) = (int64_t)&g15;
            *(char *)(*v1 + 32) = 0;
        }
        // 0x569702
        *(int64_t *)(*v1 + 24) = v13;
        int32_t len2 = strlen(str2); // 0x56970d
        v11 = 0;
        v12 = len2;
        if (len2 == 0) {
            goto lab_0x569488;
        } else {
            goto lab_0x56971e;
        }
    } else {
        // 0x569445
        *(int64_t *)(v9 + 16) = (int64_t)&g15;
        *(int64_t *)(*v1 + 24) = 0;
        *(char *)(*v1 + 32) = 0;
        *(char *)(*v1 + 34) = 44;
        int32_t len3 = strlen(str2); // 0x569477
        int64_t v16 = len3; // 0x569477
        v11 = v16;
        v12 = v16;
        if (len3 != 0) {
            goto lab_0x56971e;
        } else {
            goto lab_0x569488;
        }
    }
  lab_0x569488:
    // 0x569488
    *(int64_t *)(*v1 + 56) = (int64_t)&g15;
    int64_t v17 = v11; // 0x56949c
    goto lab_0x5694a0;
  lab_0x56971e:;
    int64_t v31 = v12 + 1; // 0x56971e
    int64_t v32 = function_4eec00(v31); // 0x56972a
    memcpy((int64_t *)v32, (int64_t *)str2, (int32_t)v31);
    *(int64_t *)(*v1 + 56) = v32;
    v17 = v12;
    goto lab_0x5694a0;
  lab_0x5694a0:
    // 0x5694a0
    *(int64_t *)(*v1 + 64) = v17;
    int64_t v18; // 0x569370
    int64_t v19; // 0x569370
    if (v10 != 0) {
        int32_t len4 = strlen(str3); // 0x569655
        if (len4 != 0) {
            // 0x5697b0
            int64_t v20; // 0x569655
            int64_t v21 = v20 + 1; // 0x5697b0
            int64_t v22 = function_4eec00(v21); // 0x5697bc
            memcpy((int64_t *)v22, (int64_t *)str3, (int32_t)v21);
            int64_t v23 = *v1; // 0x5697d6
            *(int64_t *)(v23 + 72) = v22;
        } else {
            // 0x569666
            *(int64_t *)(*v1 + 72) = (int64_t)&g15;
        }
        // 0x569678
        *(int64_t *)(*v1 + 80) = (int64_t)len4;
        int32_t len5 = strlen(str4); // 0x569683
        v18 = 0;
        v19 = len5;
        if (len5 == 0) {
            goto lab_0x5694e3;
        } else {
            goto lab_0x569694;
        }
    } else {
        // 0x5694b1
        *(int64_t *)(*v1 + 72) = (int64_t)"()";
        *(int64_t *)(*v1 + 80) = 2;
        int32_t len6 = strlen(str4); // 0x5694d2
        int64_t v24 = len6; // 0x5694d2
        v18 = v24;
        v19 = v24;
        if (len6 != 0) {
            goto lab_0x569694;
        } else {
            goto lab_0x5694e3;
        }
    }
  lab_0x5694e3:
    // 0x5694e3
    *(int64_t *)(*v1 + 40) = (int64_t)&g15;
    int64_t v25 = v18; // 0x5694ee
    goto lab_0x5694f2;
  lab_0x569694:;
    int64_t v30 = v19 + 1; // 0x569694
    int64_t * dest_mem = memcpy((int64_t *)function_4eec00(v30), (int64_t *)str4, (int32_t)v30); // 0x5696b0
    *(int64_t *)(*v1 + 40) = (int64_t)dest_mem;
    v25 = v19;
    goto lab_0x5694f2;
  lab_0x5694f2:
    // 0x5694f2
    *(int64_t *)(*v1 + 48) = v25;
    char v26 = *__nl_langinfo_l(0x40010, v6); // 0x56950f
    char v27 = *__nl_langinfo_l(0x40011, v6); // 0x56951b
    int64_t v28 = function_4f3230((int64_t)v26, (int64_t)v27, *__nl_langinfo_l(0x40014, v6)); // 0x569538
    *(int32_t *)(*v1 + 92) = (int32_t)v28;
    char v29 = *__nl_langinfo_l(0x40012, v6); // 0x569551
    int64_t result3 = function_4f3230((int64_t)v29, (int64_t)*__nl_langinfo_l(0x40013, v6), v10); // 0x56956e
    *(int32_t *)(*v1 + 96) = (int32_t)result3;
    return result3;
}

// Address range: 0x569910 - 0x569df1
// From class:    std::__moneypunct_cache<char, false>
// Type:          constructor
int64_t function_569910(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 16); // 0x569924
    int64_t v2 = *v1; // 0x569924
    if (v2 == 0) {
        int64_t result = function_4efd30(112); // 0x569d8d
        *(int32_t *)(result + 8) = 0;
        *(int64_t *)(result + 16) = 0;
        *(int64_t *)(result + 24) = 0;
        *(char *)(result + 32) = 0;
        *(int64_t *)(result + 40) = 0;
        *(int64_t *)(result + 48) = 0;
        *(int64_t *)(result + 56) = 0;
        *(int64_t *)result = (int64_t)&g25;
        *(int64_t *)(result + 64) = 0;
        *(int16_t *)(result + 33) = (int16_t)((int32_t)&g25 ^ (int32_t)&g25);
        *(int64_t *)(result + 72) = 0;
        *(int64_t *)(result + 80) = 0;
        return result;
    }
    if (a2 == 0) {
        // 0x569b28
        *(char *)(v2 + 33) = 46;
        *(char *)(*v1 + 34) = 44;
        *(int64_t *)(*v1 + 16) = (int64_t)&g15;
        *(int64_t *)(*v1 + 24) = 0;
        *(char *)(*v1 + 32) = 0;
        *(int64_t *)(*v1 + 40) = (int64_t)&g15;
        *(int64_t *)(*v1 + 48) = 0;
        *(int64_t *)(*v1 + 56) = (int64_t)&g15;
        *(int64_t *)(*v1 + 64) = 0;
        *(int64_t *)(*v1 + 72) = (int64_t)&g15;
        *(int64_t *)(*v1 + 80) = 0;
        *(int32_t *)(*v1 + 88) = 0;
        *(int32_t *)(*v1 + 92) = 0x4000302;
        *(int32_t *)(*v1 + 96) = 0x4000302;
        int64_t v3 = (int32_t)&g26 ^ (int32_t)&g26; // 0x569bc5
        int64_t v4 = v3;
        char v5 = *(char *)(v4 + *(int64_t *)&g26); // 0x569bc8
        *(char *)(v4 + 100 + *v1) = v5;
        int64_t result2 = v4 + 1; // 0x569bd4
        while (v4 != 10) {
            // 0x569bc8
            v4 = result2;
            v5 = *(char *)(v4 + *(int64_t *)&g26);
            *(char *)(v4 + 100 + *v1) = v5;
            result2 = v4 + 1;
        }
        // 0x569bde
        return result2;
    }
    struct __locale_struct * v6 = (struct __locale_struct *)a2; // 0x569940
    *(char *)(*v1 + 33) = *__nl_langinfo_l(0x40002, v6);
    *(char *)(*v1 + 34) = *__nl_langinfo_l(0x40003, v6);
    int64_t v7 = *v1; // 0x569966
    if (*(char *)(v7 + 33) != 0) {
        // 0x569cf8
        *(int32_t *)(*v1 + 88) = (int32_t)*__nl_langinfo_l(0x40008, v6);
    } else {
        // 0x569974
        *(int32_t *)(v7 + 88) = 0;
        *(char *)(*v1 + 33) = 46;
    }
    char * str = __nl_langinfo_l(0x40004, v6); // 0x56998b
    char * str2 = __nl_langinfo_l(0x40005, v6); // 0x56999c
    char * str3 = __nl_langinfo_l(0x40006, v6); // 0x5699ac
    char * str4 = __nl_langinfo_l(0x40001, v6); // 0x5699be
    char * v8 = __nl_langinfo_l(0x4000e, v6); // 0x5699ce
    int64_t v9 = *v1; // 0x5699d3
    char v10 = *v8; // 0x5699d7
    int64_t v11; // 0x569910
    int64_t v12; // 0x569910
    if (*(char *)(v9 + 34) != 0) {
        int32_t len = strlen(str); // 0x569c71
        int64_t v13 = len; // 0x569c71
        if (len != 0) {
            int64_t v14 = v13 + 1; // 0x569d18
            int64_t v15 = function_4eec00(v14); // 0x569d24
            memcpy((int64_t *)v15, (int64_t *)str, (int32_t)v14);
            *(int64_t *)(*v1 + 16) = v15;
        } else {
            // 0x569c87
            *(int64_t *)(v9 + 16) = (int64_t)&g15;
            *(char *)(*v1 + 32) = 0;
        }
        // 0x569ca2
        *(int64_t *)(*v1 + 24) = v13;
        int32_t len2 = strlen(str2); // 0x569cad
        v11 = 0;
        v12 = len2;
        if (len2 == 0) {
            goto lab_0x569a28;
        } else {
            goto lab_0x569cbe;
        }
    } else {
        // 0x5699e5
        *(int64_t *)(v9 + 16) = (int64_t)&g15;
        *(int64_t *)(*v1 + 24) = 0;
        *(char *)(*v1 + 32) = 0;
        *(char *)(*v1 + 34) = 44;
        int32_t len3 = strlen(str2); // 0x569a17
        int64_t v16 = len3; // 0x569a17
        v11 = v16;
        v12 = v16;
        if (len3 != 0) {
            goto lab_0x569cbe;
        } else {
            goto lab_0x569a28;
        }
    }
  lab_0x569a28:
    // 0x569a28
    *(int64_t *)(*v1 + 56) = (int64_t)&g15;
    int64_t v17 = v11; // 0x569a3c
    goto lab_0x569a40;
  lab_0x569cbe:;
    int64_t v31 = v12 + 1; // 0x569cbe
    int64_t v32 = function_4eec00(v31); // 0x569cca
    memcpy((int64_t *)v32, (int64_t *)str2, (int32_t)v31);
    *(int64_t *)(*v1 + 56) = v32;
    v17 = v12;
    goto lab_0x569a40;
  lab_0x569a40:
    // 0x569a40
    *(int64_t *)(*v1 + 64) = v17;
    int64_t v18; // 0x569910
    int64_t v19; // 0x569910
    if (v10 != 0) {
        int32_t len4 = strlen(str3); // 0x569bf5
        if (len4 != 0) {
            // 0x569d50
            int64_t v20; // 0x569bf5
            int64_t v21 = v20 + 1; // 0x569d50
            int64_t v22 = function_4eec00(v21); // 0x569d5c
            memcpy((int64_t *)v22, (int64_t *)str3, (int32_t)v21);
            int64_t v23 = *v1; // 0x569d76
            *(int64_t *)(v23 + 72) = v22;
        } else {
            // 0x569c06
            *(int64_t *)(*v1 + 72) = (int64_t)&g15;
        }
        // 0x569c18
        *(int64_t *)(*v1 + 80) = (int64_t)len4;
        int32_t len5 = strlen(str4); // 0x569c23
        v18 = 0;
        v19 = len5;
        if (len5 == 0) {
            goto lab_0x569a83;
        } else {
            goto lab_0x569c34;
        }
    } else {
        // 0x569a51
        *(int64_t *)(*v1 + 72) = (int64_t)"()";
        *(int64_t *)(*v1 + 80) = 2;
        int32_t len6 = strlen(str4); // 0x569a72
        int64_t v24 = len6; // 0x569a72
        v18 = v24;
        v19 = v24;
        if (len6 != 0) {
            goto lab_0x569c34;
        } else {
            goto lab_0x569a83;
        }
    }
  lab_0x569a83:
    // 0x569a83
    *(int64_t *)(*v1 + 40) = (int64_t)&g15;
    int64_t v25 = v18; // 0x569a8e
    goto lab_0x569a92;
  lab_0x569c34:;
    int64_t v30 = v19 + 1; // 0x569c34
    int64_t * dest_mem = memcpy((int64_t *)function_4eec00(v30), (int64_t *)str4, (int32_t)v30); // 0x569c50
    *(int64_t *)(*v1 + 40) = (int64_t)dest_mem;
    v25 = v19;
    goto lab_0x569a92;
  lab_0x569a92:
    // 0x569a92
    *(int64_t *)(*v1 + 48) = v25;
    char v26 = *__nl_langinfo_l(0x40009, v6); // 0x569aaf
    char v27 = *__nl_langinfo_l(0x4000a, v6); // 0x569abb
    int64_t v28 = function_4f3230((int64_t)v26, (int64_t)v27, *__nl_langinfo_l(0x4000d, v6)); // 0x569ad8
    *(int32_t *)(*v1 + 92) = (int32_t)v28;
    char v29 = *__nl_langinfo_l(0x4000b, v6); // 0x569af1
    int64_t result3 = function_4f3230((int64_t)v29, (int64_t)*__nl_langinfo_l(0x4000c, v6), v10); // 0x569b0e
    *(int32_t *)(*v1 + 96) = (int32_t)result3;
    return result3;
}

// Address range: 0x57caa0 - 0x57cef9
int64_t function_57caa0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t * v1 = (int64_t *)(a1 + 24); // 0x57caa4
    int64_t v2 = *v1; // 0x57caa4
    char * v3 = (char *)v2; // 0x57caab
    unsigned char v4 = *v3; // 0x57caab
    int64_t v5 = v4; // 0x57caab
    int64_t v6 = v5 + 0xffffffd0; // 0x57caae
    if ((char)v6 < 10) {
        int64_t result = function_579bc0(a1, a2, v2, v6 & 0xffffffff); // 0x57cbb8
        if (*(char *)*v1 != 66) {
            // 0x57caf2
            return result;
        }
        // 0x57cbcf
        return function_579d20(a1, result);
    }
    int32_t * v7; // 0x57caa0
    int64_t v8; // 0x57caa0
    int32_t v9; // 0x57caa0
    int64_t v10; // 0x57caa0
    int64_t result2; // 0x57caa0
    int64_t v11; // 0x57caa0
    int64_t v12; // 0x57caa0
    int64_t v13; // 0x57caa0
    if (v4 < 123) {
        if (v4 == 111) {
            // 0x57cc70
            if (*(char *)(v2 + 1) == 110) {
                // 0x57cc7a
                *v1 = v2 + 2;
            }
        }
        int64_t v14 = function_57c4c0(a1); // 0x57cacd
        v10 = 0;
        if (v14 == 0) {
            goto lab_0x57cae3;
        } else {
            // 0x57cada
            v10 = v14;
            if (*(int32_t *)v14 == 49) {
                int64_t v15 = *(int64_t *)(v14 + 8); // 0x57cbe0
                int32_t * v16 = (int32_t *)(a1 + 80); // 0x57cbe4
                uint32_t v17 = *v16 + 7 + *(int32_t *)(v15 + 16); // 0x57cbf4
                *v16 = v17;
                bool v18; // 0x57caa0
                int64_t v19 = v18 ? -1 : 1; // 0x57cc00
                int64_t v20 = (int64_t)"li"; // 0x57caa0
                int64_t v21 = *(int64_t *)v15; // 0x57caa0
                unsigned char v22 = *(char *)v21; // 0x57cc00
                char v23 = *(char *)v20; // 0x57cc00
                int64_t v24 = v21 + v19; // 0x57cc00
                int64_t v25 = 2; // 0x57cc00
                char v26 = v23; // 0x57cc00
                bool v27 = false; // 0x57cc00
                while (v22 == v23) {
                    v20 += v19;
                    v26 = v22;
                    v27 = true;
                    if (v25 == 0) {
                        // break -> 
                        break;
                    }
                    v22 = *(char *)v24;
                    v23 = *(char *)v20;
                    v24 += v19;
                    v25--;
                    v26 = v23;
                    v27 = false;
                }
                unsigned char v28 = v26;
                v10 = v14;
                if ((v22 >= v28 && !v27) != v22 < v28) {
                    goto lab_0x57cae3;
                } else {
                    int64_t v29 = function_5797e0(a1, 54, v14, function_579bc0(a1, v24, (int64_t)v17, v25)); // 0x57cc25
                    v8 = (int64_t)*(char *)*v1;
                    result2 = v29;
                    goto lab_0x57caea;
                }
            } else {
                goto lab_0x57cae3;
            }
        }
    } else {
        int64_t v30 = v5 + 0xffffffbd; // 0x57cb00
        if ((char)v30 < 2) {
            int64_t v31 = *(int64_t *)(a1 + 72); // 0x57cc90
            int64_t v32 = v5; // 0x57cc97
            if (v31 != 0) {
                int32_t v33 = *(int32_t *)v31; // 0x57cc99
                v32 = v5;
                if (v33 == 0 || v33 == 24) {
                    int32_t * v34 = (int32_t *)(a1 + 80); // 0x57cca2
                    *v34 = *v34 + *(int32_t *)(v31 + 16);
                    v32 = (int64_t)*v3;
                }
            }
            char v35 = v32; // 0x57cca8
            if (v35 == 67) {
                int64_t v36 = v2 + 1; // 0x57cce0
                unsigned char v37 = *(char *)v36; // 0x57cce0
                if (v37 != 73) {
                    int64_t v38 = (int64_t)v37 + 0xffffffcf; // 0x57ccec
                    if ((char)v38 >= 5) {
                        // 0x57caf2
                        return 0;
                    }
                    // 0x57ccf7
                    *v1 = v2 + 2;
                    int32_t v39 = *(int32_t *)((4 * v38 & 1020) + (int64_t)&g17); // 0x57cd09
                    return (int64_t)v39 + (int64_t)&g17;
                }
                // 0x57cecb
                *v1 = v36;
                int64_t v40 = (int64_t)*(char *)(v2 + 2) + 0xffffffcf; // 0x57ced7
                if ((char)v40 >= 5) {
                    // 0x57cf30
                    return v40 & 0xffffffff;
                }
                // 0x57cede
                *v1 = v2 + 3;
                int32_t v41 = *(int32_t *)((4 * v40 & 1020) + (int64_t)&g18); // 0x57cef0
                return (int64_t)v41 + (int64_t)&g18;
            }
            // 0x57ccac
            v8 = v32;
            result2 = 0;
            if (v35 == 68) {
                int64_t v42 = (int64_t)*(char *)(v2 + 1) + 0xffffffd0; // 0x57ccb8
                if ((char)v42 >= 6) {
                    // 0x57caf2
                    return 0;
                }
                int32_t v43 = *(int32_t *)((4 * v42 & 1020) + (int64_t)&g16); // 0x57ccc9
                return (int64_t)v43 + (int64_t)&g16;
            }
            goto lab_0x57caea;
        } else {
            if (v4 == 76) {
                int64_t v44 = v2 + 1; // 0x57cc40
                *v1 = v44;
                int64_t v45 = function_579bc0(a1, a2, v44, v30 & 0xffffffff); // 0x57cc48
                if (v45 == 0) {
                    // 0x57caf2
                    return 0;
                }
                // 0x57cc55
                v10 = v45;
                if ((int32_t)function_579f90(a1) == 0) {
                    // 0x57caf2
                    return 0;
                }
                goto lab_0x57cae3;
            } else {
                // 0x57cb14
                if (v4 != 85) {
                    // 0x57caf2
                    return 0;
                }
                int64_t v46 = v2 + 1; // 0x57cb1c
                char * v47 = (char *)v46; // 0x57cb1c
                char v48 = *v47; // 0x57cb1c
                if (v48 == 108) {
                    // 0x57ce00
                    *v1 = v46;
                    unsigned char v49 = *v47; // 0x57ce0a
                    v8 = v49;
                    result2 = 0;
                    if (v49 != 108) {
                        goto lab_0x57caea;
                    } else {
                        // 0x57ce16
                        *v1 = v2 + 2;
                        int64_t v50 = function_57c670(); // 0x57ce1e
                        v10 = 0;
                        if (v50 == 0) {
                            goto lab_0x57cae3;
                        } else {
                            int64_t v51 = *v1; // 0x57ce2f
                            unsigned char v52 = *(char *)v51; // 0x57ce33
                            v8 = v52;
                            result2 = 0;
                            if (v52 != 69) {
                                goto lab_0x57caea;
                            } else {
                                // 0x57ce3e
                                *v1 = v51 + 1;
                                int32_t v53 = function_579b00(a1); // 0x57ce4e
                                if (v53 < 0) {
                                    // 0x57ceb0
                                    v8 = (int64_t)*(char *)*v1;
                                    result2 = 0;
                                    goto lab_0x57caea;
                                } else {
                                    int32_t * v54 = (int32_t *)(a1 + 40); // 0x57ce52
                                    int32_t v55 = *v54; // 0x57ce52
                                    int64_t v56 = *v1; // 0x57ce58
                                    v13 = v56;
                                    if (v55 < *(int32_t *)(a1 + 44)) {
                                        int64_t v57 = *(int64_t *)(a1 + 32); // 0x57ce68
                                        int64_t v58 = v57 + 8 * ((0x100000000 * (int64_t)v55 >> 31) + (int64_t)v55); // 0x57ce6c
                                        *(int32_t *)(v58 + 4) = 0;
                                        *v54 = v55 + 1;
                                        *(int32_t *)(v58 + 16) = v53;
                                        int32_t * v59 = (int32_t *)(a1 + 56);
                                        int32_t v60 = *v59; // 0x57ce7d
                                        *(int32_t *)v58 = 69;
                                        *(int64_t *)(v58 + 8) = v50;
                                        v7 = v59;
                                        v9 = v60;
                                        v11 = v58;
                                        v12 = v56;
                                        v13 = v56;
                                        if (v60 < *(int32_t *)(a1 + 60)) {
                                            goto lab_0x57cb98;
                                        } else {
                                            goto lab_0x57ce98;
                                        }
                                    } else {
                                        goto lab_0x57ce98;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    // 0x57cb28
                    if (v48 != 116) {
                        // 0x57caf2
                        return 0;
                    }
                    // 0x57cb30
                    *v1 = v46;
                    unsigned char v61 = *v47; // 0x57cb3a
                    v8 = v61;
                    result2 = 0;
                    if (v61 != 116) {
                        goto lab_0x57caea;
                    } else {
                        // 0x57cb42
                        *v1 = v2 + 2;
                        int64_t v62 = function_579b00(a1); // 0x57cb4a
                        v10 = 0;
                        if ((int32_t)v62 < 0) {
                            goto lab_0x57cae3;
                        } else {
                            int32_t * v63 = (int32_t *)(a1 + 40); // 0x57cb53
                            int32_t v64 = *v63; // 0x57cb53
                            int64_t v65 = *v1; // 0x57cb59
                            v13 = v65;
                            if (v64 < *(int32_t *)(a1 + 44)) {
                                int64_t v66 = *(int64_t *)(a1 + 32); // 0x57cb6f
                                int64_t v67 = v66 + 8 * ((0x100000000 * (int64_t)v64 >> 31) + (int64_t)v64); // 0x57cb73
                                *(int32_t *)(v67 + 4) = 0;
                                *v63 = v64 + 1;
                                *(int64_t *)(v67 + 8) = 0x100000000 * v62 >> 32;
                                int32_t * v68 = (int32_t *)(a1 + 56);
                                int32_t v69 = *v68; // 0x57cb85
                                *(int32_t *)v67 = 71;
                                v7 = v68;
                                v9 = v69;
                                v11 = v67;
                                v12 = v65;
                                v13 = v65;
                                if (v69 < *(int32_t *)(a1 + 60)) {
                                    goto lab_0x57cb98;
                                } else {
                                    goto lab_0x57ce98;
                                }
                            } else {
                                goto lab_0x57ce98;
                            }
                        }
                    }
                }
            }
        }
    }
  lab_0x57cae3:
    // 0x57cae3
    v8 = (int64_t)*(char *)*v1;
    result2 = v10;
    goto lab_0x57caea;
  lab_0x57caea:
    // 0x57caea
    if ((char)v8 == 66) {
        // 0x57cbcf
        return function_579d20(a1, result2);
    }
    // 0x57caf2
    return result2;
  lab_0x57ce98:
    // 0x57ce98
    v8 = (int64_t)*(char *)v13;
    result2 = 0;
    goto lab_0x57caea;
  lab_0x57cb98:;
    int64_t v70 = *(int64_t *)(a1 + 48); // 0x57cb98
    *(int64_t *)(v70 + (0x100000000 * (int64_t)v9 >> 29)) = v11;
    *v7 = v9 + 1;
    v8 = (int64_t)*(char *)v12;
    result2 = v11;
    goto lab_0x57caea;
}

// Address range: 0x57cf04 - 0x57cf06
int64_t function_57cf04(void) {
    // 0x57cf04
    int64_t result; // 0x57cf04
    return result;
}
