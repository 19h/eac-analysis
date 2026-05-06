/*
 * Targeted RetDec C for native executable gap queue batch 182.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x549690-0x549894 rank=130 name=fcn.00549690 kind=r2_discovered bytes=516 uncovered=516
 *   0x28a8a-0x28c8c rank=131 name=fcn.00028a8a kind=r2_discovered bytes=514 uncovered=514
 *   0x2a78b-0x2a98d rank=132 name=fcn.0002a78b kind=r2_discovered bytes=514 uncovered=514
 *   0x556d0-0x559ba rank=133 name=fcn.000556d0 kind=r2_discovered bytes=746 uncovered=513
 *   0x49eba0-0x49ee6e rank=134 name=fcn.0049eba0 kind=r2_discovered bytes=718 uncovered=485
 *   0x4affd-0x4b261 rank=135 name=fcn.0004affd kind=r2_discovered bytes=612 uncovered=395
 *   0x2a521-0x2a8b0 rank=136 name=fcn.0002a521 kind=r2_discovered bytes=911 uncovered=369
 *   0x57b50-0x57d58 rank=138 name=fcn.00057b50 kind=r2_discovered bytes=520 uncovered=272
 *   0x4c9900-0x4c9b79 rank=139 name=fcn.004c9900 kind=r2_discovered bytes=633 uncovered=232
 *   0x499dd0-0x499fef rank=140 name=fcn.00499dd0 kind=r2_discovered bytes=543 uncovered=192
 *   0x4c69e0-0x4c8246 rank=142 name=fcn.004c69e0 kind=r2_discovered bytes=6246 uncovered=6242
 *   0x39110-0x3a750 rank=144 name=fcn.00039110 kind=r2_discovered bytes=5696 uncovered=5664
 *   0xcc5a1-0xcdac9 rank=145 name=fcn.000cc5a1 kind=r2_discovered bytes=5416 uncovered=5416
 *   0x63d20-0x6524a rank=146 name=fcn.00063d20 kind=r2_discovered bytes=5418 uncovered=5392
 *   0x63d80-0x65248 rank=147 name=fcn.00063d80 kind=r2_discovered bytes=5320 uncovered=5320
 *   0x22ea0-0x2452e rank=148 name=fcn.00022ea0 kind=r2_discovered bytes=5774 uncovered=5248
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
extern int g27;
extern int g28;
extern int g29;
extern int g30;
extern int g31;
extern int g33;
extern int g34;
extern int g36;
extern int g37;
extern int g38;
extern int g39;
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
int64_t entry_point();
unsigned char llvm_ctpop_i8(unsigned char value);
uint16_t llvm_bswap_i16(uint16_t value);
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
void __asm_movq(int64_t value, int128_t dst);
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
int128_t __asm_psllq(int128_t value, int count);
int128_t __asm_psrlq(int128_t value, int count);
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

int64_t function_1188106();
int64_t function_12a8bc();
int64_t function_12f6788d();
int64_t function_14310fab();
int64_t function_1c38db62();
int64_t function_1df0f150();
int64_t function_1ff50();
int64_t function_2054da();
int64_t function_20550();
int64_t function_209338();
int64_t function_20bac7();
int64_t function_215434();
int64_t function_218f2e();
int64_t function_21a2d();
int64_t function_22286b();
int64_t function_2263e();
int64_t function_2293e();
int64_t function_22aea();
int64_t function_22ea0(int64_t a1, int64_t a2);
int64_t function_22edc(int64_t a1, int64_t a2, int64_t a3);
int64_t function_22f0f(int64_t a1);
int64_t function_22f39(void);
int64_t function_22f64(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_22fc6(void);
int64_t function_22fceb();
int64_t function_22fd0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_22ff8(int64_t a1);
int64_t function_23007(int64_t a1);
int64_t function_2300d(void);
int64_t function_2302d(int64_t a1);
int64_t function_23049(void);
int64_t function_230cc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5);
int64_t function_23114(void);
int64_t function_23122(int64_t a1);
int64_t function_2314f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_23171(void);
int64_t function_2317a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_23185(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_231ff(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_23220(int64_t a1, int64_t a2, int64_t a3);
int64_t function_23272(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2327e(int64_t a1);
int64_t function_2329a(int64_t a1);
int64_t function_232a4(int64_t a1, int64_t a2);
int64_t function_232c1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2330c(int64_t a1);
int64_t function_23344(int64_t a1, int64_t a2);
int64_t function_23372(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_23398(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_23414(int64_t a1, int64_t a2);
int64_t function_23424(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_235f2(int64_t a1);
int64_t function_23608(int64_t a1);
int64_t function_23620(int64_t a1);
int64_t function_23680(int64_t a1);
int64_t function_236e3(void);
int64_t function_236fd(void);
int64_t function_23727(int64_t a1);
int64_t function_2376a(int64_t a1);
int64_t function_23792(int64_t a1);
int64_t function_237a1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_237f0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_23821(void);
int64_t function_2382b(int64_t a1);
int64_t function_23867(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_23981(void);
int64_t function_23985(void);
int64_t function_239a3(int64_t a1);
int64_t function_239eb(int64_t a1);
int64_t function_23a27(int64_t a1);
int64_t function_23a33(void);
int64_t function_23a53(int64_t a1);
int64_t function_23a89(int64_t a1, int64_t a2, int64_t a3);
int64_t function_23aa6(int64_t a1, int64_t a2, int64_t a3);
int64_t function_23aaf(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_23b13(int64_t a1);
int64_t function_23b63(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_23b8a(int64_t a1);
int64_t function_23b9f(int64_t a1);
int64_t function_23bb7(int64_t a1);
int64_t function_23bbf(int64_t a1, int64_t a2, int64_t a3);
int64_t function_23c58(int64_t a1, int64_t a2, int64_t a3);
int64_t function_23cdf(int64_t a1);
int64_t function_23cec(void);
int64_t function_23d08(void);
int64_t function_23d4e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_23d51(int64_t a1, int64_t a2, int64_t a3);
int64_t function_23d7e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_23dab(int64_t a1, int64_t a2, int64_t a3);
int64_t function_23de5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5);
int64_t function_23e24(int64_t a1);
int64_t function_23efd(void);
int64_t function_23f07(int64_t a1);
int64_t function_23f21(void);
int64_t function_23f35(void);
int64_t function_23f64(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_23f6f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_23fd4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2401c(void);
int64_t function_2405a(void);
int64_t function_24090(void);
int64_t function_24099(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5);
int64_t function_240f4(int64_t a1);
int64_t function_24131(void);
int64_t function_24149(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_24155(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_241e5(void);
int64_t function_2421c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_2426c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_242b0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_242ed(void);
int64_t function_242f4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_24336(void);
int64_t function_24357(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5);
int64_t function_243c6(int64_t a1);
int64_t function_24ce0();
int64_t function_24cec();
int64_t function_24d05b();
int64_t function_24ded();
int64_t function_24df31();
int64_t function_24dff();
int64_t function_24e1e();
int64_t function_24e74();
int64_t function_24e7c();
int64_t function_24ef4();
int64_t function_2508e();
int64_t function_2509a();
int64_t function_250b0();
int64_t function_25194();
int64_t function_251d6();
int64_t function_251de();
int64_t function_252e0();
int64_t function_254332();
int64_t function_254fe();
int64_t function_255da();
int64_t function_25621f();
int64_t function_256ba();
int64_t function_2588a();
int64_t function_258f2d();
int64_t function_25c34();
int64_t function_25cc91();
int64_t function_2601b();
int64_t function_261ed2();
int64_t function_2669b9();
int64_t function_26cc29();
int64_t function_286ac();
int64_t function_289b2();
int64_t function_28a8a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_29a51ea9();
int64_t function_29dd0();
int64_t function_2a521(int64_t a1);
int64_t function_2a56d(void);
int64_t function_2a5d3(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2a672(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2a711(int64_t a1, int64_t a2);
int64_t function_2a73a(void);
int64_t function_2a78b(void);
int64_t function_2ce9a();
int64_t function_39110(int64_t a1);
int64_t function_3915c(int64_t a1);
int64_t function_39168(void);
int64_t function_39193(int64_t a1);
int64_t function_391bc(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_39237(void);
int64_t function_39266(void);
int64_t function_39274(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_392a9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_392ba(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_3930b(int64_t a1);
int64_t function_39400(int64_t a1);
int64_t function_3946b(void);
int64_t function_39485(int64_t a1);
int64_t function_394cb(void);
int64_t function_394f0(void);
int64_t function_39504(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3953c(void);
int64_t function_39556(void);
int64_t function_39560(int64_t a1, int64_t a2);
int64_t function_39582(void);
int64_t function_3958d(int64_t a1);
int64_t function_395ac(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_395ca(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3962f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_39655(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3966a(int64_t a1);
int64_t function_396b3(void);
int64_t function_396bd(int64_t a1, int64_t a2);
int64_t function_39708(void);
int64_t function_3971c(void);
int64_t function_39730(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3977a(int64_t a1);
int64_t function_39785(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_39795(int64_t a1);
int64_t function_397a9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_39800(int64_t a1, int64_t a2, int64_t a3);
int64_t function_39842(void);
int64_t function_3989e(int64_t a1);
int64_t function_398a6(int64_t a1);
int64_t function_398d6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_398e4(int64_t a1);
int64_t function_398f6(void);
int64_t function_39913(void);
int64_t function_39920(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_399b4(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4);
int64_t function_39a03(void);
int64_t function_39a06(int64_t a1, int64_t a2);
int64_t function_39a20(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_39a2d(void);
int64_t function_39a5d(int64_t a1);
int64_t function_39a7b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_39a99(int64_t a1, int64_t a2, int64_t a3);
int64_t function_39aa1(int64_t a1);
int64_t function_39ac3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_39ad4(void);
int64_t function_39b20(int64_t a1);
int64_t function_39b41(void);
int64_t function_39b66(void);
int64_t function_39b69(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_39c30(int64_t a1, int64_t a2);
int64_t function_39c78(int64_t a1);
int64_t function_39c7a(void);
int64_t function_39c9d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_39d2f(void);
int64_t function_39d4f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_39d65(void);
int64_t function_39d73(void);
int64_t function_39d8c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_39e2e(void);
int64_t function_39e45(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int32_t a5);
int64_t function_39ed6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_39ef5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_3a079(void);
int64_t function_3a08d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_3a121(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3a162(void);
int64_t function_3a18d(void);
int64_t function_3a1ac(void);
int64_t function_3a1ae(void);
int64_t function_3a1b9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a262(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3a327(int64_t a1);
int64_t function_3a382(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a3f8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a440(int64_t a1, int64_t a2);
int64_t function_3a48c(void);
int64_t function_3a495(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3a4e9(int64_t a1);
int64_t function_3a571(void);
int64_t function_3a609(void);
int64_t function_3a629(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a673(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3a6db(void);
int64_t function_3a6dd(void);
int64_t function_3a6e5(void);
int64_t function_3a6f9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3a714(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a71c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a720(int64_t a1);
int64_t function_3ae18();
int64_t function_3ae24();
int64_t function_4452a();
int64_t function_48bde0();
int64_t function_48d50f();
int64_t function_48db2f();
int64_t function_48de04();
int64_t function_4976c0();
int64_t function_499ab0();
int64_t function_499cf0();
int64_t function_499dd0(int64_t a1);
int64_t function_499e90(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_49e490();
int64_t function_49e770();
int64_t function_49e8b0();
int64_t function_49eba0(int64_t result, int64_t a2, int64_t a3, int64_t a4, int64_t * a5, int64_t a6);
int64_t function_49ebd0(int64_t result, uint64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_49ecc0(int64_t result, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_4a98b0();
int64_t function_4aa26();
int64_t function_4aa62();
int64_t function_4abec();
int64_t function_4aefa();
int64_t function_4afd4();
int64_t function_4affd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4b188(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4bf94();
int64_t function_4bfb4();
int64_t function_4c14d0();
int64_t function_4c1690();
int64_t function_4c16b0();
int64_t function_4c1770();
int64_t function_4c18b0();
int64_t function_4c1d00();
int64_t function_4c21c();
int64_t function_4c48b0();
int64_t function_4c69e0(int64_t a1, int64_t a2);
int64_t function_4c8790();
int64_t function_4c8fa0();
int64_t function_4c9080();
int64_t function_4c9900(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, uint64_t a10);
int64_t function_4cd810d4();
int64_t function_4eeb30();
int64_t function_4eeb50();
int64_t function_4efd30();
int64_t function_52c050();
int64_t function_5304f02b();
int64_t function_542590();
int64_t function_5473b0();
int64_t function_549690(int64_t a1, int64_t a2, int64_t a3);
int64_t function_54be6();
int64_t function_54cea();
int64_t function_54cf8();
int64_t function_55620();
int64_t function_556d0(int64_t a1, int64_t a2, int64_t str, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9);
int64_t function_56066();
int64_t function_56188();
int64_t function_561d2();
int64_t function_5646c();
int64_t function_57650();
int64_t function_579c2();
int64_t function_57b50(int64_t a1, int64_t * a2, int64_t a3, int64_t a4);
int64_t function_57bca(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_57c60(uint64_t a1, uint64_t a2);
int64_t function_57d2e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_57d33(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_57d45(void);
int64_t function_5f0f4();
int64_t function_615054ed();
int64_t function_6150e();
int64_t function_61792();
int64_t function_619f2();
int64_t function_620ac();
int64_t function_62ad8();
int64_t function_63d20(int64_t a1);
int64_t function_63d4c(int64_t a1);
int64_t function_63d66(int64_t a1);
int64_t function_63d80(int64_t a1);
int64_t function_63db5(int64_t a1, int64_t a2);
int64_t function_63e29(int64_t a1);
int64_t function_63e2f(void);
int64_t function_63e3c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_63eae(int64_t a1);
int64_t function_63ef1(int64_t a1);
int64_t function_63efb(int64_t a1);
int64_t function_63f0e(void);
int64_t function_63f36(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_63f4b(int64_t a1, int64_t a2, int64_t a3, int32_t a4);
int64_t function_63f90(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9);
int64_t function_63ff2(int64_t a1, int64_t a2, int64_t a3);
int64_t function_64016(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5, int64_t a6);
int64_t function_640c8(int64_t a1);
int64_t function_640d1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_640f7(int64_t a1);
int64_t function_64146(void);
int64_t function_64169(void);
int64_t function_641bd(void);
int64_t function_641c5(void);
int64_t function_641cf(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_641df(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_64270(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_642a6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_642b7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_642cf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_64399(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_643e9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5);
int64_t function_64430(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_6448a(void);
int64_t function_64491(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_644ab(void);
int64_t function_644bd(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_644f6(void);
int64_t function_64505(void);
int64_t function_6455c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_645a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_64601(int64_t a1);
int64_t function_64616(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_6466b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_64672(int64_t a1);
int64_t function_646cf(int64_t a1);
int64_t function_64730(void);
int64_t function_64739(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_64750(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_64790(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_647e2(void);
int64_t function_64820(void);
int64_t function_64829(void);
int64_t function_64834(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_64867(int64_t a1, int64_t a2, int64_t a3);
int64_t function_64871(void);
int64_t function_64878(void);
int64_t function_64897(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_648f2(void);
int64_t function_648fe(int64_t a1);
int64_t function_6490b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5);
int64_t function_649e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_64a9c(void);
int64_t function_64aa7(void);
int64_t function_64ae6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_64b85(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_64caf(int64_t a1, uint64_t a2, int64_t a3);
int64_t function_64ccc(int64_t a1, int64_t a2, int64_t a3);
int64_t function_64cd4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_64cdb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5);
int64_t function_64d30(int64_t a1, int64_t a2);
int64_t function_64dae(void);
int64_t function_64db7(void);
int64_t function_64ded(void);
int64_t function_64e00(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_64e1a(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_64e21(int64_t a1, int64_t a2, int64_t a3);
int64_t function_64e36(void);
int64_t function_64e3d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_64eb8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_64eca(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_64ef8(void);
int64_t function_64f36(int64_t a1);
int64_t function_64f47(void);
int64_t function_64f52(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_64f6d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_64fbb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_65000(int64_t a1, int64_t a2, int64_t a3);
int64_t function_65042(void);
int64_t function_650e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_65192(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_695adba2();
int64_t function_7293a();
int64_t function_72994();
int64_t function_729b6();
int64_t function_729ce();
int64_t function_737a2822();
int64_t function_7e8360c0();
int64_t function_cc5a1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_dd0e3();
int64_t function_e0017();
int64_t function_e1448();
int64_t function_e298f();
int64_t function_e5cd3();
int64_t function_f1975();
int64_t function_f2be7();
int64_t function_f8eb8();
int64_t function_f9d78();
int64_t function_fb533();
int64_t function_fd3e0();
int64_t function_ffffffff87b8e917();
int64_t function_ffffffff8904a36b();
int64_t function_ffffffff9f19132a();
int64_t function_ffffffffa9adff33();
int64_t function_ffffffffbbe05b21();
int64_t function_ffffffffbf2ede74();
int64_t function_ffffffffcf7e6974();
int64_t function_ffffffffd6bafeaf();
int64_t function_ffffffffdf5a6943();
int64_t function_ffffffffe337f2b9();
int64_t unknown_3d2b543e();
int64_t unknown_6002c438();

// Address range: 0x22ea0 - 0x22ed0
int64_t function_22ea0(int64_t a1, int64_t a2) {
    // 0x22ea0
    __readfsqword(40);
    return function_dd0e3();
}

// Address range: 0x22edc - 0x22eea
int64_t function_22edc(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a1 + 101 + a3); // 0x22edc
    bool v2; // 0x22edc
    *v1 = *v1 - (v2 ? 0x21644894 : 0x21644893);
    return function_14310fab();
}

// Address range: 0x22f0f - 0x22f10
int64_t function_22f0f(int64_t a1) {
    // 0x22f0f
    int64_t result; // 0x22f0f
    return result;
}

// Address range: 0x22f39 - 0x22f3a
int64_t function_22f39(void) {
    // 0x22f39
    int64_t result; // 0x22f39
    return result;
}

// Address range: 0x22f64 - 0x22fb4
int64_t function_22f64(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x22f64
    int64_t v1; // 0x22f64
    int64_t v2 = 0x100000000 * v1 >> 32; // 0x22f64
    if (llvm_ctpop_i8((char)(v2 & a3 / 256)) % 2 != 0) {
        int64_t v3 = unknown_6002c438(); // 0x22fa5
        float80_t v4; // 0x22f64
        return (v3 + (v4 < v4 ? 236 : 235)) % 256 | v3 & -256;
    }
    char * v5 = (char *)(v1 + 0x7f84f580); // 0x22f6a
    char v6 = *v5 + (char)v2; // 0x22f6a
    *v5 = v6;
    int64_t v7 = v2; // 0x22f70
    if (v6 != 0) {
        v7 = function_22f39();
    }
    int64_t v8 = a3 & -0xff01 | (int64_t)&g37; // 0x22f72
    *(int32_t *)0x31e877000021cd53 = (int32_t)v7;
    int32_t * v9 = (int32_t *)(a4 - 0x240c8fef); // 0x22f80
    uint32_t v10 = *v9; // 0x22f80
    *v9 = v10 / 0x1000000 | 256 * v10;
    unsigned char v11 = *(char *)(((v7 / 256 + v8) % 256 | v8 & -256) + 0x74003106); // 0x22f87
    int16_t v12 = v7; // 0x22f87
    int16_t v13 = v11; // 0x22f87
    return v7 & -0x10000 | (int64_t)(v12 / v13 % 256) | (int64_t)(256 * (v12 % v13));
}

// Address range: 0x22fc6 - 0x22fc7
int64_t function_22fc6(void) {
    // 0x22fc6
    int64_t result; // 0x22fc6
    return result;
}

// Address range: 0x22fd0 - 0x22fd4
int64_t function_22fd0(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a2 + 22); // 0x22fd0
    int64_t result; // 0x22fd0
    *v1 = *v1 - (int32_t)result;
    return result;
}

// Address range: 0x22ff8 - 0x23007
int64_t function_22ff8(int64_t a1) {
    // 0x22ff8
    int64_t v1; // 0x22ff8
    return v1 & -256 | 234;
}

// Address range: 0x23007 - 0x2300a
int64_t function_23007(int64_t a1) {
    // 0x23007
    int64_t result; // 0x23007
    return result;
}

// Address range: 0x2300d - 0x2300f
int64_t function_2300d(void) {
    // 0x2300d
    return function_22fc6();
}

// Address range: 0x2302d - 0x23031
int64_t function_2302d(int64_t a1) {
    // 0x2302d
    int64_t result; // 0x2302d
    return result;
}

// Address range: 0x23049 - 0x2304c
int64_t function_23049(void) {
    // 0x23049
    int64_t result; // 0x23049
    return result;
}

// Address range: 0x230cc - 0x23113
int64_t function_230cc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5) {
    // 0x230cc
    int64_t v1; // 0x230cc
    int32_t v2 = v1; // 0x230cc
    __asm_out((int16_t)(v2 >> 31), v2);
    int64_t result = 0; // 0x23101
    if (v1 != __readfsqword(40)) {
        // 0x23103
        __stack_chk_fail();
        result = (int64_t)&g65;
    }
    // 0x23108
    return result;
}

// Address range: 0x23114 - 0x23121
int64_t function_23114(void) {
    // 0x23114
    int64_t v1; // 0x23114
    return function_23122(v1) & -256 | 1;
}

// Address range: 0x23122 - 0x2314f
int64_t function_23122(int64_t a1) {
    // 0x23122
    __readfsqword(40);
    return function_e0017();
}

// Address range: 0x2314f - 0x23166
int64_t function_2314f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2314f
    int64_t v1; // 0x2314f
    int64_t v2 = v1;
    char * v3 = (char *)(2 * a2 + 0x362e41bc + a4); // 0x23150
    unsigned char v4 = *v3; // 0x23150
    *v3 = (char)v2;
    char * v5 = (char *)(a4 + 121); // 0x23157
    unsigned char v6 = *v5; // 0x23157
    unsigned char v7 = v6 + (char)a3; // 0x23157
    *v5 = v7;
    int32_t v8 = *(int32_t *)(a2 - 0x5d4d7f3b); // 0x2315a
    return v2 & -0x10000 | (int64_t)v4 | v2 & 0xff00 & (int64_t)((int32_t)v1 - v8 + (int32_t)(v7 < v6));
}

// Address range: 0x23171 - 0x23172
int64_t function_23171(void) {
    // 0x23171
    int64_t result; // 0x23171
    return result;
}

// Address range: 0x2317a - 0x23185
int64_t function_2317a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a2 + 0x6c145363); // 0x2317a
    *v1 = *v1 & (int32_t)a4;
    int64_t v2; // 0x2317a
    __asm_outsd((int16_t)a3, *(int32_t *)&v2);
    return function_23114();
}

// Address range: 0x23185 - 0x231ff
int64_t function_23185(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x23185
    int64_t v1; // 0x23185
    uint64_t v2 = v1;
    int64_t v3 = v1;
    int64_t v4 = a4 & -256 | (int64_t)((char)a4 - *(char *)(a1 - 0x5e17de3a)); // 0x23186
    *(char *)v3 = 2 * (char)v3;
    char * v5 = (char *)(v4 + 19); // 0x2319b
    unsigned char v6 = *v5; // 0x2319b
    *v5 = v6 + 37;
    int64_t result = v6 > 218 ? 0xb2291119 : 0xb2291118; // 0x2319e
    *(char *)a2 = 17;
    char * v7 = (char *)(v1 - 0x408cbd1c); // 0x231a2
    char v8 = *v7 ^ ((char)a5 | (char)&g36); // 0x231a2
    *v7 = v8;
    if (v4 != 1 == v8 == 0) {
        // 0x2321f
        return result;
    }
    if (v4 != 2) {
        // 0x231fb
        __asm_out_133((int16_t)&g36 & -256, (char)result);
        return __asm_wait();
    }
    unsigned char v9 = *(char *)(v1 + v2 % 256); // 0x231ad
    uint32_t v10 = (int32_t)(v2 & 0xffffff00 | (int64_t)v9); // 0x231ae
    int32_t v11 = v10 + 0x5e0259f5; // 0x231ae
    return 256 * (16 * (int64_t)(v10 % 16 > 10) | (int64_t)(v10 > 0xa1fda60a) | 64 * (int64_t)(v11 == 0) | 128 * (int64_t)(v11 < 0) | 4 * (int64_t)(llvm_ctpop_i8((char)v11) % 2 == 0)) | (int64_t)(v11 & -0xff01 | 512);
}

// Address range: 0x231ff - 0x2321f
int64_t function_231ff(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    unsigned char v1 = (char)a4 % 32; // 0x23206
    if (v1 != 0) {
        int64_t v2; // 0x231ff
        char * v3 = (char *)(v2 + 0x237c151c); // 0x23206
        *v3 = *v3 << v1;
    }
    char * v4 = (char *)(a1 + 63 + a3); // 0x2320c
    *v4 = *v4 ^ 88;
    int32_t v5 = __asm_in((int16_t)a3); // 0x23210
    float80_t v6; // 0x231ff
    *(float32_t *)0x3d22e558 = (float32_t)v6;
    return v5 ^ 0x20d70851;
}

// Address range: 0x23220 - 0x23271
int64_t function_23220(int64_t a1, int64_t a2, int64_t a3) {
    // 0x23220
    int64_t v1; // 0x23220
    int32_t * v2 = (int32_t *)(v1 + 0x790be193); // 0x2322c
    *v2 = *v2 & (int32_t)a2;
    int64_t result = v1 + 0xffd451e8 & 0xffffffff; // 0x23269
    int32_t * v3 = (int32_t *)(result - 125); // 0x2326e
    *v3 = *v3 - 1;
    return result;
}

// Address range: 0x23272 - 0x2327e
int64_t function_23272(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x23272
    int64_t result; // 0x23272
    return result;
}

// Address range: 0x2327e - 0x23298
int64_t function_2327e(int64_t a1) {
    // 0x2327e
    return function_e1448();
}

// Address range: 0x2329a - 0x2329b
int64_t function_2329a(int64_t a1) {
    // 0x2329a
    int64_t result; // 0x2329a
    return result;
}

// Address range: 0x232a4 - 0x232a9
int64_t function_232a4(int64_t a1, int64_t a2) {
    // 0x232a4
    int64_t result; // 0x232a4
    *(int32_t *)result = (int32_t)a2;
    return result;
}

// Address range: 0x232c1 - 0x2330b
int64_t function_232c1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x232c1
    int64_t v1; // 0x232c1
    bool v2; // 0x232c1
    int64_t result = v1 & -0xff01 | 256 * (64 * (int64_t)v2 | 128 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2) | 512; // 0x232c1
    if (a4 != 1 == v2) {
        // 0x232f5
        return result & -244;
    }
    // 0x232c4
    return result;
}

// Address range: 0x2330c - 0x23344
int64_t function_2330c(int64_t a1) {
    int64_t result = function_24e74(a1 + 8); // 0x23314
    if ((char)result == 0) {
        // 0x23342
        return result;
    }
    // 0x2331d
    function_620ac(a1 + (int64_t)&g14);
    int64_t result2 = function_24e74(a1 + (int64_t)&g2); // 0x23330
    if ((char)result2 == 0) {
        // 0x23342
        return result2;
    }
    // 0x23339
    return function_243c6(a1);
}

// Address range: 0x23344 - 0x2336f
int64_t function_23344(int64_t a1, int64_t a2) {
    // 0x23344
    __readfsqword(40);
    return function_e298f();
}

// Address range: 0x23372 - 0x23398
int64_t function_23372(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = __asm_hlt(a1, a2, a3, a4); // 0x23374
    bool v2; // 0x23372
    int64_t v3 = v2 ? -1 : 1; // 0x2338a
    int64_t v4 = v3 + a1; // 0x2338a
    *(char *)v4 = *(char *)(v3 + a2);
    uint32_t v5 = *(int32_t *)(v4 + v3); // 0x2338e
    int64_t v6; // 0x23372
    uint32_t v7 = *(int32_t *)&v6; // 0x2338f
    *(int32_t *)v1 = v7 / 0x2000 | 0x100000 * v7 | 0x80000 * (int32_t)(v5 > (int32_t)v1);
    return v1 + 0xa1d6e52b + (int64_t)((v7 & 0x1000) != 0) & 0xffffffff;
}

// Address range: 0x23398 - 0x23413
int64_t function_23398(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x23398
    int64_t v1; // 0x23398
    uint64_t v2 = v1;
    uint32_t v3 = (int32_t)a4 % 32; // 0x23399
    bool v4; // 0x23398
    bool v5; // 0x23398
    if (v3 != 0) {
        int32_t * v6 = (int32_t *)(v2 - 97); // 0x23399
        uint32_t v7 = *v6; // 0x23399
        *v6 = v7 >> v3 | (int32_t)v5 << 32 - v3 | (int32_t)((int64_t)v7 << (int64_t)(33 - v3));
        v4 = v3 == 1 ? v7 < 0 != v5 : v5;
    }
    int64_t v8 = a4 - 1; // 0x2339c
    if (v8 != 0 != v5) {
        // 0x2339e
        int64_t v9; // 0x23398
        return (int64_t)&v9;
    }
    int64_t v10 = v1 & 0xffffffff; // 0x23398
    int64_t v11 = v5 ? -1 : 1; // 0x233a3
    int64_t v12 = v8; // 0x2339c
    int64_t v13 = a1; // 0x23398
    int64_t v14 = a2; // 0x233a3
    int64_t v15 = v10; // 0x23398
    *(char *)v13 = *(char *)v14;
    v14 += v11;
    int64_t result; // 0x23398
    while (v5 || v5 != v4) {
        // 0x2339c
        v12--;
        result = *(int64_t *)v15;
        v13 += v11;
        v15 += 8;
        if (v12 != 0 != v5) {
            // 0x2339e
            return result;
        }
        *(char *)v13 = *(char *)v14;
        v14 += v11;
    }
    char * v16 = (char *)((v2 % 256 | v8 & -256) + 0x5126528b); // 0x233a9
    unsigned char v17 = *v16; // 0x233a9
    unsigned char v18 = v17 + *(char *)v14; // 0x233a9
    *v16 = v18;
    uint32_t v19 = *(int32_t *)-0x3e4a128125071814; // 0x233af
    *(int64_t *)v10 = 0x383f8e;
    int64_t result2 = (int64_t)v19 - 0x69d5ff8d + (int64_t)(v18 < v17); // 0x233be
    float80_t v20; // 0x23398
    *(int16_t *)(result2 - 0x6c3812ad) = (int16_t)v20;
    if (result2 >= 0) {
        char * v21 = (char *)(a3 - 9); // 0x233cd
        *v21 = *v21 + (char)v2;
        return result2;
    }
    // 0x233d5
    *(int32_t *)(v10 + 12) = 0;
    result = result2;
    if (*(int64_t *)(v10 + 24) != __readfsqword(40)) {
        // 0x23405
        __stack_chk_fail();
        result = (int64_t)&g65;
    }
    // 0x2339e
    return result;
}

// Address range: 0x23414 - 0x23423
int64_t function_23414(int64_t a1, int64_t a2) {
    uint32_t v1 = (int32_t)a2; // 0x23414
    int64_t result; // 0x23414
    if (v1 >= 25) {
        // 0x23419
        *(int32_t *)(a1 + (int64_t)&g13) = v1;
        result = __asm_mfence(a1, a2);
    }
    // 0x23422
    return result;
}

// Address range: 0x23424 - 0x235f1
int64_t function_23424(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2 = 0x2eb95ba6; // bp-70, 0x23441
    int64_t v3 = __readfsqword(40); // 0x23449
    int64_t v4 = (int64_t)&v2; // 0x2346d
    *(int32_t *)&v2 = 0x61657473;
    char * v5 = (char *)(v4 | 4); // 0x2348a
    *v5 = *v5 ^ 3;
    char * v6 = (char *)(v4 | 5); // 0x2349d
    *v6 = *v6 ^ 54;
    if (a2 != 0) {
        // 0x234af
        if (!(((int32_t)a4 == 0 | a3 == 0 | *(char *)&v1 == 0))) {
            uint64_t v7 = a4 & 0xffffffff; // 0x234c6
            int64_t v8; // bp-112, 0x23424
            function_729b6(&v8, a1 + (int64_t)&g8, v4, a4);
            int64_t v9 = function_24ded(v1); // 0x234ea
            int64_t v10 = a1 + (int64_t)&g9; // 0x234ef
            int64_t v11 = v7 + a3; // 0x234fc
            function_25c34(v10, v1, v9);
            function_48db2f(*(int64_t *)v10);
            int64_t * v12 = (int64_t *)(a1 + (int64_t)&g10); // 0x23511
            int64_t v13 = *v12; // 0x23511
            int64_t * v14 = (int64_t *)(a1 + (int64_t)&g12); // 0x23518
            if (v7 > *v14 - v13) {
                int64_t v15 = function_24cec(v7); // 0x2352a
                function_21a2d(a3, v11, v15);
                function_24ce0(*v12);
                *v12 = v15;
                int64_t v16 = v15 + v7; // 0x2355a
                *(int64_t *)(a1 + (int64_t)&g11) = v16;
                *v14 = v16;
            } else {
                int64_t * v17 = (int64_t *)(a1 + (int64_t)&g11); // 0x2356d
                uint64_t v18 = *v17 - v13; // 0x23574
                if (v7 > v18) {
                    int64_t v19 = v18 + a3; // 0x23590
                    function_21a2d(a3, v19, v13);
                    *v17 = function_21a2d(v19, v11, *v17);
                } else {
                    // 0x2357c
                    *v17 = function_21a2d(a3, v11, v13);
                }
            }
            // 0x235b8
            function_729ce(&v8);
        }
    }
    // 0x235c0
    function_24dff(&v2, 6);
    int64_t result = 0; // 0x235db
    if (v3 != __readfsqword(40)) {
        // 0x235dd
        __stack_chk_fail();
        result = (int64_t)&g65;
    }
    // 0x235e2
    return result;
}

// Address range: 0x235f2 - 0x23607
int64_t function_235f2(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + (int64_t)&g7); // 0x235f2
    if (v1 == 0) {
        // 0x23604
        return 0;
    }
    // 0x235fe
    return *(int64_t *)v1;
}

// Address range: 0x23608 - 0x23620
int64_t function_23608(int64_t a1) {
    int64_t v1 = function_252e0(a1 + (int64_t)&g3); // 0x23613
    return v1 & -256 | (int64_t)((int32_t)v1 == 2);
}

// Address range: 0x23620 - 0x2367b
int64_t function_23620(int64_t a1) {
    int64_t v1 = function_24e1e(); // 0x23629
    function_251de(a1 + (int64_t)&g6, v1 + 0x6fc23ac00);
    function_251de(a1 + (int64_t)&g4, v1);
    *(int64_t *)(a1 + (int64_t)&g5) = 0;
    __asm_mfence(a1 + (int64_t)&g3, 1);
    return function_251d6();
}

// Address range: 0x23680 - 0x236a7
int64_t function_23680(int64_t a1) {
    // 0x23680
    __readfsqword(40);
    return function_e5cd3();
}

// Address range: 0x236e3 - 0x236e4
int64_t function_236e3(void) {
    // 0x236e3
    int64_t result; // 0x236e3
    return result;
}

// Address range: 0x236fd - 0x236ff
int64_t function_236fd(void) {
    // 0x236fd
    int64_t result; // 0x236fd
    return result;
}

// Address range: 0x23727 - 0x2372f
int64_t function_23727(int64_t a1) {
    // 0x23727
    return function_236e3();
}

// Address range: 0x2376a - 0x2376d
int64_t function_2376a(int64_t a1) {
    // 0x2376a
    int64_t result; // 0x2376a
    return result;
}

// Address range: 0x23792 - 0x23793
int64_t function_23792(int64_t a1) {
    // 0x23792
    int64_t result; // 0x23792
    return result;
}

// Address range: 0x237a1 - 0x237e1
int64_t function_237a1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x237a1
    int64_t v1; // 0x237a1
    __asm_out((int16_t)a3, (int32_t)v1);
    char * v2 = (char *)(v1 + 4 * a4); // 0x237a4
    *v2 = *v2 - (char)a4;
    float80_t v3; // 0x237a1
    *(int32_t *)(v1 - 0x77247740) = (int32_t)v3;
    *(int32_t *)(v1 + 36) = 0;
    int64_t result = v1 & 0xffffffff; // 0x237d4
    if (*(int64_t *)(v1 + 80) != __readfsqword(40)) {
        // 0x237d6
        __stack_chk_fail();
        result = (int64_t)&g65;
    }
    // 0x237db
    return result;
}

// Address range: 0x237f0 - 0x23820
int64_t function_237f0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x237f0
    __readfsqword(40);
    return function_f1975();
}

// Address range: 0x23821 - 0x23822
int64_t function_23821(void) {
    // 0x23821
    int64_t result; // 0x23821
    return result;
}

// Address range: 0x2382b - 0x2382f
int64_t function_2382b(int64_t a1) {
    // 0x2382b
    int64_t result; // 0x2382b
    return result;
}

// Address range: 0x23867 - 0x2394d
int64_t function_23867(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a4;
    int64_t v2; // 0x23867
    if (a4 == 0) {
        v2 = function_23821();
    }
    bool v3; // 0x23867
    if (!v3) {
        // 0x2386b
        *(char *)a1 = (char)v2 & 60;
        *(char *)v1 = *(char *)&v1;
        *(char *)(a3 - 0x246bffe9) = (char)__asm_int1((int64_t)&g65);
        return function_ffffffffcf7e6974();
    }
    uint32_t v4 = __asm_in((int16_t)a3); // 0x238da
    int64_t result = ((int64_t)(v4 % 256) | (int64_t)(v4 & -256)) ^ 52; // 0x238db
    int32_t * v5 = (int32_t *)(a3 + 0x3e282761); // 0x238e2
    *v5 = *v5 / 64;
    int64_t v6; // 0x23867
    int32_t * v7 = (int32_t *)(v6 - 0x57ff635a); // 0x238e9
    uint32_t v8 = *v7; // 0x238e9
    *v7 = v8 / 2 | 0x80000000 * v8;
    int64_t v9 = v1 - 1; // 0x238f1
    v1 = v9;
    if (v9 != 0) {
        // 0x238b4
        return result;
    }
    int32_t * v10 = (int32_t *)(a3 + a1); // 0x238f3
    int32_t v11 = a1; // 0x238f3
    *v10 = *v10 ^ v11;
    char * v12 = (char *)result; // 0x238f8
    *v12 = *v12 + (char)a3;
    int32_t * v13 = (int32_t *)(a1 - 92); // 0x238fb
    *v13 = *v13 | v11;
    char * v14 = (char *)(a1 - 0x309a86ef); // 0x23902
    *v14 = *v14 + (char)result;
    __asm_iretd((int64_t)&g65, (int64_t)&g65, (int64_t)&g65);
    char * v15 = (char *)(a3 + 82 + 8 * a2); // 0x2391a
    *v15 = *v15 + (char)(v1 / 256);
    char * v16 = (char *)(a2 + 0x6661e0ab); // 0x23930
    int32_t * v17 = (int32_t *)(a2 + 0x5017ee2b); // 0x23936
    while (true) {
        // 0x23930
        *v16 = *v16 + (char)v1;
        *v17 = *v17 & (int32_t)v1;
    }
}

// Address range: 0x23981 - 0x23984
int64_t function_23981(void) {
    // 0x23981
    int64_t result; // 0x23981
    return result;
}

// Address range: 0x23985 - 0x2398a
int64_t function_23985(void) {
    // 0x23985
    return function_12f6788d();
}

// Address range: 0x239a3 - 0x239b0
int64_t function_239a3(int64_t a1) {
    // 0x239a3
    int64_t v1; // 0x239a3
    return v1 & -256 | (int64_t)*(char *)0x2f3f2b246ed333b;
}

// Address range: 0x239eb - 0x239ee
int64_t function_239eb(int64_t a1) {
    // 0x239eb
    int64_t result; // 0x239eb
    return result;
}

// Address range: 0x23a27 - 0x23a33
int64_t function_23a27(int64_t a1) {
    // 0x23a27
    return function_ffffffffdf5a6943(a1);
}

// Address range: 0x23a33 - 0x23a3d
int64_t function_23a33(void) {
    // 0x23a33
    return function_ffffffffbbe05b21();
}

// Address range: 0x23a53 - 0x23a56
int64_t function_23a53(int64_t a1) {
    // 0x23a53
    int64_t v1; // 0x23a53
    return v1 & 0xffffffff;
}

// Address range: 0x23a89 - 0x23aa6
int64_t function_23a89(int64_t a1, int64_t a2, int64_t a3) {
    // 0x23a89
    int64_t v1; // 0x23a89
    uint64_t result = v1;
    *(int32_t *)0x1714c06f60d13b44 = (int32_t)result;
    char * v2 = (char *)(8 * a3 + 0x61620013); // 0x23a92
    *v2 = *v2 + (char)(result / 256);
    int32_t * v3 = (int32_t *)(result + 0x1cfffb10); // 0x23a9e
    *v3 = *v3 | (int32_t)a3;
    return result;
}

// Address range: 0x23aa6 - 0x23aaf
int64_t function_23aa6(int64_t a1, int64_t a2, int64_t a3) {
    char * v1 = (char *)(a3 + 3); // 0x23aa6
    int64_t v2; // 0x23aa6
    *v1 = *v1 ^ (char)v2;
    return function_1df0f150();
}

// Address range: 0x23aaf - 0x23abd
int64_t function_23aaf(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x23aaf
    int64_t result; // 0x23aaf
    *(char *)a1 = (char)result;
    return result;
}

// Address range: 0x23b13 - 0x23b14
int64_t function_23b13(int64_t a1) {
    // 0x23b13
    int64_t result; // 0x23b13
    return result;
}

// Address range: 0x23b63 - 0x23b6d
int64_t function_23b63(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x23b63
    return __asm_in((int16_t)a3);
}

// Address range: 0x23b8a - 0x23b8d
int64_t function_23b8a(int64_t a1) {
    // 0x23b8a
    int64_t result; // 0x23b8a
    return result;
}

// Address range: 0x23b9f - 0x23ba2
int64_t function_23b9f(int64_t a1) {
    // 0x23b9f
    int64_t result; // 0x23b9f
    return result;
}

// Address range: 0x23bb7 - 0x23bbf
int64_t function_23bb7(int64_t a1) {
    // 0x23bb7
    int64_t result; // 0x23bb7
    *(int32_t *)a1 = (int32_t)(result & result);
    return result;
}

// Address range: 0x23bbf - 0x23bed
int64_t function_23bbf(int64_t a1, int64_t a2, int64_t a3) {
    // 0x23bbf
    bool v1; // 0x23bbf
    int64_t v2 = v1 ? -4 : 4; // 0x23bcc
    int64_t v3 = v2 + a1; // 0x23bcc
    int32_t * v4 = (int32_t *)(a3 + 0x5463704b); // 0x23bcd
    int32_t v5 = *v4; // 0x23bcd
    *v4 = 2 * v5 | (int32_t)(v5 < 0);
    int64_t v6 = (int64_t)(v5 < 0) & 0xffffffff; // 0x23bd3
    *(int64_t *)(v6 - 8) = v6;
    int32_t * v7 = (int32_t *)(v3 + 63); // 0x23bd8
    *v7 = *v7 >> 28;
    int64_t v8; // 0x23bbf
    return function_ffffffffe337f2b9(v3, v2 + a2, v8 & 0xffffffff, 0xc7311af0);
}

// Address range: 0x23c58 - 0x23c62
int64_t function_23c58(int64_t a1, int64_t a2, int64_t a3) {
    // 0x23c58
    return 2 * a3 & 0xfffffffe;
}

// Address range: 0x23cdf - 0x23ce4
int64_t function_23cdf(int64_t a1) {
    // 0x23cdf
    int64_t v1; // 0x23cdf
    bool v2; // 0x23cdf
    return function_23d4e((v2 ? -1 : 1) + a1, v1, v1);
}

// Address range: 0x23cec - 0x23cef
int64_t function_23cec(void) {
    // 0x23cec
    int64_t result; // 0x23cec
    return result;
}

// Address range: 0x23d08 - 0x23d0d
int64_t function_23d08(void) {
    // 0x23d08
    return function_ffffffffbf2ede74();
}

// Address range: 0x23d4e - 0x23d50
int64_t function_23d4e(int64_t a1, int64_t a2, int64_t a3) {
    // 0x23d4e
    int64_t result; // 0x23d4e
    __asm_outsb((int16_t)a3, (char)result);
    return result;
}

// Address range: 0x23d51 - 0x23d7e
int64_t function_23d51(int64_t a1, int64_t a2, int64_t a3) {
    // 0x23d51
    int64_t v1; // 0x23d51
    int32_t * v2 = (int32_t *)(v1 - 125); // 0x23d51
    *v2 = *v2 - 1;
    __asm_in_134((int16_t)a3);
    char * v3 = (char *)(v1 - 61); // 0x23d55
    bool v4; // 0x23d51
    *v3 = *v3 - (v4 ? 86 : 85);
    __readfsqword(40);
    return function_f2be7();
}

// Address range: 0x23d7e - 0x23da2
int64_t function_23d7e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x23d7e
    int64_t v1; // 0x23d7e
    int64_t result = v1;
    *(char *)result = 2 * (char)result;
    *(int32_t *)a3 = (int32_t)a4 & -0x10000 | 458;
    return result;
}

// Address range: 0x23dab - 0x23dae
int64_t function_23dab(int64_t a1, int64_t a2, int64_t a3) {
    // 0x23dab
    int64_t result; // 0x23dab
    return result;
}

// Address range: 0x23de5 - 0x23e24
int64_t function_23de5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5) {
    int64_t result = 0; // 0x23e16
    int64_t v1; // 0x23de5
    if (v1 != __readfsqword(40)) {
        // 0x23e18
        __stack_chk_fail();
        result = (int64_t)&g65;
    }
    // 0x23e1d
    return result;
}

// Address range: 0x23e24 - 0x23e52
int64_t function_23e24(int64_t a1) {
    // 0x23e24
    __readfsqword(40);
    return function_f8eb8();
}

// Address range: 0x23efd - 0x23efe
int64_t function_23efd(void) {
    // 0x23efd
    int64_t result; // 0x23efd
    return result;
}

// Address range: 0x23f07 - 0x23f0a
int64_t function_23f07(int64_t a1) {
    // 0x23f07
    int64_t result; // 0x23f07
    return result;
}

// Address range: 0x23f21 - 0x23f22
int64_t function_23f21(void) {
    // 0x23f21
    int64_t result; // 0x23f21
    return result;
}

// Address range: 0x23f35 - 0x23f38
int64_t function_23f35(void) {
    // 0x23f35
    int64_t result; // 0x23f35
    return result;
}

// Address range: 0x23f64 - 0x23f6f
int64_t function_23f64(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x23f64
    int64_t v1; // 0x23f64
    __asm_out((int16_t)a3, (int32_t)v1);
    int64_t result; // 0x23f64
    if ((int32_t)v1 == (int32_t)v1) {
        result = function_23efd();
    }
    // 0x23f6a
    return result;
}

// Address range: 0x23f6f - 0x23f91
int64_t function_23f6f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t v1 = *(int32_t *)(a1 - 0x65e50378); // 0x23f6f
    if (llvm_ctpop_i8((char)((int32_t)a4 - v1)) % 2 != 0) {
        function_23f21();
    }
    // 0x23f77
    *(char *)a1 = __asm_insb((int16_t)a3);
    __asm_iretd((int64_t)&g65, (int64_t)&g65, (int64_t)&g65);
    return function_29a51ea9();
}

// Address range: 0x23fd4 - 0x23fe6
int64_t function_23fd4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x23fd4
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int64_t result; // 0x23fd4
    int32_t * v1 = (int32_t *)(result + 0x39cf475d); // 0x23fd6
    bool v2; // 0x23fd4
    *v1 = (int32_t)v2 + (int32_t)result + *v1;
    char * v3 = (char *)(3 * a2); // 0x23fe1
    *v3 = *v3 + (char)(result / 256);
    return result;
}

// Address range: 0x2401c - 0x2401d
int64_t function_2401c(void) {
    // 0x2401c
    int64_t result; // 0x2401c
    return result;
}

// Address range: 0x2405a - 0x2405f
int64_t function_2405a(void) {
    // 0x2405a
    return function_ffffffffd6bafeaf();
}

// Address range: 0x24090 - 0x24094
int64_t function_24090(void) {
    // 0x24090
    int64_t v1; // 0x24090
    __asm_out_135(0, (int32_t)v1);
    return function_2401c();
}

// Address range: 0x24099 - 0x240f4
int64_t function_24099(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5) {
    // 0x24099
    __asm_in_136(-15);
    int64_t v1; // 0x24099
    int32_t * v2 = (int32_t *)(v1 - 27); // 0x240a5
    *v2 = *v2 + (int32_t)v1;
    *(int32_t *)0x90cbe18a = *(int32_t *)0x90cbe18a + 0x140a6800;
    int64_t result = 0; // 0x240de
    if (v1 != __readfsqword(40)) {
        // 0x240e0
        __stack_chk_fail();
        result = (int64_t)&g65;
    }
    // 0x240e5
    return result;
}

// Address range: 0x240f4 - 0x2411a
int64_t function_240f4(int64_t a1) {
    // 0x240f4
    __readfsqword(40);
    return function_f9d78();
}

// Address range: 0x24131 - 0x24132
int64_t function_24131(void) {
    // 0x24131
    int64_t result; // 0x24131
    return result;
}

// Address range: 0x24149 - 0x2414c
int64_t function_24149(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x24149
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int64_t result; // 0x24149
    return result;
}

// Address range: 0x24155 - 0x241df
int64_t function_24155(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x24155
    bool v1; // 0x24155
    if (v1 || false) {
        char * v2 = (char *)(a4 + 0x48142474); // 0x241b8
        *v2 = (char)v1 - (char)a4 + *v2;
        __readfsqword(40);
        return function_fb533();
    }
    // 0x24157
    int64_t result; // 0x24155
    return result;
}

// Address range: 0x241e5 - 0x241e6
int64_t function_241e5(void) {
    // 0x241e5
    int64_t result; // 0x241e5
    return result;
}

// Address range: 0x2421c - 0x2426b
int64_t function_2421c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x2421c
    int64_t v1; // 0x2421c
    bool v2; // 0x2421c
    if (!v2) {
        v1 = function_241e5();
    }
    // 0x2421e
    __asm_out_133((int16_t)a3, (char)v1);
    int64_t v3 = a3 & a2;
    int64_t v4 = v1; // 0x24226
    int64_t v5 = a1; // 0x24226
    if ((int32_t)v3 == 0) {
        // 0x24228
        *(char *)0x3954e898 = *(char *)0x3954e898 + (char)(v1 / 256);
        if (a4 != 0) {
            // 0x24236
            __asm_fbld(*(float80_t *)(a4 + 0x266818fa));
            return v1 | 177;
        }
        // 0x24250
        int64_t v6; // 0x2421c
        unsigned char v7 = *(char *)((v1 & 4 | 251) + v6); // 0x24252
        v4 = v1 & -256 | (int64_t)v7;
        v5 = (int64_t)((int32_t)a1 - *(int32_t *)(a4 + 18));
    }
    int64_t v8 = v5 + (v2 ? -1 : 1); // 0x2425b
    int64_t result = __asm_hlt(v8, a2, v3 & 0xffffffff, a4); // 0x2425c
    __asm_out_137(-34, (char)result);
    *(int32_t *)v8 = __asm_insd(0x5e3e);
    *(int64_t *)((v4 & 0xffffffff) - 8) = 0xa0e95e3e;
    return result;
}

// Address range: 0x2426c - 0x242b0
int64_t function_2426c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2426c
    int64_t v1; // 0x2426c
    int64_t v2 = v1 & -256 | (int64_t)*(char *)0x7f0078f266e566e7; // 0x2426c
    float80_t v3; // 0x2426c
    *(int32_t *)(v2 - 0x772d772e) = (int32_t)v3;
    unsigned char v4 = (char)a4 % 32; // 0x2427e
    if (v4 != 0) {
        char * v5 = (char *)(v2 - 0x77367740); // 0x2427e
        unsigned char v6 = *v5; // 0x2427e
        *v5 = v6 >> v4 | v6 << 8 - v4;
    }
    *(int32_t *)(v1 + 52) = 0;
    int64_t result = 0; // 0x242a4
    if (*(int64_t *)(v1 + 80) != __readfsqword(40)) {
        // 0x242a6
        __stack_chk_fail();
        result = (int64_t)&g65;
    }
    // 0x242ab
    return result;
}

// Address range: 0x242b0 - 0x242e1
int64_t function_242b0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x242b0
    __readfsqword(40);
    return function_fd3e0();
}

// Address range: 0x242ed - 0x242ee
int64_t function_242ed(void) {
    // 0x242ed
    int64_t result; // 0x242ed
    return result;
}

// Address range: 0x242f4 - 0x24318
int64_t function_242f4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x242f4
    int64_t v1; // 0x242f4
    __asm_out((int16_t)a3, (int32_t)v1);
    int64_t v2; // 0x242f4
    bool v3; // 0x242f4
    if (!v3 && !v3) {
        v2 = function_242ed();
    }
    char * v4 = (char *)(a3 - 0x1726d642); // 0x242fb
    char v5 = *v4 + (char)(v2 / 256); // 0x242fb
    *v4 = v5;
    return a4 == 1 | v5 == 0 ? v2 : v1;
}

// Address range: 0x24336 - 0x24339
int64_t function_24336(void) {
    // 0x24336
    int64_t result; // 0x24336
    return result;
}

// Address range: 0x24357 - 0x243c5
int64_t function_24357(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5) {
    // 0x24357
    int128_t v1; // 0x24357
    int128_t v2 = v1;
    uint32_t v3 = *(int32_t *)0x2e42021a028ed6; // 0x24357
    int64_t v4 = v3; // 0x24357
    char * v5 = (char *)(v4 - 0x1ef2ef29); // 0x24366
    *v5 = *v5 + (char)(v3 / 256);
    char * v6 = (char *)v4; // 0x2436c
    *v6 = *v6 + (char)v3;
    __asm_addps(v2, v2);
    int64_t result = 0; // 0x243b9
    int64_t v7; // 0x24357
    if (v7 != __readfsqword(40)) {
        // 0x243bb
        __stack_chk_fail();
        result = (int64_t)&g65;
    }
    // 0x243c0
    return result;
}

// Address range: 0x243c6 - 0x24460
int64_t function_243c6(int64_t a1) {
    int64_t v1 = __readfsqword(40); // 0x243d4
    int64_t v2; // bp-56, 0x243c6
    function_24e7c(&v2);
    int64_t v3 = 5; // bp-72, 0x243ec
    int64_t v4; // 0x243c6
    function_2588a(&v2, v4, &v3, &v2);
    function_62ad8(a1 + (int64_t)&g14, function_24ef4(&v2), 1);
    function_254fe(&v2);
    int64_t result = 0; // 0x24452
    if (v1 != __readfsqword(40)) {
        // 0x24454
        __stack_chk_fail();
        result = (int64_t)&g65;
    }
    // 0x24459
    return result;
}

// Address range: 0x28a8a - 0x28c8c
int64_t function_28a8a(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x28a9b
    if (a2 != 0) {
        // 0x28ab7
        if (g45 == 0) {
            // 0x28ac4
            int64_t v2; // bp-216, 0x28a8a
            int64_t v3; // bp-218, 0x28a8a
            function_250b0(&v2, "S1", &v3, 0);
            int64_t v4; // bp-144, 0x28a8a
            function_2509a(&v4, &v2);
            int64_t v5; // bp-136, 0x28a8a
            int64_t v6; // bp-176, 0x28a8a
            function_250b0(&v5, (char *)a2, &v6, 0);
            int64_t v7; // bp-217, 0x28a8a
            int64_t v8 = (int64_t)&v7; // 0x28b10
            int64_t v9; // bp-208, 0x28a8a
            function_250b0(&v9, "N1", &v7, 0);
            int64_t v10; // bp-120, 0x28a8a
            function_2509a(&v10, &v9);
            int64_t v11 = (int64_t)&g57; // bp-112, 0x28b80
            int64_t v12; // bp-96, 0x28a8a
            function_48d50f(&v12, 32, "%lu", v8);
            int64_t v13; // bp-200, 0x28a8a
            function_250b0(&v6, (char *)&v12, &v13, (int32_t)v8);
            function_256ba(&v11, &v6, (int64_t)&v13);
            function_2508e(&v6);
            v13 = 0;
            function_289b2(&v13, &v4, &v12);
            function_2508e(&v11);
            function_2508e(&v10);
            function_2508e(&v5);
            function_2508e(&v4);
            function_2508e(&v9);
            function_2508e(&v2);
            v9 = 6;
            function_29dd0(&v6, &v9, &v13);
            function_5f0f4(2, &v6);
            g45 = 1;
            int64_t v14; // bp-168, 0x28a8a
            function_25194(&v14);
            function_2508e(&v6);
            function_25194(&v13);
        }
    }
    int64_t result = 0; // 0x28c73
    if (v1 != __readfsqword(40)) {
        // 0x28c75
        __stack_chk_fail();
        result = (int64_t)&g65;
    }
    // 0x28c7a
    return result;
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
    if (v3 == 0 || ((int32_t)&g52 < 1 || (int32_t)&g52 == 1) ^ true) {
        // 0x2a56c
        return v3 == 0 ? 10 : (int64_t)&g21;
    }
    // 0x2a546
    return function_22aea(function_286ac(function_2ce9a()), *v1, *v2);
}

// Address range: 0x2a56d - 0x2a5d3
int64_t function_2a56d(void) {
    // 0x2a56d
    if (*(char *)&g46 != 0) {
        // 0x2a5c2
        return (int64_t)&g47;
    }
    // 0x2a577
    if ((int32_t)function_20550(&g46) != 0) {
        // 0x2a58b
        function_6150e(&g47, 1);
        function_1ff50(&g46);
        __cxa_atexit((void (*)(int64_t *))0x2aeea, &g47, (int64_t *)0x849800);
    }
    // 0x2a5c2
    return (int64_t)&g47;
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
    if (g53 != 1) {
        // 0x2a66e
        return (int64_t)&g21 & 0xffffffff;
    }
    // 0x2a613
    *(int32_t *)a3 = v3;
    int64_t v4 = function_61792(function_2a56d(), *v1, *v2, a2, a3); // 0x2a63d
    int64_t result = 0x7fffffff; // 0x2a64b
    if ((int32_t)v4 < 7) {
        uint32_t v5 = *(int32_t *)((4 * v4 & 0x3fffffffc) + (int64_t)&g31); // 0x2a656
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
    if (g53 != 1) {
        // 0x2a70d
        return (int64_t)&g21 & 0xffffffff;
    }
    // 0x2a6b2
    *(int32_t *)a3 = v3;
    int64_t v4 = function_619f2(function_2a56d(), *v1, *v2, a2, a3); // 0x2a6dc
    int64_t result = 0x7fffffff; // 0x2a6ea
    if ((int32_t)v4 < 7) {
        uint32_t v5 = *(int32_t *)((4 * v4 & 0x3fffffffc) + (int64_t)&g31); // 0x2a6f5
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
    if (g53 != 1) {
        // 0x2a739
        return (int64_t)&g21;
    }
    // 0x2a729
    *(int32_t *)a2 = *(int32_t *)(a1 + 4) + 22;
    return 0;
}

// Address range: 0x2a73a - 0x2a78b
int64_t function_2a73a(void) {
    if (((uint32_t)(int32_t)&g52 < 1 || (int32_t)&g52 == 1) ^ true) {
        // 0x2a785
        return (int64_t)&g21;
    }
    // 0x2a748
    function_2263e(function_286ac(function_2ce9a()));
    g53 = 0;
    g51 = 0;
    g48 = 0;
    return 0;
}

// Address range: 0x2a78b - 0x2a98d
int64_t function_2a78b(void) {
    // 0x2a78b
    int64_t v1; // bp-72, 0x2a78b
    int64_t v2 = (int64_t)&v1; // 0x2a78c
    __readfsqword(40);
    int64_t v3; // bp-68, 0x2a78b
    if (g53 != 1) {
        if (g53 == 2) {
            // 0x2a849
            if (g50 != 0) {
                // 0x2a853
                v3 = 0;
                int64_t v4 = function_286ac(function_2ce9a()); // 0x2a871
                int64_t v5 = v2 + 8; // 0x2a876
                if ((char)function_2293e(v4, v5, &v3) != 0) {
                    *(int64_t *)(v2 + 32) = g48;
                    *(int64_t *)(v2 + 40) = *(int64_t *)v5;
                    *(int32_t *)(v2 + 48) = *(int32_t *)(v2 | 4);
                    function_48bde0(0);
                    // 0x2a88a
                    while ((char)function_2293e(function_286ac(function_2ce9a()), v5, &v3) != 0) {
                        // 0x2a88a
                        *(int64_t *)(v2 + 32) = g48;
                        *(int64_t *)(v2 + 40) = *(int64_t *)v5;
                        *(int32_t *)(v2 + 48) = *(int32_t *)(v2 | 4);
                        function_48bde0(0);
                    }
                }
            }
            // 0x2a8d2
            if (g49 != 0) {
                int64_t v6 = v2 + 8; // 0x2a8e0
                int64_t * v7 = (int64_t *)v6; // 0x2a8e0
                *v7 = 0;
                int64_t * v8 = (int64_t *)(v2 + 16); // 0x2a8e9
                *v8 = 0;
                *(int64_t *)(v2 + 24) = 0;
                int64_t v9 = function_286ac(function_2ce9a()); // 0x2a903
                if ((char)function_23344(v9, v6) != 0) {
                    // 0x2a919
                    *(int64_t *)(v2 + 32) = g48;
                    int64_t v10 = *v7; // 0x2a92c
                    *(int64_t *)(v2 + 40) = v10;
                    *(int32_t *)(v2 + 48) = (int32_t)(*v8 - v10);
                    function_48bde0(0);
                }
                int64_t v11 = *v7; // 0x2a963
                if (v11 != 0) {
                    // 0x2a96d
                    function_4eeb50(v11);
                }
            }
        }
    } else {
        // 0x2a7af
        if (g51 != 0) {
            // 0x2a7bd
            v3 = 0;
            int64_t v12 = function_286ac(function_2ce9a()); // 0x2a7db
            int64_t v13 = v2 + 8; // 0x2a7e0
            if ((char)function_2293e(v12, v13, &v3) != 0) {
                *(int64_t *)(v2 + 32) = g48;
                *(int64_t *)(v2 + 40) = *(int64_t *)v13;
                *(int32_t *)(v2 + 48) = *(int32_t *)(v2 | 4);
                function_48bde0(0);
                // 0x2a7f8
                while ((char)function_2293e(function_286ac(function_2ce9a()), v13, &v3) != 0) {
                    // 0x2a7f8
                    *(int64_t *)(v2 + 32) = g48;
                    *(int64_t *)(v2 + 40) = *(int64_t *)v13;
                    *(int32_t *)(v2 + 48) = *(int32_t *)(v2 | 4);
                    function_48bde0(0);
                }
            }
        }
    }
    int64_t result = 0; // 0x2a980
    if (*(int64_t *)(v2 + 56) != __readfsqword(40)) {
        // 0x2a982
        __stack_chk_fail();
        result = (int64_t)&g65;
    }
    // 0x2a987
    return result;
}

// Address range: 0x39110 - 0x3913d
int64_t function_39110(int64_t a1) {
    // 0x39110
    __readfsqword(40);
    return function_2054da();
}

// Address range: 0x3915c - 0x3915f
int64_t function_3915c(int64_t a1) {
    // 0x3915c
    int64_t result; // 0x3915c
    return result;
}

// Address range: 0x39168 - 0x39169
int64_t function_39168(void) {
    // 0x39168
    int64_t result; // 0x39168
    return result;
}

// Address range: 0x39193 - 0x39194
int64_t function_39193(int64_t a1) {
    // 0x39193
    int64_t result; // 0x39193
    return result;
}

// Address range: 0x391bc - 0x39235
int64_t function_391bc(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int32_t * v2 = (int32_t *)(a4 + 18); // 0x391c8
    *v2 = *v2 >> 1;
    int32_t * v3 = (int32_t *)(a4 - 86); // 0x391cb
    *v3 = 2 * *v3;
    int32_t * v4 = (int32_t *)(a4 - 111); // 0x391ce
    uint32_t v5 = *v4; // 0x391ce
    *v4 = v5 - 0x2352ed41;
    int64_t v6 = (int64_t)*(int32_t *)0x5ca59e24d28f1c3b; // 0x391d7
    int64_t v7; // 0x391bc
    if (v5 > 0x2352ed40) {
        char * v8 = (char *)(v7 + 0x5ac41a0); // 0x3922b
        *v8 = *v8 + (char)(a4 / 256);
        unsigned char v9 = *(char *)&v1 - 22; // 0x39231
        __asm_out_133((int16_t)a3 % 256 | (int16_t)&g62, v9);
        return v6 & 0xffffff00 | (int64_t)v9;
    }
    int64_t v10 = (int64_t)*(int32_t *)(v6 - 0x26f9f76c); // 0x391e4
    int64_t v11 = -0x1f8d3c98 * v10; // 0x391e4
    uint32_t v12 = (int32_t)a4 % 32; // 0x391ee
    if (v12 != 0) {
        int32_t * v13 = (int32_t *)(v7 + 91); // 0x391ee
        uint32_t v14 = *v13; // 0x391ee
        *v13 = v14 << v12 | (int32_t)((int64_t)v14 >> (int64_t)(33 - v12)) | (int32_t)(v11 != -0x1f8d3c9800000000 * v10 >> 32) << v12 - 1;
    }
    return v11 & 0xfffffff8;
}

// Address range: 0x39237 - 0x39245
int64_t function_39237(void) {
    // 0x39237
    unknown_3d2b543e();
    return __asm_int1((int64_t)&g65);
}

// Address range: 0x39266 - 0x39267
int64_t function_39266(void) {
    // 0x39266
    int64_t result; // 0x39266
    return result;
}

// Address range: 0x39274 - 0x392a6
int64_t function_39274(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    bool v2; // 0x39274
    if (a4 != 1 && !v2) {
        function_39266();
    }
    // 0x39279
    int64_t v3; // 0x39274
    int64_t result = v3 & 0xffffffff; // 0x39275
    if (!v2) {
        // 0x39287
        return result;
    }
    // 0x3927f
    float80_t v4; // 0x39274
    *(float64_t *)(a4 + 0x14887ff) = (float64_t)v4;
    int64_t result2 = result; // 0x39285
    if (v2) {
        // 0x392a1
        result2 = (int64_t)*(int32_t *)&v1;
        *(int32_t *)a1 = __asm_insd((int16_t)a3);
        *(char *)(result2 + 33) = 93;
    }
    // 0x39287
    return result2;
}

// Address range: 0x392a9 - 0x392b2
int64_t function_392a9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x392a9
    return function_1c38db62();
}

// Address range: 0x392ba - 0x3930b
int64_t function_392ba(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = a3;
    int64_t v2 = a1;
    int64_t v3; // 0x392ba
    __asm_out_135(47, (int32_t)v3);
    unsigned char v4 = (char)v3;
    unsigned char v5 = 2 * v4; // 0x392bc
    bool v6; // 0x392ba
    unsigned char v7 = v5 | (char)v6; // 0x392bc
    *(char *)v3 = v7;
    unsigned char v8 = (char)a4 % 32; // 0x392be
    int64_t v9; // 0x392ba
    if (v8 != 0) {
        unsigned char v10 = *(char *)&v9; // 0x392be
        bool v11 = v6 ? v7 <= v4 : v5 < v4; // 0x392bc
        *(char *)v9 = v10 << v8 | (char)v11 << v8 - 1 | (char)((int16_t)v10 >> (int16_t)(9 - v8));
    }
    __asm_int1((int64_t)&g65);
    *(char *)v2 = *(char *)&v2 + (char)(a4 / 256);
    int64_t v12 = v1;
    *(char *)v12 = *(char *)&v1 + (char)v12;
    int32_t * v13 = (int32_t *)(v1 + 22); // 0x392c6
    *v13 = 0x800000 * *v13;
    int64_t v14 = v3 & 0xffffffff; // 0x392e8
    v9 = v14;
    int64_t result = v14; // 0x392fb
    if (v3 != __readfsqword(40)) {
        // 0x392fd
        __stack_chk_fail();
        v9 = (int64_t)&g65;
        result = (int64_t)&g65;
    }
    // 0x39302
    return result;
}

// Address range: 0x3930b - 0x393fc
int64_t function_3930b(int64_t a1) {
    int64_t v1 = 0; // bp-72, 0x3931f
    int64_t v2 = __readfsqword(40); // 0x39331
    uint64_t v3 = function_39110((int64_t)&v1); // 0x3934a
    if ((char)v3 != 0) {
        int64_t v4 = (int64_t)&g57; // bp-80, 0x39378
        function_3ae24(&v4, -((2 * v1)));
        int64_t v5 = 0; // 0x39392
        int64_t v6 = 0; // 0x39392
        if (v1 != 0) {
            int64_t v7 = function_48de04(*(char *)(v5 + v1)); // 0x39398
            function_255da(&v4);
            *(int16_t *)(v4 + 2 * v5) = *(int16_t *)v7;
            int64_t v8 = v5 + 1; // 0x393b5
            v5 = v8;
            v6 = v1;
            while (v8 < -v1) {
                // 0x39394
                v7 = function_48de04(*(char *)(v5 + v1));
                function_255da(&v4);
                *(int16_t *)(v4 + 2 * v5) = *(int16_t *)v7;
                v8 = v5 + 1;
                v5 = v8;
                v6 = v1;
            }
        }
        // 0x393ba
        function_256ba((int64_t *)a1, &v4, v6);
        function_2508e(&v4);
    }
    int64_t result = function_3ae18(v1) & -256 | v3 % 256; // 0x393e8
    if (v2 != __readfsqword(40)) {
        // 0x393ea
        __stack_chk_fail();
        result = (int64_t)&g65;
    }
    // 0x393ef
    return result;
}

// Address range: 0x39400 - 0x3942d
int64_t function_39400(int64_t a1) {
    // 0x39400
    __readfsqword(40);
    return function_209338();
}

// Address range: 0x3946b - 0x39470
int64_t function_3946b(void) {
    // 0x3946b
    int64_t result; // 0x3946b
    return result;
}

// Address range: 0x39485 - 0x39486
int64_t function_39485(int64_t a1) {
    // 0x39485
    int64_t result; // 0x39485
    return result;
}

// Address range: 0x394cb - 0x394d1
int64_t function_394cb(void) {
    // 0x394cb
    int64_t result; // 0x394cb
    return result;
}

// Address range: 0x394f0 - 0x394f1
int64_t function_394f0(void) {
    // 0x394f0
    int64_t result; // 0x394f0
    return result;
}

// Address range: 0x39504 - 0x3950c
int64_t function_39504(int64_t a1, int64_t a2, int64_t a3) {
    // 0x39504
    int64_t v1; // 0x39504
    int64_t v2 = v1;
    return v2 & -256 | (int64_t)(*(char *)(a3 + 0x1ac27c8f) & (char)v2);
}

// Address range: 0x3953c - 0x3953d
int64_t function_3953c(void) {
    // 0x3953c
    int64_t result; // 0x3953c
    return result;
}

// Address range: 0x39556 - 0x39558
int64_t function_39556(void) {
    // 0x39556
    return function_394f0();
}

// Address range: 0x39560 - 0x3956d
int64_t function_39560(int64_t a1, int64_t a2) {
    // 0x39560
    int64_t v1; // 0x39560
    *(char *)a1 = (char)v1;
    bool v2; // 0x39560
    return function_695adba2((v2 ? -1 : 1) + a1);
}

// Address range: 0x39582 - 0x39584
int64_t function_39582(void) {
    // 0x39582
    int64_t v1; // 0x39582
    return function_395ac(v1, v1, v1, v1);
}

// Address range: 0x3958d - 0x3958e
int64_t function_3958d(int64_t a1) {
    // 0x3958d
    int64_t result; // 0x3958d
    return result;
}

// Address range: 0x395ac - 0x395c8
int64_t function_395ac(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x395ac
    int64_t v1; // 0x395ac
    bool v2; // 0x395ac
    if (!v2) {
        v1 = function_3953c();
    }
    // 0x395ae
    int64_t v3; // 0x395ac
    __asm_outsd((int16_t)a3, (int32_t)v3);
    char * v4 = (char *)(a4 + 78); // 0x395bd
    *v4 = *v4 + (char)v3;
    return v1 & -162;
}

// Address range: 0x395ca - 0x39601
int64_t function_395ca(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x395ca
    *(int32_t *)(a2 - 0x22ce48b4) = -0x6b32a9e5;
    int64_t v1; // 0x395ca
    char v2; // 0x395ca
    return (int64_t)&v1 & -256 | (int64_t)(unsigned char)v2;
}

// Address range: 0x3962f - 0x39639
int64_t function_3962f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3962f
    int64_t v1; // 0x3962f
    *(int32_t *)a4 = (int32_t)(v1 | a4);
    return a4 + 0x5076b94d & 0xffffffff;
}

// Address range: 0x39655 - 0x39665
int64_t function_39655(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x39655
    int64_t v1; // 0x39655
    uint64_t result = v1;
    *(int32_t *)a1 = (int32_t)result;
    char * v2 = (char *)(a4 + 0x52b1d6cd); // 0x3965c
    *v2 = *v2 - (char)(result / 256);
    return result;
}

// Address range: 0x3966a - 0x3966b
int64_t function_3966a(int64_t a1) {
    // 0x3966a
    int64_t result; // 0x3966a
    return result;
}

// Address range: 0x396b3 - 0x396bb
int64_t function_396b3(void) {
    // 0x396b3
    int64_t v1; // 0x396b3
    int64_t result = v1 + 0xfe7007e8 & 0xffffffff; // 0x396b3
    int32_t * v2 = (int32_t *)(result - 127); // 0x396b8
    *v2 = *v2 - 1;
    return result;
}

// Address range: 0x396bd - 0x39701
int64_t function_396bd(int64_t a1, int64_t a2) {
    // 0x396bd
    int64_t v1; // 0x396bd
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    char * v3 = (char *)(v1 - 61); // 0x396bf
    *v3 = *v3 + (char)v1;
    __readfsqword(40);
    return function_20bac7();
}

// Address range: 0x39708 - 0x39709
int64_t function_39708(void) {
    // 0x39708
    int64_t result; // 0x39708
    return result;
}

// Address range: 0x3971c - 0x3971e
int64_t function_3971c(void) {
    // 0x3971c
    return function_39708();
}

// Address range: 0x39730 - 0x39774
int64_t function_39730(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x39730
    int64_t v1; // 0x39730
    uint64_t v2 = v1;
    char * v3 = (char *)(v1 + 8); // 0x39732
    *v3 = *v3 ^ (char)(v2 / 256);
    int64_t v4; // 0x39730
    bool v5; // 0x39730
    uint32_t v6 = (int32_t)((v5 ? 0xfffffffc : 4) + a1) - *(int32_t *)&v4; // 0x39736
    unsigned char v7 = *(char *)(v1 % 256 + v2); // 0x39738
    int64_t v8 = v1 & -256 | (int64_t)v7; // 0x39738
    char * v9 = (char *)v8; // 0x3973b
    *v9 = *v9 + v7;
    int64_t v10; // 0x39730
    *(int32_t *)a3 = *(int32_t *)&v10 & (-1 << v6 % 32) - 1;
    *(int32_t *)(int64_t)v6 = __asm_insd((int16_t)a3);
    __asm_out_137(80, v7);
    *(char *)0x21a111f5 = *(char *)0x21a111f5 >> 1;
    *(int32_t *)-0x1f4340ed659a4e00 = (int32_t)v8;
    return function_1188106();
}

// Address range: 0x3977a - 0x3977b
int64_t function_3977a(int64_t a1) {
    // 0x3977a
    int64_t result; // 0x3977a
    return result;
}

// Address range: 0x39785 - 0x3978b
int64_t function_39785(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x39785
    int64_t result; // 0x39785
    return result;
}

// Address range: 0x39795 - 0x397a4
int64_t function_39795(int64_t a1) {
    // 0x39795
    int64_t v1; // 0x39795
    int32_t * v2 = (int32_t *)(v1 - 0x33e9d531); // 0x3979a
    *v2 = 2 * *v2;
    return __asm_int3(a1);
}

// Address range: 0x397a9 - 0x397fd
int64_t function_397a9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x397a9
    int64_t v1; // 0x397a9
    uint32_t v2 = (int32_t)v1; // 0x397b1
    bool v3; // 0x397a9
    int32_t v4 = v3; // 0x397b1
    uint32_t v5 = v4 + v2; // 0x397b1
    int32_t v6 = v3; // 0x397b1
    bool v7 = v3 ? v6 - v4 > v2 | v5 != -1 : v5 > v2; // 0x397b1
    int64_t v8; // 0x397a9
    *(char *)a1 = *(char *)&v8;
    int64_t result; // 0x397a9
    if (v6 - (int32_t)a3 + (int32_t)v7 >= 0) {
        // 0x397b8
        return result;
    }
    int64_t v9 = result;
    *(char *)v9 = *(char *)&result + (char)v9;
    char * v10 = (char *)(2 * a5 + 51 + result); // 0x397e3
    *v10 = *v10 + (char)(result / 256);
    int64_t v11 = result | 37; // 0x397e7
    result = v11;
    int64_t result2 = v11; // 0x397ed
    if (*(char *)v11 != 0) {
        // 0x397ef
        __stack_chk_fail();
        result = (int64_t)&g65;
        result2 = (int64_t)&g65;
    }
    // 0x397f4
    return result2;
}

// Address range: 0x39800 - 0x3983c
int64_t function_39800(int64_t a1, int64_t a2, int64_t a3) {
    // 0x39800
    __readfsqword(40);
    return function_215434();
}

// Address range: 0x39842 - 0x39849
int64_t function_39842(void) {
    // 0x39842
    int64_t v1; // 0x39842
    return v1 & 0x8213a8e7;
}

// Address range: 0x3989e - 0x398a1
int64_t function_3989e(int64_t a1) {
    // 0x3989e
    int64_t result; // 0x3989e
    return result;
}

// Address range: 0x398a6 - 0x398a9
int64_t function_398a6(int64_t a1) {
    // 0x398a6
    int64_t result; // 0x398a6
    return result;
}

// Address range: 0x398d6 - 0x398e4
int64_t function_398d6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x398d6
    int64_t result; // 0x398d6
    bool v1; // 0x398d6
    if (a4 != 1 == v1) {
        // 0x398ff
        return result;
    }
    // 0x398db
    __asm_int(18);
    return result;
}

// Address range: 0x398e4 - 0x398e7
int64_t function_398e4(int64_t a1) {
    // 0x398e4
    int64_t result; // 0x398e4
    return result;
}

// Address range: 0x398f6 - 0x398f7
int64_t function_398f6(void) {
    // 0x398f6
    int64_t result; // 0x398f6
    return result;
}

// Address range: 0x39913 - 0x39914
int64_t function_39913(void) {
    // 0x39913
    int64_t result; // 0x39913
    return result;
}

// Address range: 0x39920 - 0x399a9
int64_t function_39920(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x39920
    int64_t v1; // 0x39920
    int64_t v2 = v1 & -256; // 0x39958
    int32_t * v3 = (int32_t *)(a1 + 62); // 0x3995b
    *v3 = *v3 + (int32_t)a6;
    uint64_t v4 = (v1 | 128) + 138; // 0x39960
    if ((char)v4 == -62) {
        // 0x39970
        return v2 | 145;
    }
    int16_t v5 = a3 - (v4 % 256 | v2); // 0x399a4
    int64_t v6; // 0x39920
    __asm_outsd(v5, *(int32_t *)&v6);
    int32_t * v7 = (int32_t *)((a4 & -256 | 11) - 3); // 0x399a5
    *v7 = *v7 | (int32_t)a7;
    __asm_out_133(v5, (char)a7);
    return a7 & 0xffffffff;
}

// Address range: 0x399b4 - 0x399c7
int64_t function_399b4(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4) {
    // 0x399b4
    *(char *)(a2 + 85) = (char)(a4 / 256);
    int64_t v1; // 0x399b4
    char v2 = *(char *)&v1; // 0x399b7
    int64_t v3; // 0x399b4
    *(char *)v3 = -1 - *(char *)&v3;
    bool v4; // 0x399b4
    int64_t v5 = v4 ? -4 : 4; // 0x399c1
    return function_7e8360c0(v5 + a1, v5 + a2, 256 * (int64_t)(v2 & (char)(a3 / 256)) | a3 & -0xff01);
}

// Address range: 0x39a03 - 0x39a06
int64_t function_39a03(void) {
    // 0x39a03
    int64_t result; // 0x39a03
    return result;
}

// Address range: 0x39a06 - 0x39a15
int64_t function_39a06(int64_t a1, int64_t a2) {
    // 0x39a06
    return function_615054ed();
}

// Address range: 0x39a20 - 0x39a2b
int64_t function_39a20(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x39a20
    int64_t v1; // 0x39a20
    int64_t v2 = v1;
    char * v3 = (char *)(a3 + 29); // 0x39a20
    unsigned char v4 = *v3; // 0x39a20
    *v3 = v4 / 8 | 32 * v4;
    return v2 & -256 | (int64_t)__asm_in_134((int16_t)((int32_t)v2 >> 31));
}

// Address range: 0x39a2d - 0x39a2e
int64_t function_39a2d(void) {
    // 0x39a2d
    int64_t result; // 0x39a2d
    return result;
}

// Address range: 0x39a5d - 0x39a60
int64_t function_39a5d(int64_t a1) {
    // 0x39a5d
    int64_t result; // 0x39a5d
    return result;
}

// Address range: 0x39a7b - 0x39a99
int64_t function_39a7b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x39a7b
    int64_t v1; // 0x39a7b
    *(int32_t *)0x6377bd4ef4700492 = (int32_t)v1;
    char * v2 = (char *)(v1 + 0xb1903f3); // 0x39a8b
    *v2 = *v2 + (char)v1;
    return function_39ac3(a1, a2, a3 & -256 | 113, a4);
}

// Address range: 0x39a99 - 0x39aa1
int64_t function_39a99(int64_t a1, int64_t a2, int64_t a3) {
    // 0x39a99
    __asm_in((int16_t)a3);
    return function_39a2d();
}

// Address range: 0x39aa1 - 0x39aa4
int64_t function_39aa1(int64_t a1) {
    // 0x39aa1
    int64_t result; // 0x39aa1
    return result;
}

// Address range: 0x39ac3 - 0x39ad0
int64_t function_39ac3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x39ac3
    int64_t v1; // 0x39ac3
    return v1 & -256 | (int64_t)*(char *)-0x525e038959a8a1f0;
}

// Address range: 0x39ad4 - 0x39ad7
int64_t function_39ad4(void) {
    // 0x39ad4
    int64_t result; // 0x39ad4
    return result;
}

// Address range: 0x39b20 - 0x39b23
int64_t function_39b20(int64_t a1) {
    // 0x39b20
    int64_t result; // 0x39b20
    return result;
}

// Address range: 0x39b41 - 0x39b44
int64_t function_39b41(void) {
    // 0x39b41
    int64_t result; // 0x39b41
    return result;
}

// Address range: 0x39b66 - 0x39b69
int64_t function_39b66(void) {
    // 0x39b66
    int64_t result; // 0x39b66
    return result;
}

// Address range: 0x39b69 - 0x39c23
int64_t function_39b69(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x39b69
    int64_t v1; // 0x39b69
    int64_t v2 = v1;
    *(int32_t *)(a2 - 0x2961636f) = (int32_t)a2;
    bool v3; // 0x39b69
    uint64_t v4 = v1 + 0x55ed0aab + (int64_t)v3; // 0x39b73
    unsigned char v5 = llvm_ctpop_i8((char)(v4 / 256 ^ v1)); // 0x39b78
    int64_t result = v4 & 0xffffff00 | (int64_t)__asm_in_136(-14); // 0x39b7b
    if (v5 % 2 == 0) {
        // 0x39be4
        return result;
    }
    unsigned char v6 = (char)a4 % 32; // 0x39be8
    if (v6 != 0) {
        char * v7 = (char *)(result - 0x74247740); // 0x39be8
        unsigned char v8 = *v7; // 0x39be8
        *v7 = v8 >> v6 | v8 << 8 - v6;
    }
    *(int64_t *)v2 = v2 + 8;
    *(int32_t *)(v2 + 44) = 0;
    int64_t result2 = 0; // 0x39c0e
    if (*(int64_t *)(v2 + 168) != __readfsqword(40)) {
        // 0x39c10
        __stack_chk_fail();
        result2 = (int64_t)&g65;
    }
    // 0x39be4
    return result2;
}

// Address range: 0x39c30 - 0x39c62
int64_t function_39c30(int64_t a1, int64_t a2) {
    // 0x39c30
    __readfsqword(40);
    return function_218f2e();
}

// Address range: 0x39c78 - 0x39c79
int64_t function_39c78(int64_t a1) {
    // 0x39c78
    int64_t result; // 0x39c78
    return result;
}

// Address range: 0x39c7a - 0x39c7f
int64_t function_39c7a(void) {
    // 0x39c7a
    int64_t result; // 0x39c7a
    return result;
}

// Address range: 0x39c9d - 0x39d19
int64_t function_39c9d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint32_t v1 = (uint32_t)(int32_t)a4 % 32; // 0x39c9f
    if (v1 != 0) {
        int32_t * v2 = (int32_t *)(4 * a3 + 0x23a6bc5); // 0x39c9f
        *v2 = *v2 << v1;
    }
    char * v3 = (char *)(a1 - 42); // 0x39d04
    int64_t v4; // 0x39c9d
    int64_t v5 = v4;
    int64_t v6 = a2 & 0xffffffff ^ 0xedc108aa; // 0x39cfb
    int64_t v7; // 0x39c9d
    int64_t v8 = v7 - 8; // 0x39d00
    int64_t v9; // 0x39c9d
    *(int64_t *)v8 = v9;
    unsigned char v10 = *v3; // 0x39d04
    unsigned char v11 = v10 + (char)(v6 / 256); // 0x39d04
    *v3 = v11;
    uint32_t v12 = (int32_t)v8 + (int32_t)a3 + (int32_t)(v11 < v10); // 0x39d09
    unsigned char v13 = llvm_ctpop_i8((char)v12); // 0x39d09
    int32_t result = __asm_in_138(-6); // 0x39d0b
    while (v13 % 2 == 0) {
        // 0x39cf7
        v4 = __asm_int3(a1);
        v9 = v8 & 0xffffffff;
        v7 = v6;
        int64_t v14 = v5 & 0xffffffff; // 0x39cf7
        v5 = v4;
        v6 = v14 & 0xffffffff ^ 0xedc108aa;
        v8 = v7 - 8;
        *(int64_t *)v8 = v9;
        v10 = *v3;
        v11 = v10 + (char)(v6 / 256);
        *v3 = v11;
        v12 = (int32_t)v8 + (int32_t)(int64_t)v12 + (int32_t)(v11 < v10);
        v13 = llvm_ctpop_i8((char)v12);
        result = __asm_in_138(-6);
    }
    // 0x39d0f
    __asm_out((int16_t)v12, result);
    return result;
}

// Address range: 0x39d2f - 0x39d30
int64_t function_39d2f(void) {
    // 0x39d2f
    int64_t result; // 0x39d2f
    return result;
}

// Address range: 0x39d4f - 0x39d58
int64_t function_39d4f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x39d4f
    return function_39d8c(a1, a2, a3, a4, (int64_t)&g65);
}

// Address range: 0x39d65 - 0x39d73
int64_t function_39d65(void) {
    // 0x39d65
    int64_t v1; // 0x39d65
    *(int32_t *)-0x7b473f3af1fee10a = (int32_t)v1;
    return 2 * v1 & 0xffffffff;
}

// Address range: 0x39d73 - 0x39d7e
int64_t function_39d73(void) {
    // 0x39d73
    return function_39d2f();
}

// Address range: 0x39d8c - 0x39db5
int64_t function_39d8c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x39d8c
    int64_t result; // 0x39d8c
    if ((a5 & 65) == 0) {
        // 0x39dab
        return (result & 0xffff00ff | (int64_t)(int32_t)&g60) ^ 0xae84a131;
    }
    // 0x39d91
    int128_t v1; // 0x39d8c
    __asm_vcvttsd2si(v1);
    char * v2 = (char *)(a4 + 73); // 0x39d95
    *v2 = 2 * *v2;
    return result;
}

// Address range: 0x39e2e - 0x39e31
int64_t function_39e2e(void) {
    // 0x39e2e
    int64_t result; // 0x39e2e
    return result;
}

// Address range: 0x39e45 - 0x39ed2
int64_t function_39e45(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int32_t a5) {
    // 0x39e45
    int64_t v1; // 0x39e45
    uint64_t v2 = v1;
    char * v3 = (char *)(a4 - 77); // 0x39e45
    *v3 = *v3 + (char)(v2 / 256);
    if (a4 != 1 && (char)(a3 / 256) != -(char)v2) {
        int64_t v4 = v2 & -232; // 0x39ec7
        char * v5 = (char *)v4; // 0x39ec9
        *v5 = *v5 + 2 * (char)v4;
        return function_22286b();
    }
    // 0x39e4c
    __asm_in_136(-39);
    int64_t result = 0; // 0x39e81
    if (v1 != __readfsqword(40)) {
        // 0x39e83
        __stack_chk_fail();
        result = (int64_t)&g65;
    }
    // 0x39e88
    return result;
}

// Address range: 0x39ed6 - 0x39ed8
int64_t function_39ed6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x39ed6
    int64_t result; // 0x39ed6
    __asm_out((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x39ef5 - 0x3a026
int64_t function_39ef5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x39ef5
    int64_t result; // 0x39ef5
    bool v1; // 0x39ef5
    char v2 = 2 * (char)result + (char)v1; // 0x39ef5
    *(char *)result = v2;
    if (a4 != 1 == v2 == 0) {
        // 0x39f57
        return result & 0xffffffff;
    }
    // 0x39ef9
    return result;
}

// Address range: 0x3a079 - 0x3a07a
int64_t function_3a079(void) {
    // 0x3a079
    int64_t result; // 0x3a079
    return result;
}

// Address range: 0x3a08d - 0x3a110
int64_t function_3a08d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x3a08d
    int64_t v1; // 0x3a08d
    int64_t v2 = v1;
    int64_t v3 = a1;
    __asm_int(69);
    *(int32_t *)-0xeffdd66a1475eee = (int32_t)a2;
    __asm_out_137(31, (char)a2);
    int64_t v4 = __asm_in_138(-96); // 0x3a0cc
    if ((*(int32_t *)(v4 + 0x2edf61a3) & (int32_t)a1) >= 0) {
        // 0x3a101
        return v4 & -256 | 230;
    }
    int64_t * v5 = (int64_t *)(v1 + 8); // 0x3a0df
    uint64_t v6 = *v5; // 0x3a0df
    unsigned char v7 = *(char *)(v6 % 256 + ((v2 + a4 / 256) % 256 | v2 & -256)); // 0x3a0e6
    int64_t v8 = v6 & -256 | (int64_t)v7; // 0x3a0e6
    *v5 = v8;
    *(int64_t *)v1 = v3;
    int32_t v9 = *(int32_t *)&v3; // 0x3a0f2
    bool v10; // 0x3a08d
    int64_t v11 = v3 + (v10 ? -4 : 4); // 0x3a0f2
    v3 = v11;
    int64_t v12 = v8; // 0x3a0f3
    if ((int32_t)v8 - v9 < 0) {
        v12 = function_3a079();
    }
    char * v13 = (char *)v11; // 0x3a0fd
    *v13 = *v13 - 119;
    // 0x3a101
    return v12 & -256 | 230;
}

// Address range: 0x3a121 - 0x3a156
int64_t function_3a121(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3a121
    int64_t result; // 0x3a121
    bool v1; // 0x3a121
    if (v1 || v1) {
        // 0x3a123
        *(char *)0x512b6d76fcab814b = (char)result;
        return result;
    }
    // 0x3a13b
    return result;
}

// Address range: 0x3a162 - 0x3a165
int64_t function_3a162(void) {
    // 0x3a162
    int64_t result; // 0x3a162
    return result;
}

// Address range: 0x3a18d - 0x3a18f
int64_t function_3a18d(void) {
    // 0x3a18d
    int64_t result; // 0x3a18d
    return result;
}

// Address range: 0x3a1ac - 0x3a1ad
int64_t function_3a1ac(void) {
    // 0x3a1ac
    int64_t result; // 0x3a1ac
    return result;
}

// Address range: 0x3a1ae - 0x3a1b1
int64_t function_3a1ae(void) {
    // 0x3a1ae
    int64_t result; // 0x3a1ae
    return result;
}

// Address range: 0x3a1b9 - 0x3a1cb
int64_t function_3a1b9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = __asm_iretd((int64_t)&g65, (int64_t)&g65, (int64_t)&g65); // 0x3a1c3
    uint64_t v2 = v1 + 92; // 0x3a1c4
    __asm_out_137(-22, (char)v2);
    int64_t result = v2 % 256 | v1 & -256; // 0x3a1c8
    if (((char)v1 ^ -4) < 92) {
        result = function_3a1ac();
    }
    // 0x3a1ca
    return result;
}

// Address range: 0x3a262 - 0x3a2c1
int64_t function_3a262(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t result; // 0x3a262
    *(char *)(result + 0x4a303f41) = (char)a4 - 1;
    int16_t v2 = a3; // 0x3a26c
    *(char *)a1 = __asm_insb(v2);
    bool v3; // 0x3a262
    if (v3) {
        // 0x3a275
        return result;
    }
    int32_t * v4 = (int32_t *)(v1 - 0x710e4a73); // 0x3a297
    uint32_t v5 = *v4; // 0x3a297
    *v4 = v5 / 2 | 0x80000000 * v5;
    __asm_int(74);
    *(int32_t *)a1 = *(int32_t *)&v1;
    v1 += (v3 ? -4 : 4);
    int32_t v6 = (int32_t)result ^ 0x14a6ebb7; // 0x3a2a7
    char v7 = llvm_ctpop_i8((char)v6); // 0x3a2a7
    int64_t v8 = v6; // 0x3a2a7
    __asm_out(v2, v6);
    int64_t v9 = 0; // 0x3a2ae
    bool v10 = v6 == 0; // 0x3a2ae
    bool v11 = v6 < 0; // 0x3a2ae
    char v12 = v7; // 0x3a2ae
    int64_t v13 = v8; // 0x3a2ae
    int64_t v14 = 0; // 0x3a2ae
    if (v6 >= 0 != v6 != 0) {
        // 0x3a2b0
        *(char *)a3 = 0;
        unsigned char v15 = *(char *)v1; // 0x3a2bd
        unsigned char v16 = *(char *)0x60c1c62100751562; // 0x3a2bd
        char v17 = v15 - v16; // 0x3a2bd
        v12 = llvm_ctpop_i8(v17);
        v9 = 16 * (int64_t)(v15 % 16 - v16 % 16 > 15);
        v10 = v17 == 0;
        v11 = v17 < 0;
        v13 = v8 & 0xffffff00 | 230;
        v14 = v15 < v16;
    }
    // 0x3a2c0
    return v13 & -0xff01 | 256 * (64 * (int64_t)v10 | v9 | 128 * (int64_t)v11 | v14 | 4 * (int64_t)(v12 % 2 == 0)) | 512;
}

// Address range: 0x3a327 - 0x3a32a
int64_t function_3a327(int64_t a1) {
    // 0x3a327
    int64_t result; // 0x3a327
    return result;
}

// Address range: 0x3a382 - 0x3a3f5
int64_t function_3a382(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3a382
    int64_t v1; // 0x3a382
    uint32_t result = (int32_t)v1 ^ 0x5b8fb14c; // 0x3a382
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    if (result == 0) {
        // 0x3a3ec
        *(char *)0x6b0bfaa1ad5c7f07 = 0;
        return 0;
    }
    // 0x3a38a
    *(char *)0x6455b2d8 = *(char *)0x6455b2d8 - (char)result;
    return result;
}

// Address range: 0x3a3f8 - 0x3a43e
int64_t function_3a3f8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3a3f8
    int64_t v1; // 0x3a3f8
    *(int32_t *)(v1 + 32) = 0;
    int64_t result = 0; // 0x3a42d
    if (*(int64_t *)(v1 + 224) != __readfsqword(40)) {
        // 0x3a42f
        __stack_chk_fail();
        result = (int64_t)&g65;
    }
    // 0x3a434
    return result;
}

// Address range: 0x3a440 - 0x3a472
int64_t function_3a440(int64_t a1, int64_t a2) {
    // 0x3a440
    __readfsqword(40);
    return function_22fceb();
}

// Address range: 0x3a48c - 0x3a48d
int64_t function_3a48c(void) {
    // 0x3a48c
    int64_t result; // 0x3a48c
    return result;
}

// Address range: 0x3a495 - 0x3a4a5
int64_t function_3a495(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3a495
    int64_t v1; // 0x3a495
    *(char *)a1 = (char)(v1 & a1);
    int64_t v2; // 0x3a495
    return (int64_t)(*(int32_t *)&v2 & -0xff01) | (int64_t)"many_avx512";
}

// Address range: 0x3a4e9 - 0x3a4ee
int64_t function_3a4e9(int64_t a1) {
    // 0x3a4e9
    int64_t result; // 0x3a4e9
    bool v1; // 0x3a4e9
    if (!v1) {
        result = function_3a48c();
    }
    // 0x3a4eb
    return result;
}

// Address range: 0x3a571 - 0x3a577
int64_t function_3a571(void) {
    // 0x3a571
    int64_t result; // 0x3a571
    return result;
}

// Address range: 0x3a609 - 0x3a60c
int64_t function_3a609(void) {
    // 0x3a609
    int64_t result; // 0x3a609
    return result;
}

// Address range: 0x3a629 - 0x3a62e
int64_t function_3a629(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3a629
    int64_t result; // 0x3a629
    return result;
}

// Address range: 0x3a673 - 0x3a69c
int64_t function_3a673(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a3;
    int64_t v2 = a1; // 0x3a674
    bool v3; // 0x3a673
    if (!v3) {
        v2 = function_ffffffff8904a36b();
    }
    // 0x3a67a
    int64_t v4; // 0x3a673
    int64_t v5 = v4 & 0xffffffff; // 0x3a673
    *(int32_t *)v5 = (int32_t)v2 & 0x5c06b924;
    *(int32_t *)v1 = *(int32_t *)&v1 - (int32_t)a2;
    int64_t result = v2 & -0xff01 | (int64_t)&g61; // 0x3a683
    int32_t * v6 = (int32_t *)(result - 7); // 0x3a68a
    *v6 = *v6 ^ (int32_t)v4;
    unsigned char v7 = (char)a4 % 32; // 0x3a68d
    if (v7 != 0) {
        unsigned char v8 = *(char *)0x42311f0c; // 0x3a68d
        *(char *)0x42311f0c = v8 << v7 | (char)((int16_t)v8 >> (int16_t)(9 - v7));
    }
    *(char *)v5 = *(char *)0x1ef29ee4;
    int32_t v9 = *((v3 ? (int32_t *)0x1ef29ee3 : (int32_t *)0x1ef29ee5)); // 0x3a696
    __asm_outsd((int16_t)v1, v9);
    __asm_int(-111);
    return result;
}

// Address range: 0x3a6db - 0x3a6dc
int64_t function_3a6db(void) {
    // 0x3a6db
    int64_t result; // 0x3a6db
    return result;
}

// Address range: 0x3a6dd - 0x3a6e2
int64_t function_3a6dd(void) {
    // 0x3a6dd
    return function_737a2822();
}

// Address range: 0x3a6e5 - 0x3a6e6
int64_t function_3a6e5(void) {
    // 0x3a6e5
    int64_t result; // 0x3a6e5
    return result;
}

// Address range: 0x3a6f9 - 0x3a714
int64_t function_3a6f9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3a6f9
    bool v1; // 0x3a6f9
    int64_t v2 = v1 ? -1 : 1; // 0x3a70d
    int64_t v3 = a2; // 0x3a6f9
    int64_t v4 = a1; // 0x3a6f9
    *(char *)v4 = *(char *)v3;
    v3 += v2;
    v4 += v2;
    while ((int32_t)(a4 & a3) >= 0) {
        // 0x3a706
        *(char *)v4 = *(char *)v3;
        v3 += v2;
        v4 += v2;
    }
    // 0x3a710
    int64_t v5; // 0x3a6f9
    __asm_out((int16_t)a3, (int32_t)(v5 ^ v5));
    return function_3a6db();
}

// Address range: 0x3a714 - 0x3a718
int64_t function_3a714(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3a714
    int64_t result; // 0x3a714
    uint32_t v1 = (int32_t)result;
    *(int32_t *)a4 = v1 / 64 | 0x4000000 * v1;
    return result;
}

// Address range: 0x3a71c - 0x3a71f
int64_t function_3a71c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3a71c
    int64_t result; // 0x3a71c
    return result;
}

// Address range: 0x3a720 - 0x3a727
int64_t function_3a720(int64_t a1) {
    // 0x3a720
    bool v1; // 0x3a720
    if (!v1) {
        function_3a6e5();
    }
    // 0x3a722
    int64_t v2; // 0x3a720
    return v2 & 0xffffffff;
}

// Address range: 0x4affd - 0x4b188
int64_t function_4affd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4affd
    int64_t v1; // 0x4affd
    int64_t v2 = v1;
    int32_t v3 = v1;
    int64_t v4; // 0x4affd
    int64_t v5; // 0x4affd
    int64_t result; // 0x4affd
    int64_t v6; // 0x4affd
    bool v7; // 0x4affd
    int64_t v8; // 0x4b0d9
    int64_t * v9; // 0x4b0f1
    int64_t v10; // 0x4b0f1
    int64_t * v11; // 0x4b0f8
    int64_t v12; // 0x4b0f8
    int64_t * v13; // 0x4b0fc
    bool v14; // 0x4affd
    switch (v3) {
        case 1: {
            uint64_t v15 = *(int64_t *)(v1 + 280); // 0x4b0bd
            int64_t v16 = v1 + 272; // 0x4b0c6
            uint64_t v17 = (int64_t)*(int16_t *)(v1 + 16) % v15; // 0x4b0cd
            v8 = function_4aa62(v16, v17, v2);
            if (v8 == 0) {
                // 0x4b09d
                v5 = *(int64_t *)(v1 + 296);
                v6 = 0;
                goto lab_0x4b176;
            } else {
                int64_t v18 = *(int64_t *)v16; // 0x4b0ea
                v9 = (int64_t *)v8;
                v10 = *v9;
                v11 = (int64_t *)v10;
                v12 = *v11;
                v13 = (int64_t *)(v18 + 8 * v17);
                int64_t v19 = *v13; // 0x4b0fc
                if (v8 != v19) {
                    if (v12 != 0) {
                        uint64_t v20 = (int64_t)*(int16_t *)(v12 + 8) % v15; // 0x4b14b
                        if (v17 != v20) {
                            // 0x4b153
                            *(int64_t *)(8 * v20 + v18) = v8;
                        }
                    }
                    goto lab_0x4b157;
                } else {
                    // 0x4b101
                    v4 = v19;
                    if (v12 == 0) {
                        goto lab_0x4b124;
                    } else {
                        uint64_t v21 = (int64_t)*(int16_t *)(v12 + 8) % v15; // 0x4b10e
                        if (v17 == v21) {
                            goto lab_0x4b157;
                        } else {
                            // 0x4b120
                            *(int64_t *)(8 * v21 + v18) = v8;
                            v4 = *v13;
                            goto lab_0x4b124;
                        }
                    }
                }
            }
        }
        case 2: {
            int64_t v22 = 2; // 0x4b067
            if (v14) {
                // 0x4b069
                v22 = *(int64_t *)(v1 + 8);
            }
            // 0x4b07f
            return function_4bfb4(function_4c21c(v1 + 272, v2, v22), v2);
        }
        default: {
            // 0x4b012
            if (v3 != 0) {
                // 0x4b183
                return v1 & -256 | (int64_t)v14;
            }
            int64_t v23 = v1 & 0xffffffff; // 0x4b01c
            if (v14) {
                // 0x4b01e
                v23 = *(int64_t *)(v1 + 8);
            }
            // 0x4b031
            result = function_4bfb4(function_4c21c(v1 + 272, v2, v23), v2);
            v7 = *(int64_t *)(v1 + 296) == 1;
            goto lab_0x4b053;
        }
    }
  lab_0x4b053:
    // 0x4b053
    if (!v7) {
        // 0x4b183
        return result;
    }
    // 0x4b059
    return function_4aefa(v1);
  lab_0x4b176:
    // 0x4b176
    result = v6;
    v7 = v5 == 0;
    goto lab_0x4b053;
  lab_0x4b157:
    // 0x4b157
    *v9 = *v11;
    function_4bf94(v10 + 16, v8);
    int64_t v24 = function_4eeb50(v10); // 0x4b16a
    int64_t * v25 = (int64_t *)(v1 + 296);
    int64_t v26 = *v25 - 1; // 0x4b16f
    *v25 = v26;
    v5 = v26;
    v6 = v24;
    goto lab_0x4b176;
  lab_0x4b124:;
    int64_t v27 = v1 + 288; // 0x4b124
    if (v4 == v27) {
        // 0x4b130
        *(int64_t *)v27 = v12;
    }
    // 0x4b137
    *v13 = 0;
    goto lab_0x4b157;
}

// Address range: 0x4b188 - 0x4b25c
int64_t function_4b188(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4b188
    int64_t v1; // 0x4b188
    int32_t v2 = v1;
    __readfsqword(40);
    int64_t v3 = a2; // bp-48, 0x4b1a0
    if (v2 >= 0) {
        if (v2 < 3) {
            // 0x4b1ba
            function_4afd4();
        } else {
            if (v2 == 3) {
                // 0x4b1b3
                function_4abec();
            }
        }
    }
    int64_t * v4 = (int64_t *)(v3 + 56);
    int64_t v5; // bp-40, 0x4b188
    function_729b6(&v5, *v4 + 384, a3, 0);
    int64_t v6 = *v4; // 0x4b1e3
    uint64_t v7 = *(int64_t *)(v6 + 336); // 0x4b1e7
    int64_t v8 = v6 + 328; // 0x4b1ee
    uint64_t v9 = v3 % v7;
    int64_t result = function_4aa26(v8, v9, &v3); // 0x4b203
    if (result == 0) {
        // 0x4b25c
        return 0;
    }
    int64_t v10 = *(int64_t *)v8; // 0x4b210
    int64_t v11 = *(int64_t *)*(int64_t *)result; // 0x4b21e
    int64_t * v12 = (int64_t *)(v10 + 8 * v9); // 0x4b221
    int64_t v13 = *v12; // 0x4b221
    if (result != v13) {
        // 0x4b25c
        return result;
    }
    int64_t v14 = v13; // 0x4b22b
    if (v11 != 0) {
        uint64_t v15 = *(int64_t *)(v11 + 8); // 0x4b22d
        uint64_t v16 = v15 % v7;
        if (v9 == v16) {
            // 0x4b25c
            return v15 / v7;
        }
        // 0x4b245
        *(int64_t *)(8 * v16 + v10) = result;
        v14 = *v12;
    }
    int64_t result2 = v6 + 344; // 0x4b249
    if (v14 == result2) {
        // 0x4b255
        *(int64_t *)result2 = v11;
    }
    // 0x4b25c
    return result2;
}

// Address range: 0x556d0 - 0x559ba
int64_t function_556d0(int64_t a1, int64_t a2, int64_t str, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9) {
    int64_t v1 = __readfsqword(40); // 0x5570d
    int64_t * v2 = (int64_t *)a7; // 0x5571d
    int64_t * v3 = (int64_t *)(a7 + 8); // 0x55726
    *v3 = *v2;
    *(int64_t *)(a8 + 8) = *(int64_t *)a8;
    *(int64_t *)(a9 + 8) = *(int64_t *)a9;
    int64_t v4 = str + 8; // 0x55744
    int64_t * v5 = (int64_t *)v4; // 0x55744
    uint64_t v6 = *v5 - str; // 0x55748
    int64_t v7 = 9; // 0x55752
    if (v6 > (int64_t)&g29) {
        int32_t memcmp_rc = memcmp((int64_t *)str, &g33, 4); // 0x5576a
        v7 = 9;
        if (memcmp_rc == 0) {
            // 0x5577e
            v7 = 9;
            if (*(int16_t *)(str + 4) == g54) {
                int32_t * v8 = (int32_t *)(str + (int64_t)&g26); // 0x5578f
                int32_t * v9 = (int32_t *)(str + (int64_t)&g27); // 0x55795
                uint32_t v10 = *v9; // 0x55795
                int64_t v11 = v6 - 1052; // 0x5579b
                int64_t v12 = (int64_t)v10 + (int64_t)*v8; // 0x557a2
                v7 = 9;
                if (v11 == v12) {
                    int64_t v13 = function_4efd30(v6, v10, v12, v11); // 0x557cc
                    function_54cea(v13, v13 + v6, 0);
                    int64_t v14 = function_2601b(0, 0, v13) + v6; // 0x557fe
                    int64_t v15 = function_2601b(0, 0, v14); // 0x55804
                    function_54cf8(0);
                    int32_t v16 = v13; // bp-88, 0x55827
                    int64_t v17 = *v5 - v14; // 0x55838
                    __asm_rep_movsb_memcpy((char *)v13, (char *)v14, v17);
                    int64_t v18; // 0x556d0
                    int64_t v19; // 0x556d0
                    if (*(int16_t *)(str + 6) != g55) {
                        // 0x55872
                        v18 = v17 - 1036;
                        v19 = v14 + (int64_t)&g26;
                    } else {
                        // 0x5584e
                        *(int32_t *)(v13 + (int64_t)&g25) = 0;
                        memset2((void *)(int64_t)(v13 + 8), 0, &g24, 0);
                        v18 = v15 - v13;
                        v19 = v13;
                    }
                    int32_t v20 = *(int32_t *)(str + (int64_t)&g25); // 0x55898
                    int64_t v21 = function_55620(a1, a2, v19, v18, v4, v20, a5, a6, a8); // 0x558a9
                    function_254fe((int64_t *)&v16);
                    if ((int32_t)v21 == 0) {
                        int64_t v22 = v19 + (int64_t)&g30; // 0x558e7
                        int64_t v23 = v22 + (int64_t)*v8; // 0x558ee
                        function_54be6(a9, v22, v23, v18);
                        uint32_t v24 = *(int32_t *)(str + (int64_t)&g28); // 0x558f6
                        int64_t v25 = *v2; // 0x558fd
                        int64_t * v26 = (int64_t *)(a7 + 16); // 0x55901
                        uint64_t v27 = (int64_t)v24 + (int64_t)&g30; // 0x55907
                        int64_t v28 = v23; // 0x55914
                        if (v27 > *v26 - v25) {
                            int64_t v29 = *v3; // 0x55916
                            v28 = function_4efd30(v27, 0, v23, v27);
                            function_2601b(v25, (int32_t)v29, v28);
                            function_54cf8(*v2);
                            *v2 = v28;
                            *v3 = v29 - v25 + v28;
                            *v26 = v28 + v27;
                        }
                        int64_t v30 = v28;
                        function_54be6(a7, v30, v30 + (int64_t)&g30, v27);
                        uint32_t v31 = *v8; // 0x55972
                        int32_t v32 = *v9; // 0x5597c
                        function_4452a(v30 + 2 * (int64_t)&g30 + (int64_t)v31, v32, a7);
                        v7 = 0;
                    } else {
                        // 0x558bf
                        v7 = v21 & 0xffffffff;
                    }
                }
            }
        }
    }
    int64_t result = v7; // 0x559a4
    if (v1 != __readfsqword(40)) {
        // 0x559a6
        __stack_chk_fail();
        result = (int64_t)&g65;
    }
    // 0x559ab
    return result;
}

// Address range: 0x57b50 - 0x57bca
int64_t function_57b50(int64_t a1, int64_t * a2, int64_t a3, int64_t a4) {
    int64_t v1 = (int64_t)a2;
    if ((char)function_5646c(v1) == 0) {
        // 0x57bbe
        return 23;
    }
    int64_t * v2 = (int64_t *)(a1 + 33); // 0x57b70
    int64_t v3 = function_56066(v1, *v2); // 0x57b77
    if ((int32_t)v3 != 0 || *v2 == 0 || *(char *)(a1 + 32) != 0 || (int32_t)function_57650(a1, v1) == 0) {
        // 0x57bbe
        return v3 & 0xffffffff;
    }
    // 0x57b9f
    return function_579c2(a1, v1, a3, a4);
}

// Address range: 0x57bca - 0x57c5f
int64_t function_57bca(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = __readfsqword(40); // 0x57bf1
    int64_t v2; // bp-632, 0x57bca
    function_561d2(&v2);
    int64_t v3 = 23; // 0x57c14
    if (a2 != 0) {
        // 0x57c16
        v3 = function_57b50(a1, &v2, a3, a4) & 0xffffffff;
    }
    // 0x57c29
    function_56188(&v2);
    int64_t result = v3; // 0x57c4a
    if (v1 != __readfsqword(40)) {
        // 0x57c4c
        __stack_chk_fail();
        result = (int64_t)&g65;
    }
    // 0x57c51
    return result;
}

// Address range: 0x57c60 - 0x57cea
int64_t function_57c60(uint64_t a1, uint64_t a2) {
    int64_t v1 = a1; // 0x57c6e
    if (a1 >= 0xfffffffffffffff) {
        // 0x57c70
        function_542590("basic_string::_S_create");
        v1 = (int64_t)"basic_string::_S_create";
    }
    uint64_t v2 = v1;
    int64_t v3 = v2; // 0x57c82
    if (v2 > a2) {
        uint64_t v4 = 2 * a2; // 0x57c84
        v3 = v2 < v4 ? v4 : v2;
    }
    int64_t v5 = 4 * v3; // 0x57c8f
    uint64_t v6 = v5 + 60; // 0x57c97
    int64_t v7 = v3; // 0x57ca1
    int64_t v8 = v5; // 0x57ca1
    int64_t v9; // 0x57c60
    if (v3 > a2 && v6 > (int64_t)&g1) {
        int64_t v10 = v6 & (int64_t)(int32_t)&g64; // 0x57ca8
        uint64_t v11 = ((int64_t)&g1 - v10) / 4 + v3; // 0x57cbc
        v7 = v11 < 0xffffffffffffffe ? v11 : 0xffffffffffffffe;
        v9 = v10;
        v8 = 4 * v7;
    }
    // 0x57cd8
    int64_t v12; // 0x57c60
    int64_t result = function_4efd30(v8 + 28, (int32_t)a2, v9, v12); // 0x57cd8
    *(int64_t *)(result + 8) = v7;
    *(int32_t *)(result + 16) = 0;
    return result;
}

// Address range: 0x57d2e - 0x57d32
int64_t function_57d2e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x57d2e
    int64_t result; // 0x57d2e
    char * v1 = (char *)(result - 127); // 0x57d2e
    *v1 = *v1 + (char)a4;
    return result;
}

// Address range: 0x57d33 - 0x57d39
int64_t function_57d33(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x57d33
    int64_t v1; // 0x57d33
    int64_t result = v1;
    bool v2; // 0x57d33
    *(char *)result = 2 * (char)result | (char)v2;
    char * v3 = (char *)(result + 41); // 0x57d35
    *v3 = *v3 + (char)a4;
    return result;
}

// Address range: 0x57d45 - 0x57d46
int64_t function_57d45(void) {
    // 0x57d45
    int64_t result; // 0x57d45
    return result;
}

// Address range: 0x63d20 - 0x63d4b
int64_t function_63d20(int64_t a1) {
    // 0x63d20
    *(int64_t *)(a1 + (int64_t)&g58 - 2456) = (int64_t)&g39;
    int64_t result = function_7293a(a1 + (int64_t)&g58); // 0x63d39
    *(char *)(a1 + 80) = 0;
    return result;
}

// Address range: 0x63d4c - 0x63d66
int64_t function_63d4c(int64_t a1) {
    // 0x63d4c
    *(int64_t *)(a1 + (int64_t)&g58 - 2456) = (int64_t)&g39;
    return function_72994(a1 + (int64_t)&g58);
}

// Address range: 0x63d66 - 0x63d7d
int64_t function_63d66(int64_t a1) {
    // 0x63d66
    function_63d4c(a1);
    return function_4eeb30(a1, &g59);
}

// Address range: 0x63d80 - 0x63da7
int64_t function_63d80(int64_t a1) {
    // 0x63d80
    __readfsqword(40);
    return function_24d05b();
}

// Address range: 0x63db5 - 0x63dc0
int64_t function_63db5(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 + 0x69cc4e25); // 0x63db5
    int64_t v2; // 0x63db5
    bool v3; // 0x63db5
    *v1 = (int32_t)v3 - (int32_t)v2 + *v1;
    int64_t result; // 0x63db5
    int64_t v4 = result;
    *(char *)v4 = *(char *)&result ^ (char)v4;
    return result;
}

// Address range: 0x63e29 - 0x63e2c
int64_t function_63e29(int64_t a1) {
    // 0x63e29
    int64_t result; // 0x63e29
    return result;
}

// Address range: 0x63e2f - 0x63e30
int64_t function_63e2f(void) {
    // 0x63e2f
    int64_t result; // 0x63e2f
    return result;
}

// Address range: 0x63e3c - 0x63e4f
int64_t function_63e3c(int64_t a1, int64_t a2, int64_t a3) {
    // 0x63e3c
    bool v1; // 0x63e3c
    if (v1) {
        function_63e2f();
    }
    // 0x63e43
    int64_t v2; // 0x63e3c
    int32_t * v3 = (int32_t *)(a1 + 0x65dcc6b7 + 4 * v2); // 0x63e43
    *v3 = (int32_t)v1 + (int32_t)a3 + *v3;
    return function_ffffffffa9adff33();
}

// Address range: 0x63eae - 0x63eb1
int64_t function_63eae(int64_t a1) {
    // 0x63eae
    int64_t result; // 0x63eae
    return result;
}

// Address range: 0x63ef1 - 0x63ef5
int64_t function_63ef1(int64_t a1) {
    // 0x63ef1
    int64_t result; // 0x63ef1
    return result;
}

// Address range: 0x63efb - 0x63efd
int64_t function_63efb(int64_t a1) {
    // 0x63efb
    int64_t result; // 0x63efb
    return result;
}

// Address range: 0x63f0e - 0x63f13
int64_t function_63f0e(void) {
    // 0x63f0e
    return function_ffffffff87b8e917();
}

// Address range: 0x63f36 - 0x63f4b
int64_t function_63f36(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x63f36
    int64_t result; // 0x63f36
    int64_t v1 = result;
    *(int32_t *)v1 = (int32_t)v1 + (int32_t)a4;
    __asm_int(7);
    char * v2 = (char *)(a3 - 6); // 0x63f45
    *v2 = *v2 + (char)a4;
    return result;
}

// Address range: 0x63f4b - 0x63f8e
int64_t function_63f4b(int64_t a1, int64_t a2, int64_t a3, int32_t a4) {
    // 0x63f4b
    int64_t v1; // 0x63f4b
    int64_t result = v1 & 0xffffffff; // 0x63f81
    if (v1 != __readfsqword(40)) {
        // 0x63f83
        __stack_chk_fail();
        result = (int64_t)&g65;
    }
    // 0x63f88
    return result;
}

// Address range: 0x63f90 - 0x63ff0
int64_t function_63f90(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9) {
    // 0x63f90
    __readfsqword(40);
    return function_24df31();
}

// Address range: 0x63ff2 - 0x63fff
int64_t function_63ff2(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a3 + 0x4468a55d); // 0x63ff2
    *v1 = *v1 + (int32_t)a2;
    __asm_iretd(a1, a2, a3);
    return function_5304f02b();
}

// Address range: 0x64016 - 0x640b4
int64_t function_64016(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5, int64_t a6) {
    int32_t * v1 = (int32_t *)(a3 + 0x3015ba52); // 0x64016
    *v1 = -*v1;
    int32_t v2 = __asm_in((int16_t)a3); // 0x64020
    int64_t v3 = v2; // 0x64020
    int32_t * v4 = (int32_t *)(a3 - 34); // 0x64021
    *v4 = *v4 | (int32_t)a4;
    *(char *)-0x1e1ea05b788ede44 = (char)v2;
    *(char *)v3 = 77;
    int64_t v5; // 0x64016
    int64_t v6 = v3 & -256 | (int64_t)*(char *)(v5 + (int64_t)(v2 % 256)); // 0x64031
    char * v7 = (char *)(v6 + 88); // 0x64039
    *v7 = 2 * *v7;
    char * v8 = (char *)(v6 + 121); // 0x6403c
    *v8 = 2 * *v8;
    int64_t result = v6; // 0x64070
    if (__readfsqword(40) != a6) {
        // 0x64072
        __stack_chk_fail();
        result = (int64_t)&g65;
    }
    // 0x64077
    return result;
}

// Address range: 0x640c8 - 0x640cb
int64_t function_640c8(int64_t a1) {
    // 0x640c8
    int64_t result; // 0x640c8
    return result;
}

// Address range: 0x640d1 - 0x640e5
int64_t function_640d1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x640d1
    int64_t v1; // 0x640d1
    uint64_t result = v1 & -256 | (int64_t)__asm_in_134((int16_t)a3); // 0x640d4
    char * v2 = (char *)(a4 + 3); // 0x640d5
    *v2 = *v2 + (char)(result / 256);
    char * v3 = (char *)(a4 - 0x3b844d5c); // 0x640d8
    *v3 = *v3 ^ 27;
    int32_t * v4 = (int32_t *)(a1 + 14); // 0x640df
    *v4 = *v4 - (int32_t)result;
    return result;
}

// Address range: 0x640f7 - 0x640fa
int64_t function_640f7(int64_t a1) {
    // 0x640f7
    int64_t result; // 0x640f7
    return result;
}

// Address range: 0x64146 - 0x64149
int64_t function_64146(void) {
    // 0x64146
    int64_t result; // 0x64146
    return result;
}

// Address range: 0x64169 - 0x6416b
int64_t function_64169(void) {
    // 0x64169
    int64_t result; // 0x64169
    return result;
}

// Address range: 0x641bd - 0x641c0
int64_t function_641bd(void) {
    // 0x641bd
    int64_t result; // 0x641bd
    return result;
}

// Address range: 0x641c5 - 0x641c6
int64_t function_641c5(void) {
    // 0x641c5
    int64_t result; // 0x641c5
    return result;
}

// Address range: 0x641cf - 0x641df
int64_t function_641cf(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x641cf
    return __asm_int1((int64_t)&g65);
}

// Address range: 0x641df - 0x6426b
int64_t function_641df(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x641df
    int64_t v1; // 0x641df
    // 0x641e1
    __asm_sti();
    int32_t v2 = __asm_in_138(109); // 0x641f3
    int32_t * v3 = (int32_t *)(v1 + 11); // 0x641f5
    *v3 = *v3 & -41;
    int64_t v4 = v2 + 0x4a27233e; // 0x641f9
    uint32_t v5 = (int32_t)v1 % 32; // 0x64204
    if (v5 != 0) {
        int32_t * v6 = (int32_t *)v4; // 0x64204
        uint32_t v7 = *v6; // 0x64204
        unsigned char v8 = *(char *)(v1 - 0xf28244c); // 0x641fe
        *v6 = v7 << v5 | (int32_t)((int64_t)v7 >> (int64_t)(33 - v5)) | (int32_t)(v8 > (char)(v1 / 256)) << v5 - 1;
    }
    return v4 & 0xffffff00 | (int64_t)*(char *)-0x108b9e351345cbe2;
}

// Address range: 0x64270 - 0x642a6
int64_t function_64270(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x64270
    __readfsqword(40);
    return function_254332();
}

// Address range: 0x642a6 - 0x642b7
int64_t function_642a6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x642a6
    __asm_in_134((int16_t)a3);
    __asm_iretd((int64_t)&g65, (int64_t)&g65, (int64_t)&g65);
    int64_t v1; // 0x642a6
    return function_642cf(a1, a2, a3, v1 & 0xffffffff, (int64_t)&g65);
}

// Address range: 0x642b7 - 0x642cf
int64_t function_642b7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x642b7
    int64_t v1; // 0x642b7
    __asm_out((int16_t)a3, (int32_t)v1);
    return v1 + 0x32aa9e0e & 0xffffffff;
}

// Address range: 0x642cf - 0x64399
int64_t function_642cf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x642cf
    bool v1; // 0x642cf
    char * v2 = (char *)((v1 ? -1 : 1) + a2); // 0x642d2
    int64_t v3; // 0x642cf
    char v4 = *v2 & (char)((uint64_t)v3 / 256); // 0x642d2
    *v2 = v4;
    if (v4 == 0) {
        // 0x642d9
        return function_ffffffff9f19132a();
    }
    // 0x64341
    return (int64_t)*(int32_t *)0x76ae72f7048d8170;
}

// Address range: 0x64399 - 0x643e9
int64_t function_64399(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    unsigned char v1 = (char)a3; // 0x6439a
    unsigned char v2 = 2 * v1; // 0x6439a
    *(int32_t *)-0x321f61758ace8a4c = (int32_t)a4;
    __asm_out_137(-15, v2);
    int64_t v3; // 0x64399
    *(char *)(a1 & 0xffffffff) = 2 * (char)v3;
    char v4 = __asm_in_134((int16_t)((a4 + 159 + (int64_t)(v2 < v1)) % 256 | a4 & 0xff00)); // 0x643cd
    unsigned char v5 = *(char *)0x7d9f14acf44d3639; // 0x643d5
    return (int64_t)v4 & -256 | a3 & 0xffffff00 | (int64_t)v5;
}

// Address range: 0x643e9 - 0x64421
int64_t function_643e9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5) {
    // 0x643e9
    int64_t result; // 0x643e9
    int64_t v1; // 0x643e9
    if (v1 != __readfsqword(40)) {
        // 0x64416
        __stack_chk_fail();
        result = (int64_t)&g65;
    }
    // 0x6441b
    return result;
}

// Address range: 0x64430 - 0x6448a
int64_t function_64430(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x64430
    __readfsqword(40);
    return function_25621f();
}

// Address range: 0x6448a - 0x6448e
int64_t function_6448a(void) {
    // 0x6448a
    int64_t v1; // 0x6448a
    return v1 & 0xffffffff;
}

// Address range: 0x64491 - 0x644a5
int64_t function_64491(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x64491
    return a3 & 0xffffffff;
}

// Address range: 0x644ab - 0x644ae
int64_t function_644ab(void) {
    // 0x644ab
    int64_t result; // 0x644ab
    return result;
}

// Address range: 0x644bd - 0x644c8
int64_t function_644bd(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint32_t v1 = (int32_t)a4;
    uint32_t v2 = v1 % 32; // 0x644bd
    int64_t v3; // 0x644bd
    char v4 = v3;
    char v5 = v4; // 0x644bd
    char v6 = v4; // 0x644bd
    int64_t v7; // 0x644bd
    int64_t result; // 0x644bd
    if (v2 != 0) {
        *(int32_t *)a4 = v1 << v2;
        v5 = result;
        v7 = result;
        v6 = *(char *)&result;
    }
    // 0x644bd
    *(char *)v7 = v6 + v5;
    return result;
}

// Address range: 0x644f6 - 0x644f7
int64_t function_644f6(void) {
    // 0x644f6
    int64_t result; // 0x644f6
    return result;
}

// Address range: 0x64505 - 0x6450c
int64_t function_64505(void) {
    // 0x64505
    int64_t v1; // 0x64505
    return 2 * v1 & 0xffffffff;
}

// Address range: 0x6455c - 0x6459d
int64_t function_6455c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x6455c
    int64_t v1; // 0x6455c
    int64_t v2 = v1;
    int64_t v3 = (int64_t)(*(int32_t *)(v1 + 0x6589b6c6) | (int32_t)v1); // 0x6455c
    *(int32_t *)v2 = (int32_t)v2 - 120;
    *(int32_t *)(v3 + 76) = 0;
    int64_t result; // 0x6455c
    if (*(int64_t *)(v3 + 128) != __readfsqword(40)) {
        // 0x64592
        __stack_chk_fail();
        result = (int64_t)&g65;
    }
    // 0x64597
    return result;
}

// Address range: 0x645a0 - 0x645d4
int64_t function_645a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x645a0
    __readfsqword(40);
    return function_258f2d();
}

// Address range: 0x64601 - 0x6460f
int64_t function_64601(int64_t a1) {
    // 0x64601
    int64_t v1; // 0x64601
    bool v2; // 0x64601
    return v1 + 0xc41bcc5 + (int64_t)v2 & 0x782b4ab1;
}

// Address range: 0x64616 - 0x6461f
int64_t function_64616(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x64616
    __asm_int(42);
    int64_t v1; // 0x64616
    return v1 & -246;
}

// Address range: 0x6466b - 0x64671
int64_t function_6466b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x6466b
    int64_t result; // 0x6466b
    unsigned char v1 = (char)result;
    *(char *)a4 = v1 / 128 | 2 * v1;
    int64_t v2; // 0x6466b
    *(char *)a1 = *(char *)&v2 + (char)result;
    return result;
}

// Address range: 0x64672 - 0x64676
int64_t function_64672(int64_t a1) {
    // 0x64672
    return __asm_int1(a1);
}

// Address range: 0x646cf - 0x646d4
int64_t function_646cf(int64_t a1) {
    // 0x646cf
    int64_t v1; // 0x646cf
    return v1 | 86;
}

// Address range: 0x64730 - 0x64731
int64_t function_64730(void) {
    // 0x64730
    int64_t result; // 0x64730
    return result;
}

// Address range: 0x64739 - 0x64750
int64_t function_64739(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x64739
    int64_t v1; // 0x64739
    uint64_t v2 = v1;
    unsigned char v3 = *(char *)((a2 ^ a1) & 0xffffffff); // 0x64740
    bool v4; // 0x64739
    int64_t v5 = (v4 ? -1 : 1) + a1; // 0x64740
    int64_t v6 = 0x100000000 * v5 >> 32; // 0x64743
    uint64_t v7 = -61 * v6; // 0x64743
    int64_t result = 256 * (v7 / 256 + v2 / 256 + (int64_t)(v7 != -0x3d00000000 * v6 >> 32)) & 0xff00 | v2 & 0xffff00ff; // 0x64746
    int32_t * v8 = (int32_t *)(((v2 - a3 / 256 + (int64_t)(v3 < (char)v1)) % 256 | v2 & -256) + 93); // 0x64749
    *v8 = *v8 / 2;
    int32_t * v9 = (int32_t *)v5; // 0x6474c
    *v9 = *v9 | (int32_t)v1;
    __asm_out((int16_t)v7, (int32_t)result);
    return result;
}

// Address range: 0x64750 - 0x6478d
int64_t function_64750(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x64750
    int64_t v1; // 0x64750
    __asm_out_135(-127, (int32_t)v1);
    int64_t result; // 0x64750
    if (v1 != __readfsqword(40)) {
        // 0x64782
        __stack_chk_fail();
        result = (int64_t)&g65;
    }
    // 0x64787
    return result;
}

// Address range: 0x64790 - 0x647c4
int64_t function_64790(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x64790
    __readfsqword(40);
    return function_25cc91();
}

// Address range: 0x647e2 - 0x647e3
int64_t function_647e2(void) {
    // 0x647e2
    int64_t result; // 0x647e2
    return result;
}

// Address range: 0x64820 - 0x64822
int64_t function_64820(void) {
    // 0x64820
    int64_t v1; // 0x64820
    return function_64867(v1, v1, v1);
}

// Address range: 0x64829 - 0x6482a
int64_t function_64829(void) {
    // 0x64829
    int64_t result; // 0x64829
    return result;
}

// Address range: 0x64834 - 0x64867
int64_t function_64834(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x64834
    int64_t v1; // 0x64834
    unsigned char v2 = (char)v1 ^ 19; // 0x64834
    unsigned char v3 = llvm_ctpop_i8(v2); // 0x64834
    int64_t v4 = (int64_t)*(int32_t *)(v1 & -256 | (int64_t)v2); // 0x6483c
    if (v3 % 2 != 0) {
        v4 = function_64829();
    }
    int64_t v5 = a4 & -0xff01 | (int64_t)&g63; // 0x64841
    uint32_t v6 = (int32_t)v5; // 0x64848
    uint32_t v7 = v6 % 32; // 0x64848
    if (v7 != 0) {
        int32_t * v8 = (int32_t *)v5; // 0x64848
        uint32_t v9 = *v8; // 0x64848
        *v8 = v9 << v7 | (int32_t)((int64_t)v9 >> (int64_t)(33 - v7));
    }
    char * v10 = (char *)v5; // 0x6484c
    *v10 = *v10 + ((char)(v4 / 256) | 39);
    int64_t v11 = __asm_sti(); // 0x64851
    char * v12 = (char *)(v11 + 0x1c719496); // 0x64856
    unsigned char v13 = (char)a3 | (char)&g38; // 0x64856
    *v12 = *v12 ^ v13;
    int32_t * v14 = (int32_t *)(v1 - 94); // 0x6485c
    uint32_t v15 = *v14; // 0x6485c
    uint32_t v16 = v15 + v6; // 0x6485c
    *v14 = v16;
    int64_t v17 = v11; // 0x6485f
    if (((v16 ^ v15) & (v16 ^ v6)) < 0) {
        v17 = function_647e2();
    }
    int64_t v18 = v17;
    unsigned char v19 = v13 + 115 + (char)(v16 < v15); // 0x64862
    int64_t v20 = v16 < v15 ? v19 <= v13 : v13 > 140 ? 224 : 223; // 0x64864
    int64_t result = (v18 - v20) % 256 | v18 & -256; // 0x64864
    __asm_out((int16_t)v19 | (int16_t)((int64_t)&g38 & 0xff00), (int32_t)result);
    return result;
}

// Address range: 0x64867 - 0x64870
int64_t function_64867(int64_t a1, int64_t a2, int64_t a3) {
    int16_t v1 = a3; // 0x64869
    int64_t v2; // 0x64867
    __asm_outsb(v1, (char)v2);
    __asm_out(v1, (int32_t)v2);
    return v2 & 0xffffffff;
}

// Address range: 0x64871 - 0x64872
int64_t function_64871(void) {
    // 0x64871
    int64_t result; // 0x64871
    return result;
}

// Address range: 0x64878 - 0x6487b
int64_t function_64878(void) {
    // 0x64878
    int64_t result; // 0x64878
    return result;
}

// Address range: 0x64897 - 0x648e4
int64_t function_64897(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4;
    int64_t v2 = a3 & -256 | 149; // 0x64899
    int32_t * v3 = (int32_t *)v2; // 0x6489b
    int32_t v4 = *v3 + (int32_t)a1; // 0x6489b
    unsigned char v5 = llvm_ctpop_i8((char)v4); // 0x6489b
    *v3 = v4;
    int64_t v6; // 0x64897
    if (v5 % 2 != 0) {
        v6 = function_64871();
    }
    int64_t v7 = v6;
    int64_t v8 = (v7 + 209) % 256 | v7 & 0xffffff00; // 0x648b4
    uint32_t v9 = (int32_t)v8; // 0x648b9
    *(int32_t *)0x310431afa37e13fb = v9;
    int32_t v10 = *(int32_t *)&v1; // 0x648c7
    int64_t v11 = v1;
    *(int32_t *)v11 = v10 - (int32_t)v11 + (int32_t)(v9 < 0xf35b1071);
    unsigned char v12 = *(char *)(a2 - 0x5c0eba3b); // 0x648c9
    *(char *)0xfae9cda6 = *(char *)0xfae9cda6 + (char)v1;
    __asm_out_135(-17, (int32_t)(v7 & 0xffff0000 | (int64_t)(256 * ((int16_t)v8 % (int16_t)v12)) | (int64_t)__asm_in_136(-61)));
    return v2 & 0xffffff95;
}

// Address range: 0x648f2 - 0x648f3
int64_t function_648f2(void) {
    // 0x648f2
    int64_t result; // 0x648f2
    return result;
}

// Address range: 0x648fe - 0x648ff
int64_t function_648fe(int64_t a1) {
    // 0x648fe
    int64_t result; // 0x648fe
    return result;
}

// Address range: 0x6490b - 0x649dc
int64_t function_6490b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5) {
    // 0x6490b
    int64_t v1; // 0x6490b
    int64_t v2 = v1;
    bool v3; // 0x6490b
    *(int32_t *)a1 = *(int32_t *)((v3 ? -4 : 4) + a2);
    if ((char)v2 - *(char *)(v2 - 79) >= 0) {
        // 0x64991
        return v1 & 0xffffffff;
    }
    // 0x64917
    return function_648f2();
}

// Address range: 0x649e0 - 0x64a21
int64_t function_649e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x649e0
    __readfsqword(40);
    return function_261ed2();
}

// Address range: 0x64a9c - 0x64a9d
int64_t function_64a9c(void) {
    // 0x64a9c
    int64_t result; // 0x64a9c
    return result;
}

// Address range: 0x64aa7 - 0x64aaa
int64_t function_64aa7(void) {
    // 0x64aa7
    int64_t result; // 0x64aa7
    return result;
}

// Address range: 0x64ae6 - 0x64b79
int64_t function_64ae6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x64ae6
    int64_t v1; // 0x64ae6
    char v2 = v1; // 0x64ae6
    *(char *)-0xd72aa3ec056eeeb = v2;
    int64_t v3 = __asm_in_138(-60); // 0x64af2
    if (v2 >= 16) {
        // 0x64b73
        return v3 ^ 209;
    }
    // 0x64af6
    return v3 & 0x9af3789e;
}

// Address range: 0x64b85 - 0x64ca5
int64_t function_64b85(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a4 - 1; // 0x64b85
    int64_t v2; // 0x64b85
    bool v3; // 0x64b85
    if (v1 != 0 != v3) {
        if (v1 != 1 == v3) {
            // 0x64bdc
            return v2 & -243;
        }
        // 0x64b8b
        int64_t result; // 0x64b85
        return result;
    }
    char v4 = v2; // 0x64beb
    char v5 = v2 / 256; // 0x64beb
    char v6 = v5 + v4; // 0x64beb
    if (v6 < 0 != ((v6 ^ v4) & (v6 ^ v5)) < 0) {
        // 0x64b95
        return v2 & -256 | (int64_t)v6;
    }
    uint32_t v7 = *(int32_t *)(a1 + 7) & (int32_t)v2; // 0x64be8
    int64_t v8 = v7; // 0x64be8
    int64_t result2 = __asm_hlt(a1, a2, a3, v1); // 0x64bef
    char * v9 = (char *)(v8 + 40); // 0x64bf1
    char v10 = *v9 + (char)v2; // 0x64bf1
    *v9 = v10;
    int64_t v11 = a4 - 2; // 0x64bf5
    if (v11 != 0 != (v10 == 0)) {
        // 0x64b8b
        return result2;
    }
    int64_t v12 = a1 - 68 + v2; // 0x64bcc
    __writegsbyte(v12, __readgsbyte(v12) + (char)result2);
    __asm_hlt(a1, a2, a3, v11);
    int64_t v13; // 0x64b85
    int64_t v14 = (int64_t)&v13; // bp-8, 0x64bd2
    char * v15 = (char *)v8; // 0x64bd3
    *v15 = *v15 & (char)(v7 / 256);
    return (int64_t)&v14;
}

// Address range: 0x64caf - 0x64cb4
int64_t function_64caf(int64_t a1, uint64_t a2, int64_t a3) {
    // 0x64caf
    int64_t v1; // 0x64caf
    return a2 & 0xffffff00 | (int64_t)*(char *)(v1 + a2 % 256);
}

// Address range: 0x64ccc - 0x64cd4
int64_t function_64ccc(int64_t a1, int64_t a2, int64_t a3) {
    // 0x64ccc
    int64_t v1; // 0x64ccc
    return v1 & -256 | (int64_t)__asm_in_136(-40);
}

// Address range: 0x64cd4 - 0x64cdb
int64_t function_64cd4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x64cd4
    int64_t result; // 0x64cd4
    return result;
}

// Address range: 0x64cdb - 0x64d27
int64_t function_64cdb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5) {
    // 0x64cdb
    while (a4 == 0) {
        // continue -> 0x64cdc
    }
    // 0x64cde
    int64_t v1; // 0x64cdb
    int64_t result = v1 & 0xffffffff; // 0x64d10
    if (v1 != __readfsqword(40)) {
        // 0x64d12
        __stack_chk_fail();
        result = (int64_t)&g65;
    }
    // 0x64d17
    return result;
}

// Address range: 0x64d30 - 0x64d61
int64_t function_64d30(int64_t a1, int64_t a2) {
    // 0x64d30
    __readfsqword(40);
    return function_2669b9();
}

// Address range: 0x64dae - 0x64db0
int64_t function_64dae(void) {
    // 0x64dae
    int64_t v1; // 0x64dae
    return function_64e1a(v1, v1, v1, v1);
}

// Address range: 0x64db7 - 0x64db9
int64_t function_64db7(void) {
    // 0x64db7
    int64_t v1; // 0x64db7
    return function_64e00(v1, v1, v1, v1);
}

// Address range: 0x64ded - 0x64dee
int64_t function_64ded(void) {
    // 0x64ded
    int64_t result; // 0x64ded
    return result;
}

// Address range: 0x64e00 - 0x64e05
int64_t function_64e00(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x64e00
    int64_t result; // 0x64e00
    int32_t v1 = *(int32_t *)(result - 113); // 0x64e01
    __asm_out((int16_t)(v1 | (int32_t)a3), (int32_t)result);
    return result;
}

// Address range: 0x64e1a - 0x64e20
int64_t function_64e1a(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x64e1a
    int64_t v1; // 0x64e1a
    uint64_t v2 = v1;
    *(char *)(v1 - 68) = (char)(a3 / 256);
    char v3 = *(char *)(a4 + 84); // 0x64e1d
    return 256 * (int64_t)((char)(v2 / 256) - v3) | v2 & -0xff01;
}

// Address range: 0x64e21 - 0x64e2c
int64_t function_64e21(int64_t a1, int64_t a2, int64_t a3) {
    // 0x64e21
    int64_t v1; // 0x64e21
    uint64_t v2 = v1;
    *(int32_t *)a1 = (int32_t)v2;
    __asm_out_135(-12, (int32_t)(v1 & 0xffffff00 | v2 % 256));
    return function_64ded();
}

// Address range: 0x64e36 - 0x64e38
int64_t function_64e36(void) {
    // 0x64e36
    return __asm_int1((int64_t)&g65);
}

// Address range: 0x64e3d - 0x64eb7
int64_t function_64e3d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x64e3d
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t v1; // 0x64e3d
    int32_t * v2 = (int32_t *)(v1 + 0x2b7f2d57); // 0x64e3e
    bool v3; // 0x64e3d
    *v2 = *v2 + (v3 ? -0x793bd46c : -0x793bd46d);
    unsigned char v4 = *(char *)(v1 + 85); // 0x64e48
    if ((char)a4 + (char)a3 == (char)(v4 > (char)v1)) {
        // 0x64e8a
        return (int64_t)*(int32_t *)-0x449eff0e42a91d1f;
    }
    // 0x64e51
    return function_12a8bc();
}

// Address range: 0x64eb8 - 0x64ec3
int64_t function_64eb8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x64eb8
    int64_t result; // 0x64eb8
    return result;
}

// Address range: 0x64eca - 0x64ece
int64_t function_64eca(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x64eca
    int64_t result; // 0x64eca
    return result;
}

// Address range: 0x64ef8 - 0x64efd
int64_t function_64ef8(void) {
    // 0x64ef8
    return function_4cd810d4();
}

// Address range: 0x64f36 - 0x64f39
int64_t function_64f36(int64_t a1) {
    // 0x64f36
    int64_t result; // 0x64f36
    return result;
}

// Address range: 0x64f47 - 0x64f48
int64_t function_64f47(void) {
    // 0x64f47
    int64_t result; // 0x64f47
    return result;
}

// Address range: 0x64f52 - 0x64f6d
int64_t function_64f52(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x64f52
    return (int64_t)(*(int32_t *)-0x4703fc7da361f67 ^ 63);
}

// Address range: 0x64f6d - 0x64f75
int64_t function_64f6d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x64f6d
    int64_t result; // 0x64f6d
    return result;
}

// Address range: 0x64fbb - 0x64ffd
int64_t function_64fbb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x64fbb
    int64_t v1; // 0x64fbb
    bool v2; // 0x64fbb
    if (v2) {
        v1 = function_64fbb(a1, a2, a3, a4);
    }
    int64_t v3 = v1; // 0x64fbd
    if (a4 != 1 && !v2) {
        v3 = function_64f47();
    }
    // 0x64fbf
    int64_t v4; // 0x64fbb
    *(int32_t *)(v4 + 28) = 0;
    int64_t result = v3; // 0x64fed
    if (*(int64_t *)(v4 + 720) != __readfsqword(40)) {
        // 0x64fef
        __stack_chk_fail();
        result = (int64_t)&g65;
    }
    // 0x64ff4
    return result;
}

// Address range: 0x65000 - 0x65036
int64_t function_65000(int64_t a1, int64_t a2, int64_t a3) {
    // 0x65000
    __readfsqword(40);
    return function_26cc29();
}

// Address range: 0x65042 - 0x6504c
int64_t function_65042(void) {
    // 0x65042
    int64_t v1; // 0x65042
    return v1 + 0x2700a9 & 0xffffffff;
}

// Address range: 0x650e0 - 0x65144
int64_t function_650e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x650e0
    int64_t result; // 0x650e0
    bool v1; // 0x650e0
    if (!v1) {
        // 0x65140
        return result;
    }
    // 0x650e6
    *(int64_t *)((int64_t)(72 * *(int32_t *)(result - 102)) - 8) = a1;
    return result;
}

// Address range: 0x65192 - 0x65247
int64_t function_65192(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    // 0x65192
    int64_t result; // 0x65192
    bool v1; // 0x65192
    if (v1) {
        // 0x65194
        return result;
    }
    int32_t * v2 = (int32_t *)(4 * result - 0x2e1e7d3c + result); // 0x65195
    uint32_t v3 = *v2 / 2; // 0x65195
    unsigned char v4 = llvm_ctpop_i8((char)v3); // 0x65195
    *v2 = v3;
    if (v4 % 2 != 0) {
        // 0x65194
        return result;
    }
    int32_t * v5 = (int32_t *)(result - 0x5b0b2344); // 0x6519f
    *v5 = *v5 - (int32_t)result;
    int64_t v6 = result % 256 ^ a4; // 0x651a6
    char * v7 = (char *)(result + 43); // 0x651a9
    char v8 = a4 / 256; // 0x651a9
    *v7 = *v7 | v8;
    int32_t * v9 = (int32_t *)v6; // 0x651ac
    *v9 = *v9 - (int32_t)result;
    char * v10 = (char *)(a3 - 34); // 0x651b5
    *v10 = *v10 + v8;
    __asm_iretd((int64_t)&g65, (int64_t)&g65, (int64_t)&g65);
    char * v11 = (char *)(a3 - 0x4514ecc0); // 0x651dc
    unsigned char v12 = *v11; // 0x651dc
    unsigned char v13 = v12 + ((char)v6 & 83); // 0x651dc
    *v11 = v13;
    uint32_t result2 = *(int32_t *)0x441aa633fe26c3eb; // 0x651e2
    char * v14 = (char *)(result + 39); // 0x651eb
    *v14 = *v14 + (char)(v13 < v12) - (char)(result2 / 256);
    return result2;
}

// Address range: 0xcc5a1 - 0xcdac9
int64_t function_cc5a1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xcc5a1
    int64_t v1; // bp-48, 0xcc5a1
    int64_t v2 = (int64_t)&v1; // 0xcc6f6
    int64_t * v3 = (int64_t *)(v2 - 16); // 0xcc71d
    v1 = 0x2879a3a0;
    int64_t * v4 = (int64_t *)(v2 - 8); // 0xcc73d
    v1 = 0x2c2ecc99;
    *v4 = 0x6342dc77;
    *v3 = 0x36655b42;
    int64_t v5 = v2 - 24; // 0xcc782
    int64_t * v6 = (int64_t *)v5; // 0xcc782
    *v6 = a1;
    int64_t v7 = v2 - 32; // 0xcc78a
    int64_t * v8 = (int64_t *)v7; // 0xcc78a
    *v8 = v5;
    int64_t v9 = *v6; // 0xcc79c
    int64_t * v10 = (int64_t *)(v2 - 40); // 0xcc79c
    *v10 = v9;
    v1 = 0x3d136d1d;
    *v8 = v5;
    *v4 = 0x2ffdd6ad;
    *v6 = 0x66826004;
    *v10 = v7;
    *v8 = *v6;
    int64_t v11 = v2 - 48; // 0xcc859
    int64_t * v12 = (int64_t *)v11; // 0xcc859
    *v12 = v9;
    int64_t * v13 = (int64_t *)(v2 - 56); // 0xcc875
    *v13 = *v8;
    *v10 = a2;
    int64_t v14 = *v6; // 0xcc924
    *v6 = v5;
    *v8 = 0x53b1c129;
    *v10 = 0x3b3cad36;
    *v12 = 0x5ac00fa2;
    int64_t v15 = v2 - 72; // 0xcc958
    int64_t * v16 = (int64_t *)v15; // 0xcc958
    *v16 = *v12;
    int64_t * v17 = (int64_t *)(v2 - 64); // 0xcc95c
    *v12 = 0x5e1a4adb;
    *v13 = 0x1141d099;
    *v16 = *v8;
    *v17 = *v16;
    int64_t v18 = *v16; // 0xcc9e1
    *v16 = 0x67983371;
    int64_t * v19 = (int64_t *)(v2 - 80); // 0xcc9f4
    *v19 = v18;
    *v13 = 0xe389888;
    *v17 = *v3;
    *v16 = a2;
    *v19 = v15;
    int64_t v20 = *v16; // 0xcca25
    *v16 = v15;
    *v10 = a6;
    *v17 = -0x7fd7ffcc;
    int64_t v21 = *v13; // 0xcca9a
    *v13 = v11;
    int64_t v22 = *v12; // 0xcca9e
    *v17 = v22;
    *v16 = v22;
    int64_t v23 = *v12; // 0xccab1
    int64_t * v24 = (int64_t *)(v23 - 16); // 0xccac4
    *v24 = v14;
    int64_t v25 = *(int64_t *)(v23 + 120); // 0xccaca
    *(int64_t *)(v23 - 8) = v25;
    *v24 = *v10;
    int64_t * v26 = (int64_t *)(v23 - 24); // 0xccad3
    int64_t * v27 = (int64_t *)(v23 - 32); // 0xccae8
    *v27 = v14;
    *v26 = v23;
    int64_t v28 = *v24; // 0xccb08
    *v27 = v28;
    int64_t v29 = *v24; // 0xccb1a
    int64_t v30 = v29 - 8; // 0xccb1e
    int64_t * v31 = (int64_t *)v30; // 0xccb1e
    int64_t v32 = v29 - 16; // 0xccb20
    int64_t * v33 = (int64_t *)v32; // 0xccb20
    int64_t v34 = v29 - 24; // 0xccb3f
    int64_t * v35 = (int64_t *)v34; // 0xccb3f
    *v35 = a3;
    *v31 = v30;
    *v33 = a6;
    *v35 = *v16;
    int64_t * v36 = (int64_t *)(v29 - 32); // 0xccb5b
    *v36 = v28;
    int64_t * v37 = (int64_t *)(v29 - 40); // 0xccb5c
    *v37 = *v26;
    int64_t v38 = *v36; // 0xccb67
    *v36 = v38 ^ 0x5b3f2500;
    int64_t v39 = *v35; // 0xccb78
    *v31 = v38;
    *(int64_t *)(v29 + 112) = v38;
    *v31 = v18;
    *v33 = v25;
    *v35 = a3;
    *v36 = v39;
    int64_t v40 = *v35; // 0xccbe5
    *v33 = v39;
    *v35 = v40;
    int64_t v41 = *v31; // 0xccc93
    *v31 = *v33;
    *v33 = *v31;
    *v35 = 0xcc59c;
    int64_t v42 = *v33; // 0xccce1
    *v35 = v42;
    *v36 = v42;
    *v31 = v22;
    *v35 = 0x3bdab6c0;
    int32_t * v43 = (int32_t *)v34; // 0xccd2d
    *v43 = *v43 + 0x3a7cc2f3;
    *v33 = *v31;
    *v35 = v20;
    *v33 = *v37;
    int64_t v44 = *v31; // 0xccd9a
    int64_t v45 = *v33 - 0xcc5a1 + (0x8636f - (*v35 + 0x12c36f97 & 0x2685e037) & 0xff8fe37f); // 0xcce38
    *v31 = v40;
    *v33 = v30;
    *v31 = 0x3b005ec9;
    *v33 = v28;
    *v35 = v42;
    *v36 = v44;
    *v31 = *v35;
    *v33 = 0x33fd9b41;
    int64_t v46 = *v33; // 0xccebe
    *v33 = 1;
    int32_t * v47 = (int32_t *)v32; // 0xcced2
    *v47 = *v47 + 0x6c58415d;
    *v33 = v41;
    int64_t v48 = *v31; // 0xccf1a
    *v31 = v44;
    *v33 = v20;
    *v35 = v48;
    *v33 = v45;
    int64_t v49 = *v31; // 0xccf8d
    *v33 = v49;
    int32_t * v50 = (int32_t *)(v45 + 476); // 0xccf98
    int32_t v51 = *v50; // 0xccf98
    int32_t v52 = (int32_t)*v33 - 0x6c58415d; // 0xccf98
    *v50 = v51 == 0 ? v52 : v51;
    if (v51 != 0) {
        __asm_pause();
        int32_t v53 = *v50; // 0xccf98
        *v50 = v53 == 0 ? v52 : v53;
        while (v53 != 0) {
            // 0xccfa3
            __asm_pause();
            v53 = *v50;
            *v50 = v53 == 0 ? v52 : v53;
        }
    }
    int64_t v54 = *(int64_t *)v29; // 0xccfaa
    *v31 = v54;
    *v35 = 0;
    *v33 = v48;
    *v35 = *v33;
    *v36 = 0x6e7c446f;
    *v35 = 0x75fed0f1;
    *v43 = *v43 + 0x6b7761e5;
    *v33 = 0x141dc190;
    *v33 = v54;
    *v35 = v49;
    *v37 = 0;
    int64_t v55 = *v33 - 0x3eff1277; // 0xcd0d4
    *v33 = v55;
    int64_t v56 = *v35; // 0xcd0dd
    int64_t * v57 = (int64_t *)((0xe1763391 - *v35 & 0xffffffff) + v45); // 0xcd0df
    *v57 = v55;
    *v33 = v14;
    *v35 = *v33;
    *v57 = *v57 + 0x3eff1277;
    *v36 = v54;
    *v35 = 231;
    *v43 = *v43 - 0x6fef3c97;
    int64_t v58 = *(int64_t *)(v29 + 72); // 0xcd18d
    *v33 = v58;
    *v35 = v58;
    *v36 = v58;
    *v37 = v56;
    int64_t v59 = v56 ^ v34; // 0xcd1ab
    int64_t * v60 = (int64_t *)(v29 - 48); // 0xcd1af
    *v60 = v58;
    *(int64_t *)(v29 - 56) = v59;
    int64_t v61 = *v37; // 0xcd1b3
    int64_t v62 = v61 ^ v59; // 0xcd1b3
    *v37 = v62;
    int64_t v63 = *v60; // 0xcd1b8
    int64_t * v64 = (int64_t *)(v62 + 8); // 0xcd1cc
    *v64 = 0x7c50c90e;
    int64_t * v65 = (int64_t *)v62; // 0xcd1d1
    *v65 = 0x4a2b8ebc;
    int64_t v66 = v62 - 16; // 0xcd1da
    int64_t * v67 = (int64_t *)v66; // 0xcd1da
    int64_t v68 = v62 - 24; // 0xcd1df
    int64_t * v69 = (int64_t *)v68; // 0xcd1e0
    *v69 = v54;
    *v67 = v63;
    int64_t * v70 = (int64_t *)(v62 - 8); // 0xcd1f8
    *v70 = v63;
    *(int64_t *)((*v35 + 0x6fef3c97 & 0xffffffff) + v45) = *v64;
    *v65 = 10;
    *v70 = v63;
    *v67 = 10;
    int32_t * v71 = (int32_t *)v62; // 0xcd251
    *v71 = *v71 ^ 0x65ef43fb;
    *v65 = *v33;
    *v70 = *v31;
    *v67 = v21;
    int64_t v72 = *(int64_t *)(v62 + 160); // 0xcd28d
    *v64 = v72;
    *v65 = *v33;
    *v69 = *v70;
    *v67 = v61;
    int64_t v73 = *v69; // 0xcd2bf
    *v65 = 0x5087c1b0;
    *v70 = 0x2cab8920;
    *v67 = 0xa84a2e8;
    int64_t * v74 = (int64_t *)(v62 - 32); // 0xcd38e
    *v74 = v73;
    *v69 = v73 + v72;
    int64_t v75 = *v74; // 0xcd397
    *(int64_t *)((*v65 & 0xffffffff ^ 0x65ef43fb) + v45) = *v64;
    *v64 = *v33;
    *v65 = 0xc3718;
    *v71 = *v71 - 0x3fe730a8;
    *v65 = v41;
    *v70 = 0xc3718;
    *v67 = v21;
    *v67 = v46;
    int64_t v76 = (*v65 + 0x3fe730a8 & 0xffffffff) + v75; // 0xcd514
    *v64 = *v33;
    *v65 = *v64;
    *v70 = v45;
    int64_t v77 = *v65; // 0xcd58a
    int64_t v78 = v62 + 16; // 0xcd59c
    *v65 = v78;
    *v64 = *(int64_t *)(v45 + 271);
    *v70 = *v64;
    int64_t v79 = *v64; // 0xcd5e0
    *v64 = v79 - 0x7fdebb0f;
    *v65 = v78;
    int64_t v80 = v76; // 0xcd636
    int64_t v81 = v78; // 0xcd636
    if (v79 != v76) {
        // 0xcd63c
        *v65 = *v33;
        *v70 = v46;
        *v65 = v21;
        *v70 = v75;
        int64_t v82 = *v65; // 0xcd6eb
        *v65 = 2880;
        *v70 = 2880;
        *v67 = v75;
        *v69 = 0x7feef894;
        int32_t * v83 = (int32_t *)v68; // 0xcd71f
        *v83 = *v83 - 0x3bcd8e26;
        int64_t v84 = *v67; // 0xcd72f
        *v71 = *v71 ^ (int32_t)*v69 + 0x3bcd8e26;
        int64_t v85 = *v65 / 8 % 0x20000000 ^ 0xffddf12; // 0xcd74a
        *v64 = 0x77a3b900;
        *v65 = 0x102380de;
        *v70 = 0x1aa9d291;
        *v67 = *v65;
        *v69 = v66;
        *v74 = *v67;
        int64_t v86 = *v67; // 0xcd787
        *(int64_t *)v86 = v76;
        int64_t v87 = v86 + 24; // 0xcd795
        int64_t v88 = v76; // 0xcd79b
        int64_t * v89; // 0xcc5a1
        int64_t v90; // 0xcc5a1
        int64_t v91; // 0xcc5a1
        int64_t v92; // 0xcc5a1
        if (v85 == 0) {
            // 0xcd63c
            v89 = (int64_t *)v87;
            v92 = v87;
            v91 = v45;
            v90 = v77;
        } else {
            int64_t * v93 = (int64_t *)v88; // 0xcd7a1
            *v93 = *v93 - 0xfd6205d6;
            int64_t v94 = v87 - 8; // 0xcd7b6
            int64_t * v95 = (int64_t *)v94;
            *v95 = v77;
            int64_t * v96 = (int64_t *)(v87 - 16); // 0xcd7b8
            *v96 = *v65;
            int64_t * v97 = (int64_t *)(v87 - 24); // 0xcd7c1
            *v97 = v45;
            int64_t * v98 = (int64_t *)(v87 - 32); // 0xcd7dc
            *v98 = -0x577f38b3;
            int64_t v99 = *v97; // 0xcd7df
            int64_t v100 = *v93 + v84; // 0xcd800
            *v93 = v100;
            int64_t v101 = *v95; // 0xcd807
            *v93 = v100 + 0xfd6205d6;
            *v95 = v85;
            *v96 = v46;
            *v97 = *v64;
            *v98 = v79;
            *v97 = v82;
            *v96 = *v64;
            *v96 = v87;
            int64_t v102 = *v95 + 0xffffffff & 0xffffffff; // 0xcd900
            int64_t v103 = *v96; // 0xcd79b
            int64_t v104 = *v96; // 0xcd79b
            int64_t v105 = *v97; // 0xcd79b
            int64_t v106 = v94; // 0xcd79b
            v88 += 8;
            v89 = v95;
            v92 = v94;
            v91 = v99;
            v90 = v101;
            while (v102 != 0) {
                // 0xcd7a1
                v93 = (int64_t *)v88;
                *v93 = *v93 - 0xfd6205d6;
                v94 = v106 - 8;
                v95 = (int64_t *)v94;
                *v95 = v101;
                v96 = (int64_t *)(v106 - 16);
                *v96 = v104;
                v97 = (int64_t *)(v106 - 24);
                *v97 = v99;
                v98 = (int64_t *)(v106 - 32);
                *v98 = -0x577f38b3;
                v99 = *v97;
                v100 = *v93 + v84;
                *v93 = v100;
                v101 = *v95;
                *v93 = v100 + 0xfd6205d6;
                *v95 = v102;
                *v96 = v103;
                *v97 = v105;
                *v98 = v79;
                *v97 = v82;
                *v96 = *v64;
                *v96 = v106;
                v102 = *v95 + 0xffffffff & 0xffffffff;
                v103 = *v96;
                v104 = *v96;
                v105 = *v97;
                v106 = v94;
                v88 += 8;
                v89 = v95;
                v92 = v94;
                v91 = v99;
                v90 = v101;
            }
        }
        int64_t v107 = v92;
        v80 = *v89;
        *(int64_t *)(v107 - 8) = v80;
        int64_t * v108 = (int64_t *)(v107 - 16); // 0xcd916
        *v108 = v82;
        int64_t * v109 = (int64_t *)(v107 - 32); // 0xcd923
        *v109 = v90;
        *(int64_t *)(v107 - 40) = v79;
        *(int64_t *)(v107 - 24) = v107;
        *v109 = *v108;
        int64_t v110 = *v108; // 0xcd965
        int64_t * v111 = (int64_t *)(v110 - 8); // 0xcd970
        int64_t * v112 = (int64_t *)(v110 - 16); // 0xcd973
        *(int64_t *)v110 = 0x38fe5a77;
        *v111 = 0x69be2abf;
        *v112 = v84;
        *(int64_t *)(v110 - 24) = v80;
        *v111 = *v112;
        int64_t v113 = *(int64_t *)(v110 + 16); // 0xcd9f1
        *(int64_t *)(*(int64_t *)(v110 + 8) + v91) = v113;
        v81 = v110 + 24;
    }
    int64_t v114 = *(int64_t *)(v81 + 136); // 0xcd9f4
    int64_t v115 = v81 - 8; // 0xcd9f4
    *(int64_t *)v115 = v114;
    *(int64_t *)(v81 - 16) = v114;
    int64_t * v116 = (int64_t *)(v81 - 24); // 0xcd9fe
    *v116 = *v65;
    *(int64_t *)(v81 - 32) = v115;
    *(int64_t *)(v81 - 40) = *v116;
    return 8 * v114 + v80;
}

// Address range: 0x499dd0 - 0x499e8d
int64_t function_499dd0(int64_t a1) {
    // 0x499dd0
    if (*(int32_t *)(a1 + 8) != 16 || *(int32_t *)(a1 + 12) == 3 || (*(char *)(a1 + 373) & 64) == 0) {
        // 0x499de7
        return 0;
    }
    int64_t * str = (int64_t *)(a1 + 352); // 0x499e28
    if (memcmp((int64_t *)*(int64_t *)(a1 + 168), str, 8) >= 1) {
        // 0x499e31
        function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g15, "record counter limit reached: renegotiate");
        return function_499cf0(a1);
    }
    int32_t memcmp_rc = memcmp((int64_t *)*(int64_t *)(a1 + 296), str, 8); // 0x499e7f
    if (memcmp_rc >= 0 != memcmp_rc != 0) {
        // 0x499de7
        return 0;
    }
    // 0x499e31
    function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g15, "record counter limit reached: renegotiate");
    return function_499cf0(a1);
}

// Address range: 0x499e90 - 0x499fef
int64_t function_499e90(int64_t a1, int64_t a2, uint64_t a3) {
    int64_t result = function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g16, "=> write"); // 0x499ecb
    if (a1 == 0) {
        // 0x499f53
        return result;
    }
    int64_t v1 = function_499dd0(a1); // 0x499ee6
    if ((int32_t)v1 != 0) {
        int64_t result2 = v1 & 0xffffffff;
        function_49e8b0(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g17, "ssl_check_ctr_renegotiate", result2);
        // 0x499f53
        return result2;
    }
    // 0x499ef1
    if (*(int32_t *)(a1 + 8) != 16) {
        int64_t result3 = function_4976c0(a1); // 0x499efa
        if ((int32_t)result3 != 0) {
            // 0x499f53
            return result3;
        }
    }
    // 0x499f09
    if (!((a3 < 2 | (*(char *)(a1 + 373) & 32) == 0))) {
        // 0x499f1b
        if (*(int32_t *)(a1 + 24) < 2) {
            int64_t v2 = *(int64_t *)(a1 + 112); // 0x499f98
            if (v2 != -128) {
                int64_t result4 = *(int64_t *)(v2 + 128); // 0x499fa6
                if (result4 != 0) {
                    // 0x499fb6
                    if (*(int32_t *)(result4 + 4) == 2) {
                        char * v3 = (char *)(a1 + 360); // 0x499fc0
                        if (*v3 != 0) {
                            // 0x499f53
                            return result4;
                        }
                        int64_t result5 = function_499ab0(a1, a2, 1); // 0x499fd4
                        if ((int32_t)result5 < 1) {
                            // 0x499f31
                            function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g18, "<= write");
                            // 0x499f53
                            return result5 & 0xffffffff;
                        }
                        // 0x499fe3
                        *v3 = 1;
                        // 0x499f53
                        return result5;
                    }
                }
            }
        }
    }
    int64_t v4 = function_499ab0(a1, a2, a3);
    function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g18, "<= write");
    // 0x499f53
    return v4 & 0xffffffff;
}

// Address range: 0x49eba0 - 0x49ebc5
int64_t function_49eba0(int64_t result, int64_t a2, int64_t a3, int64_t a4, int64_t * a5, int64_t a6) {
    if (result == 0 || a6 == 0 | *(int64_t *)(result + 32) == 0 || (int64_t)g56 < a2) {
        // 0x49ebbc
        return result;
    }
    // 0x49ebc0
    return function_49e490();
}

// Address range: 0x49ebd0 - 0x49ecc0
int64_t function_49ebd0(int64_t result, uint64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x49ebd0
    if (result == 0) {
        // 0x49ec11
        return 0;
    }
    // 0x49ec00
    if (*(int64_t *)(result + 32) == 0) {
        // 0x49ec11
        return result;
    }
    int64_t result2 = result; // 0x49ec0f
    if ((int64_t)g56 >= a2) {
        int64_t v1 = a2 & 0xffffffff; // 0x49ec0d
        char * v2 = (char *)a5; // 0x49ec70
        int64_t str; // bp-568, 0x49ebd0
        snprintf((char *)&str, (int32_t)&g19, "%s(X)", v2);
        int64_t v3 = a4 & 0xffffffff; // 0x49ec7b
        function_49eba0(result, v1, a3, v3, &str, a6);
        snprintf((char *)&str, (int32_t)&g19, "%s(Y)", v2);
        result2 = function_49eba0(result, v1, a3, v3, &str, a6 + 24);
    }
    // 0x49ec11
    return result2;
}

// Address range: 0x49ecc0 - 0x49ee6b
int64_t function_49ecc0(int64_t result, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a3; // bp-2152, 0x49ecd7
    if (result == 0) {
        // 0x49eeba
        return 0;
    }
    // 0x49eced
    if (a6 == 0 | *(int64_t *)(result + 32) == 0 || (int64_t)g56 < a2) {
        // 0x49eeba
        return result;
    }
    // 0x49ed13
    int64_t str; // bp-2104, 0x49ecc0
    snprintf((char *)&str, (int32_t)&g19, "%s #%d:\n", (char *)a5, 1);
    int32_t v2; // bp-1080, 0x49ecc0
    function_4a98b0((int64_t *)&v2, &g23, &g34, a6, &str);
    char v3 = v2; // 0x49ed8e
    int64_t v4; // bp-1592, 0x49ecc0
    if (v3 != 0) {
        int64_t v5 = (int64_t)&v1 + (int64_t)&g20;
        int64_t v6 = (int64_t)&v2; // 0x49ee09
        char v7 = v3; // 0x49edb4
        int64_t v8 = v6;
        int64_t v9; // 0x49edb0
        while (v7 != 10) {
            // 0x49edb0
            v9 = v8 + 1;
            v7 = *(char *)v9;
            if (v7 == 0) {
                // break (via goto) -> 0x49ee19
                goto lab_0x49ee19;
            }
            v8 = v9;
        }
        uint64_t v10 = v8 - v6 + 1; // 0x49edd0
        int64_t v11 = v10 < 511 ? v10 : 511; // 0x49eddb
        memcpy(&v4, (int64_t *)v6, (int32_t)v11);
        *(char *)(v5 + v11) = 0;
        v6 = v8 + 1;
        char v12 = *(char *)v6; // 0x49ee10
        while (v12 != 0) {
            // 0x49edbd
            v7 = v12;
            v8 = v6;
            while (v7 != 10) {
                // 0x49edb0
                v9 = v8 + 1;
                v7 = *(char *)v9;
                if (v7 == 0) {
                    // break (via goto) -> 0x49ee19
                    goto lab_0x49ee19;
                }
                v8 = v9;
            }
            // 0x49edc1
            v10 = v8 - v6 + 1;
            v11 = v10 < 511 ? v10 : 511;
            memcpy(&v4, (int64_t *)v6, (int32_t)v11);
            *(char *)(v5 + v11) = 0;
            v6 = v8 + 1;
            v12 = *(char *)v6;
        }
    }
  lab_0x49ee19:
    // 0x49ee19
    __asm_rep_stosq_memset((char *)&v4, 0, 9);
    int64_t result2 = function_4c48b0(a6 + 328, &v4); // 0x49ee33
    if ((int32_t)result2 != 0) {
        // 0x49eeba
        return result2;
    }
    // 0x49ee40
    if ((int32_t)v4 == 0) {
        // 0x49eeaa
        return v4 & 0xffffffff;
    }
    // 0x49ee48
    int64_t str2; // bp-2120, 0x49ecc0
    char * v13; // 0x49ecc0
    return snprintf((char *)&str2, 16, "%s%s", "crt->", v13);
}

// Address range: 0x4c69e0 - 0x4c8246
int64_t function_4c69e0(int64_t a1, int64_t a2) {
    unsigned char v1 = *(char *)(a2 + 1); // 0x4c69ea
    unsigned char v2 = *(char *)(a2 + 5); // 0x4c69ee
    unsigned char v3 = *(char *)(a2 + 9); // 0x4c69f2
    unsigned char v4 = *(char *)(a2 + 13); // 0x4c69f6
    unsigned char v5 = *(char *)(a2 + 21); // 0x4c69fb
    unsigned char v6 = *(char *)(a2 + 2); // 0x4c6a0b
    unsigned char v7 = *(char *)(a2 + 3); // 0x4c6a2a
    int64_t v8; // 0x4c69e0
    int32_t v9 = 256 * (int32_t)v1 | (int32_t)v8 % 256 | 0x10000 * (int32_t)v6 | 0x1000000 * (int32_t)v7; // 0x4c6a31
    unsigned char v10 = *(char *)(a2 + 6); // 0x4c6a35
    unsigned char v11 = *(char *)(a2 + 4); // 0x4c6a3e
    unsigned char v12 = *(char *)(a2 + 7); // 0x4c6a44
    int32_t v13 = 0x10000 * (int32_t)v10 | 256 * (int32_t)v2 | (int32_t)v11 | 0x1000000 * (int32_t)v12; // 0x4c6a4b
    unsigned char v14 = *(char *)(a2 + 10); // 0x4c6a4d
    unsigned char v15 = *(char *)(a2 + 17); // 0x4c6a55
    unsigned char v16 = *(char *)(a2 + 8); // 0x4c6a5e
    unsigned char v17 = *(char *)(a2 + 11); // 0x4c6a67
    int32_t v18 = 0x10000 * (int32_t)v14 | 256 * (int32_t)v3 | (int32_t)v16 | 0x1000000 * (int32_t)v17; // 0x4c6a6e
    unsigned char v19 = *(char *)(a2 + 14); // 0x4c6a70
    unsigned char v20 = *(char *)(a2 + 12); // 0x4c6a7e
    unsigned char v21 = *(char *)(a2 + 15); // 0x4c6a85
    int32_t v22 = 0x10000 * (int32_t)v19 | 256 * (int32_t)v4 | (int32_t)v20 | 0x1000000 * (int32_t)v21; // 0x4c6a8c
    unsigned char v23 = *(char *)(a2 + 18); // 0x4c6a8f
    unsigned char v24 = *(char *)(a2 + 16); // 0x4c6a98
    unsigned char v25 = *(char *)(a2 + 19); // 0x4c6a9e
    int32_t v26 = 0x10000 * (int32_t)v23 | 256 * (int32_t)v15 | (int32_t)v24 | 0x1000000 * (int32_t)v25; // 0x4c6aa5
    unsigned char v27 = *(char *)(a2 + 22); // 0x4c6aa7
    unsigned char v28 = *(char *)(a2 + 20); // 0x4c6ab0
    unsigned char v29 = *(char *)(a2 + 23); // 0x4c6ab6
    int32_t v30 = 0x10000 * (int32_t)v27 | 256 * (int32_t)v5 | (int32_t)v28 | 0x1000000 * (int32_t)v29; // 0x4c6abd
    unsigned char v31 = *(char *)(a2 + 25); // 0x4c6ac3
    unsigned char v32 = *(char *)(a2 + 26); // 0x4c6ac7
    unsigned char v33 = *(char *)(a2 + 29); // 0x4c6acb
    unsigned char v34 = *(char *)(a2 + 33); // 0x4c6acf
    unsigned char v35 = *(char *)(a2 + 37); // 0x4c6ad4
    unsigned char v36 = *(char *)(a2 + 41); // 0x4c6ad9
    unsigned char v37 = *(char *)(a2 + 45); // 0x4c6ade
    unsigned char v38 = *(char *)(a2 + 50); // 0x4c6ae6
    unsigned char v39 = *(char *)(a2 + 53); // 0x4c6aea
    unsigned char v40 = *(char *)(a2 + 24); // 0x4c6af7
    unsigned char v41 = *(char *)(a2 + 27); // 0x4c6b09
    int32_t v42 = 0x10000 * (int32_t)v32 | 256 * (int32_t)v31 | (int32_t)v40 | 0x1000000 * (int32_t)v41; // 0x4c6b10
    unsigned char v43 = *(char *)(a2 + 30); // 0x4c6b12
    unsigned char v44 = *(char *)(a2 + 28); // 0x4c6b1f
    unsigned char v45 = *(char *)(a2 + 31); // 0x4c6b25
    int32_t v46 = 0x10000 * (int32_t)v43 | 256 * (int32_t)v33 | (int32_t)v44 | 0x1000000 * (int32_t)v45; // 0x4c6b2c
    unsigned char v47 = *(char *)(a2 + 34); // 0x4c6b2e
    unsigned char v48 = *(char *)(a2 + 32); // 0x4c6b3c
    unsigned char v49 = *(char *)(a2 + 35); // 0x4c6b43
    int32_t v50 = 0x10000 * (int32_t)v47 | 256 * (int32_t)v34 | (int32_t)v48 | 0x1000000 * (int32_t)v49; // 0x4c6b4a
    unsigned char v51 = *(char *)(a2 + 38); // 0x4c6b4d
    unsigned char v52 = *(char *)(a2 + 36); // 0x4c6b5c
    unsigned char v53 = *(char *)(a2 + 39); // 0x4c6b63
    int32_t v54 = 0x10000 * (int32_t)v51 | 256 * (int32_t)v35 | (int32_t)v52 | 0x1000000 * (int32_t)v53; // 0x4c6b6a
    unsigned char v55 = *(char *)(a2 + 42); // 0x4c6b6d
    unsigned char v56 = *(char *)(a2 + 40); // 0x4c6b7c
    unsigned char v57 = *(char *)(a2 + 43); // 0x4c6b83
    int32_t v58 = 0x10000 * (int32_t)v55 | 256 * (int32_t)v36 | (int32_t)v56 | 0x1000000 * (int32_t)v57; // 0x4c6b8a
    unsigned char v59 = *(char *)(a2 + 46); // 0x4c6b8d
    unsigned char v60 = *(char *)(a2 + 44); // 0x4c6ba7
    unsigned char v61 = *(char *)(a2 + 47); // 0x4c6bae
    int32_t v62 = 0x10000 * (int32_t)v59 | 256 * (int32_t)v37 | (int32_t)v60 | 0x1000000 * (int32_t)v61; // 0x4c6bb5
    unsigned char v63 = *(char *)(a2 + 49); // 0x4c6bb8
    unsigned char v64 = *(char *)(a2 + 48); // 0x4c6bc6
    unsigned char v65 = *(char *)(a2 + 51); // 0x4c6bcc
    int32_t v66 = 256 * (int32_t)v63 | 0x10000 * (int32_t)v38 | (int32_t)v64 | 0x1000000 * (int32_t)v65; // 0x4c6bd3
    unsigned char v67 = *(char *)(a2 + 54); // 0x4c6bd5
    unsigned char v68 = *(char *)(a2 + 52); // 0x4c6bdf
    unsigned char v69 = *(char *)(a2 + 55); // 0x4c6be6
    int32_t v70 = 0x10000 * (int32_t)v67 | 256 * (int32_t)v39 | (int32_t)v68 | 0x1000000 * (int32_t)v69; // 0x4c6bed
    unsigned char v71 = *(char *)(a2 + 57); // 0x4c6bf5
    unsigned char v72 = *(char *)(a2 + 58); // 0x4c6bfa
    unsigned char v73 = *(char *)(a2 + 61); // 0x4c6c03
    unsigned char v74 = *(char *)(a2 + 56); // 0x4c6c15
    unsigned char v75 = *(char *)(a2 + 59); // 0x4c6c2d
    uint32_t v76 = *(int32_t *)(a1 + 12); // 0x4c6c31
    int32_t v77 = 0x10000 * (int32_t)v72 | 256 * (int32_t)v71 | (int32_t)v74 | 0x1000000 * (int32_t)v75; // 0x4c6c40
    unsigned char v78 = *(char *)(a2 + 62); // 0x4c6c43
    uint32_t v79 = *(int32_t *)(a1 + 16); // 0x4c6c47
    unsigned char v80 = *(char *)(a2 + 60); // 0x4c6c68
    int32_t v81 = *(int32_t *)(a1 + 20); // 0x4c6c7b
    unsigned char v82 = *(char *)(a2 + 63); // 0x4c6c81
    int32_t v83 = 0x10000 * (int32_t)v78 | 256 * (int32_t)v73 | (int32_t)v80 | 0x1000000 * (int32_t)v82; // 0x4c6c9b
    uint32_t v84 = *(int32_t *)(a1 + 8) + v9 + (v79 ^ v76 ^ v81); // 0x4c6ca2
    int32_t v85 = *(int32_t *)(a1 + 24); // 0x4c6ca7
    int32_t v86 = v79 / 0x400000 | 1024 * v79; // 0x4c6caa
    uint32_t v87 = (v84 / 0x200000 | 2048 * v84) + v85; // 0x4c6ccf
    uint32_t v88 = v85 + v13 + (v86 ^ v76 ^ v87); // 0x4c6d0e
    uint32_t v89 = (v88 / 0x40000 | 0x4000 * v88) + v81; // 0x4c6d21
    int32_t v90 = v76 / 0x400000 | 1024 * v76; // 0x4c6d31
    int32_t v91 = v87 / 0x400000 | 1024 * v87; // 0x4c6d47
    uint32_t v92 = v81 + v18 + (v87 ^ v90 ^ v89); // 0x4c6d53
    uint32_t v93 = (v92 / 0x20000 | 0x8000 * v92) + v86; // 0x4c6d67
    int32_t v94 = v89 / 0x400000 | 1024 * v89; // 0x4c6d86
    uint32_t v95 = v86 + v22 + (v89 ^ v91 ^ v93); // 0x4c6d8d
    uint32_t v96 = (v95 / 0x100000 | 0x1000 * v95) + v90; // 0x4c6da0
    int32_t v97 = v93 / 0x400000 | 1024 * v93; // 0x4c6da9
    uint32_t v98 = v90 + v26 + (v93 ^ v94 ^ v96); // 0x4c6db9
    uint32_t v99 = (v98 / 0x8000000 | 32 * v98) + v91; // 0x4c6dd4
    int32_t v100 = v96 / 0x400000 | 1024 * v96; // 0x4c6df5
    uint32_t v101 = v91 + v30 + (v96 ^ v97 ^ v99); // 0x4c6df9
    uint32_t v102 = (v101 / 0x1000000 | 256 * v101) + v94; // 0x4c6e14
    int32_t v103 = v99 / 0x400000 | 1024 * v99; // 0x4c6e28
    uint32_t v104 = v94 + v42 + (v99 ^ v100 ^ v102); // 0x4c6e39
    uint32_t v105 = (v104 / 0x2000000 | 128 * v104) + v97; // 0x4c6e54
    int32_t v106 = v102 / 0x400000 | 1024 * v102; // 0x4c6e66
    uint32_t v107 = v97 + v46 + (v102 ^ v103 ^ v105); // 0x4c6e75
    uint32_t v108 = (v107 / 0x800000 | 512 * v107) + v100; // 0x4c6e88
    int32_t v109 = v105 / 0x400000 | 1024 * v105; // 0x4c6ea6
    uint32_t v110 = v100 + v50 + (v105 ^ v106 ^ v108); // 0x4c6eaa
    uint32_t v111 = (v110 / 0x200000 | 2048 * v110) + v103; // 0x4c6eb5
    int32_t v112 = v108 / 0x400000 | 1024 * v108; // 0x4c6ed6
    uint32_t v113 = v103 + v54 + (v108 ^ v109 ^ v111); // 0x4c6eee
    uint32_t v114 = (v113 / 0x80000 | 0x2000 * v113) + v106; // 0x4c6f00
    int32_t v115 = v111 / 0x400000 | 1024 * v111; // 0x4c6f13
    uint32_t v116 = v106 + v58 + (v111 ^ v112 ^ v114); // 0x4c6f22
    uint32_t v117 = (v116 / 0x40000 | 0x4000 * v116) + v109; // 0x4c6f2d
    int32_t v118 = v114 / 0x400000 | 1024 * v114; // 0x4c6f65
    uint32_t v119 = v109 + v62 + (v114 ^ v115 ^ v117); // 0x4c6f6e
    uint32_t v120 = (v119 / 0x20000 | 0x8000 * v119) + v112; // 0x4c6f7c
    int32_t v121 = v117 / 0x400000 | 1024 * v117; // 0x4c6f8c
    uint32_t v122 = v112 + v66 + (v117 ^ v118 ^ v120); // 0x4c6f9b
    uint32_t v123 = (v122 / 0x4000000 | 64 * v122) + v115; // 0x4c6fa4
    uint32_t v124 = v115 + v70 + (v120 ^ v121 ^ v123); // 0x4c6fd8
    int32_t v125 = v120 / 0x400000 | 1024 * v120; // 0x4c6fde
    uint32_t v126 = (v124 / 0x2000000 | 128 * v124) + v118; // 0x4c6fea
    int32_t v127 = v123 / 0x400000 | 1024 * v123; // 0x4c6ffc
    uint32_t v128 = v118 + v77 + (v123 ^ v125 ^ v126); // 0x4c7014
    uint32_t v129 = (v128 / 0x800000 | 512 * v128) + v121; // 0x4c7021
    int32_t v130 = v126 / 0x400000 | 1024 * v126; // 0x4c7034
    uint32_t v131 = v121 + v83 + (v126 ^ v127 ^ v129); // 0x4c704b
    uint32_t v132 = (v131 / 0x1000000 | 256 * v131) + v125; // 0x4c7059
    int32_t v133 = v129 / 0x400000 | 1024 * v129; // 0x4c7076
    uint32_t v134 = v46 + 0x5a827999 + v125 + (v130 & -1 - v132 | v132 & v129); // 0x4c7092
    uint32_t v135 = (v134 / 0x2000000 | 128 * v134) + v127; // 0x4c70aa
    int32_t v136 = v132 / 0x400000 | 1024 * v132; // 0x4c70d0
    uint32_t v137 = v26 + 0x5a827999 + v127 + (v133 & -1 - v135 | v135 & v132); // 0x4c70df
    uint32_t v138 = (v137 / 0x4000000 | 64 * v137) + v130; // 0x4c70f2
    int32_t v139 = v135 / 0x400000 | 1024 * v135; // 0x4c7133
    uint32_t v140 = v70 + 0x5a827999 + v130 + (v136 & -1 - v138 | v138 & v135); // 0x4c7137
    uint32_t v141 = (v140 / 0x1000000 | 256 * v140) + v133; // 0x4c714c
    int32_t v142 = v138 / 0x400000 | 1024 * v138; // 0x4c7163
    uint32_t v143 = v13 + 0x5a827999 + v133 + (v139 & -1 - v141 | v141 & v138); // 0x4c7181
    uint32_t v144 = (v143 / 0x80000 | 0x2000 * v143) + v136; // 0x4c7198
    int32_t v145 = v141 / 0x400000 | 1024 * v141; // 0x4c71b6
    uint32_t v146 = v58 + 0x5a827999 + v136 + (v142 & -1 - v144 | v144 & v141); // 0x4c71d4
    uint32_t v147 = (v146 / 0x200000 | 2048 * v146) + v139; // 0x4c71e8
    int32_t v148 = v144 / 0x400000 | 1024 * v144; // 0x4c720b
    uint32_t v149 = v42 + 0x5a827999 + v139 + (v145 & -1 - v147 | v147 & v144); // 0x4c722a
    uint32_t v150 = (v149 / 0x800000 | 512 * v149) + v142; // 0x4c7242
    int32_t v151 = v147 / 0x400000 | 1024 * v147; // 0x4c7260
    uint32_t v152 = v83 + 0x5a827999 + v142 + (v148 & -1 - v150 | v150 & v147); // 0x4c727d
    uint32_t v153 = (v152 / 0x2000000 | 128 * v152) + v145; // 0x4c7291
    int32_t v154 = v150 / 0x400000 | 1024 * v150; // 0x4c72c1
    uint32_t v155 = v22 + 0x5a827999 + v145 + (v151 & -1 - v153 | v153 & v150); // 0x4c72c5
    uint32_t v156 = (v155 / 0x20000 | 0x8000 * v155) + v148; // 0x4c72d9
    int32_t v157 = v153 / 0x400000 | 1024 * v153; // 0x4c7309
    uint32_t v158 = v66 + 0x5a827999 + v148 + (v154 & -1 - v156 | v156 & v153); // 0x4c731a
    uint32_t v159 = (v158 / 0x2000000 | 128 * v158) + v151; // 0x4c7331
    uint32_t v160 = v9 + 0x5a827999 + v151 + (v157 & -1 - v159 | v159 & v156); // 0x4c7369
    int32_t v161 = v156 / 0x400000 | 1024 * v156; // 0x4c736e
    uint32_t v162 = (v160 / 0x100000 | 0x1000 * v160) + v154; // 0x4c7383
    int32_t v163 = v159 / 0x400000 | 1024 * v159; // 0x4c73b4
    uint32_t v164 = v54 + 0x5a827999 + v154 + (v161 & -1 - v162 | v162 & v159); // 0x4c73c3
    uint32_t v165 = (v164 / 0x20000 | 0x8000 * v164) + v157; // 0x4c73db
    int32_t v166 = v162 / 0x400000 | 1024 * v162; // 0x4c73f9
    uint32_t v167 = v30 + 0x5a827999 + v157 + (v163 & -1 - v165 | v165 & v162); // 0x4c741b
    uint32_t v168 = (v167 / 0x800000 | 512 * v167) + v161; // 0x4c7427
    int32_t v169 = v165 / 0x400000 | 1024 * v165; // 0x4c7456
    uint32_t v170 = v18 + 0x5a827999 + v161 + (v166 & -1 - v168 | v168 & v165); // 0x4c7468
    uint32_t v171 = (v170 / 0x200000 | 2048 * v170) + v163; // 0x4c747d
    int32_t v172 = v168 / 0x400000 | 1024 * v168; // 0x4c74a4
    uint32_t v173 = v77 + 0x5a827999 + v163 + (v169 & -1 - v171 | v171 & v168); // 0x4c74b2
    uint32_t v174 = (v173 / 0x2000000 | 128 * v173) + v166; // 0x4c74cb
    int32_t v175 = v171 / 0x400000 | 1024 * v171; // 0x4c74fd
    uint32_t v176 = v62 + 0x5a827999 + v166 + (v172 & -1 - v174 | v174 & v171); // 0x4c7507
    uint32_t v177 = (v176 / 0x80000 | 0x2000 * v176) + v169; // 0x4c751b
    int32_t v178 = -1 - v177;
    int32_t v179 = v174 / 0x400000 | 1024 * v174; // 0x4c755d
    uint32_t v180 = v50 + 0x5a827999 + v169 + (v175 & v178 | v177 & v174); // 0x4c7569
    uint32_t v181 = (v180 / 0x100000 | 0x1000 * v180) + v172; // 0x4c758c
    uint32_t v182 = v22 + 0x6ed9eba1 + v172 + ((v181 | v178) ^ v179); // 0x4c75ad
    uint32_t v183 = (v182 / 0x200000 | 2048 * v182) + v175; // 0x4c75c9
    int32_t v184 = v177 / 0x400000 | 1024 * v177; // 0x4c75ce
    int32_t v185 = v181 / 0x400000 | 1024 * v181; // 0x4c75f7
    uint32_t v186 = v58 + 0x6ed9eba1 + v175 + ((v183 | -1 - v181) ^ v184); // 0x4c75fe
    uint32_t v187 = (v186 / 0x80000 | 0x2000 * v186) + v179; // 0x4c7613
    int32_t v188 = v183 / 0x400000 | 1024 * v183; // 0x4c7643
    uint32_t v189 = v77 + 0x6ed9eba1 + v179 + ((v187 | -1 - v183) ^ v185); // 0x4c764a
    uint32_t v190 = (v189 / 0x4000000 | 64 * v189) + v184; // 0x4c7667
    uint32_t v191 = v26 + 0x6ed9eba1 + v184 + ((v190 | -1 - v187) ^ v188); // 0x4c7694
    int32_t v192 = v187 / 0x400000 | 1024 * v187; // 0x4c769a
    uint32_t v193 = (v191 / 0x2000000 | 128 * v191) + v185; // 0x4c76a5
    int32_t v194 = v190 / 0x400000 | 1024 * v190; // 0x4c76c8
    uint32_t v195 = v54 + 0x6ed9eba1 + v185 + ((v193 | -1 - v190) ^ v192); // 0x4c76d3
    uint32_t v196 = (v195 / 0x40000 | 0x4000 * v195) + v188; // 0x4c76dc
    int32_t v197 = v193 / 0x400000 | 1024 * v193; // 0x4c7713
    uint32_t v198 = v83 + 0x6ed9eba1 + v188 + ((v196 | -1 - v193) ^ v194); // 0x4c771b
    uint32_t v199 = (v198 / 0x800000 | 512 * v198) + v192; // 0x4c7724
    int32_t v200 = v196 / 0x400000 | 1024 * v196; // 0x4c775f
    uint32_t v201 = v50 + 0x6ed9eba1 + v192 + ((v199 | -1 - v196) ^ v197); // 0x4c7762
    uint32_t v202 = (v201 / 0x80000 | 0x2000 * v201) + v194; // 0x4c777e
    int32_t v203 = v199 / 0x400000 | 1024 * v199; // 0x4c77a6
    uint32_t v204 = v13 + 0x6ed9eba1 + v194 + ((v202 | -1 - v199) ^ v200); // 0x4c77af
    uint32_t v205 = (v204 / 0x20000 | 0x8000 * v204) + v197; // 0x4c77ca
    int32_t v206 = v202 / 0x400000 | 1024 * v202; // 0x4c77f1
    uint32_t v207 = v18 + 0x6ed9eba1 + v197 + ((v205 | -1 - v202) ^ v203); // 0x4c77f7
    uint32_t v208 = (v207 / 0x40000 | 0x4000 * v207) + v200; // 0x4c7813
    int32_t v209 = v205 / 0x400000 | 1024 * v205; // 0x4c783a
    uint32_t v210 = v46 + 0x6ed9eba1 + v200 + ((v208 | -1 - v205) ^ v206); // 0x4c7841
    uint32_t v211 = (v210 / 0x1000000 | 256 * v210) + v203; // 0x4c785d
    int32_t v212 = v208 / 0x400000 | 1024 * v208; // 0x4c7882
    uint32_t v213 = v9 + 0x6ed9eba1 + v203 + ((v211 | -1 - v208) ^ v209); // 0x4c7888
    uint32_t v214 = (v213 / 0x80000 | 0x2000 * v213) + v206; // 0x4c78a2
    uint32_t v215 = v42 + 0x6ed9eba1 + v206 + ((v214 | -1 - v211) ^ v212); // 0x4c78c9
    uint32_t v216 = (v215 / 0x4000000 | 64 * v215) + v209; // 0x4c78e3
    int32_t v217 = v211 / 0x400000 | 1024 * v211; // 0x4c78e9
    int32_t v218 = v214 / 0x400000 | 1024 * v214; // 0x4c7913
    uint32_t v219 = v70 + 0x6ed9eba1 + v209 + ((v216 | -1 - v214) ^ v217); // 0x4c7919
    uint32_t v220 = (v219 / 0x8000000 | 32 * v219) + v212; // 0x4c7934
    int32_t v221 = v216 / 0x400000 | 1024 * v216; // 0x4c795b
    uint32_t v222 = v62 + 0x6ed9eba1 + v212 + ((v220 | -1 - v216) ^ v218); // 0x4c7961
    uint32_t v223 = (v222 / 0x100000 | 0x1000 * v222) + v217; // 0x4c797d
    int32_t v224 = v220 / 0x400000 | 1024 * v220; // 0x4c79a7
    uint32_t v225 = v30 + 0x6ed9eba1 + v217 + ((v223 | -1 - v220) ^ v221); // 0x4c79ab
    uint32_t v226 = (v225 / 0x2000000 | 128 * v225) + v218; // 0x4c79c5
    int32_t v227 = v223 / 0x400000 | 1024 * v223; // 0x4c79dd
    uint32_t v228 = v66 + 0x6ed9eba1 + v218 + ((v226 | -1 - v223) ^ v224); // 0x4c79e8
    uint32_t v229 = (v228 / 0x8000000 | 32 * v228) + v221; // 0x4c7a02
    int32_t v230 = v226 / 0x400000 | 1024 * v226; // 0x4c7a2c
    uint32_t v231 = v13 - 0x70e44324 + v221 + (v229 & v227 | v226 & -1 - v227); // 0x4c7a32
    uint32_t v232 = (v231 / 0x200000 | 2048 * v231) + v224; // 0x4c7a3e
    int32_t v233 = v229 / 0x400000 | 1024 * v229; // 0x4c7a85
    uint32_t v234 = v54 - 0x70e44324 + v224 + (v232 & v230 | v229 & -1 - v230); // 0x4c7a8b
    uint32_t v235 = (v234 / 0x100000 | 0x1000 * v234) + v227; // 0x4c7a97
    int32_t v236 = v232 / 0x400000 | 1024 * v232; // 0x4c7ad8
    uint32_t v237 = v62 - 0x70e44324 + v227 + (v235 & v233 | v232 & -1 - v233); // 0x4c7ae9
    uint32_t v238 = (v237 / 0x40000 | 0x4000 * v237) + v230; // 0x4c7b03
    int32_t v239 = v235 / 0x400000 | 1024 * v235; // 0x4c7b29
    uint32_t v240 = v58 - 0x70e44324 + v230 + (v238 & v236 | v235 & -1 - v236); // 0x4c7b33
    uint32_t v241 = (v240 / 0x20000 | 0x8000 * v240) + v233; // 0x4c7b43
    int32_t v242 = v238 / 0x400000 | 1024 * v238; // 0x4c7b85
    uint32_t v243 = v9 - 0x70e44324 + v233 + (v241 & v239 | v238 & -1 - v239); // 0x4c7b8e
    uint32_t v244 = (v243 / 0x40000 | 0x4000 * v243) + v236; // 0x4c7ba2
    uint32_t v245 = v50 - 0x70e44324 + v236 + (v244 & v242 | v241 & -1 - v242); // 0x4c7bd1
    uint32_t v246 = (v245 / 0x20000 | 0x8000 * v245) + v239; // 0x4c7be5
    int32_t v247 = v241 / 0x400000 | 1024 * v241; // 0x4c7beb
    int32_t v248 = v244 / 0x400000 | 1024 * v244; // 0x4c7c1c
    uint32_t v249 = v66 - 0x70e44324 + v239 + (v246 & v247 | v244 & -1 - v247); // 0x4c7c27
    uint32_t v250 = (v249 / 0x800000 | 512 * v249) + v242; // 0x4c7c45
    int32_t v251 = v246 / 0x400000 | 1024 * v246; // 0x4c7c6e
    uint32_t v252 = v26 - 0x70e44324 + v242 + (v250 & v248 | v246 & -1 - v248); // 0x4c7c77
    uint32_t v253 = (v252 / 0x1000000 | 256 * v252) + v247; // 0x4c7c85
    int32_t v254 = v250 / 0x400000 | 1024 * v250; // 0x4c7cc0
    uint32_t v255 = v70 - 0x70e44324 + v247 + (v253 & v251 | v250 & -1 - v251); // 0x4c7cc6
    uint32_t v256 = (v255 / 0x800000 | 512 * v255) + v248; // 0x4c7cd1
    int32_t v257 = v253 / 0x400000 | 1024 * v253; // 0x4c7d1e
    uint32_t v258 = v22 - 0x70e44324 + v248 + (v256 & v254 | v253 & -1 - v254); // 0x4c7d22
    uint32_t v259 = (v258 / 0x40000 | 0x4000 * v258) + v251; // 0x4c7d36
    int32_t v260 = v256 / 0x400000 | 1024 * v256; // 0x4c7d64
    uint32_t v261 = v46 - 0x70e44324 + v251 + (v259 & v257 | v256 & -1 - v257); // 0x4c7d67
    uint32_t v262 = (v261 / 0x8000000 | 32 * v261) + v254; // 0x4c7d77
    int32_t v263 = v259 / 0x400000 | 1024 * v259; // 0x4c7daf
    uint32_t v264 = v83 - 0x70e44324 + v254 + (v262 & v260 | v259 & -1 - v260); // 0x4c7db5
    uint32_t v265 = (v264 / 0x4000000 | 64 * v264) + v257; // 0x4c7dc0
    int32_t v266 = v262 / 0x400000 | 1024 * v262; // 0x4c7e06
    uint32_t v267 = v77 - 0x70e44324 + v257 + (v265 & v263 | v262 & -1 - v263); // 0x4c7e0c
    uint32_t v268 = (v267 / 0x1000000 | 256 * v267) + v260; // 0x4c7e18
    int32_t v269 = v265 / 0x400000 | 1024 * v265; // 0x4c7e5e
    uint32_t v270 = v30 - 0x70e44324 + v260 + (v268 & v266 | v265 & -1 - v266); // 0x4c7e67
    uint32_t v271 = (v270 / 0x4000000 | 64 * v270) + v263; // 0x4c7e79
    int32_t v272 = v268 / 0x400000 | 1024 * v268; // 0x4c7eb4
    uint32_t v273 = v42 - 0x70e44324 + v263 + (v271 & v269 | v268 & -1 - v269); // 0x4c7ebe
    uint32_t v274 = (v273 / 0x8000000 | 32 * v273) + v266; // 0x4c7eca
    int32_t v275 = v271 / 0x400000 | 1024 * v271; // 0x4c7f05
    uint32_t v276 = v18 - 0x70e44324 + v266 + (v274 & v272 | v271 & -1 - v272); // 0x4c7f0f
    uint32_t v277 = (v276 / 0x100000 | 0x1000 * v276) + v269; // 0x4c7f1f
    int32_t v278 = v274 / 0x400000 | 1024 * v274; // 0x4c7f50
    uint32_t v279 = v26 - 0x56ac02b2 + v269 + (v277 ^ (v274 | -1 - v275)); // 0x4c7f58
    uint32_t v280 = (v279 / 0x800000 | 512 * v279) + v272; // 0x4c7f68
    uint32_t v281 = v9 - 0x56ac02b2 + v272 + (v280 ^ (v277 | -1 - v278)); // 0x4c7f8a
    uint32_t v282 = (v281 / 0x20000 | 0x8000 * v281) + v275; // 0x4c7f94
    int32_t v283 = v277 / 0x400000 | 1024 * v277; // 0x4c7fa1
    uint32_t v284 = v30 - 0x56ac02b2 + v275 + (v282 ^ (v280 | -1 - v283)); // 0x4c7fcc
    int32_t v285 = v280 / 0x400000 | 1024 * v280; // 0x4c7fd8
    uint32_t v286 = (v284 / 0x8000000 | 32 * v284) + v278; // 0x4c7fe2
    int32_t v287 = v282 / 0x400000 | 1024 * v282; // 0x4c800f
    uint32_t v288 = v54 - 0x56ac02b2 + v278 + (v286 ^ (v282 | -1 - v285)); // 0x4c8015
    uint32_t v289 = (v288 / 0x200000 | 2048 * v288) + v283; // 0x4c8023
    int32_t v290 = v286 / 0x400000 | 1024 * v286; // 0x4c8043
    uint32_t v291 = v46 - 0x56ac02b2 + v283 + (v289 ^ (v286 | -1 - v287)); // 0x4c8046
    uint32_t v292 = (v291 / 0x4000000 | 64 * v291) + v285; // 0x4c8057
    int32_t v293 = v289 / 0x400000 | 1024 * v289; // 0x4c807e
    uint32_t v294 = v66 - 0x56ac02b2 + v285 + (v292 ^ (v289 | -1 - v290)); // 0x4c8081
    uint32_t v295 = (v294 / 0x1000000 | 256 * v294) + v287; // 0x4c8091
    uint32_t v296 = v18 - 0x56ac02b2 + v287 + (v295 ^ (v292 | -1 - v293)); // 0x4c80b2
    uint32_t v297 = (v296 / 0x80000 | 0x2000 * v296) + v290; // 0x4c80bc
    int32_t v298 = v292 / 0x400000 | 1024 * v292; // 0x4c80bf
    int32_t v299 = v295 / 0x400000 | 1024 * v295; // 0x4c80ed
    uint32_t v300 = v58 - 0x56ac02b2 + v290 + (v297 ^ (v295 | -1 - v298)); // 0x4c80fb
    uint32_t v301 = (v300 / 0x100000 | 0x1000 * v300) + v293; // 0x4c810d
    int32_t v302 = v297 / 0x400000 | 1024 * v297; // 0x4c812e
    uint32_t v303 = v77 - 0x56ac02b2 + v293 + (v301 ^ (v297 | -1 - v299)); // 0x4c8132
    int32_t v304 = (v303 / 0x8000000 | 32 * v303) + v298; // 0x4c8140
    uint32_t v305 = v13 - 0x56ac02b2 + v298 + (v304 ^ (v301 | -1 - v302)); // 0x4c817b
    uint32_t v306 = v22 - 0x56ac02b2 + v299 + ((v305 / 0x100000 | 0x1000 * v305) + v299 ^ (v304 | -1 - (v301 / 0x400000 | 1024 * v301))); // 0x4c81a1
    uint32_t v307 = (v306 / 0x80000 | 0x2000 * v306) + v302; // 0x4c81b1
    return v307 / 0x400000 | 1024 * v307;
}

// Address range: 0x4c9900 - 0x4c9b79
int64_t function_4c9900(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, uint64_t a10) {
    int32_t v1 = a4; // 0x4c9917
    if (v1 == 1) {
        // 0x4c9b30
        if (*(int32_t *)(a1 + 328) != 1) {
            // 0x4c99b0
            return 0xffffbf80;
        }
    }
    uint64_t v2 = *(int64_t *)(a1 + 8); // 0x4c9934
    if (v2 - 16 > (int64_t)&g22) {
        // 0x4c99b0
        return 0xffffbf80;
    }
    int64_t v3 = function_4c14d0(*(int32_t *)(a1 + 332)); // 0x4c994f
    if (v3 == 0) {
        // 0x4c99b0
        return 0xffffbf80;
    }
    uint64_t v4 = function_4c1d00(v3) % 256; // 0x4c9968
    int64_t v5 = 2 * v4;
    if (v2 < v5 + 2) {
        // 0x4c99b0
        return 0xffffbf80;
    }
    int32_t v6; // bp-1080, 0x4c9900
    if (v1 == 0) {
        int64_t v7 = function_4c8fa0(a1, a8, (int64_t *)&v6); // 0x4c99d6
        if ((int32_t)v7 != 0) {
            // 0x4c99b0
            return v7 & 0xffffffff;
        }
    } else {
        int64_t v8 = function_4c9080(a1, a2, a3, a8, (int64_t *)&v6); // 0x4c99a3
        if ((int32_t)v8 != 0) {
            // 0x4c99b0
            return v8 & 0xffffffff;
        }
    }
    // 0x4c99e3
    int64_t v9; // bp-1176, 0x4c9900
    function_4c1690(&v9);
    int32_t v10 = function_4c1770(&v9, v3, 0); // 0x4c99fc
    int32_t result; // bp-1224, 0x4c9900
    if (v10 != 0) {
        // 0x4c9b4b
        result = v10;
        function_4c16b0(&v9);
        // 0x4c99b0
        return result;
    }
    int64_t v11 = (int64_t)&v6; // 0x4c9981
    int64_t v12; // bp-1079, 0x4c9900
    int64_t v13 = (int64_t)&v12; // 0x4c9a1a
    result = v10;
    int64_t v14; // bp-1144, 0x4c9900
    function_4c18b0(v3, a5, a6, &v14);
    int64_t v15 = v4 + (v11 | 1); // 0x4c9a27
    int64_t v16 = v2 + -1 - v4; // 0x4c9a2c
    function_4c8790(&v12, v4, v15, v16, &v9);
    function_4c8790((int64_t *)v15, v16, v13, v4, &v9);
    function_4c16b0(&v9);
    int64_t v17 = v6 % 256; // 0x4c9a72
    int64_t v18 = v4 + v13; // 0x4c9a7a
    int64_t result2 = v17; // 0x4c9a83
    int64_t v19 = v18; // 0x4c9a83
    if (v4 != 0) {
        int64_t v20 = 0;
        char v21 = *(char *)((int64_t)&result + 80 + v20); // 0x4c9a95
        int64_t v22 = v20 + 1; // 0x4c9a9a
        result2 = v17 | (int64_t)(v21 ^ *(char *)(v20 + v18));
        int64_t v23 = result2; // 0x4c9aa3
        while (v4 != v22) {
            // 0x4c9a90
            v20 = v22;
            v21 = *(char *)((int64_t)&result + 80 + v20);
            v22 = v20 + 1;
            result2 = v23 | (int64_t)(v21 ^ *(char *)(v20 + v18));
            v23 = result2;
        }
        // 0x4c9aa5
        v19 = v18 + v4;
    }
    int64_t v24 = v2 - v5 - 2; // 0x4c9ab3
    int64_t v25 = 0; // 0x4c9ab7
    char v26 = 0; // 0x4c9ab7
    int64_t v27 = 0; // 0x4c9ab7
    int64_t v28 = 0; // 0x4c9ab7
    if (v24 != 0) {
        v26 |= *(char *)(v25 + v19);
        int64_t v29 = v26; // 0x4c9ac8
        v25++;
        v27 += ((v29 | -v29) / 128 % 2 ^ 1);
        v28 = v27;
        while (v25 != v24) {
            // 0x4c9ac8
            v26 |= *(char *)(v25 + v19);
            v29 = v26;
            v25++;
            v27 += ((v29 | -v29) / 128 % 2 ^ 1);
            v28 = v27;
        }
    }
    int64_t v30 = v28 + v19; // 0x4c9ae7
    if ((*(char *)v30 ^ 1 || (char)result2) != 0) {
        // 0x4c99b0
        return result2;
    }
    int64_t v31 = v30 + 1; // 0x4c9aed
    uint64_t v32 = v11 - v31 + v2; // 0x4c9afb
    if (v32 > a10) {
        // 0x4c99b0
        return 0xffffbc00;
    }
    // 0x4c9b09
    *(int64_t *)a7 = v32;
    memcpy((int64_t *)a9, (int64_t *)v31, (int32_t)v32);
    // 0x4c99b0
    return result;
}

// Address range: 0x549690 - 0x549893
int64_t function_549690(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = *(int64_t *)(a3 + 8); // 0x5496a4
    int64_t v2 = __readfsqword(40); // 0x5496ab
    int64_t result = *(int64_t *)(*(int64_t *)v1 + 32); // 0x5496c8
    if (result != 0x548f00) {
        // 0x549890
        return result;
    }
    // 0x5496d5
    int64_t v3; // 0x549690
    int32_t v4 = v3;
    int64_t v5 = 0; // bp-152, 0x5496e6
    int64_t v6 = (int64_t)&v5; // 0x5496eb
    int64_t v7 = v6; // bp-168, 0x5496eb
    if (v4 == 1) {
        // 0x549848
        function_52c050(&v7, 0, 0, "iostream error", 14);
    } else {
        // 0x5496f5
        function_52c050(&v7, 0, 0, "Unknown error", 13);
    }
    int64_t v8 = function_52c050(&v7, 0, 0, ": ", 2); // 0x549722
    int64_t v9; // bp-120, 0x549690
    int64_t v10 = (int64_t)&v9; // 0x549730
    int64_t v11 = v10; // bp-136, 0x549730
    int64_t * v12 = (int64_t *)v8; // 0x549735
    int64_t v13 = *v12; // 0x549735
    int64_t v14 = v8 + 16; // 0x549738
    int64_t v15; // 0x549690
    if (v13 == v14) {
        // 0x549880
        v15 = __asm_movaps(__asm_movdqu(*(int128_t *)v13));
    } else {
        // 0x549745
        v11 = v13;
        v15 = *(int64_t *)v14;
    }
    // 0x549753
    v9 = v15;
    *(char *)v14 = 0;
    *v12 = v14;
    *(int64_t *)(v8 + 8) = 0;
    char * str = (char *)a2; // 0x54976e
    int64_t v16 = function_52c050(&v11, 0, 0, str, (int64_t)strlen(str)); // 0x549780
    int64_t v17; // bp-88, 0x549690
    int64_t v18 = (int64_t)&v17; // 0x54978f
    int64_t v19 = v18; // bp-104, 0x54978f
    int64_t * v20 = (int64_t *)v16; // 0x549794
    int64_t v21 = *v20; // 0x549794
    int64_t v22 = v16 + 16; // 0x549797
    int64_t v23; // 0x549690
    if (v21 == v22) {
        // 0x549870
        v23 = __asm_movaps(__asm_movdqu(*(int128_t *)v21));
    } else {
        // 0x5497a4
        v19 = v21;
        v23 = *(int64_t *)v22;
    }
    // 0x5497b2
    v17 = v23;
    *(char *)v22 = 0;
    *v20 = v22;
    *(int64_t *)(v16 + 8) = 0;
    function_5473b0(a1, &v19);
    if (v19 != v18) {
        // 0x5497e3
        function_4eeb50(v19);
    }
    // 0x5497e8
    if (v11 != v10) {
        // 0x5497f6
        function_4eeb50(v11);
    }
    // 0x5497fb
    if (v7 != v6) {
        // 0x549808
        function_4eeb50(v7);
    }
    // 0x54980d
    *(int32_t *)(a1 + 16) = v4;
    *(int64_t *)(a1 + 24) = v1;
    *(int64_t *)a1 = (int64_t)&g44;
    return __readfsqword(40) ^ v2;
}
